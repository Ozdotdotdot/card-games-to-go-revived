"""List PE imports (DLL, ordinal or name, IAT address). Minimal parser, no deps."""
import struct
import sys


def main(path):
    data = open(path, "rb").read()
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    opt_size = struct.unpack_from("<H", data, pe + 20)[0]
    opt = pe + 24
    image_base = struct.unpack_from("<I", data, opt + 28)[0]
    imp_rva = struct.unpack_from("<I", data, opt + 96 + 8)[0]
    secs = []
    for i in range(nsec):
        s = pe + 24 + opt_size + i * 40
        vsize, va, rsize, rptr = struct.unpack_from("<IIII", data, s + 8)
        secs.append((va, max(vsize, rsize), rptr))

    def off(rva):
        for va, size, rptr in secs:
            if va <= rva < va + size:
                return rva - va + rptr
        raise ValueError(hex(rva))

    def cstr(o):
        return data[o:data.index(b"\0", o)].decode("latin1")

    d = off(imp_rva)
    while True:
        oft, _, _, name, ft = struct.unpack_from("<IIIII", data, d)
        if not name:
            break
        dll = cstr(off(name))
        thunks = off(oft or ft)
        i = 0
        while True:
            t = struct.unpack_from("<I", data, thunks + i * 4)[0]
            if not t:
                break
            sym = f"#{t & 0xFFFF}" if t & 0x80000000 else cstr(off(t) + 2)
            print(f"{dll}\t{sym}\t0x{image_base + ft + i * 4:08x}")
            i += 1
        d += 20


if __name__ == "__main__":
    main(sys.argv[1])
