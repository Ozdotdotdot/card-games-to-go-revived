// ==== FUN_00011000 @ 00011000  size=64  callers=[0001449c]

undefined1 * FUN_00011000(undefined1 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  Ordinal_77(param_1,0xee);
  uVar1 = DAT_00011040;
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_00011064 @ 00011064  size=60  callers=[]

undefined4 FUN_00011064(int param_1)

{
  int iVar1;
  
  Ordinal_1939();
  iVar1 = Ordinal_1273(param_1,0x3f8);
  Ordinal_868(*(undefined4 *)(iVar1 + 0x20),0xc5,8,0);
  FUN_000110a0(param_1);
  return 1;
}


// ==== FUN_000110a0 @ 000110a0  size=380  callers=[00011064]

void FUN_000110a0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_10 [4];
  
  uVar1 = Ordinal_1273(param_1,0x3f8);
  puVar2 = (undefined4 *)Ordinal_179(auStack_10,*(int *)(param_1 + 0x7c) + 8);
  Ordinal_2443(uVar1,*puVar2);
  Ordinal_297(auStack_10);
  Ordinal_846(param_1,0x3ea,**(char **)(param_1 + 0x7c) != '\0');
  Ordinal_846(param_1,0x3eb,**(char **)(param_1 + 0x7c) == '\0');
  Ordinal_846(param_1,0x3fd,*(short *)(*(int *)(param_1 + 0x7c) + 0x1a) == 0);
  Ordinal_846(param_1,0x3fe,*(short *)(*(int *)(param_1 + 0x7c) + 0x1a) == 1);
  Ordinal_846(param_1,0x3ff,*(short *)(*(int *)(param_1 + 0x7c) + 0x1a) == 2);
  iVar3 = Ordinal_1273(param_1,0x3f9);
  Ordinal_868(*(undefined4 *)(iVar3 + 0x20),0x14e,*(ushort *)(*(int *)(param_1 + 0x7c) + 2) - 1,0);
  iVar3 = Ordinal_1273(param_1,0x3fb);
  Ordinal_868(*(undefined4 *)(iVar3 + 0x20),0x14e,*(undefined2 *)(*(int *)(param_1 + 0x7c) + 4),0);
  iVar3 = Ordinal_1273(param_1,0x3fc);
  Ordinal_868(*(undefined4 *)(iVar3 + 0x20),0x14e,*(undefined2 *)(*(int *)(param_1 + 0x7c) + 6),0);
  return;
}


// ==== FUN_0001121c @ 0001121c  size=440  callers=[000113d4]

