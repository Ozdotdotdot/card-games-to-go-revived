// Ghidra headless script: decompile every function into one C file.
// Usage: analyzeHeadless <proj> <name> -import <bin> -scriptPath tools -postScript DecompileAll.java <out.c>
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;
import java.io.PrintWriter;
import java.util.TreeSet;

public class DecompileAll extends GhidraScript {
    @Override
    public void run() throws Exception {
        String out = getScriptArgs()[0];
        // MFC handlers are reached only via message-map tables, so auto-analysis
        // misses them. Create functions at any undefined ARM `stmdb sp!,{..,lr}`.
        for (MemoryBlock b : currentProgram.getMemory().getBlocks()) {
            if (!b.isExecute()) continue;
            for (Address a = b.getStart(); a.compareTo(b.getEnd()) < 0; a = a.add(4)) {
                int w = getInt(a);
                if ((w & 0xFFFF4000) == 0xE92D4000 && getFunctionContaining(a) == null) {
                    disassemble(a);
                    createFunction(a, null);
                }
            }
        }
        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        try (PrintWriter w = new PrintWriter(out)) {
            for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
                TreeSet<String> callers = new TreeSet<>();
                for (Function c : f.getCallingFunctions(monitor)) {
                    callers.add(c.getEntryPoint().toString());
                }
                w.printf("// ==== %s @ %s  size=%d  callers=%s%n",
                    f.getName(), f.getEntryPoint(), f.getBody().getNumAddresses(), callers);
                DecompileResults r = ifc.decompileFunction(f, 60, monitor);
                w.println(r.decompileCompleted() ? r.getDecompiledFunction().getC() : "// decompile failed");
            }
        }
    }
}