void FUN_0001121c(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = Ordinal_1273(param_1,0x3f8);
  Ordinal_1596(uVar3,*(int *)(param_1 + 0x7c) + 8,9);
  iVar4 = Ordinal_1691(param_1,0x3ea);
  *(bool *)*(undefined4 *)(param_1 + 0x7c) = iVar4 != 0;
  iVar4 = Ordinal_1691(param_1,0x3fd);
  if (iVar4 == 0) {
    iVar4 = Ordinal_1691(param_1,0x3fe);
    if (iVar4 == 0) {
      iVar4 = Ordinal_1691(param_1,0x3ff);
      if (iVar4 == 0) goto LAB_000112bc;
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  *(undefined2 *)(*(int *)(param_1 + 0x7c) + 0x1a) = uVar2;
LAB_000112bc:
  iVar4 = Ordinal_1273(param_1,0x3f9);
  iVar5 = Ordinal_868(*(undefined4 *)(iVar4 + 0x20),0x147,0,0);
  if (-1 < iVar5) {
    sVar1 = Ordinal_868(*(undefined4 *)(iVar4 + 0x20),0x147,0,0);
    *(short *)(*(int *)(param_1 + 0x7c) + 2) = sVar1 + 1;
  }
  iVar4 = Ordinal_1273(param_1,0x3fb);
  iVar5 = Ordinal_868(*(undefined4 *)(iVar4 + 0x20),0x147,0,0);
  if (-1 < iVar5) {
    uVar2 = Ordinal_868(*(undefined4 *)(iVar4 + 0x20),0x147,0,0);
    *(undefined2 *)(*(int *)(param_1 + 0x7c) + 4) = uVar2;
  }
  iVar4 = Ordinal_1273(param_1,0x3fc);
  iVar5 = Ordinal_868(*(undefined4 *)(iVar4 + 0x20),0x147,0,0);
  if (-1 < iVar5) {
    uVar2 = Ordinal_868(*(undefined4 *)(iVar4 + 0x20),0x147,0,0);
    *(undefined2 *)(*(int *)(param_1 + 0x7c) + 6) = uVar2;
  }
  return;
}


// ==== FUN_000113d4 @ 000113d4  size=32  callers=[]

void FUN_000113d4(int param_1)

{
  FUN_0001121c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001491c)(param_1);
  return;
}


// ==== FUN_000113ec @ 000113ec  size=36  callers=[]

undefined4 FUN_000113ec(undefined4 param_1,uint param_2)

{
  Ordinal_231();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011434 @ 00011434  size=36  callers=[]

undefined4 FUN_00011434(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Ordinal_315(0x1e8);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00011490();
  }
  return uVar2;
}


// ==== FUN_00011490 @ 00011490  size=60  callers=[00011434]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00011490(undefined1 *param_1)

{
  undefined4 uVar1;
  
  func_0x00014a40();
  func_0x00014a34(param_1 + 0xe8);
  uVar1 = _UNK_000114cc;
  *param_1 = (char)_UNK_000114cc;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_000114d0 @ 000114d0  size=68  callers=[000116c4]

void FUN_000114d0(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001150c;
  *param_1 = (char)DAT_0001150c;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_219(param_1 + 0xe8);
                    /* WARNING: Could not recover jumptable at 0x00014a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014a54)(param_1);
  return;
}


// ==== FUN_00011510 @ 00011510  size=332  callers=[]

undefined4 FUN_00011510(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = Ordinal_1850();
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    uVar2 = FUN_00011674(param_1,65000);
    *(undefined4 *)(param_1 + 0x1c8) = uVar2;
    uVar2 = FUN_00011674(param_1,0x8006);
    *(undefined4 *)(param_1 + 0x1cc) = uVar2;
    uVar2 = FUN_00011674(param_1,0xfdea);
    *(undefined4 *)(param_1 + 0x1d0) = uVar2;
    uVar2 = FUN_00011674(param_1,0x8004);
    *(undefined4 *)(param_1 + 0x1d4) = uVar2;
    uVar2 = FUN_00011674(param_1,0xe126);
    piVar3 = (int *)(param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0x1d8) = uVar2;
    iVar1 = (**(code **)(*piVar3 + 0xdc))(param_1 + 0xe8,param_1,0x50002800,0xe800);
    if (((iVar1 != 0) && (iVar1 = Ordinal_1676(piVar3,0x80,0xffff), iVar1 != 0)) &&
       (iVar1 = Ordinal_562(piVar3,0), iVar1 != 0)) {
      piVar3 = (int *)(param_1 + 0xe8);
      iVar1 = (**(code **)(*piVar3 + 0xe4))(piVar3,0x80);
      if ((iVar1 != 0) &&
         (iVar1 = Ordinal_868(*(undefined4 *)(param_1 + 0x108),0x451,4,
                              (undefined4 *)(param_1 + 0x1cc)), iVar1 != 0)) {
        Ordinal_2313(piVar3,*(uint *)(param_1 + 0x158) | 0x32);
        return 0;
      }
    }
  }
  return 0xffffffff;
}


// ==== FUN_0001165c @ 0001165c  size=24  callers=[]

bool FUN_0001165c(void)

{
  int iVar1;
  
  iVar1 = Ordinal_2093();
  return iVar1 != 0;
}


// ==== FUN_00011674 @ 00011674  size=80  callers=[00011510]

undefined4 FUN_00011674(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_208 [512];
  
  iVar1 = Ordinal_644();
  Ordinal_874(*(undefined4 *)(iVar1 + 8),param_2,auStack_208,0xff);
  iVar1 = Ordinal_63(auStack_208);
  uVar2 = Ordinal_315((iVar1 + 1) * 2);
  Ordinal_61(uVar2,auStack_208);
  return uVar2;
}


// ==== FUN_000116c4 @ 000116c4  size=36  callers=[]

undefined1 * FUN_000116c4(undefined1 *param_1,uint param_2)

{
  FUN_000114d0(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_000116ec @ 000116ec  size=140  callers=[00011cf8, 000124ec, 0001335c, 00013ebc]

void FUN_000116ec(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_000136f0((undefined1 *)&local_24);
  FUN_000137e4(&local_24,param_2);
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  Ordinal_906(uVar1,param_3,param_4,param_5,param_6,local_20,0,0,param_5,param_6,param_7);
  local_24 = DAT_00011778;
  Ordinal_1040(&local_24);
  return;
}


// ==== FUN_0001177c @ 0001177c  size=232  callers=[]

void FUN_0001177c(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_2c [4];
  undefined4 local_28;
  
  Ordinal_76(auStack_2c);
  FUN_000136f0((undefined1 *)&local_3c);
  FUN_000137e4(&local_3c,param_2);
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  uVar1 = Ordinal_910(uVar1);
  Ordinal_799(auStack_2c,uVar1);
  iVar2 = Ordinal_2264(local_28,local_38);
  Ordinal_905(*(undefined4 *)(param_1 + 4),param_3,param_4,param_7,param_8,local_28,0,0,param_5,
              param_6,0xcc0020);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(iVar2 + 4);
  }
  Ordinal_2264(local_28,uVar1);
  local_3c = DAT_00011868;
  Ordinal_1040(&local_3c);
  local_3c = DAT_00011864;
  Ordinal_230(auStack_2c);
  return;
}


// ==== FUN_0001186c @ 0001186c  size=28  callers=[00011888, 00011928, 00011a04, 00011b54, 00012838]

void FUN_0001186c(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 7) = 1;
  *(undefined1 *)((int)param_1 + 6) = 0;
  return;
}


// ==== FUN_00011888 @ 00011888  size=160  callers=[00013524]

undefined4 * FUN_00011888(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0x34;
  puVar4 = param_1;
  do {
    FUN_0001186c(puVar4);
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + 2;
  } while (iVar5 != 0);
  *(undefined2 *)(param_1 + 0x68) = 0;
  uVar3 = 0;
  do {
    uVar2 = 2;
    uVar1 = 2;
    do {
      iVar5 = uVar3 * 0xd + uVar1;
      param_1[(iVar5 + -2) * 2] = uVar3;
      *(short *)(param_1 + iVar5 * 2 + -3) = (short)uVar2;
      uVar2 = uVar1 + 1 & 0xffff;
      uVar1 = uVar1 + 1 & 0xffff;
    } while (uVar1 < 0xf);
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 < 4);
  return param_1;
}


// ==== FUN_00011928 @ 00011928  size=220  callers=[00011c6c]

undefined1 * FUN_00011928(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  undefined4 auStack_10 [2];
  
  if (*(ushort *)(param_1 + 0x1a0) < 0x34) {
    uVar2 = *(ushort *)(param_1 + 0x1a0) + 1;
    *(ushort *)(param_1 + 0x1a0) = uVar2;
    iVar3 = param_1 + (uint)uVar2 * 8;
    *param_2 = *(undefined1 *)(iVar3 + -8);
    param_2[1] = *(undefined1 *)(iVar3 + -7);
    param_2[2] = *(undefined1 *)(iVar3 + -6);
    param_2[3] = *(undefined1 *)(iVar3 + -5);
    param_2[4] = *(undefined1 *)(iVar3 + -4);
    param_2[5] = *(undefined1 *)(iVar3 + -3);
    param_2[6] = *(undefined1 *)(iVar3 + -2);
    param_2[7] = *(undefined1 *)(iVar3 + -1);
  }
  else {
    puVar1 = (undefined1 *)FUN_0001186c(auStack_10);
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
    param_2[3] = puVar1[3];
    param_2[4] = puVar1[4];
    param_2[5] = puVar1[5];
    param_2[6] = puVar1[6];
    param_2[7] = puVar1[7];
  }
  return param_2;
}


// ==== FUN_00011a04 @ 00011a04  size=332  callers=[00013524]

void FUN_00011a04(int param_1)

{
  undefined4 uVar1;
  short extraout_r1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined1 local_1aa [410];
  
  puVar4 = &local_1b0;
  iVar6 = 0x34;
  do {
    FUN_0001186c(puVar4);
    iVar6 = iVar6 + -1;
    puVar4 = puVar4 + 2;
  } while (iVar6 != 0);
  Ordinal_535();
  Ordinal_1061();
  uVar5 = 0;
  do {
    do {
      uVar1 = Ordinal_1053();
      (*(code *)*DAT_00011b50)(0x34,uVar1);
      iVar6 = extraout_r1 * 8;
    } while (*(short *)(local_1aa + iVar6 + -2) != 0);
    puVar2 = (undefined1 *)(param_1 + uVar5 * 8);
    *(undefined1 *)(&local_1b0 + extraout_r1 * 2) = *puVar2;
    *(undefined1 *)((int)&local_1b0 + iVar6 + 1) = puVar2[1];
    *(undefined1 *)((int)&local_1b0 + iVar6 + 2) = puVar2[2];
    *(undefined1 *)((int)&local_1b0 + iVar6 + 3) = puVar2[3];
    local_1aa[iVar6 + -2] = puVar2[4];
    local_1aa[iVar6 + -1] = puVar2[5];
    local_1aa[iVar6] = puVar2[6];
    local_1aa[iVar6 + 1] = puVar2[7];
    uVar3 = uVar5 + 1;
    uVar5 = uVar3 & 0xffff;
  } while ((uVar3 & 0xffff) < 0x34);
  uVar5 = 0;
  do {
    iVar6 = uVar5 * 8;
    puVar2 = (undefined1 *)(param_1 + uVar5 * 8);
    *puVar2 = *(undefined1 *)(&local_1b0 + uVar5 * 2);
    puVar2[1] = *(undefined1 *)((int)&local_1b0 + iVar6 + 1);
    puVar2[2] = *(undefined1 *)((int)&local_1b0 + iVar6 + 2);
    puVar2[3] = *(undefined1 *)((int)&local_1b0 + iVar6 + 3);
    puVar2[4] = local_1aa[iVar6 + -2];
    puVar2[5] = local_1aa[iVar6 + -1];
    puVar2[6] = local_1aa[iVar6];
    puVar2[7] = local_1aa[iVar6 + 1];
    uVar5 = uVar5 + 1 & 0xffff;
  } while (uVar5 < 0x34);
  return;
}


// ==== FUN_00011b54 @ 00011b54  size=80  callers=[00013524]

undefined4 * FUN_00011b54(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x34;
  puVar1 = param_1;
  do {
    FUN_0001186c(puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined2 *)((int)param_1 + 0x1a2) = 0;
  *(undefined2 *)(param_1 + 0x69) = 0;
  return param_1;
}


// ==== FUN_00011ba4 @ 00011ba4  size=124  callers=[00011c6c]

void FUN_00011ba4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  if (*(ushort *)(param_1 + 0x1a0) < 0x34) {
    puVar1 = (undefined1 *)(param_1 + (uint)*(ushort *)(param_1 + 0x1a0) * 8);
    local_c = (undefined1)param_2;
    *puVar1 = local_c;
    local_b = (undefined1)((uint)param_2 >> 8);
    puVar1[1] = local_b;
    local_a = (undefined1)((uint)param_2 >> 0x10);
    puVar1[2] = local_a;
    local_9 = (undefined1)((uint)param_2 >> 0x18);
    puVar1[3] = local_9;
    local_8 = (undefined1)param_3;
    puVar1[4] = local_8;
    local_7 = (undefined1)((uint)param_3 >> 8);
    puVar1[5] = local_7;
    local_6 = (undefined1)((uint)param_3 >> 0x10);
    puVar1[6] = local_6;
    local_5 = (undefined1)((uint)param_3 >> 0x18);
    puVar1[7] = local_5;
    *(short *)(param_1 + 0x1a0) = *(short *)(param_1 + 0x1a0) + 1;
  }
  return;
}


// ==== FUN_00011c20 @ 00011c20  size=76  callers=[00011cf8, 00012444, 00012da0]

int FUN_00011c20(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(ushort *)(param_1 + 0x1a0) != 0) {
    iVar1 = 0;
    do {
      if (*(char *)(param_1 + iVar1 * 8 + 6) == '\0') {
        return iVar1;
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x1a0));
  }
  return iVar1;
}


// ==== FUN_00011c6c @ 00011c6c  size=136  callers=[00013524]

void FUN_00011c6c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_r1;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [8];
  
  uVar5 = 0;
  do {
    (*(code *)*DAT_00011cb8)(2,uVar5);
    if (extraout_r1 == 0) {
      puVar1 = (undefined4 *)FUN_00011928(param_1,auStack_1c);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      iVar2 = param_1 + 0x350;
    }
    else {
      puVar1 = (undefined4 *)FUN_00011928(param_1,auStack_14);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      iVar2 = param_1 + 0x1a8;
    }
    FUN_00011ba4(iVar2,uVar3,uVar4);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x34);
  return;
}


// ==== FUN_00011cf8 @ 00011cf8  size=1628  callers=[00013ebc]

void FUN_00011cf8(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  undefined1 auStack_64 [8];
  int local_5c;
  int local_58;
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [8];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar2 = FUN_00011c20(param_1 + 0x1a8);
  if (0 < (int)((uint)*(ushort *)(param_1 + 0x348) - (int)(short)iVar2)) {
    FUN_000116ec((int)param_2,*(short *)(param_1 + 0x512) + 0x82,100,10,0x2d,0x3f,0xff00);
    FUN_000116ec((int)param_2,*(short *)(param_1 + 0x512) + 0x82,99,10,0x2d,0x3f,0xff00);
    FUN_000116ec((int)param_2,*(short *)(param_1 + 0x512) + 0x82,0x62,10,0x2d,0x3f,0xff00);
  }
  iVar2 = FUN_00011c20(param_1 + 0x350);
  if (0 < (int)((uint)*(ushort *)(param_1 + 0x4f0) - (int)(short)iVar2)) {
    FUN_000116ec((int)param_2,*(short *)(param_1 + 0x512) + 0x82,100,0xc5,0x2d,0x3f,0xff00);
    FUN_000116ec((int)param_2,*(short *)(param_1 + 0x512) + 0x82,99,0xc5,0x2d,0x3f,0xff00);
    FUN_000116ec((int)param_2,*(short *)(param_1 + 0x512) + 0x82,0x62,0xc5,0x2d,0x3f,0xff00);
  }
  FUN_0001335c(param_1,(int)param_2,*(short *)(param_1 + 0x348),0x98,10,0xd,0x14,0xc6);
  sVar9 = 0xbc;
  sVar10 = 4;
  if (*(short *)(param_1 + 0x34c) != 0) {
    uVar7 = 0;
    do {
      if (0xf0 < sVar9 + 0xb) {
        sVar9 = 0xbc;
        sVar10 = sVar10 + 0x1f;
      }
      FUN_000116ec((int)param_2,0xd9,(int)sVar9,(int)sVar10,0xb,0x1d,0xff00);
      uVar7 = uVar7 + 1;
      sVar9 = sVar9 + 0xd;
    } while (uVar7 < *(ushort *)(param_1 + 0x34c));
  }
  FUN_0001335c(param_1,(int)param_2,*(short *)(param_1 + 0x4f0),0x3e,0xf0,0xd,0x14,0xc6);
  sVar9 = 0x2d;
  sVar10 = 0xed;
  if (*(short *)(param_1 + 0x4f4) != 0) {
    uVar7 = 0;
    do {
      if (sVar9 < 0) {
        sVar9 = 0x2d;
        sVar10 = sVar10 + -0x1f;
      }
      FUN_000116ec((int)param_2,0xd9,(int)sVar9,(int)sVar10,0xb,0x1d,0xff00);
      uVar7 = uVar7 + 1;
      sVar9 = sVar9 + -0xd;
    } while (uVar7 < *(ushort *)(param_1 + 0x4f4));
  }
  piVar1 = DAT_000122e8;
  FUN_000116ec((int)param_2,*(short *)(param_1 + 0x34a) + 0xd0,*DAT_000122e8,DAT_000122e8[1],0x5b,
               0x5a,0xff00);
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,0xffffff);
  iVar2 = DAT_000122e4;
  piVar4 = (int *)Ordinal_177(auStack_64,
                              *(undefined4 *)(DAT_000122e4 + (uint)*(ushort *)(param_1 + 0x34a) * 4)
                             );
  piVar4 = (int *)FUN_00013818((int)param_2,auStack_54,piVar4);
  local_5c = *piVar4;
  local_58 = piVar4[1];
  Ordinal_297(auStack_64);
  local_3c = *piVar1;
  iVar8 = piVar1[2] - local_3c;
  if (iVar8 < 0) {
    iVar8 = iVar8 + 1;
  }
  iVar6 = local_5c;
  if (local_5c < 0) {
    iVar6 = local_5c + 1;
  }
  local_44 = ((iVar8 >> 1) - (iVar6 >> 1)) + local_3c;
  local_3c = (iVar8 >> 1) + (iVar6 >> 1) + local_3c;
  local_40 = piVar1[3] + 1;
  local_38 = piVar1[3] + local_58 + 1;
  piVar4 = (int *)Ordinal_177(auStack_64,
                              *(undefined4 *)(iVar2 + (uint)*(ushort *)(param_1 + 0x34a) * 4));
  (**(code **)(*param_2 + 0x48))(param_2,*piVar4,*(undefined4 *)(*piVar4 + -8),&local_44,0x100);
  Ordinal_297(auStack_64);
  piVar4 = (int *)Ordinal_179(auStack_64,param_1 + 0x500);
  piVar4 = (int *)FUN_00013818((int)param_2,auStack_4c,piVar4);
  local_5c = *piVar4;
  local_58 = piVar4[1];
  Ordinal_297(auStack_64);
  piVar4 = DAT_000122e0;
  local_2c = *DAT_000122e0;
  iVar2 = DAT_000122e0[2] - local_2c;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  iVar8 = local_5c;
  if (local_5c < 0) {
    iVar8 = local_5c + 1;
  }
  local_34 = ((iVar2 >> 1) - (iVar8 >> 1)) + local_2c;
  local_2c = (iVar2 >> 1) + (iVar8 >> 1) + local_2c;
  local_30 = DAT_000122e0[3] + 1;
  local_28 = DAT_000122e0[3] + local_58 + 1;
  piVar5 = (int *)Ordinal_179(auStack_64,param_1 + 0x500);
  (**(code **)(*param_2 + 0x48))(param_2,*piVar5,*(undefined4 *)(*piVar5 + -8),&local_34,0x100);
  Ordinal_297(auStack_64);
  (**(code **)(*param_2 + 0x38))(param_2,uVar3);
  FUN_000116ec((int)param_2,*(short *)(param_1 + 0x4f2) + 0xd0,*piVar4,piVar4[1],0x5b,0x5a,0xff00);
  if (*(char *)(param_1 + 0x515) == '\0') {
    if (*(short *)(param_1 + 0x518) == 0) {
      FUN_000116ec((int)param_2,0xd8,*piVar1 + 0x1b,piVar1[1] + 0x42,0x26,9,0xff00);
    }
    else if (*(short *)(param_1 + 0x518) == 1) {
      FUN_000116ec((int)param_2,0xd8,*piVar4 + 0x1b,piVar4[1] + 0x42,0x26,9,0xff00);
    }
  }
  if (*(char *)(param_1 + 0x516) == '\0') {
    FUN_00012360(param_1,(int)param_2,'\0',0xf);
    FUN_00012360(param_1,(int)param_2,'\x01',0xfff1);
  }
  return;
}


// ==== FUN_00012360 @ 00012360  size=228  callers=[00011cf8]

void FUN_00012360(int param_1,int param_2,char param_3,ushort param_4)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  
  iVar7 = param_1 + 0x350;
  if (param_3 == '\0') {
    iVar7 = param_1 + 0x1a8;
  }
  uVar2 = 0x4b;
  if (param_3 == '\0') {
    uVar2 = 0x78;
  }
  uVar6 = 0x7c;
  if (param_3 == '\0') {
    uVar6 = 0x53;
  }
  uVar3 = 0;
  if (*(char *)(iVar7 + 6) != '\0') {
    uVar4 = (uint)param_4 << 0x10;
    uVar5 = 0;
    iVar1 = (int)uVar4 >> 0x10;
    do {
      if ((iVar1 < 1) || (uVar4 = (uint)(short)uVar2, (int)uVar4 < 0xc4)) {
        if (iVar1 < 0) {
          uVar4 = (uint)uVar2 << 0x10;
        }
        if (iVar1 < 0 && (int)uVar4 >> 0x10 < 0) {
          uVar2 = 0x4b;
          uVar6 = 0x65;
        }
      }
      else {
        uVar2 = 0x78;
        uVar6 = 0x69;
      }
      FUN_000124ec(param_1,param_2,iVar7,uVar3,uVar2,uVar6);
      uVar3 = uVar5 + 1 & 0xffff;
      uVar2 = uVar2 + param_4;
      uVar5 = uVar5 + 1 & 0xffff;
      uVar4 = (uint)*(byte *)(iVar7 + uVar5 * 8 + 6);
    } while (uVar4 != 0);
  }
  return;
}


// ==== FUN_00012444 @ 00012444  size=160  callers=[00014154]

void FUN_00012444(int param_1,undefined1 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00011c20(param_1 + 0x350);
  iVar3 = param_1 + (short)iVar2 * 8;
  *(undefined1 *)(iVar3 + 0x356) = 1;
  if ((int)(short)iVar2 < (int)(*(ushort *)(param_1 + 0x1a4) + 1)) {
    *(undefined1 *)(iVar3 + 0x357) = 1;
  }
  else {
    *(undefined1 *)(iVar3 + 0x357) = 0;
  }
  pcVar1 = DAT_000124e8;
  *param_2 = *(undefined1 *)(iVar3 + 0x357);
  if (*pcVar1 != '\0') {
    iVar2 = Ordinal_644();
    Ordinal_378(0xed,*(undefined4 *)(iVar2 + 0xc),0x40005);
  }
  Ordinal_250(*(undefined4 *)(*DAT_000124e4 + 0x20),0,0);
  return;
}


// ==== FUN_000124ec @ 000124ec  size=624  callers=[00012360]

void FUN_000124ec(int param_1,int param_2,int param_3,uint param_4,ushort param_5,ushort param_6)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(short *)(param_3 + 0x1a0) != 0) {
    piVar2 = (int *)(param_3 + (param_4 & 0xffff) * 8);
    if (*(char *)((int)piVar2 + 7) == '\0') {
      uVar3 = (uint)param_6;
      uVar4 = (uint)param_5;
      FUN_000116ec(param_2,0xc1,uVar4,uVar3,0x2d,0x3f,0xff00);
      if ((*piVar2 == 2) || (sVar1 = 0x8d, *piVar2 == 1)) {
        sVar1 = 0xa7;
      }
      FUN_000116ec(param_2,sVar1 + (short)piVar2[1] + -2,uVar4 + 3,uVar3 + 2,9,9,0xffffff);
      if ((*piVar2 == 2) || (sVar1 = 0x9a, *piVar2 == 1)) {
        sVar1 = 0xb4;
      }
      FUN_000116ec(param_2,sVar1 + (short)piVar2[1] + -2,uVar4 + 0x21,uVar3 + 0x34,9,9,0xffffff);
      FUN_000116ec(param_2,(short)*piVar2 + 0x85,uVar4 + 3,uVar3 + 0xc,9,9,0xffffff);
      sVar1 = 0x86;
      if (*piVar2 != 1) {
        sVar1 = (short)*piVar2 + 0x89;
      }
      FUN_000116ec(param_2,sVar1,uVar4 + 0x21,uVar3 + 0x2a,9,9,0xffffff);
      sVar1 = (short)piVar2[1];
      if (sVar1 == 0xe) {
        FUN_000116ec(param_2,(short)*piVar2 + 0xda,uVar4 + 10,uVar3 + 0x14,0x19,0x16,0xffffff);
      }
      else if (sVar1 == 0xd) {
        FUN_000116ec(param_2,(short)*piVar2 + 0xde,uVar4 + 9,uVar3 + 0xf,0x1b,0x22,0xffffff);
      }
      else if (sVar1 == 0xc) {
        FUN_000116ec(param_2,(short)*piVar2 + 0xe2,uVar4 + 9,uVar3 + 0xf,0x1b,0x22,0xffffff);
      }
      else if (sVar1 == 0xb) {
        FUN_000116ec(param_2,(short)*piVar2 + 0xe6,uVar4 + 9,uVar3 + 0xf,0x1b,0x22,0xffffff);
      }
    }
    else {
      FUN_000116ec(param_2,*(short *)(param_1 + 0x512) + 0x82,(uint)param_5,(uint)param_6,0x2d,0x3f,
                   0xff00);
    }
  }
  return;
}


// ==== FUN_0001275c @ 0001275c  size=212  callers=[00012da0, 00013d28, 00014154, 000144d4]

void FUN_0001275c(int param_1,char param_2,char param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  
  if (((param_2 == '\0') || (*(char *)(param_1 + 0x356) != '\0')) ||
     (*(short *)(param_1 + 0x4f0) == 0)) {
    if (((param_2 != '\0') || (*(char *)(param_1 + 0x1ae) != '\0')) ||
       (*(short *)(param_1 + 0x348) == 0)) goto LAB_000127fc;
    *(undefined1 *)(param_1 + 0x1ae) = 1;
    uVar2 = 0x1ac;
  }
  else {
    *(undefined1 *)(param_1 + 0x356) = 1;
    uVar2 = 0x354;
  }
  *(undefined1 *)(param_1 + (uVar2 | 3)) = 0;
  if (param_3 != '\0') {
    Ordinal_250(*(undefined4 *)(*DAT_00012834 + 0x20),0,0);
  }
LAB_000127fc:
  if ((*DAT_00012830 != '\0') && (param_4 != '\0')) {
    iVar1 = Ordinal_644();
    Ordinal_378(0xed,*(undefined4 *)(iVar1 + 0xc),0x40005);
  }
  return;
}


// ==== FUN_00012838 @ 00012838  size=300  callers=[00012ac0, 00012da0]

undefined1 * FUN_00012838(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  short sVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 auStack_14 [2];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = param_1[6];
  uVar8 = param_1[7];
  sVar9 = *(short *)(param_1 + 0x1a0);
  *(ushort *)(param_1 + 0x1a0) = sVar9 - 1U;
  Ordinal_1046(param_1,param_1 + 8,(uint)(ushort)(sVar9 - 1U) << 3);
  puVar10 = (undefined1 *)FUN_0001186c(auStack_14);
  puVar11 = param_1 + (uint)*(ushort *)(param_1 + 0x1a0) * 8;
  *puVar11 = *puVar10;
  puVar11[1] = puVar10[1];
  puVar11[2] = puVar10[2];
  puVar11[3] = puVar10[3];
  puVar11[4] = puVar10[4];
  puVar11[5] = puVar10[5];
  puVar11[6] = puVar10[6];
  puVar11[7] = puVar10[7];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  param_2[4] = uVar5;
  param_2[5] = uVar6;
  param_2[6] = uVar7;
  param_2[7] = uVar8;
  return param_2;
}


// ==== FUN_00012964 @ 00012964  size=216  callers=[00012ac0, 00012da0]

void FUN_00012964(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ushort uVar7;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  Ordinal_1046(param_1,param_1 + 8,(*(ushort *)(param_1 + 0x1a0) + 0x1fffffff) * 8);
  uVar7 = *(ushort *)(param_1 + 0x1a0);
  param_1[(uint)uVar7 * 8 + -8] = uVar1;
  param_1[(uint)uVar7 * 8 + -7] = uVar2;
  param_1[(uint)uVar7 * 8 + -6] = uVar3;
  param_1[(uint)uVar7 * 8 + -5] = uVar4;
  param_1[(uint)uVar7 * 8 + -4] = uVar5;
  param_1[(uint)uVar7 * 8 + -3] = uVar6;
  param_1[(uint)uVar7 * 8 + -2] = 0;
  param_1[(uint)uVar7 * 8 + -1] = 1;
  return;
}


// ==== FUN_00012a3c @ 00012a3c  size=132  callers=[00012ac0, 00012da0]

void FUN_00012a3c(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined1 *puVar1;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  
  local_c = (undefined1)param_2;
  puVar1 = (undefined1 *)(param_1 + (uint)*(ushort *)(param_1 + 0x1a0) * 8);
  *puVar1 = local_c;
  local_b = (undefined1)((uint)param_2 >> 8);
  puVar1[1] = local_b;
  local_a = (undefined1)((uint)param_2 >> 0x10);
  puVar1[2] = local_a;
  local_9 = (undefined1)((uint)param_2 >> 0x18);
  puVar1[3] = local_9;
  local_8 = (undefined1)param_3;
  puVar1[4] = local_8;
  local_7 = (undefined1)((ushort)param_3 >> 8);
  puVar1[5] = local_7;
  puVar1[6] = 0;
  puVar1[7] = 1;
  *(short *)(param_1 + 0x1a0) = *(short *)(param_1 + 0x1a0) + 1;
  return;
}


// ==== FUN_00012ac0 @ 00012ac0  size=500  callers=[00014154]

void FUN_00012ac0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 auStack_18 [8];
  
  uVar1 = *(ushort *)(param_1 + 0x354);
  uVar2 = *(ushort *)(param_1 + 0x1ac);
  if ((uVar2 < uVar1) || ((uVar1 == uVar2 && (*(short *)(param_1 + 0x348) == 1)))) {
    FUN_00012964((undefined1 *)(param_1 + 0x350));
    puVar6 = (undefined4 *)FUN_00012838((undefined1 *)(param_1 + 0x1a8),auStack_18);
    FUN_00012a3c(param_1 + 0x350,*puVar6,(short)puVar6[1]);
    *(undefined2 *)(param_1 + 0x518) = 1;
    if (*(short *)(param_1 + 0x348) == 0) {
      *(undefined1 *)(param_1 + 0x516) = 1;
      *(undefined1 *)(param_1 + 0x517) = 1;
    }
  }
  else if ((uVar1 < uVar2) || ((uVar2 == uVar1 && (*(short *)(param_1 + 0x4f0) == 1)))) {
    FUN_00012964((undefined1 *)(param_1 + 0x1a8));
    puVar6 = (undefined4 *)FUN_00012838((undefined1 *)(param_1 + 0x350),auStack_18);
    FUN_00012a3c(param_1 + 0x1a8,*puVar6,(short)puVar6[1]);
    *(undefined2 *)(param_1 + 0x518) = 0;
    if (*(short *)(param_1 + 0x4f0) == 0) {
      *(undefined1 *)(param_1 + 0x516) = 1;
      *(undefined1 *)(param_1 + 0x517) = 0;
    }
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x348);
    *(undefined1 *)(param_1 + 0x515) = 1;
    *(ushort *)(param_1 + 0x1a4) = *(ushort *)(param_1 + 0x4fc);
    uVar3 = *(ushort *)(param_1 + 0x4fc) + 2;
    if ((uVar1 < uVar3) || (*(ushort *)(param_1 + 0x4f0) < uVar3)) {
      uVar2 = *(ushort *)(param_1 + 0x4f0);
      if ((uint)uVar1 < (uint)*(ushort *)(param_1 + 0x4f0)) {
        uVar2 = uVar1;
      }
      *(ushort *)(param_1 + 0x1a4) = uVar2 - 2;
    }
    uVar3 = 0;
    if (*(short *)(param_1 + 0x1a4) != 0) {
      uVar4 = 0;
      do {
        *(undefined1 *)(param_1 + uVar4 * 8 + 0x1b6) = 1;
        uVar3 = uVar4 + 1 & 0xffff;
        uVar4 = uVar4 + 1 & 0xffff;
      } while (uVar4 < *(ushort *)(param_1 + 0x1a4));
    }
    iVar5 = param_1 + uVar3 * 8;
    *(undefined1 *)(iVar5 + 0x1b6) = 1;
    *(undefined1 *)(iVar5 + 0x1b7) = 0;
  }
  return;
}


// ==== FUN_00012cb4 @ 00012cb4  size=232  callers=[00012da0]

void FUN_00012cb4(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 0x348) != 0) {
    uVar2 = 0;
    do {
      iVar3 = param_1 + uVar2 * 8;
      if (*(char *)(iVar3 + 0x1ae) == '\0') break;
      *(undefined1 *)(iVar3 + 0x1af) = 0;
      uVar2 = uVar2 + 1 & 0xffff;
    } while (uVar2 < *(ushort *)(param_1 + 0x348));
  }
  if (*(short *)(param_1 + 0x4f0) != 0) {
    uVar2 = 0;
    do {
      iVar3 = param_1 + uVar2 * 8;
      if (*(char *)(iVar3 + 0x356) == '\0') break;
      *(undefined1 *)(iVar3 + 0x357) = 0;
      uVar2 = uVar2 + 1 & 0xffff;
    } while (uVar2 < *(ushort *)(param_1 + 0x4f0));
  }
  piVar1 = DAT_00012d9c;
  Ordinal_250(*(undefined4 *)(*DAT_00012d9c + 0x20),0,0);
  Ordinal_267(*(undefined4 *)(*piVar1 + 0x20));
  return;
}


// ==== FUN_00012da0 @ 00012da0  size=1460  callers=[00014154]

void FUN_00012da0(int param_1)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  bool bVar14;
  undefined1 auStack_2c [8];
  
  puVar13 = (undefined1 *)(param_1 + 0x350);
  iVar5 = FUN_00011c20((int)puVar13);
  puVar12 = (undefined1 *)(param_1 + 0x1a8);
  uVar6 = FUN_00011c20((int)puVar12);
  iVar5 = (int)(short)iVar5;
  uVar11 = *(ushort *)(param_1 + iVar5 * 8 + 0x34c);
  iVar1 = (int)(short)uVar6;
  uVar3 = *(ushort *)(param_1 + iVar1 * 8 + 0x1a4);
  if (uVar3 < uVar11) {
    FUN_00012cb4(param_1);
    piVar4 = DAT_00012f6c;
    *(undefined4 *)(*DAT_00012f6c + 0x574) = 3;
    Ordinal_250(*(undefined4 *)(*piVar4 + 0x20),0,0);
    if (*DAT_00012f68 != '\0') {
      iVar7 = Ordinal_644();
      Ordinal_378(0xec,*(undefined4 *)(iVar7 + 0xc),0x40005);
    }
    FUN_00014450(*piVar4,2000);
    *(undefined4 *)(*piVar4 + 0x574) = 0;
    *(undefined1 *)(param_1 + 0x515) = 0;
    *(short *)(param_1 + 0x4f4) = *(short *)(param_1 + 0x4f4) + 1;
    if (0 < iVar5) {
      uVar6 = 0;
      do {
        FUN_00012964(puVar13);
        uVar6 = uVar6 + 1 & 0xffff;
      } while ((int)uVar6 < iVar5);
    }
    if (0 < iVar1) {
      uVar6 = 0;
      do {
        puVar8 = (undefined4 *)FUN_00012838((undefined1 *)(param_1 + 0x1a8),auStack_2c);
        FUN_00012a3c((int)puVar13,*puVar8,(short)puVar8[1]);
        uVar6 = uVar6 + 1 & 0xffff;
      } while ((int)uVar6 < iVar1);
    }
    *(undefined2 *)(param_1 + 0x518) = 1;
    if (((*(ushort *)(param_1 + 0x4fa) <= *(ushort *)(param_1 + 0x4f4)) &&
        (*(char *)(param_1 + 0x4f8) != '\0')) || (*(short *)(param_1 + 0x348) == 0)) {
      *(undefined1 *)(param_1 + 0x517) = 1;
      *(undefined1 *)(param_1 + 0x516) = 1;
    }
  }
  else if (uVar3 == uVar11) {
    uVar10 = (uint)*(ushort *)(param_1 + 0x348);
    uVar11 = *(short *)(param_1 + 0x4fe) + *(short *)(param_1 + 0x1a4) + 1;
    *(ushort *)(param_1 + 0x1a4) = uVar11;
    if (iVar1 < (int)uVar10) {
      uVar9 = (uint)*(ushort *)(param_1 + 0x4f0);
      if (uVar10 < *(ushort *)(param_1 + 0x4f0)) {
        uVar9 = uVar10;
      }
      uVar10 = uVar6;
      if (uVar9 < uVar11 + 2) {
        uVar11 = *(ushort *)(param_1 + 0x1a4);
        do {
          uVar11 = uVar11 - 1;
        } while (uVar9 < uVar11 + 2);
        *(ushort *)(param_1 + 0x1a4) = uVar11;
      }
      while (uVar10 = uVar10 & 0xffff, uVar10 <= *(ushort *)(param_1 + 0x1a4)) {
        iVar7 = param_1 + uVar10 * 8;
        *(undefined1 *)(iVar7 + 0x1ae) = 1;
        *(undefined1 *)(iVar7 + 0x1af) = 1;
        uVar6 = uVar10 + 1 & 0xffff;
        uVar10 = uVar10 + 1;
      }
      iVar7 = param_1 + (uVar6 & 0xffff) * 8;
      *(undefined1 *)(iVar7 + 0x1ae) = 1;
      *(undefined1 *)(iVar7 + 0x1af) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x516) = 1;
      if (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x4f0)) {
        *(undefined1 *)(param_1 + 0x517) = 1;
        *(undefined2 *)(param_1 + 0x518) = 1;
        *(undefined1 *)(param_1 + 0x515) = 0;
        *(short *)(param_1 + 0x4f4) = *(short *)(param_1 + 0x4f4) + 1;
        if (0 < iVar5) {
          uVar6 = 0;
          do {
            FUN_00012964((undefined1 *)(param_1 + 0x350));
            uVar6 = uVar6 + 1 & 0xffff;
          } while ((int)uVar6 < iVar5);
        }
        if (0 < iVar1) {
          uVar6 = 0;
          do {
            puVar8 = (undefined4 *)FUN_00012838((undefined1 *)(param_1 + 0x1a8),auStack_2c);
            FUN_00012a3c(param_1 + 0x350,*puVar8,(short)puVar8[1]);
            uVar6 = uVar6 + 1 & 0xffff;
          } while ((int)uVar6 < iVar1);
        }
      }
    }
    if (((int)(uint)*(ushort *)(param_1 + 0x4f0) <= iVar5) &&
       (*(undefined1 *)(param_1 + 0x516) = 1, iVar5 < (int)(uint)*(ushort *)(param_1 + 0x348))) {
      *(undefined1 *)(param_1 + 0x517) = 0;
      *(undefined2 *)(param_1 + 0x518) = 0;
      *(undefined1 *)(param_1 + 0x515) = 0;
      *(short *)(param_1 + 0x34c) = *(short *)(param_1 + 0x34c) + 1;
      if (0 < iVar1) {
        uVar6 = 0;
        do {
          FUN_00012964((undefined1 *)(param_1 + 0x1a8));
          uVar6 = uVar6 + 1 & 0xffff;
        } while ((int)uVar6 < iVar1);
      }
      if (0 < iVar5) {
        uVar6 = 0;
        do {
          puVar8 = (undefined4 *)FUN_00012838((undefined1 *)(param_1 + 0x350),auStack_2c);
          FUN_00012a3c(param_1 + 0x1a8,*puVar8,(short)puVar8[1]);
          uVar6 = uVar6 + 1 & 0xffff;
        } while ((int)uVar6 < iVar5);
      }
    }
  }
  else {
    FUN_00012cb4(param_1);
    FUN_00014450(*DAT_00012f6c,2000);
    *(undefined1 *)(param_1 + 0x515) = 0;
    *(short *)(param_1 + 0x34c) = *(short *)(param_1 + 0x34c) + 1;
    if (0 < iVar1) {
      uVar6 = 0;
      do {
        FUN_00012964(puVar12);
        uVar6 = uVar6 + 1 & 0xffff;
      } while ((int)uVar6 < iVar1);
    }
    if (0 < iVar5) {
      uVar6 = 0;
      do {
        puVar8 = (undefined4 *)FUN_00012838((undefined1 *)(param_1 + 0x350),auStack_2c);
        FUN_00012a3c((int)puVar12,*puVar8,(short)puVar8[1]);
        uVar6 = uVar6 + 1 & 0xffff;
      } while ((int)uVar6 < iVar5);
    }
    *(undefined2 *)(param_1 + 0x518) = 0;
    if (((*(ushort *)(param_1 + 0x4fa) <= *(ushort *)(param_1 + 0x34c)) &&
        (*(char *)(param_1 + 0x4f8) != '\0')) || (*(short *)(param_1 + 0x4f0) == 0)) {
      *(undefined1 *)(param_1 + 0x516) = 1;
      *(undefined1 *)(param_1 + 0x517) = 0;
    }
  }
  cVar2 = *(char *)(param_1 + 0x515);
  bVar14 = cVar2 == '\0';
  if (bVar14) {
    cVar2 = *(char *)(param_1 + 0x516);
  }
  if (bVar14 && cVar2 == '\0') {
    FUN_0001275c(param_1,'\0','\0','\0');
  }
  return;
}


// ==== FUN_0001335c @ 0001335c  size=244  callers=[00011cf8]

void FUN_0001335c(undefined4 param_1,int param_2,short param_3,short param_4,short param_5,
                 short param_6,short param_7,short param_8)

{
  int iVar1;
  short sVar2;
  
  if (param_3 < 0) {
    param_3 = (short)((uint)(param_3 * -0x10000) >> 0x10);
  }
  if (99 < param_3) {
    param_3 = 99;
  }
  if (param_3 < 10) {
    sVar2 = 0;
  }
  else {
    sVar2 = (*(code *)*DAT_000133d0)(10);
  }
  iVar1 = (int)param_6;
  FUN_000116ec(param_2,sVar2 + param_8,(int)param_4,(int)param_5,iVar1,(int)param_7,0);
  FUN_000116ec(param_2,param_3 + sVar2 * -10 + param_8,param_4 + iVar1 + 1,(int)param_5,iVar1,
               (int)param_7,0);
  return;
}


// ==== FUN_00013454 @ 00013454  size=204  callers=[00014154, 000144d4]

void FUN_00013454(undefined1 *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  
  iVar7 = -DAT_00013520;
  *(undefined2 *)(param_1 + 0x348) = 0;
  *(undefined2 *)(param_1 + 0x4f4) = 0;
  *(undefined2 *)(param_1 + 0x34c) = 0;
  *(undefined2 *)(param_1 + 0x4f0) = 0;
  iVar6 = 0x1c;
  puVar8 = &stack0xffffffe4 + iVar7;
  puVar9 = param_1 + 0x4f8;
  do {
    iVar5 = iVar6 + -1;
    *puVar8 = *puVar9;
    bVar1 = 0 < iVar6;
    iVar6 = iVar5;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  } while (iVar5 != 0 && bVar1);
  uVar3 = *(undefined2 *)(param_1 + 0x4f2);
  uVar2 = param_1[0x514];
  puVar4 = FUN_00013524((undefined4 *)(&stack0x00000004 + iVar7));
  iVar6 = 0x51c;
  puVar8 = param_1;
  do {
    iVar5 = iVar6 + -1;
    *puVar8 = *(undefined1 *)puVar4;
    bVar1 = 0 < iVar6;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    iVar6 = iVar5;
    puVar8 = puVar8 + 1;
  } while (iVar5 != 0 && bVar1);
  iVar6 = 0x1c;
  puVar8 = &stack0xffffffe4 + iVar7;
  puVar9 = param_1 + 0x4f8;
  do {
    iVar7 = iVar6 + -1;
    *puVar9 = *puVar8;
    bVar1 = 0 < iVar6;
    iVar6 = iVar7;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  } while (iVar7 != 0 && bVar1);
  *(undefined2 *)(param_1 + 0x4f2) = uVar3;
  param_1[0x514] = uVar2;
  return;
}


// ==== FUN_00013524 @ 00013524  size=188  callers=[00013454, 00013d28]

undefined4 * FUN_00013524(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined2 extraout_r1;
  
  FUN_00011888(param_1);
  FUN_00011b54(param_1 + 0x6a);
  FUN_00011b54(param_1 + 0xd4);
  FUN_000135e4((undefined1 *)(param_1 + 0x13e));
  *(undefined1 *)((int)param_1 + 0x515) = 0;
  FUN_00011a04((int)param_1);
  FUN_00011c6c((int)param_1);
  *(undefined2 *)(param_1 + 0x146) = 2;
  *(undefined1 *)((int)param_1 + 0x517) = 0;
  *(undefined1 *)((int)param_1 + 0x516) = 0;
  uVar1 = Ordinal_1053();
  (*(code *)*DAT_000135e0)(8,uVar1);
  *(undefined2 *)((int)param_1 + 0x34a) = extraout_r1;
  *(undefined1 *)(param_1 + 0x145) = 1;
  return param_1;
}


// ==== FUN_000135e4 @ 000135e4  size=88  callers=[00013524]

undefined1 * FUN_000135e4(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_10 [4];
  
  uVar1 = DAT_0001363c;
  *(undefined2 *)(param_1 + 2) = 3;
  *(undefined2 *)(param_1 + 4) = 3;
  *param_1 = 1;
  *(undefined2 *)(param_1 + 6) = 1;
  param_1[1] = 1;
  puVar2 = (undefined4 *)Ordinal_177(auStack_10,uVar1);
  Ordinal_61(param_1 + 8,*puVar2);
  Ordinal_297(auStack_10);
  *(undefined2 *)(param_1 + 0x1a) = 1;
  return param_1;
}


// ==== FUN_00013640 @ 00013640  size=60  callers=[]

undefined1 * FUN_00013640(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001367c;
  *param_1 = (char)DAT_0001367c;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00013680 @ 00013680  size=104  callers=[]

undefined1 * FUN_00013680(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_000136ec;
  *param_1 = (char)DAT_000136ec;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_000136e8;
  *param_1 = (char)DAT_000136e8;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_000136f0 @ 000136f0  size=128  callers=[000116ec, 0001177c, 00013d28, 00013ebc]

void FUN_000136f0(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00013770;
  param_1[1] = (char)((uint)DAT_00013770 >> 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (char)uVar1;
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}


// ==== FUN_00013774 @ 00013774  size=104  callers=[]

undefined1 * FUN_00013774(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_000137e0;
  *param_1 = (char)DAT_000137e0;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_000137dc;
  *param_1 = (char)DAT_000137dc;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_000137e4 @ 000137e4  size=52  callers=[000116ec, 0001177c, 00013ebc]

void FUN_000137e4(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = Ordinal_628(param_2,2);
  uVar1 = Ordinal_873(uVar1,param_2);
  Ordinal_800(param_1,uVar1);
  return;
}


// ==== FUN_00013818 @ 00013818  size=136  callers=[00011cf8]

undefined1 * FUN_00013818(int param_1,undefined1 *param_2,int *param_3)

{
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  Ordinal_897(*(undefined4 *)(param_1 + 8),*param_3,*(undefined4 *)(*param_3 + -8),0,0,0,&local_10);
  *param_2 = local_10;
  param_2[1] = local_f;
  param_2[2] = local_e;
  param_2[3] = local_d;
  param_2[4] = local_c;
  param_2[5] = local_b;
  param_2[6] = local_a;
  param_2[7] = local_9;
  return param_2;
}


// ==== FUN_000138f8 @ 000138f8  size=24  callers=[]

void FUN_000138f8(void)

{
  FUN_00013908();
  FUN_00015104(DAT_0001391c);
  return;
}


// ==== FUN_00013908 @ 00013908  size=64  callers=[000138f8]

undefined1 * FUN_00013908(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  puVar2 = DAT_00013910;
  Ordinal_201(DAT_00013910,0);
  uVar1 = DAT_000138f4;
  *puVar2 = (char)DAT_000138f4;
  puVar2[1] = (char)((uint)uVar1 >> 8);
  puVar2[2] = (char)((uint)uVar1 >> 0x10);
  puVar2[3] = (char)((uint)uVar1 >> 0x18);
  return puVar2;
}


// ==== FUN_0001392c @ 0001392c  size=172  callers=[]

bool FUN_0001392c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [24];
  
  Ordinal_2400(param_1,PTR_u_Local_AppWizard_Generated_Applic_0001743a_2_00013978);
  iVar1 = Ordinal_315(0x6c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = Ordinal_162(iVar1,0x80,PTR_DAT_0001396c,PTR_DAT_00013970,PTR_DAT_00013974);
  }
  Ordinal_572(param_1,uVar2);
  Ordinal_72(auStack_20);
  Ordinal_2075(param_1,auStack_20);
  iVar1 = Ordinal_2114(param_1,auStack_20);
  if (iVar1 != 0) {
    Ordinal_2446(*(undefined4 *)(param_1 + 0x20),5);
    Ordinal_267(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x20));
  }
  Ordinal_228(auStack_20);
  return iVar1 != 0;
}


// ==== FUN_000139e8 @ 000139e8  size=36  callers=[]

undefined4 FUN_000139e8(undefined4 param_1,uint param_2)

{
  Ordinal_310();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00013a0c @ 00013a0c  size=36  callers=[]

undefined1 * FUN_00013a0c(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)Ordinal_315(0x58);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_00013a68(puVar1);
  }
  return puVar1;
}


// ==== FUN_00013a68 @ 00013a68  size=52  callers=[00013a0c]

undefined1 * FUN_00013a68(undefined1 *param_1)

{
  undefined4 uVar1;
  
  Ordinal_85();
  uVar1 = DAT_00013a9c;
  *param_1 = (char)DAT_00013a9c;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_00013aa0 @ 00013aa0  size=44  callers=[00013ae4]

void FUN_00013aa0(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00013ac4;
  *param_1 = (char)DAT_00013ac4;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014dd8)();
  return;
}


// ==== FUN_00013ac8 @ 00013ac8  size=24  callers=[]

bool FUN_00013ac8(void)

{
  int iVar1;
  
  iVar1 = Ordinal_1961();
  return iVar1 != 0;
}


// ==== FUN_00013ae4 @ 00013ae4  size=36  callers=[]

undefined1 * FUN_00013ae4(undefined1 *param_1,uint param_2)

{
  FUN_00013aa0(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00013bd8 @ 00013bd8  size=40  callers=[]

undefined1 * FUN_00013bd8(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)Ordinal_315(0x578);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_00013d28(puVar1);
  }
  return puVar1;
}


// ==== FUN_00013c38 @ 00013c38  size=132  callers=[00013d28]

bool FUN_00013c38(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_20 [16];
  
  bVar3 = false;
  iVar1 = Ordinal_1113(DAT_00013cc0,DAT_00013cc4);
  local_20[0] = 0;
  if (iVar1 != 0) {
    Ordinal_1120(local_20,0x10,1,iVar1);
    iVar2 = Ordinal_1065(local_20,DAT_00013cbc);
    bVar3 = iVar2 == 0;
    if (bVar3) {
      Ordinal_1120(param_1 + 0x4c,0x51c,1,iVar1);
    }
    Ordinal_1118(iVar1);
  }
  return bVar3;
}


// ==== FUN_00013cc8 @ 00013cc8  size=84  callers=[00013e2c]

void FUN_00013cc8(int param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_1113(DAT_00013d20,DAT_00013d24);
  if (iVar1 != 0) {
    Ordinal_1121(DAT_00013d1c,0x10,1,iVar1);
    Ordinal_1121(param_1 + 0x4c,0x51c,1,iVar1);
  }
  Ordinal_1118(iVar1);
  return;
}


// ==== FUN_00013d28 @ 00013d28  size=248  callers=[00013bd8]

undefined1 * FUN_00013d28(undefined1 *param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  
  Ordinal_200();
  FUN_00013524((undefined4 *)(param_1 + 0x4c));
  uVar5 = DAT_00013d88;
  *param_1 = (char)DAT_00013d88;
  param_1[1] = (char)((uint)uVar5 >> 8);
  puVar1 = DAT_00013d84;
  param_1[2] = (char)((uint)uVar5 >> 0x10);
  param_1[3] = (char)((uint)uVar5 >> 0x18);
  *puVar1 = param_1;
  iVar4 = Ordinal_315(0x14);
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = Ordinal_76();
  }
  *(undefined4 *)(param_1 + 0x568) = uVar5;
  puVar6 = (undefined1 *)Ordinal_315(0x10);
  if (puVar6 == (undefined1 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_000136f0(puVar6);
  }
  *(undefined2 *)(param_1 + 0x570) = 0;
  *(undefined4 *)(param_1 + 0x56c) = uVar5;
  pcVar2 = DAT_00013e28;
  *(undefined4 *)(param_1 + 0x574) = 0;
  if (*pcVar2 != '\0') {
    iVar4 = Ordinal_644();
    Ordinal_378(0xeb,*(undefined4 *)(iVar4 + 0xc),0x40005);
  }
  bVar3 = FUN_00013c38((int)param_1);
  if (!bVar3) {
    FUN_0001275c((int)(param_1 + 0x4c),'\0','\0','\0');
  }
  return param_1;
}


// ==== FUN_00013e2c @ 00013e2c  size=140  callers=[00014650]

void FUN_00013e2c(undefined1 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = DAT_00013eb0;
  *param_1 = (char)DAT_00013eb0;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  FUN_00013cc8((int)param_1);
  piVar2 = *(int **)(param_1 + 0x568);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
  piVar2 = *(int **)(param_1 + 0x56c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014e98)(param_1);
  return;
}


// ==== FUN_00013ebc @ 00013ebc  size=640  callers=[]

void FUN_00013ebc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_78 [4];
  undefined4 local_74;
  
  Ordinal_136(auStack_78,param_1);
  FUN_000136f0((undefined1 *)&local_88);
  FUN_000137e4(&local_88,0x82);
  iVar3 = *(int *)(param_1 + 0x568);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 4) == 0)) {
    uVar1 = Ordinal_910(local_74);
    Ordinal_799(iVar3,uVar1);
    iVar3 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x568) + 4),local_84);
    uVar4 = *(undefined4 *)(param_1 + 0x56c);
    uVar1 = Ordinal_902(*(undefined4 *)(*(int *)(param_1 + 0x568) + 4),0xf0,0x140);
    Ordinal_800(uVar4,uVar1);
  }
  else {
    iVar3 = Ordinal_2264(*(undefined4 *)(iVar3 + 4),local_84);
  }
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar1 = *(undefined4 *)(iVar3 + 4);
  }
  Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x568) + 4),uVar1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x56c) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x56c) + 4);
  }
  iVar3 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x568) + 4),uVar1);
  Ordinal_1152(*(undefined4 *)(param_1 + 0x568),0,0,0xf0,0x140,DAT_00014030);
  FUN_00011cf8(param_1 + 0x4c,*(int **)(param_1 + 0x568));
  iVar2 = *(int *)(param_1 + 0x574);
  if (iVar2 == 1) {
    FUN_000116ec(*(int *)(param_1 + 0x568),0xc2,0x1f,0x70,0xb3,0x2f,0xffffff);
  }
  else if (iVar2 == 2) {
    FUN_000116ec(*(int *)(param_1 + 0x568),0xc3,0x1c,0x70,0xb9,0x2e,0xffffff);
  }
  else if (iVar2 == 3) {
    FUN_000116ec(*(int *)(param_1 + 0x568),0xc5,5,0x75,0xe6,0x24,0xffffff);
  }
  if (*(char *)(param_1 + 0x562) != '\0') {
    FUN_000116ec(*(int *)(param_1 + 0x568),0xc4,5,0x6f,0xe6,0x31,0xffffff);
  }
  if (*(int *)(param_1 + 0x568) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x568) + 4);
  }
  Ordinal_903(local_74,0,0,0xf0,0x140,uVar1,0,0,0xcc0020);
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar1 = *(undefined4 *)(iVar3 + 4);
  }
  Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x568) + 4),uVar1);
  local_88 = DAT_00014144;
  Ordinal_1040(&local_88);
  local_88 = DAT_00014140;
  Ordinal_271(auStack_78);
  return;
}


// ==== FUN_00014154 @ 00014154  size=744  callers=[]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00014154(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  short sVar5;
  bool bVar6;
  char acStack_40 [8];
  undefined1 auStack_38 [28];
  
  if (*(char *)(param_1 + 0x562) == '\0') {
    iVar3 = func_0x00015010(_UNK_00014264,param_3,param_4);
    if (iVar3 == 0) {
      iVar3 = func_0x00015010(_UNK_00014388,param_3,param_4);
      if (iVar3 == 0) {
        iVar3 = func_0x00015010(_UNK_000143dc,param_3,param_4);
        if (iVar3 != 0) {
          uVar2 = 0x4f0;
          goto LAB_00014364;
        }
        iVar3 = func_0x00015010(_UNK_000143d8,param_3,param_4);
        if (iVar3 == 0) goto LAB_000143f8;
        uVar2 = 0x512;
        uVar4 = *(ushort *)(param_1 + 0x55e);
        bVar6 = 1 < uVar4;
      }
      else {
        uVar2 = 0x348;
LAB_00014364:
        uVar2 = uVar2 | 2;
        uVar4 = *(ushort *)(param_1 + 0x4c + uVar2);
        bVar6 = 6 < uVar4;
      }
      if (bVar6) {
        sVar5 = 0;
      }
      else {
        sVar5 = uVar4 + 1;
      }
      *(short *)(param_1 + 0x4c + uVar2) = sVar5;
    }
    else {
      iVar3 = param_1 + 0x4c;
      if (*(char *)(param_1 + 0x561) == '\0') {
        FUN_0001275c(iVar3,'\x01','\0','\x01');
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
        FUN_00014450(param_1,1000);
        FUN_00012ac0(iVar3);
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
        if (*(char *)(param_1 + 0x561) != '\0') {
          *(undefined4 *)(param_1 + 0x574) = 1;
          Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
          if (*_UNK_00014260 != '\0') {
            iVar1 = Ordinal_644();
            Ordinal_378(0xeb,*(undefined4 *)(iVar1 + 0xc),0x40005);
          }
          FUN_00014450(param_1,1000);
          *(undefined4 *)(param_1 + 0x574) = 0;
        }
        if (*(char *)(param_1 + 0x562) == '\0') {
          FUN_0001275c(iVar3,'\0','\0','\0');
        }
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
        Ordinal_267(*(undefined4 *)(param_1 + 0x20));
        goto LAB_000143f8;
      }
      FUN_00012444(iVar3,acStack_40);
      if (acStack_40[0] != '\0') goto LAB_000143f8;
      FUN_00012da0(iVar3);
      if (*(char *)(param_1 + 0x561) != '\0') {
        *(undefined4 *)(param_1 + 0x574) = 2;
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
        if (*_UNK_00014260 != '\0') {
          iVar3 = Ordinal_644();
          Ordinal_378(0xeb,*(undefined4 *)(iVar3 + 0xc),0x40005);
        }
        FUN_00014450(param_1,1000);
        *(undefined4 *)(param_1 + 0x574) = 0;
      }
    }
  }
  else {
    FUN_00013454((undefined1 *)(param_1 + 0x4c));
    FUN_0001275c(param_1 + 0x4c,'\0','\x01','\0');
  }
  Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
LAB_000143f8:
  do {
    iVar3 = func_0x00015004(auStack_38,*(undefined4 *)(param_1 + 0x20),0x201,0x201,1);
  } while (iVar3 != 0);
  do {
    iVar3 = func_0x00015004(auStack_38,*(undefined4 *)(param_1 + 0x20),0x202,0x202,1);
  } while (iVar3 != 0);
  return;
}


// ==== FUN_00014450 @ 00014450  size=44  callers=[00012da0, 00014154]

void FUN_00014450(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  Ordinal_267(*(undefined4 *)(param_1 + 0x20));
  iVar1 = Ordinal_535();
  do {
    iVar2 = Ordinal_535();
  } while ((uint)(iVar2 - iVar1) < param_2);
  return;
}


// ==== FUN_0001449c @ 0001449c  size=56  callers=[]

void FUN_0001449c(int param_1)

{
  undefined1 auStack_84 [128];
  
  FUN_00011000(auStack_84,param_1 + 0x544);
  Ordinal_1079(auStack_84);
  Ordinal_231(auStack_84);
  return;
}


// ==== FUN_000144d4 @ 000144d4  size=128  callers=[]

void FUN_000144d4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_10 [4];
  
  puVar1 = (undefined4 *)Ordinal_177(auStack_10,DAT_00014554);
  iVar2 = Ordinal_1760(param_1,*puVar1,0,4);
  Ordinal_297(auStack_10);
  if (iVar2 == 6) {
    FUN_00013454((undefined1 *)(param_1 + 0x4c));
    FUN_0001275c(param_1 + 0x4c,'\0','\x01','\0');
    Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
  }
  return;
}


// ==== FUN_00014558 @ 00014558  size=64  callers=[]

void FUN_00014558(void)

{
  Ordinal_493(DAT_00014598,DAT_0001459c,0,0,0,0,0,0,0,0);
  return;
}


// ==== FUN_000145a0 @ 000145a0  size=68  callers=[00014628]

undefined1 * FUN_000145a0(undefined1 *param_1)

{
  undefined4 uVar1;
  
  Ordinal_77(param_1,100,0);
  uVar1 = DAT_000145e4;
  *param_1 = (char)DAT_000145e4;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  *(undefined4 *)(param_1 + 0x48) = 0;
  return param_1;
}


// ==== FUN_00014608 @ 00014608  size=32  callers=[]

undefined4 FUN_00014608(undefined4 param_1)

{
  Ordinal_1939();
  Ordinal_840(param_1,0);
  return 1;
}


// ==== FUN_00014628 @ 00014628  size=40  callers=[]

void FUN_00014628(void)

{
  undefined1 auStack_80 [124];
  
  FUN_000145a0(auStack_80);
  Ordinal_1079(auStack_80);
  Ordinal_231(auStack_80);
  return;
}


// ==== FUN_00014650 @ 00014650  size=36  callers=[]

undefined1 * FUN_00014650(undefined1 *param_1,uint param_2)

{
  FUN_00013e2c(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00014674 @ 00014674  size=36  callers=[]

undefined4 FUN_00014674(undefined4 param_1,uint param_2)

{
  Ordinal_231();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== Ordinal_1079 @ 000146bc  size=8  callers=[0001449c, 00014628]

void Ordinal_1079(void)

{
                    /* WARNING: Could not recover jumptable at 0x000146c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000146c4)();
  return;
}


// ==== Ordinal_77 @ 00014890  size=8  callers=[00011000, 000145a0]

void Ordinal_77(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014898)();
  return;
}


// ==== Ordinal_317 @ 0001489c  size=8  callers=[000113ec, 000116c4, 00013640, 00013680, 00013774, 000139e8, 00013ae4, 00014650, 00014674]

void Ordinal_317(void)

{
                    /* WARNING: Could not recover jumptable at 0x000148a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000148a4)();
  return;
}


// ==== Ordinal_231 @ 000148a8  size=8  callers=[000113ec, 0001449c, 00014628, 00014674]

void Ordinal_231(void)

{
                    /* WARNING: Could not recover jumptable at 0x000148ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000148b0)();
  return;
}


// ==== Ordinal_1273 @ 000148b4  size=8  callers=[00011064, 000110a0, 0001121c]

void Ordinal_1273(void)

{
                    /* WARNING: Could not recover jumptable at 0x000148b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000148bc)();
  return;
}


// ==== Ordinal_1939 @ 000148c0  size=8  callers=[00011064, 00014608]

void Ordinal_1939(void)

{
                    /* WARNING: Could not recover jumptable at 0x000148c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000148c8)();
  return;
}


// ==== Ordinal_846 @ 000148cc  size=8  callers=[000110a0]

void Ordinal_846(void)

{
                    /* WARNING: Could not recover jumptable at 0x000148d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000148d4)();
  return;
}


// ==== Ordinal_297 @ 000148d8  size=8  callers=[000110a0, 00011cf8, 000135e4, 000144d4]

void Ordinal_297(void)

{
                    /* WARNING: Could not recover jumptable at 0x000148dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000148e0)();
  return;
}


// ==== Ordinal_2443 @ 000148e4  size=8  callers=[000110a0]

void Ordinal_2443(void)

{
                    /* WARNING: Could not recover jumptable at 0x000148e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000148ec)();
  return;
}


// ==== Ordinal_179 @ 000148f0  size=8  callers=[000110a0, 00011cf8]

void Ordinal_179(void)

{
                    /* WARNING: Could not recover jumptable at 0x000148f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000148f8)();
  return;
}


// ==== Ordinal_1691 @ 000148fc  size=8  callers=[0001121c]

void Ordinal_1691(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014904)();
  return;
}


// ==== Ordinal_1596 @ 00014908  size=8  callers=[0001121c]

void Ordinal_1596(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001490c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014910)();
  return;
}


// ==== Ordinal_315 @ 00014920  size=8  callers=[00011434, 00011674, 0001392c, 00013a0c, 00013bd8, 00013d28]

void Ordinal_315(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014928)();
  return;
}


// ==== Ordinal_219 @ 00014a58  size=8  callers=[000114d0]

void Ordinal_219(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014a60)();
  return;
}


// ==== Ordinal_2313 @ 00014a64  size=8  callers=[00011510]

void Ordinal_2313(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014a6c)();
  return;
}


// ==== Ordinal_562 @ 00014a70  size=8  callers=[00011510]

void Ordinal_562(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014a78)();
  return;
}


// ==== Ordinal_1676 @ 00014a7c  size=8  callers=[00011510]

void Ordinal_1676(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014a84)();
  return;
}


// ==== Ordinal_1850 @ 00014a88  size=8  callers=[00011510]

void Ordinal_1850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014a90)();
  return;
}


// ==== Ordinal_2093 @ 00014a94  size=8  callers=[0001165c]

void Ordinal_2093(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014a9c)();
  return;
}


// ==== Ordinal_644 @ 00014aa0  size=8  callers=[00011674, 00012444, 0001275c, 00012da0, 00013d28, 00014154, 00015240]

void Ordinal_644(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014aa8)();
  return;
}


// ==== Ordinal_1040 @ 00014ab8  size=8  callers=[000116ec, 0001177c, 00013680, 00013774, 00013ebc]

void Ordinal_1040(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014ac0)();
  return;
}


// ==== Ordinal_230 @ 00014ad0  size=8  callers=[0001177c]

void Ordinal_230(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014ad8)();
  return;
}


// ==== Ordinal_2264 @ 00014adc  size=8  callers=[0001177c, 00013ebc]

void Ordinal_2264(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014ae4)();
  return;
}


// ==== Ordinal_799 @ 00014ae8  size=8  callers=[0001177c, 00013ebc]

void Ordinal_799(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014af0)();
  return;
}


// ==== Ordinal_76 @ 00014af4  size=8  callers=[0001177c, 00013d28]

void Ordinal_76(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014afc)();
  return;
}


// ==== Ordinal_177 @ 00014b00  size=8  callers=[00011cf8, 000135e4, 000144d4]

void Ordinal_177(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014b08)();
  return;
}


// ==== Ordinal_800 @ 00014b18  size=8  callers=[000137e4, 00013ebc]

void Ordinal_800(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014b20)();
  return;
}


// ==== Ordinal_628 @ 00014b24  size=8  callers=[000137e4]

void Ordinal_628(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014b2c)();
  return;
}


// ==== Ordinal_201 @ 00014c38  size=8  callers=[00013908]

void Ordinal_201(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014c40)();
  return;
}


// ==== Ordinal_310 @ 00014c44  size=8  callers=[000139e8]

void Ordinal_310(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014c4c)();
  return;
}


// ==== Ordinal_228 @ 00014c50  size=8  callers=[0001392c]

void Ordinal_228(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014c58)();
  return;
}


// ==== Ordinal_2446 @ 00014c5c  size=8  callers=[0001392c]

void Ordinal_2446(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014c64)();
  return;
}


// ==== Ordinal_2114 @ 00014c68  size=8  callers=[0001392c]

void Ordinal_2114(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014c70)();
  return;
}


// ==== Ordinal_2075 @ 00014c74  size=8  callers=[0001392c]

void Ordinal_2075(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014c7c)();
  return;
}


// ==== Ordinal_72 @ 00014c80  size=8  callers=[0001392c]

void Ordinal_72(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014c88)();
  return;
}


// ==== Ordinal_572 @ 00014c8c  size=8  callers=[0001392c]

void Ordinal_572(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014c94)();
  return;
}


// ==== Ordinal_162 @ 00014c98  size=8  callers=[0001392c]

void Ordinal_162(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014ca0)();
  return;
}


// ==== Ordinal_2400 @ 00014ca4  size=8  callers=[0001392c]

void Ordinal_2400(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014cac)();
  return;
}


// ==== Ordinal_85 @ 00014dc4  size=8  callers=[00013a68]

void Ordinal_85(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014dcc)();
  return;
}


// ==== Ordinal_1961 @ 00014ddc  size=8  callers=[00013ac8]

void Ordinal_1961(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014de4)();
  return;
}


// ==== Ordinal_200 @ 00014e84  size=8  callers=[00013d28]

void Ordinal_200(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014e8c)();
  return;
}


// ==== Ordinal_271 @ 00014ea8  size=8  callers=[00013ebc]

void Ordinal_271(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014eb0)();
  return;
}


// ==== Ordinal_1152 @ 00014eb4  size=8  callers=[00013ebc]

void Ordinal_1152(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014ebc)();
  return;
}


// ==== Ordinal_136 @ 00014ec0  size=8  callers=[00013ebc]

void Ordinal_136(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014ec8)();
  return;
}


// ==== Ordinal_1760 @ 00014ecc  size=8  callers=[000144d4]

void Ordinal_1760(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014ed4)();
  return;
}


// ==== Ordinal_840 @ 00014ed8  size=8  callers=[00014608]

void Ordinal_840(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014ee0)();
  return;
}


// ==== Ordinal_868 @ 00014ee4  size=8  callers=[00011064, 000110a0, 0001121c, 00011510]

void Ordinal_868(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014eec)();
  return;
}


// ==== Ordinal_61 @ 00014efc  size=8  callers=[00011674, 000135e4]

void Ordinal_61(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014f04)();
  return;
}


// ==== Ordinal_63 @ 00014f08  size=8  callers=[00011674]

void Ordinal_63(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014f10)();
  return;
}


// ==== Ordinal_874 @ 00014f14  size=8  callers=[00011674]

void Ordinal_874(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014f1c)();
  return;
}


// ==== Ordinal_906 @ 00014f20  size=8  callers=[000116ec]

void Ordinal_906(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014f28)();
  return;
}


// ==== Ordinal_905 @ 00014f2c  size=8  callers=[0001177c]

void Ordinal_905(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014f34)();
  return;
}


// ==== Ordinal_910 @ 00014f38  size=8  callers=[0001177c, 00013ebc]

void Ordinal_910(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014f40)();
  return;
}


// ==== Ordinal_1053 @ 00014f44  size=8  callers=[00011a04, 00013524]

void Ordinal_1053(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014f4c)();
  return;
}


// ==== Ordinal_1061 @ 00014f50  size=8  callers=[00011a04]

void Ordinal_1061(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014f58)();
  return;
}


// ==== Ordinal_535 @ 00014f5c  size=8  callers=[00011a04, 00014450]

void Ordinal_535(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014f64)();
  return;
}


// ==== Ordinal_250 @ 00014f68  size=8  callers=[00012444, 0001275c, 00012cb4, 00012da0, 00014154, 000144d4]

void Ordinal_250(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014f70)();
  return;
}


// ==== Ordinal_378 @ 00014f74  size=8  callers=[00012444, 0001275c, 00012da0, 00013d28, 00014154]

void Ordinal_378(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014f7c)();
  return;
}


// ==== Ordinal_1046 @ 00014f80  size=8  callers=[00012838, 00012964]

void Ordinal_1046(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014f88)();
  return;
}


// ==== Ordinal_267 @ 00014f8c  size=8  callers=[00012cb4, 0001392c, 00014154, 00014450]

void Ordinal_267(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014f94)();
  return;
}


// ==== Ordinal_873 @ 00014f98  size=8  callers=[000137e4]

void Ordinal_873(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014fa0)();
  return;
}


// ==== Ordinal_897 @ 00014fa4  size=8  callers=[00013818]

void Ordinal_897(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014fac)();
  return;
}


// ==== Ordinal_1118 @ 00014fb0  size=8  callers=[00013c38, 00013cc8]

void Ordinal_1118(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014fb8)();
  return;
}


// ==== Ordinal_1120 @ 00014fbc  size=8  callers=[00013c38]

void Ordinal_1120(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014fc4)();
  return;
}


// ==== Ordinal_1113 @ 00014fc8  size=8  callers=[00013c38, 00013cc8]

void Ordinal_1113(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014fd0)();
  return;
}


// ==== Ordinal_1065 @ 00014fd4  size=8  callers=[00013c38]

void Ordinal_1065(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014fdc)();
  return;
}


// ==== Ordinal_1121 @ 00014fe0  size=8  callers=[00013cc8]

void Ordinal_1121(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014fe8)();
  return;
}


// ==== Ordinal_903 @ 00014fec  size=8  callers=[00013ebc]

void Ordinal_903(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00014ff4)();
  return;
}


// ==== Ordinal_902 @ 00014ff8  size=8  callers=[00013ebc]

void Ordinal_902(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015000)();
  return;
}


// ==== Ordinal_493 @ 0001501c  size=8  callers=[00014558]

void Ordinal_493(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015024)();
  return;
}


// ==== entry @ 00015028  size=212  callers=[]

void entry(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_0001511c();
  uVar2 = Ordinal_775(param_1,param_2,param_3,param_4);
  *DAT_000151cc = 0;
  puVar1 = DAT_000151c8;
  puVar3 = (undefined4 *)*DAT_000151c8;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*DAT_000151c4;
    while (puVar4 = puVar4 + -1, puVar3 <= puVar4) {
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)();
        puVar3 = (undefined4 *)*puVar1;
      }
    }
  }
  FUN_0001514c(DAT_00015234,DAT_00015238);
  FUN_0001514c(DAT_0001522c,DAT_00015230);
  (*DAT_00015228)(0x42,uVar2);
  return;
}


// ==== FUN_0001505c @ 0001505c  size=160  callers=[00015104]

undefined4 FUN_0001505c(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = DAT_000150ac;
  uVar3 = Ordinal_35(*DAT_000150ac);
  piVar1 = DAT_000150a8;
  puVar5 = (undefined4 *)*DAT_000150a8;
  if (uVar3 < (uint)((int)puVar5 + (4 - *piVar2))) {
    if (*piVar2 == 0) {
      iVar4 = Ordinal_33(0,0x10);
    }
    else {
      iVar4 = Ordinal_35();
      iVar4 = Ordinal_34(*piVar2,iVar4 + 0x10,2);
    }
    if (iVar4 == 0) {
      return 0;
    }
    iVar6 = *piVar1;
    iVar7 = *piVar2;
    *piVar2 = iVar4;
    puVar5 = (undefined4 *)(iVar4 + (iVar6 - iVar7 >> 2) * 4);
    *piVar1 = (int)puVar5;
  }
  *puVar5 = param_1;
  *piVar1 = *piVar1 + 4;
  return param_1;
}


// ==== FUN_00015104 @ 00015104  size=24  callers=[000138f8]

undefined4 FUN_00015104(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001505c(param_1);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ==== FUN_0001511c @ 0001511c  size=32  callers=[00015028]

void FUN_0001511c(void)

{
  FUN_0001514c(DAT_00015144,DAT_00015148);
  FUN_0001514c(DAT_0001513c,DAT_00015140);
  return;
}


// ==== FUN_0001514c @ 0001514c  size=48  callers=[00015028, 0001511c]

void FUN_0001514c(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


// ==== Ordinal_775 @ 0001523c  size=4  callers=[00015028]

void Ordinal_775(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015294)();
  return;
}


// ==== FUN_00015240 @ 00015240  size=36  callers=[00015268]

undefined4 FUN_00015240(undefined1 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Ordinal_644();
  *(undefined1 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x2040) = param_2;
  return 1;
}


// ==== FUN_00015268 @ 00015268  size=32  callers=[]

void FUN_00015268(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00015240(0,0x600);
  *DAT_00015288 = (char)uVar1;
  return;
}


// ==== Ordinal_775 @ 0001528c  size=8  callers=[]

void Ordinal_775(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015294)();
  return;
}


// ==== Ordinal_34 @ 00015298  size=8  callers=[0001505c]

void Ordinal_34(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001529c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000152a0)();
  return;
}


// ==== Ordinal_33 @ 000152a4  size=8  callers=[0001505c]

void Ordinal_33(void)

{
                    /* WARNING: Could not recover jumptable at 0x000152a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000152ac)();
  return;
}


// ==== Ordinal_35 @ 000152b0  size=8  callers=[0001505c]

void Ordinal_35(void)

{
                    /* WARNING: Could not recover jumptable at 0x000152b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000152b8)();
  return;
}


