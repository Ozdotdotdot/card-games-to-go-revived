// ==== FUN_00011000 @ 00011000  size=112  callers=[00013960]

undefined1 *
FUN_00011000(undefined1 *param_1,undefined2 *param_2,char *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  Ordinal_77(param_1,0xee,param_6);
  uVar1 = DAT_00011070;
  *(undefined2 **)(param_1 + 0x7c) = param_2;
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  *(char **)(param_1 + 0x84) = param_3;
  *(undefined4 *)(param_1 + 0x88) = param_4;
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  *(undefined4 *)(param_1 + 0x8c) = param_5;
  uVar2 = 5;
  if (*param_3 == '\0') {
    uVar2 = *param_2;
  }
  *(undefined2 *)(param_1 + 0x80) = uVar2;
  return param_1;
}


// ==== FUN_00011094 @ 00011094  size=28  callers=[]

undefined4 FUN_00011094(int param_1)

{
  Ordinal_1939();
  FUN_000110b0(param_1);
  return 1;
}


// ==== FUN_000110b0 @ 000110b0  size=168  callers=[00011094]

void FUN_000110b0(int param_1)

{
  Ordinal_846(param_1,0x3ea,**(int **)(param_1 + 0x8c) == 0xcc0020);
  Ordinal_846(param_1,0x3eb,**(int **)(param_1 + 0x8c) == 0x330008);
  Ordinal_846(param_1,1000,**(short **)(param_1 + 0x88) == 1);
  Ordinal_846(param_1,0x3e9,**(short **)(param_1 + 0x88) == 3);
  return;
}


// ==== FUN_00011158 @ 00011158  size=180  callers=[0001120c]

void FUN_00011158(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Ordinal_1691(param_1,0x3ea);
  if (iVar1 == 0) {
    iVar1 = Ordinal_1691(param_1,0x3eb);
    if (iVar1 == 0) goto LAB_000111a4;
    uVar2 = 0x330008;
  }
  else {
    uVar2 = 0xcc0020;
  }
  **(undefined4 **)(param_1 + 0x8c) = uVar2;
LAB_000111a4:
  iVar1 = Ordinal_1691(param_1,1000);
  if (iVar1 == 0) {
    iVar1 = Ordinal_1691(param_1,0x3e9);
    if (iVar1 != 0) {
      **(undefined2 **)(param_1 + 0x88) = 3;
    }
  }
  else {
    **(undefined2 **)(param_1 + 0x88) = 1;
  }
  if (*(short *)(param_1 + 0x80) == 5) {
    **(undefined1 **)(param_1 + 0x84) = 1;
  }
  else {
    **(undefined1 **)(param_1 + 0x84) = 0;
    **(undefined2 **)(param_1 + 0x7c) = *(undefined2 *)(param_1 + 0x80);
  }
  return;
}


// ==== FUN_0001120c @ 0001120c  size=32  callers=[]

void FUN_0001120c(int param_1)

{
  FUN_00011158(param_1);
                    /* WARNING: Could not recover jumptable at 0x00017bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017bd4)(param_1);
  return;
}


// ==== FUN_0001122c @ 0001122c  size=260  callers=[]

void FUN_0001122c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  short sVar2;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int aiStack_40 [2];
  int iStack_38;
  undefined1 auStack_30 [16];
  int iVar3;
  
  sVar7 = 0x28;
  iVar8 = 0;
  Ordinal_249(*(undefined4 *)(param_1 + 0x20),aiStack_40);
  iVar9 = 0;
  while( true ) {
    iVar3 = iVar8 * 0x23 + 0xb;
    sVar2 = (short)iVar3;
    iVar3 = (iVar3 * 0x10000 >> 0x10) + 0x23;
    if (iStack_38 - aiStack_40[0] < iVar3) {
      sVar2 = 3;
      sVar7 = sVar7 + 0x2d;
    }
    iStack_50 = (int)sVar2;
    iStack_4c = (int)sVar7;
    iStack_48 = sVar2 + 0x1e;
    iStack_44 = sVar7 + 0x2a;
    if (iStack_38 - aiStack_40[0] < iVar3) {
      iVar8 = 0;
    }
    iVar3 = 0x10;
    puVar5 = auStack_30;
    piVar6 = &iStack_50;
    do {
      iVar4 = iVar3 + -1;
      *puVar5 = *(undefined1 *)piVar6;
      bVar1 = 0 < iVar3;
      iVar3 = iVar4;
      puVar5 = puVar5 + 1;
      piVar6 = (int *)((int)piVar6 + 1);
    } while (iVar4 != 0 && bVar1);
    iVar3 = func_0x000181d8(auStack_30,param_3,param_4);
    if (iVar3 != 0) break;
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 1;
    if (5 < iVar9 * 0x10000 >> 0x10) {
      return;
    }
  }
  if ((uint)*(ushort *)(param_1 + 0x80) == (int)(short)iVar9) {
    return;
  }
  *(short *)(param_1 + 0x80) = (short)iVar9;
  Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,1);
  return;
}


// ==== FUN_00011330 @ 00011330  size=688  callers=[]

void FUN_00011330(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  short sVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  short local_e4;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [4];
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94 [2];
  int local_8c;
  undefined1 auStack_84 [8];
  int local_7c;
  undefined4 local_78;
  
  Ordinal_136(&local_7c,param_1);
  local_e4 = 0;
  sVar13 = 0x28;
  Ordinal_249(*(undefined4 *)(param_1 + 0x20),local_94);
  uVar4 = DAT_000115f0;
  uVar3 = DAT_000115ec;
  uVar12 = 0;
  do {
    iVar5 = local_e4 * 0x23 + 0xb;
    sVar8 = (short)iVar5;
    if (local_8c - local_94[0] < (iVar5 * 0x10000 >> 0x10) + 0x23) {
      sVar8 = 3;
      local_e4 = 0;
      sVar13 = sVar13 + 0x2d;
    }
    iVar5 = (int)sVar8;
    local_b4 = iVar5;
    iVar2 = (int)sVar13;
    local_b0 = iVar2;
    local_ac = iVar5 + 0x1e;
    local_a8 = iVar2 + 0x2a;
    iVar11 = 0x10;
    puVar10 = &local_c4;
    piVar7 = &local_b4;
    do {
      iVar9 = iVar11 + -1;
      *(char *)puVar10 = (char)*piVar7;
      bVar1 = 0 < iVar11;
      iVar11 = iVar9;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      piVar7 = (int *)((int)piVar7 + 1);
    } while (iVar9 != 0 && bVar1);
    if (*(ushort *)(param_1 + 0x80) == uVar12) {
      local_d8 = 0;
      local_dc = DAT_000115e8;
      uVar6 = Ordinal_2510(0,3,0);
      Ordinal_800(&local_dc,uVar6);
      uVar6 = Ordinal_2267(&local_7c,&local_dc);
      Ordinal_98(&local_c4,2,2);
      Ordinal_941(local_78,local_c4,local_c0,local_bc,local_b8);
      Ordinal_2267(&local_7c,uVar6);
      local_dc = DAT_000115e4;
      Ordinal_1040(&local_dc);
      local_dc = DAT_000115e0;
    }
    sVar8 = (short)uVar12 + 0xfa;
    if (4 < (int)uVar12) {
      sVar8 = 0x82;
    }
    FUN_00013ff0((int)&local_7c,sVar8,iVar5,iVar2,0x1e,0x2a,0xff00);
    if (uVar12 == 5) {
      piVar7 = (int *)Ordinal_177(auStack_d4,uVar3);
      piVar7 = (int *)FUN_00011744((int)&local_7c,auStack_84,piVar7);
      local_cc = *piVar7;
      local_c8 = piVar7[1];
      Ordinal_297(auStack_d4);
      iVar11 = local_cc;
      if (local_cc < 0) {
        iVar11 = local_cc + 1;
      }
      local_a4 = (iVar5 - (iVar11 >> 1)) + 0xf;
      iVar9 = local_c8;
      if (local_c8 < 0) {
        iVar9 = local_c8 + 1;
      }
      local_a0 = (iVar2 - (iVar9 >> 1)) + 0x15;
      local_9c = (iVar11 >> 1) + iVar5 + 0xf;
      local_98 = (iVar9 >> 1) + iVar2 + 0x15;
      piVar7 = (int *)Ordinal_177(auStack_d0,uVar4);
      (**(code **)(local_7c + 0x48))
                (&local_7c,*piVar7,*(undefined4 *)(*piVar7 + -8),&local_a4,0x100);
      Ordinal_297(auStack_d0);
    }
    uVar12 = (int)((uVar12 + 1) * 0x10000) >> 0x10;
    local_e4 = local_e4 + 1;
  } while ((int)uVar12 < 6);
  Ordinal_271(&local_7c);
  return;
}


// ==== FUN_000115f4 @ 000115f4  size=36  callers=[]

undefined4 FUN_000115f4(undefined4 param_1,uint param_2)

{
  Ordinal_231();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011618 @ 00011618  size=60  callers=[]

undefined1 * FUN_00011618(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00011654;
  *param_1 = (char)DAT_00011654;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011664 @ 00011664  size=104  callers=[]

undefined1 * FUN_00011664(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_000116d0;
  *param_1 = (char)DAT_000116d0;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_000116cc;
  *param_1 = (char)DAT_000116cc;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_000116d4 @ 000116d4  size=104  callers=[]

undefined1 * FUN_000116d4(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00011740;
  *param_1 = (char)DAT_00011740;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_0001173c;
  *param_1 = (char)DAT_0001173c;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011744 @ 00011744  size=136  callers=[00011330]

undefined1 * FUN_00011744(int param_1,undefined1 *param_2,int *param_3)

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


// ==== FUN_0001183c @ 0001183c  size=24  callers=[]

void FUN_0001183c(void)

{
  FUN_0001184c();
  FUN_00018434(DAT_00011860);
  return;
}


// ==== FUN_0001184c @ 0001184c  size=64  callers=[0001183c]

undefined1 * FUN_0001184c(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  puVar2 = DAT_00011854;
  Ordinal_201(DAT_00011854,0);
  uVar1 = DAT_00011838;
  *puVar2 = (char)DAT_00011838;
  puVar2[1] = (char)((uint)uVar1 >> 8);
  puVar2[2] = (char)((uint)uVar1 >> 0x10);
  puVar2[3] = (char)((uint)uVar1 >> 0x18);
  return puVar2;
}


// ==== FUN_00011870 @ 00011870  size=172  callers=[]

bool FUN_00011870(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [24];
  
  Ordinal_2400(param_1,PTR_u_Klondike_Solitaire___Don_Turner_000118bc);
  iVar1 = Ordinal_315(0x6c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = Ordinal_162(iVar1,0x80,PTR_DAT_000118b0,PTR_DAT_000118b4,PTR_DAT_000118b8);
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


// ==== FUN_0001192c @ 0001192c  size=36  callers=[]

undefined4 FUN_0001192c(undefined4 param_1,uint param_2)

{
  Ordinal_310();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011950 @ 00011950  size=36  callers=[]

undefined1 * FUN_00011950(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)Ordinal_315(0x58);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_000119ac(puVar1);
  }
  return puVar1;
}


// ==== FUN_000119ac @ 000119ac  size=52  callers=[00011950]

undefined1 * FUN_000119ac(undefined1 *param_1)

{
  undefined4 uVar1;
  
  Ordinal_85();
  uVar1 = DAT_000119e0;
  *param_1 = (char)DAT_000119e0;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_000119e4 @ 000119e4  size=44  callers=[00011a28]

void FUN_000119e4(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00011a08;
  *param_1 = (char)DAT_00011a08;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x00017f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017f10)();
  return;
}


// ==== FUN_00011a0c @ 00011a0c  size=24  callers=[]

bool FUN_00011a0c(void)

{
  int iVar1;
  
  iVar1 = Ordinal_1961();
  return iVar1 != 0;
}


// ==== FUN_00011a28 @ 00011a28  size=36  callers=[]

undefined1 * FUN_00011a28(undefined1 *param_1,uint param_2)

{
  FUN_000119e4(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011aec @ 00011aec  size=40  callers=[]

undefined1 * FUN_00011aec(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)Ordinal_315(0x1ca0);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_00011c3c(puVar1);
  }
  return puVar1;
}


// ==== FUN_00011b4c @ 00011b4c  size=132  callers=[00011c3c]

bool FUN_00011b4c(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_28 [24];
  
  bVar3 = false;
  iVar1 = Ordinal_1113(DAT_00011bd4,DAT_00011bd8);
  local_28[0] = 0;
  if (iVar1 != 0) {
    Ordinal_1120(local_28,0x15,1,iVar1);
    iVar2 = Ordinal_1065(local_28,DAT_00011bd0);
    bVar3 = iVar2 == 0;
    if (bVar3) {
      Ordinal_1120(param_1 + 0x4c,0xdf4,1,iVar1);
    }
    Ordinal_1118(iVar1);
  }
  return bVar3;
}


// ==== FUN_00011bdc @ 00011bdc  size=84  callers=[00011db8]

void FUN_00011bdc(int param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_1113(DAT_00011c34,DAT_00011c38);
  if (iVar1 != 0) {
    Ordinal_1121(DAT_00011c30,0x15,1,iVar1);
    Ordinal_1121(param_1 + 0x4c,0xdf4,1,iVar1);
  }
  Ordinal_1118(iVar1);
  return;
}


// ==== FUN_00011c3c @ 00011c3c  size=372  callers=[00011aec]

undefined1 * FUN_00011c3c(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  Ordinal_200();
  puVar5 = param_1 + 0x4c;
  FUN_00013acc(puVar5);
  FUN_00013acc(param_1 + 0xe40);
  FUN_00013c10(param_1 + 0x1c44);
  uVar3 = DAT_00011cf4;
  *param_1 = (char)DAT_00011cf4;
  param_1[1] = (char)((uint)uVar3 >> 8);
  puVar1 = DAT_00011cf0;
  param_1[2] = (char)((uint)uVar3 >> 0x10);
  param_1[3] = (char)((uint)uVar3 >> 0x18);
  param_1[0x1c66] = 0;
  param_1[0x1c63] = 0;
  param_1[0x1c62] = 0;
  param_1[0x1c9c] = 0;
  param_1[0x1c65] = 0;
  *puVar1 = param_1;
  iVar2 = Ordinal_315(0x14);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = Ordinal_76();
  }
  *(undefined4 *)(param_1 + 0x1c34) = uVar3;
  puVar4 = (undefined1 *)Ordinal_315(0x10);
  if (puVar4 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00013c10(puVar4);
  }
  *(undefined4 *)(param_1 + 0x1c3c) = uVar3;
  iVar2 = Ordinal_315(0x14);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = Ordinal_76();
  }
  *(undefined4 *)(param_1 + 0x1c38) = uVar3;
  puVar4 = (undefined1 *)Ordinal_315(0x10);
  if (puVar4 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00013c10(puVar4);
  }
  *(undefined4 *)(param_1 + 0x1c40) = uVar3;
  FUN_00011b4c((int)param_1);
  FUN_00015870((int)puVar5);
  if (param_1[0xe2a] != '\0') {
    FUN_000177a0(puVar5);
  }
  FUN_00013d04(param_1 + 0x1c44,200);
  return param_1;
}


// ==== FUN_00011db8 @ 00011db8  size=300  callers=[00013bec]

void FUN_00011db8(undefined1 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  
  uVar1 = DAT_00011ee4;
  *param_1 = (char)DAT_00011ee4;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  FUN_00013a70((int)param_1);
  FUN_00011bdc((int)param_1);
  piVar2 = *(int **)(param_1 + 0x1c34);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
  piVar2 = *(int **)(param_1 + 0x1c3c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
  piVar2 = *(int **)(param_1 + 0x1c38);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
  piVar2 = *(int **)(param_1 + 0x1c40);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
  uVar1 = DAT_00011ee0;
  puVar3 = param_1 + 0x1c44;
  *puVar3 = (char)DAT_00011ee0;
  param_1[0x1c45] = (char)((uint)uVar1 >> 8);
  param_1[0x1c46] = (char)((uint)uVar1 >> 0x10);
  param_1[0x1c47] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(puVar3);
  uVar1 = DAT_00011edc;
  *puVar3 = (char)DAT_00011edc;
  param_1[0x1c45] = (char)((uint)uVar1 >> 8);
  param_1[0x1c46] = (char)((uint)uVar1 >> 0x10);
  param_1[0x1c47] = (char)((uint)uVar1 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x00017ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017ff4)(param_1);
  return;
}


// ==== FUN_00011ef0 @ 00011ef0  size=3952  callers=[]

void FUN_00011ef0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  char *pcVar14;
  int *piVar15;
  int *piVar16;
  bool bVar17;
  int local_a4;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined1 auStack_7c [4];
  undefined4 local_78;
  
  Ordinal_136(auStack_7c,param_1);
  if (*(char *)(param_1 + 0xe2a) == '\0') {
    if (*(char *)(param_1 + 0x1c66) == '\0') {
      if (*(char *)(param_1 + 0x1c63) == '\0') {
        piVar9 = (int *)(param_1 + 0x1c34);
        iVar2 = *piVar9;
        if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == 0)) {
          uVar3 = Ordinal_910(local_78);
          Ordinal_799(iVar2,uVar3);
          if (param_1 == -0x1c44) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(param_1 + 0x1c48);
          }
          iVar2 = Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar3);
          uVar11 = *(undefined4 *)(&DAT_00001c3c + param_1);
          uVar3 = Ordinal_902(*(undefined4 *)(*piVar9 + 4),0xf0,0x140);
          Ordinal_800(uVar11,uVar3);
          uVar3 = 0;
          if (iVar2 != 0) {
            uVar3 = *(undefined4 *)(iVar2 + 4);
          }
          Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar3);
        }
        uVar3 = 0;
        if (*(int *)(&DAT_00001c3c + param_1) != 0) {
          uVar3 = *(undefined4 *)(*(int *)(&DAT_00001c3c + param_1) + 4);
        }
        iVar2 = Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar3);
        FUN_00014080(*piVar9,param_1 + 0x1c44,0,0,0xf0,0x140,0xff00);
        FUN_00014f18(param_1 + 0x4c,*piVar9);
        if (*piVar9 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*piVar9 + 4);
        }
        Ordinal_903(local_78,0,0,0xf0,0x140,uVar3,0,0,0xcc0020);
        uVar3 = 0;
        if (iVar2 != 0) {
          uVar3 = *(undefined4 *)(iVar2 + 4);
        }
        Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar3);
      }
      else {
        piVar9 = (int *)(&DAT_00001c38 + param_1);
        iVar2 = *piVar9;
        bVar17 = false;
        if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == 0)) {
          uVar3 = Ordinal_910(local_78);
          Ordinal_799(iVar2,uVar3);
          if (param_1 == -0x1c44) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(param_1 + 0x1c48);
          }
          iVar2 = Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar3);
          uVar11 = *(undefined4 *)(&DAT_00001c40 + param_1);
          uVar3 = Ordinal_902(*(undefined4 *)(*piVar9 + 4),
                              *(int *)(param_1 + 0x1c70) - *(int *)(param_1 + 0x1c68),
                              *(int *)(param_1 + 0x1c74) - *(int *)(param_1 + 0x1c6c));
          Ordinal_800(uVar11,uVar3);
          uVar3 = 0;
          if (iVar2 != 0) {
            uVar3 = *(undefined4 *)(iVar2 + 4);
          }
          Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar3);
          bVar17 = true;
        }
        uVar3 = 0;
        if (*(int *)(&DAT_00001c40 + param_1) != 0) {
          uVar3 = *(undefined4 *)(*(int *)(&DAT_00001c40 + param_1) + 4);
        }
        iVar2 = Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar3);
        if (bVar17) {
          FUN_00016e08(param_1 + 0x4c,*piVar9,0,0);
        }
        iVar7 = *(int *)(&DAT_00001c3c + param_1);
        piVar12 = (int *)(param_1 + 0x1c34);
        if (iVar7 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(iVar7 + 4);
        }
        local_a4 = Ordinal_2264(*(undefined4 *)(*piVar12 + 4),uVar3);
        iVar7 = 0x10;
        puVar6 = (undefined1 *)(param_1 + 0x1c78);
        piVar10 = &local_8c;
        do {
          iVar8 = iVar7 + -1;
          *(undefined1 *)piVar10 = *puVar6;
          bVar17 = 0 < iVar7;
          iVar7 = iVar8;
          puVar6 = puVar6 + 1;
          piVar10 = (int *)((int)piVar10 + 1);
        } while (iVar8 != 0 && bVar17);
        piVar10 = (int *)(param_1 + 0x1c68);
        iVar4 = *piVar10;
        iVar7 = local_8c;
        iVar8 = iVar4;
        if (iVar4 <= local_8c) {
          iVar7 = *(int *)(param_1 + 0x1c70);
          iVar8 = local_84;
        }
        local_84 = iVar8;
        if (iVar4 <= local_8c) {
          local_8c = iVar7;
        }
        if (*piVar12 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*piVar12 + 4);
        }
        Ordinal_903(local_78,iVar7,local_88,local_84 - iVar7,local_80 - local_88,uVar3,iVar7,
                    local_88,0xcc0020);
        iVar7 = 0x10;
        piVar16 = &local_8c;
        puVar6 = (undefined1 *)(param_1 + 0x1c78);
        do {
          iVar8 = iVar7 + -1;
          *(undefined1 *)piVar16 = *puVar6;
          bVar17 = 0 < iVar7;
          iVar7 = iVar8;
          piVar16 = (int *)((int)piVar16 + 1);
          puVar6 = puVar6 + 1;
        } while (iVar8 != 0 && bVar17);
        piVar16 = (int *)(param_1 + 0x1c6c);
        iVar7 = *piVar16;
        iVar8 = local_88;
        if (iVar7 <= local_88) {
          iVar8 = *(int *)(param_1 + 0x1c74);
        }
        if (iVar7 <= local_88) {
          iVar7 = local_80;
        }
        if (*piVar12 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*piVar12 + 4);
        }
        Ordinal_903(local_78,local_8c,iVar8,local_84 - local_8c,iVar7 - iVar8,uVar3,local_8c,iVar8,
                    0xcc0020);
        pcVar5 = (char *)(param_1 + 0x1c65);
        if (*pcVar5 == '\0') {
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar10,*piVar16);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),0,0,uVar3);
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar10 + 1,*piVar16);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),1,0,uVar3);
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar10,*piVar16 + 1);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),0,1,uVar3);
          piVar13 = (int *)(param_1 + 0x1c74);
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar10,*piVar13 + -1);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),0,
                      (*(int *)(param_1 + 0x1c74) - *(int *)(param_1 + 0x1c6c)) + -1,uVar3);
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar10 + 1,*piVar13 + -1);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),1,
                      (*(int *)(param_1 + 0x1c74) - *(int *)(param_1 + 0x1c6c)) + -1,uVar3);
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar10,*piVar13 + -2);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),0,
                      (-2 - *(int *)(param_1 + 0x1c6c)) + *(int *)(param_1 + 0x1c74),uVar3);
          piVar15 = (int *)(param_1 + 0x1c70);
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar15 + -2,*piVar16);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),*(int *)(param_1 + 0x1c70) + (-2 - *piVar10),0,
                      uVar3);
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar15 + -1,*piVar16);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),(*(int *)(param_1 + 0x1c70) - *piVar10) + -1,0,
                      uVar3);
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar15 + -1,*piVar16 + 1);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),(*(int *)(param_1 + 0x1c70) - *piVar10) + -1,1,
                      uVar3);
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar15 + -2,*piVar13 + -1);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),*(int *)(param_1 + 0x1c70) + (-2 - *piVar10),
                      (*(int *)(param_1 + 0x1c74) - *(int *)(param_1 + 0x1c6c)) + -1,uVar3);
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar15 + -1,*piVar13 + -1);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),(*(int *)(param_1 + 0x1c70) - *piVar10) + -1,
                      (*(int *)(param_1 + 0x1c74) - *(int *)(param_1 + 0x1c6c)) + -1,uVar3);
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar15 + -1,*piVar13 + -2);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),(*(int *)(param_1 + 0x1c70) - *piVar10) + -1,
                      (-2 - *(int *)(param_1 + 0x1c6c)) + *(int *)(param_1 + 0x1c74),uVar3);
          iVar7 = *piVar9;
          bVar17 = iVar7 == 0;
          if (bVar17) {
            iVar7 = 0;
          }
          if (!bVar17) {
            iVar7 = *(int *)(iVar7 + 4);
          }
          Ordinal_903(local_78,*piVar10,*piVar16,*(int *)(param_1 + 0x1c70) - *piVar10,
                      *(int *)(param_1 + 0x1c74) - *(int *)(param_1 + 0x1c6c),iVar7,0,0,
                      *(undefined4 *)(param_1 + 0xe30));
        }
        else {
          uVar3 = 0;
          iVar7 = *(int *)(&DAT_00001c3c + param_1);
          if (iVar7 != 0) {
            uVar3 = *(undefined4 *)(iVar7 + 4);
          }
          local_a4 = Ordinal_2264(*(undefined4 *)(*piVar12 + 4),uVar3);
          pcVar14 = (char *)(param_1 + 0x1c64);
          iVar8 = 0x1c90;
          iVar4 = 0x1c88;
          iVar7 = iVar8;
          if (*pcVar14 == '\0') {
            iVar7 = iVar4;
          }
          iVar1 = iVar8;
          if (*pcVar14 == '\0') {
            iVar1 = iVar4;
          }
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*(undefined4 *)(param_1 + iVar1),
                              *(undefined4 *)(param_1 + iVar7 + 4));
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),0,0,uVar3);
          iVar7 = iVar8;
          if (*pcVar14 == '\0') {
            iVar7 = iVar4;
          }
          iVar1 = iVar8;
          if (*pcVar14 == '\0') {
            iVar1 = iVar4;
          }
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*(int *)(param_1 + iVar1) + 1,
                              *(undefined4 *)(param_1 + iVar7 + 4));
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),1,0,uVar3);
          iVar7 = iVar8;
          if (*pcVar14 == '\0') {
            iVar7 = iVar4;
          }
          iVar1 = iVar8;
          if (*pcVar14 == '\0') {
            iVar1 = iVar4;
          }
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*(undefined4 *)(param_1 + iVar1),
                              *(int *)(param_1 + iVar7 + 4) + 1);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),0,1,uVar3);
          iVar7 = iVar8;
          if (*pcVar14 == '\0') {
            iVar7 = iVar4;
          }
          iVar1 = iVar8;
          if (*pcVar14 == '\0') {
            iVar1 = iVar4;
          }
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*(undefined4 *)(param_1 + iVar1),
                              *(int *)(param_1 + iVar7 + 4) +
                              (*(int *)(param_1 + 0x1c74) - *(int *)(param_1 + 0x1c6c)) + -1);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),0,
                      (*(int *)(param_1 + 0x1c74) - *(int *)(param_1 + 0x1c6c)) + -1,uVar3);
          iVar7 = iVar8;
          if (*pcVar14 == '\0') {
            iVar7 = iVar4;
          }
          iVar1 = iVar8;
          if (*pcVar14 == '\0') {
            iVar1 = iVar4;
          }
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*(int *)(param_1 + iVar1) + 1,
                              *(int *)(param_1 + iVar7 + 4) +
                              (*(int *)(param_1 + 0x1c74) - *(int *)(param_1 + 0x1c6c)) + -1);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),1,
                      (*(int *)(param_1 + 0x1c74) - *(int *)(param_1 + 0x1c6c)) + -1,uVar3);
          iVar7 = iVar8;
          if (*pcVar14 == '\0') {
            iVar7 = iVar4;
          }
          iVar1 = iVar8;
          if (*pcVar14 == '\0') {
            iVar1 = iVar4;
          }
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*(undefined4 *)(param_1 + iVar1),
                              (*(int *)(param_1 + 0x1c74) - *(int *)(param_1 + 0x1c6c)) + -2 +
                              *(int *)(param_1 + iVar7 + 4));
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),0,
                      (-2 - *(int *)(param_1 + 0x1c6c)) + *(int *)(param_1 + 0x1c74),uVar3);
          iVar7 = iVar8;
          if (*pcVar14 == '\0') {
            iVar7 = iVar4;
          }
          iVar1 = iVar8;
          if (*pcVar14 == '\0') {
            iVar1 = iVar4;
          }
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),
                              (*(int *)(param_1 + iVar1) - *piVar10) + -2 +
                              *(int *)(param_1 + 0x1c70),*(undefined4 *)(param_1 + iVar7 + 4));
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),*(int *)(param_1 + 0x1c70) + (-2 - *piVar10),0,
                      uVar3);
          iVar7 = iVar8;
          if (*pcVar14 == '\0') {
            iVar7 = iVar4;
          }
          iVar1 = iVar8;
          if (*pcVar14 == '\0') {
            iVar1 = iVar4;
          }
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),
                              (*(int *)(param_1 + iVar1) - *piVar10) + *(int *)(param_1 + 0x1c70) +
                              -1,*(undefined4 *)(param_1 + iVar7 + 4));
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),(*(int *)(param_1 + 0x1c70) - *piVar10) + -1,0,
                      uVar3);
          iVar7 = iVar8;
          if (*pcVar14 == '\0') {
            iVar7 = iVar4;
          }
          iVar1 = iVar8;
          if (*pcVar14 == '\0') {
            iVar1 = iVar4;
          }
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),
                              (*(int *)(param_1 + iVar1) - *piVar10) + *(int *)(param_1 + 0x1c70) +
                              -1,*(int *)(param_1 + iVar7 + 4) + 1);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),(*(int *)(param_1 + 0x1c70) - *piVar10) + -1,1,
                      uVar3);
          iVar7 = iVar8;
          if (*pcVar14 == '\0') {
            iVar7 = iVar4;
          }
          iVar1 = iVar8;
          if (*pcVar14 == '\0') {
            iVar1 = iVar4;
          }
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),
                              (*(int *)(param_1 + iVar1) - *piVar10) + -2 +
                              *(int *)(param_1 + 0x1c70),
                              *(int *)(param_1 + iVar7 + 4) +
                              (*(int *)(param_1 + 0x1c74) - *(int *)(param_1 + 0x1c6c)) + -1);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),*(int *)(param_1 + 0x1c70) + (-2 - *piVar10),
                      (*(int *)(param_1 + 0x1c74) - *(int *)(param_1 + 0x1c6c)) + -1,uVar3);
          iVar7 = iVar8;
          if (*pcVar14 == '\0') {
            iVar7 = iVar4;
          }
          iVar1 = iVar8;
          if (*pcVar14 == '\0') {
            iVar1 = iVar4;
          }
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),
                              (*(int *)(param_1 + iVar1) - *piVar10) + *(int *)(param_1 + 0x1c70) +
                              -1,*(int *)(param_1 + iVar7 + 4) +
                                 (*(int *)(param_1 + 0x1c74) - *(int *)(param_1 + 0x1c6c)) + -1);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),(*(int *)(param_1 + 0x1c70) - *piVar10) + -1,
                      (*(int *)(param_1 + 0x1c74) - *(int *)(param_1 + 0x1c6c)) + -1,uVar3);
          iVar7 = iVar8;
          if (*pcVar14 == '\0') {
            iVar7 = iVar4;
          }
          if (*pcVar14 == '\0') {
            iVar8 = iVar4;
          }
          uVar3 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),
                              (*(int *)(param_1 + iVar8) - *piVar10) + *(int *)(param_1 + 0x1c70) +
                              -1,*(int *)(param_1 + iVar7 + 4) +
                                 (*(int *)(param_1 + 0x1c74) - *(int *)(param_1 + 0x1c6c)) + -2);
          Ordinal_944(*(undefined4 *)(*piVar9 + 4),(*(int *)(param_1 + 0x1c70) - *piVar10) + -1,
                      (-2 - *(int *)(param_1 + 0x1c6c)) + *(int *)(param_1 + 0x1c74),uVar3);
          iVar7 = *piVar9;
          iVar4 = *(int *)(param_1 + 0x1c74) - *(int *)(param_1 + 0x1c6c);
          iVar8 = *(int *)(param_1 + 0x1c70) - *piVar10;
          if (*pcVar14 == '\0') {
            bVar17 = iVar7 == 0;
            if (bVar17) {
              iVar7 = 0;
            }
            if (!bVar17) {
              iVar7 = *(int *)(iVar7 + 4);
            }
            Ordinal_903(*(undefined4 *)(*piVar12 + 4),*(undefined4 *)(param_1 + 0x1c88),
                        *(undefined4 *)(param_1 + 0x1c8c),iVar8,iVar4,iVar7,0,0,0xcc0020);
          }
          else {
            if (iVar7 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(undefined4 *)(iVar7 + 4);
            }
            Ordinal_903(*(undefined4 *)(*piVar12 + 4),*(undefined4 *)(param_1 + 0x1c90),
                        *(undefined4 *)(param_1 + 0x1c94),iVar8,iVar4,uVar3,0,0,0xcc0020);
            if (*(char *)(param_1 + 0x1c60) != '\0') {
              iVar7 = FUN_00014950(*(short *)(param_1 + 0x1c54) * 0xe8 + param_1 + 0x53c);
              if ((short)iVar7 == 1) {
                FUN_000176a8(param_1 + 0x4c,*piVar12,*(short *)(param_1 + 0x1c54));
              }
            }
          }
          if (*piVar12 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(*piVar12 + 4);
          }
          Ordinal_903(local_78,0,0,0xf0,0x140,uVar3,0,0,0xcc0020);
        }
        uVar3 = 0;
        if (iVar2 != 0) {
          uVar3 = *(undefined4 *)(iVar2 + 4);
        }
        Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar3);
        uVar3 = 0;
        if (local_a4 != 0) {
          uVar3 = *(undefined4 *)(local_a4 + 4);
        }
        Ordinal_2264(*(undefined4 *)(*piVar12 + 4),uVar3);
        if (*pcVar5 != '\0') {
          Ordinal_1036(*piVar9);
          piVar9 = *(int **)(&DAT_00001c40 + param_1);
          if (piVar9 != (int *)0x0) {
            (**(code **)(*piVar9 + 4))(piVar9,1);
          }
          puVar6 = (undefined1 *)Ordinal_315(0x10);
          if (puVar6 == (undefined1 *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_00013c10(puVar6);
          }
          *(undefined4 *)(&DAT_00001c40 + param_1) = uVar3;
          *pcVar5 = '\0';
          *(undefined1 *)(param_1 + 0x1c62) = 0;
          *(char *)(param_1 + 0x1c63) = '\0';
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c34) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c34) + 4);
      }
      Ordinal_903(local_78,0,0,0xf0,0x140,uVar3,0,0,0xcc0020);
      *(char *)(param_1 + 0x1c66) = '\0';
    }
  }
  else {
    FUN_00014f18(param_1 + 0x4c,*(int *)(param_1 + 0x1c34));
    iVar2 = *(int *)(param_1 + 0x1c34);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 4);
    }
    Ordinal_903(local_78,0,0,0xf0,0x140,uVar3,0,0,0xcc0020);
  }
  Ordinal_271(auStack_7c);
  return;
}


// ==== FUN_00012e68 @ 00012e68  size=1040  callers=[]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00012e68(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  bool bVar14;
  undefined4 uStack0000000c;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  uStack0000000c = param_4;
  if (*(char *)(param_1 + 0xe2a) == '\0') {
    iVar2 = func_0x000181d8(_UNK_00013044,param_3,param_4);
    if (iVar2 == 0) {
      if ((*(char *)(param_1 + 0x1c62) == '\0') && (*(char *)(param_1 + 0x1c63) == '\0')) {
        cVar1 = func_0x000169ac(param_1 + 0x4c,param_3,param_4,&iStack_38,param_1 + 0x1c54,
                                param_1 + 0x1c60);
        if (cVar1 != '\0') {
          *(char *)(param_1 + 0x1c63) = '\x01';
          *(char *)(param_1 + 0x1c62) = '\x01';
          piVar9 = (int *)(param_1 + 0x1c34);
          uVar5 = 0;
          if (*(int *)(&DAT_00001c3c + param_1) != 0) {
            uVar5 = *(undefined4 *)(*(int *)(&DAT_00001c3c + param_1) + 4);
          }
          iVar2 = Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar5);
          uVar5 = 0;
          if (param_1 != -0x1c44) {
            uVar5 = *(undefined4 *)(param_1 + 0x1c48);
          }
          iVar13 = iStack_2c - iStack_34;
          iVar4 = *piVar9;
          bVar14 = iVar4 == 0;
          uVar11 = 0xff00;
          if (bVar14) {
            iVar4 = 0;
          }
          iVar8 = iStack_30 - iStack_38;
          if (!bVar14) {
            iVar4 = *(int *)(iVar4 + 4);
          }
          iVar15 = iStack_38;
          iVar16 = iStack_34;
          iVar17 = iVar13;
          Ordinal_906(iVar4);
          func_0x000171f4(param_1 + 0x4c,*piVar9,iStack_38,iStack_34,iVar13,uVar5,iVar15,iVar16,
                          iVar8,iVar17,uVar11);
          uVar5 = 0;
          if (iVar2 != 0) {
            uVar5 = *(undefined4 *)(iVar2 + 4);
          }
          Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar5);
          *(undefined4 *)(param_1 + 0x1c58) = param_3;
          *(undefined4 *)(param_1 + 0x1c5c) = uStack0000000c;
          iVar2 = 0x10;
          piVar9 = &iStack_38;
          puVar6 = (undefined1 *)(param_1 + 0x1c68);
          do {
            iVar4 = iVar2 + -1;
            *puVar6 = (char)*piVar9;
            bVar14 = 0 < iVar2;
            iVar2 = iVar4;
            piVar9 = (int *)((int)piVar9 + 1);
            puVar6 = puVar6 + 1;
          } while (iVar4 != 0 && bVar14);
          iVar2 = 0x10;
          piVar9 = &iStack_38;
          puVar6 = (undefined1 *)(param_1 + 0x1c78);
          do {
            iVar4 = iVar2 + -1;
            *puVar6 = (char)*piVar9;
            bVar14 = 0 < iVar2;
            iVar2 = iVar4;
            piVar9 = (int *)((int)piVar9 + 1);
            puVar6 = puVar6 + 1;
          } while (iVar4 != 0 && bVar14);
          uStack_40 = (undefined1)iStack_38;
          *(undefined1 *)(param_1 + 0x1c88) = uStack_40;
          uStack_3f = (undefined1)((uint)iStack_38 >> 8);
          *(undefined1 *)(param_1 + 0x1c89) = uStack_3f;
          uStack_3e = (undefined1)((uint)iStack_38 >> 0x10);
          *(undefined1 *)(param_1 + 0x1c8a) = uStack_3e;
          uStack_3d = (undefined1)((uint)iStack_38 >> 0x18);
          *(undefined1 *)(param_1 + 0x1c8b) = uStack_3d;
          uStack_3c = (undefined1)iStack_34;
          *(undefined1 *)(param_1 + 0x1c8c) = uStack_3c;
          uStack_3b = (undefined1)((uint)iStack_34 >> 8);
          *(undefined1 *)(param_1 + 0x1c8d) = uStack_3b;
          uStack_3a = (undefined1)((uint)iStack_34 >> 0x10);
          *(undefined1 *)(param_1 + 0x1c8e) = uStack_3a;
          uStack_39 = (undefined1)((uint)iStack_34 >> 0x18);
          *(undefined1 *)(param_1 + 0x1c8f) = uStack_39;
          Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
          Ordinal_267(*(undefined4 *)(param_1 + 0x20));
        }
      }
    }
    else {
      puVar10 = (undefined1 *)(param_1 + 0x4c);
      iVar2 = 0xdf4;
      puVar6 = puVar10;
      puVar7 = (undefined1 *)(param_1 + 0xe40);
      do {
        iVar4 = iVar2 + -1;
        *puVar7 = *puVar6;
        bVar14 = 0 < iVar2;
        iVar2 = iVar4;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar4 != 0 && bVar14);
      FUN_00017400((int)puVar10);
      uVar11 = *(undefined4 *)(_UNK_00013040 + 8);
      uVar12 = *(undefined4 *)(_UNK_00013040 + 0xc);
      piVar9 = (int *)(param_1 + 0x1c34);
      uVar5 = 0;
      if (*(int *)(&DAT_00001c3c + param_1) != 0) {
        uVar5 = *(undefined4 *)(*(int *)(&DAT_00001c3c + param_1) + 4);
      }
      iVar2 = Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar5);
      uVar5 = 0;
      if (param_1 != -0x1c44) {
        uVar5 = *(undefined4 *)(param_1 + 0x1c48);
      }
      if (*piVar9 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(*piVar9 + 4);
      }
      Ordinal_906(uVar3,0,0,uVar11,uVar12,uVar5,0,0,uVar11,uVar12,0xff00);
      FUN_00015110((int)puVar10,*piVar9);
      FUN_00016fc8((int)puVar10,*piVar9);
      *(undefined1 *)(param_1 + 0x1c66) = 1;
      Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
      Ordinal_267(*(undefined4 *)(param_1 + 0x20));
      uVar5 = 0;
      if (iVar2 != 0) {
        uVar5 = *(undefined4 *)(iVar2 + 4);
      }
      Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar5);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1c62) = 0;
    *(undefined1 *)(param_1 + 0x1c65) = 0;
    *(undefined1 *)(param_1 + 0x1c63) = 0;
    FUN_00013a70(param_1);
    FUN_000177a0((undefined1 *)(param_1 + 0x4c));
    FUN_00015870(param_1 + 0x4c);
    iVar2 = 0xdf4;
    puVar6 = (undefined1 *)(param_1 + 0xe40);
    puVar7 = (undefined1 *)(param_1 + 0x4c);
    do {
      iVar4 = iVar2 + -1;
      *puVar6 = *puVar7;
      bVar14 = 0 < iVar2;
      iVar2 = iVar4;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar4 != 0 && bVar14);
    Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
  }
  return;
}


// ==== FUN_00013280 @ 00013280  size=232  callers=[]

void FUN_00013280(int param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  
  uVar3 = param_3 - *(int *)(param_1 + 0x1c58);
  uVar4 = param_4 - *(int *)(param_1 + 0x1c5c);
  if (((*(char *)(param_1 + 0x1c62) != '\0') && (*(char *)(param_1 + 0x1c63) != '\0')) &&
     ((uVar2 = (int)uVar3 >> 0x1f, 1 < (int)((uVar3 ^ uVar2) - uVar2) ||
      (uVar3 = (int)uVar4 >> 0x1f, 1 < (int)((uVar4 ^ uVar3) - uVar3))))) {
    puVar5 = (undefined1 *)(param_1 + 0x1c78);
    iVar6 = 0x10;
    puVar8 = (undefined1 *)(param_1 + 0x1c68);
    do {
      iVar7 = iVar6 + -1;
      *puVar5 = *puVar8;
      bVar1 = 0 < iVar6;
      puVar5 = puVar5 + 1;
      iVar6 = iVar7;
      puVar8 = puVar8 + 1;
    } while (iVar7 != 0 && bVar1);
    Ordinal_101();
    *(int *)(param_1 + 0x1c58) = param_3;
    *(int *)(param_1 + 0x1c5c) = param_4;
    Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
    Ordinal_267(*(undefined4 *)(param_1 + 0x20));
  }
  return;
}


// ==== FUN_00013370 @ 00013370  size=860  callers=[]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00013370(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  short sVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int *piVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined4 uVar15;
  char acStack_3c [2];
  short sStack_3a;
  short asStack_38 [2];
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  if ((*(char *)(param_1 + 0x1c63) == '\0') && (*(char *)(param_1 + 0x1c65) == '\0')) {
    if ((*(char *)(param_1 + 0x1c62) == '\0') && (*(short *)(param_1 + 0xe28) == 1)) {
      sVar2 = *(short *)(param_1 + 0x1c54);
      cVar4 = *(char *)(param_1 + 0x1c60);
      iVar14 = param_1 + 0x4c;
      cVar3 = func_0x000169ac(iVar14,param_3,param_4,&uStack_34,&sStack_3a,acStack_3c);
      if (cVar3 != '\0') {
        if (((sVar2 == sStack_3a) && (cVar4 == acStack_3c[0])) && (*(short *)(param_1 + 0xe28) == 1)
           ) {
          asStack_38[0] = 0;
          cVar4 = func_0x00015a20(iVar14,asStack_38,param_1 + 0xe40);
          if (cVar4 != '\0') {
            FUN_00015870(iVar14);
            piVar12 = (int *)(param_1 + 0x1c34);
            uVar9 = 0;
            if (*(int *)(&DAT_00001c3c + param_1) != 0) {
              uVar9 = *(undefined4 *)(*(int *)(&DAT_00001c3c + param_1) + 4);
            }
            iVar5 = Ordinal_2264(*(undefined4 *)(*piVar12 + 4),uVar9);
            uVar9 = 0;
            if (param_1 != -0x1c44) {
              uVar9 = *(undefined4 *)(param_1 + 0x1c48);
            }
            if (*piVar12 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(undefined4 *)(*piVar12 + 4);
            }
            Ordinal_906(uVar6,uStack_34,uStack_30,0x1e,0x2a,uVar9,uStack_34,uStack_30,0x1e,0x2a,
                        0xff00);
            if (acStack_3c[0] == '\0') {
              FUN_000170dc(iVar14,*piVar12);
            }
            else {
              FUN_000176a8(iVar14,*piVar12,sStack_3a);
            }
            FUN_00015220(iVar14,*piVar12,asStack_38[0]);
            *(undefined1 *)(param_1 + 0x1c66) = 1;
            Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
            Ordinal_267(*(undefined4 *)(param_1 + 0x20));
            uVar9 = 0;
            if (iVar5 != 0) {
              uVar9 = *(undefined4 *)(iVar5 + 4);
            }
            Ordinal_2264(*(undefined4 *)(*piVar12 + 4),uVar9);
            uVar7 = FUN_000178dc(iVar14);
            if ((uVar7 & 0xff) != 0) {
              FUN_00013a34(param_1);
            }
          }
        }
        FUN_00015870(iVar14);
      }
    }
    else {
      iVar14 = func_0x000181d8(_UNK_000136d0,param_3,param_4);
      if (iVar14 != 0) {
        puVar13 = (undefined1 *)(param_1 + 0x4c);
        iVar14 = 0xdf4;
        puVar10 = puVar13;
        puVar11 = (undefined1 *)(param_1 + 0xe40);
        do {
          iVar5 = iVar14 + -1;
          *puVar11 = *puVar10;
          bVar1 = 0 < iVar14;
          iVar14 = iVar5;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        } while (iVar5 != 0 && bVar1);
        FUN_00017400((int)puVar13);
        uVar6 = *(undefined4 *)(_UNK_000136cc + 8);
        uVar15 = *(undefined4 *)(_UNK_000136cc + 0xc);
        piVar12 = (int *)(param_1 + 0x1c34);
        uVar9 = 0;
        if (*(int *)(&DAT_00001c3c + param_1) != 0) {
          uVar9 = *(undefined4 *)(*(int *)(&DAT_00001c3c + param_1) + 4);
        }
        iVar14 = Ordinal_2264(*(undefined4 *)(*piVar12 + 4),uVar9);
        uVar9 = 0;
        if (param_1 != -0x1c44) {
          uVar9 = *(undefined4 *)(param_1 + 0x1c48);
        }
        if (*piVar12 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined4 *)(*piVar12 + 4);
        }
        Ordinal_906(uVar8,0,0,uVar6,uVar15,uVar9,0,0,uVar6,uVar15,0xff00);
        FUN_00015110((int)puVar13,*piVar12);
        FUN_00016fc8((int)puVar13,*piVar12);
        *(undefined1 *)(param_1 + 0x1c66) = 1;
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
        Ordinal_267(*(undefined4 *)(param_1 + 0x20));
        *(undefined1 *)(param_1 + 0x1c66) = 0;
        uVar9 = 0;
        if (iVar14 != 0) {
          uVar9 = *(undefined4 *)(iVar14 + 4);
        }
        Ordinal_2264(*(undefined4 *)(*piVar12 + 4),uVar9);
      }
    }
  }
  return;
}


// ==== FUN_000136dc @ 000136dc  size=392  callers=[]

void FUN_000136dc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  short *psVar9;
  
  if (*(char *)(param_1 + 0x1c62) != '\0') {
    iVar4 = 0x10;
    puVar6 = (undefined1 *)(param_1 + 0x1c68);
    puVar7 = (undefined1 *)(param_1 + 0x1c78);
    do {
      iVar5 = iVar4 + -1;
      *puVar7 = *puVar6;
      bVar1 = 0 < iVar4;
      iVar4 = iVar5;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar5 != 0 && bVar1);
    Ordinal_101((undefined1 *)(param_1 + 0x1c68),param_3 - *(int *)(param_1 + 0x1c58),
                param_4 - *(int *)(param_1 + 0x1c5c));
    *(int *)(param_1 + 0x1c58) = param_3;
    *(int *)(param_1 + 0x1c5c) = param_4;
    psVar9 = (short *)(param_1 + 0x1c56);
    *psVar9 = -1;
    pcVar8 = (char *)(param_1 + 0x1c61);
    *pcVar8 = '\0';
    cVar2 = func_0x00015e30(param_1 + 0x4c,param_3,param_4,psVar9,pcVar8,
                            *(undefined2 *)(param_1 + 0x1c54),*(undefined1 *)(param_1 + 0x1c60),
                            param_1 + 0x1c90,param_1 + 0xe40);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x1c64) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x1c64) = 1;
    }
    *(undefined1 *)(param_1 + 0x1c65) = 1;
    Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
    Ordinal_267(*(undefined4 *)(param_1 + 0x20));
    if ((((*(char *)(param_1 + 0x1c64) != '\0') && (*pcVar8 == '\0')) && (-1 < *psVar9)) &&
       (uVar3 = FUN_000178dc(param_1 + 0x4c), (uVar3 & 0xff) != 0)) {
      FUN_00013a34(param_1);
    }
  }
  return;
}


// ==== FUN_00013864 @ 00013864  size=168  callers=[]

void FUN_00013864(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  puVar2 = (undefined4 *)Ordinal_177(auStack_14,DAT_00013910);
  uVar7 = *puVar2;
  puVar2 = (undefined4 *)Ordinal_177(auStack_18,DAT_0001390c);
  iVar3 = Ordinal_1760(param_1,*puVar2,uVar7,4);
  Ordinal_297(auStack_18);
  Ordinal_297(auStack_14);
  if (iVar3 == 6) {
    FUN_000177a0((undefined1 *)(param_1 + 0x4c));
    iVar3 = 0xdf4;
    puVar5 = (undefined1 *)(param_1 + 0xe40);
    puVar6 = (undefined1 *)(param_1 + 0x4c);
    do {
      iVar4 = iVar3 + -1;
      *puVar5 = *puVar6;
      bVar1 = 0 < iVar3;
      iVar3 = iVar4;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar4 != 0 && bVar1);
    Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
    Ordinal_267(*(undefined4 *)(param_1 + 0x20));
  }
  return;
}


// ==== FUN_00013914 @ 00013914  size=76  callers=[]

void FUN_00013914(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  iVar2 = 0xdf4;
  puVar4 = (undefined1 *)(param_1 + 0x4c);
  puVar5 = (undefined1 *)(param_1 + 0xe40);
  do {
    iVar3 = iVar2 + -1;
    *puVar4 = *puVar5;
    bVar1 = 0 < iVar2;
    iVar2 = iVar3;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar3 != 0 && bVar1);
  FUN_00015870(param_1 + 0x4c);
  Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
  Ordinal_267(*(undefined4 *)(param_1 + 0x20));
  return;
}


// ==== FUN_00013960 @ 00013960  size=92  callers=[]

void FUN_00013960(int param_1)

{
  undefined1 auStack_94 [144];
  
  FUN_00011000(auStack_94,(undefined2 *)(param_1 + 0xe24),(char *)(param_1 + 0xe26),param_1 + 0xe34,
               param_1 + 0xe30,0);
  Ordinal_1079(auStack_94);
  Ordinal_231(auStack_94);
  return;
}


// ==== FUN_000139bc @ 000139bc  size=48  callers=[]

void FUN_000139bc(void)

{
  undefined1 auStack_80 [124];
  
  Ordinal_77(auStack_80,100,0);
  Ordinal_1079(auStack_80);
  Ordinal_231(auStack_80);
  return;
}


// ==== FUN_000139ec @ 000139ec  size=64  callers=[]

void FUN_000139ec(void)

{
  Ordinal_493(DAT_00013a2c,DAT_00013a30,0,0,0,0,0,0,0,0);
  return;
}


// ==== FUN_00013a34 @ 00013a34  size=60  callers=[00013370, 000136dc]

void FUN_00013a34(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = Ordinal_875(*(undefined4 *)(param_1 + 0x20),1,100,0);
  *(undefined4 *)(param_1 + 0x1c98) = uVar1;
  *(undefined1 *)(param_1 + 0x1c9c) = 1;
  return;
}


// ==== FUN_00013a70 @ 00013a70  size=60  callers=[00011db8, 00012e68]

void FUN_00013a70(int param_1)

{
  if (*(char *)(param_1 + 0x1c9c) != '\0') {
    Ordinal_876(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c98));
    *(char *)(param_1 + 0x1c9c) = '\0';
  }
  return;
}


// ==== FUN_00013aac @ 00013aac  size=32  callers=[]

void FUN_00013aac(int param_1)

{
  Ordinal_1021();
  Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
  return;
}


// ==== FUN_00013acc @ 00013acc  size=284  callers=[00011c3c]

undefined1 * FUN_00013acc(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined2 extraout_r1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 auStack_20 [12];
  
  FUN_00014348(param_1);
  FUN_00014348(param_1 + 0x278);
  puVar2 = (undefined4 *)(param_1 + 0x4f0);
  iVar4 = 7;
  do {
    FUN_0001487c(puVar2);
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 0x3a;
  } while (iVar4 != 0);
  puVar3 = param_1 + 0xb48;
  iVar4 = 4;
  do {
    FUN_00014c4c(puVar3);
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + 0xa4;
  } while (iVar4 != 0);
  FUN_000146c8((int)param_1);
  FUN_00014e88((int)param_1);
  *(undefined4 *)(param_1 + 0xde0) = 0;
  param_1[0xdde] = 0;
  uVar1 = Ordinal_1053();
  (*(code *)*DAT_00013bc4)(5,uVar1);
  *(undefined2 *)(param_1 + 0xdd8) = extraout_r1;
  param_1[0xdda] = 1;
  *(undefined4 *)(param_1 + 0xde4) = 0xcc0020;
  *(undefined2 *)(param_1 + 0xde8) = 3;
  while (*(short *)(param_1 + 0x4ee) != 0) {
    FUN_000144a4((int)(param_1 + 0x278),auStack_20);
  }
  return param_1;
}


// ==== FUN_00013bec @ 00013bec  size=36  callers=[]

undefined1 * FUN_00013bec(undefined1 *param_1,uint param_2)

{
  FUN_00011db8(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00013c10 @ 00013c10  size=128  callers=[00011c3c, 00011ef0, 00013ff0, 000140e4]

void FUN_00013c10(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00013c90;
  param_1[1] = (char)((uint)DAT_00013c90 >> 8);
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


// ==== FUN_00013c94 @ 00013c94  size=104  callers=[]

undefined1 * FUN_00013c94(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00013d00;
  *param_1 = (char)DAT_00013d00;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_00013cfc;
  *param_1 = (char)DAT_00013cfc;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00013d04 @ 00013d04  size=52  callers=[00011c3c, 00013ff0, 000140e4]

void FUN_00013d04(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = Ordinal_628(param_2,2);
  uVar1 = Ordinal_873(uVar1,param_2);
  Ordinal_800(param_1,uVar1);
  return;
}


// ==== FUN_00013d3c @ 00013d3c  size=36  callers=[]

undefined1 * FUN_00013d3c(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)Ordinal_315(0x1e8);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_00013d98(puVar1);
  }
  return puVar1;
}


// ==== FUN_00013d98 @ 00013d98  size=60  callers=[00013d3c]

undefined1 * FUN_00013d98(undefined1 *param_1)

{
  undefined4 uVar1;
  
  Ordinal_103();
  Ordinal_48(param_1 + 0xe8);
  uVar1 = DAT_00013dd4;
  *param_1 = (char)DAT_00013dd4;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_00013dd8 @ 00013dd8  size=68  callers=[00013fcc]

void FUN_00013dd8(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00013e14;
  *param_1 = (char)DAT_00013e14;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_219(param_1 + 0xe8);
                    /* WARNING: Could not recover jumptable at 0x00018164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018168)(param_1);
  return;
}


// ==== FUN_00013e18 @ 00013e18  size=332  callers=[]

undefined4 FUN_00013e18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = Ordinal_1850();
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    uVar2 = FUN_00013f7c(param_1,65000);
    *(undefined4 *)(param_1 + 0x1c8) = uVar2;
    uVar2 = FUN_00013f7c(param_1,0x800b);
    *(undefined4 *)(param_1 + 0x1cc) = uVar2;
    uVar2 = FUN_00013f7c(param_1,0xfdea);
    *(undefined4 *)(param_1 + 0x1d0) = uVar2;
    uVar2 = FUN_00013f7c(param_1,65000);
    *(undefined4 *)(param_1 + 0x1d4) = uVar2;
    uVar2 = FUN_00013f7c(param_1,0x8003);
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


// ==== FUN_00013f64 @ 00013f64  size=24  callers=[]

bool FUN_00013f64(void)

{
  int iVar1;
  
  iVar1 = Ordinal_2093();
  return iVar1 != 0;
}


// ==== FUN_00013f7c @ 00013f7c  size=80  callers=[00013e18]

undefined4 FUN_00013f7c(undefined4 param_1,undefined4 param_2)

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


// ==== FUN_00013fcc @ 00013fcc  size=36  callers=[]

undefined1 * FUN_00013fcc(undefined1 *param_1,uint param_2)

{
  FUN_00013dd8(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00013ff0 @ 00013ff0  size=140  callers=[00011330, 00014f18, 00015110, 0001753c]

void FUN_00013ff0(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_00013c10((undefined1 *)&local_24);
  FUN_00013d04(&local_24,param_2);
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  Ordinal_906(uVar1,param_3,param_4,param_5,param_6,local_20,0,0,param_5,param_6,param_7);
  local_24 = DAT_0001407c;
  Ordinal_1040(&local_24);
  return;
}


// ==== FUN_00014080 @ 00014080  size=100  callers=[00011ef0]

void FUN_00014080(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 4);
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  Ordinal_906(uVar1,param_3,param_4,param_5,param_6,uVar2,0,0,param_5,param_6,param_7);
  return;
}


// ==== FUN_000140e4 @ 000140e4  size=232  callers=[]

void FUN_000140e4(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_2c [4];
  undefined4 local_28;
  
  Ordinal_76(auStack_2c);
  FUN_00013c10((undefined1 *)&local_3c);
  FUN_00013d04(&local_3c,param_2);
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
  local_3c = DAT_000141d0;
  Ordinal_1040(&local_3c);
  local_3c = DAT_000141cc;
  Ordinal_230(auStack_2c);
  return;
}


// ==== FUN_000141dc @ 000141dc  size=252  callers=[]

undefined4
FUN_000141dc(int param_1,int param_2,undefined4 param_3,undefined4 param_4,ushort param_5,
            undefined4 param_6,int param_7,ushort param_8)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if ((uint)param_5 != param_8 - 1) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xde0);
  if (iVar1 != 0) goto LAB_00014264;
  if (param_2 == param_7) {
    uVar2 = 1;
LAB_00014254:
    *(undefined4 *)(param_1 + 0xde0) = uVar2;
  }
  else {
    if ((param_2 == 0) || (param_2 == 3)) {
      if (param_7 != 2) {
        bVar3 = param_7 == 1;
LAB_0001424c:
        if (!bVar3) goto LAB_00014258;
      }
LAB_00014250:
      uVar2 = 2;
      goto LAB_00014254;
    }
    if ((param_2 == 2) || (param_2 == 1)) {
      if (param_7 != 0) {
        bVar3 = param_7 == 3;
        goto LAB_0001424c;
      }
      goto LAB_00014250;
    }
  }
LAB_00014258:
  iVar1 = *(int *)(param_1 + 0xde0);
  if (iVar1 == 0) {
    return 0;
  }
LAB_00014264:
  if (iVar1 != 2) {
    if ((iVar1 == 1) && (param_2 != param_7)) {
      return 0;
    }
    return 1;
  }
  if (param_2 != param_7) {
    if (param_2 == 3) {
      bVar3 = param_7 == 0;
    }
    else if (param_2 == 0) {
      bVar3 = param_7 == 3;
    }
    else if (param_2 == 2) {
      bVar3 = param_7 == 1;
    }
    else {
      if (param_2 != 1) {
        return 1;
      }
      bVar3 = param_7 == 2;
    }
    if (!bVar3) {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_000142e0 @ 000142e0  size=72  callers=[]

undefined4
FUN_000142e0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,ushort param_5,
            undefined4 param_6,ushort param_7)

{
  undefined4 uVar1;
  
  if (param_1 == param_4) {
    if (param_7 == 0xe) {
      if (param_5 != 2) {
        return 0;
      }
    }
    else if ((uint)param_5 != param_7 + 1) goto LAB_00014308;
    uVar1 = 1;
  }
  else {
LAB_00014308:
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_00014328 @ 00014328  size=32  callers=[00014348, 00014408, 000144a4, 00014590, 000146c8, 0001487c, 00014a04, 00014ad8, 00014c4c, 00014cec, 00014db4]

void FUN_00014328(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 7) = 1;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


// ==== FUN_00014348 @ 00014348  size=192  callers=[00013acc, 000177a0]

undefined1 * FUN_00014348(undefined1 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = (undefined4 *)(param_1 + 4);
  iVar5 = 0x34;
  do {
    FUN_00014328(puVar4);
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + 3;
  } while (iVar5 != 0);
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0x274) = 0;
  uVar3 = 0;
  *(undefined2 *)(param_1 + 0x276) = 0;
  do {
    uVar2 = 2;
    uVar1 = 2;
    do {
      iVar5 = uVar3 * 0xd + uVar1;
      *(short *)(param_1 + iVar5 * 0xc + -0x10) = (short)uVar2;
      *(uint *)(param_1 + iVar5 * 0xc + -0x14) = uVar3;
      *(short *)(param_1 + 0x276) = *(short *)(param_1 + 0x276) + 1;
      uVar2 = uVar1 + 1 & 0xffff;
      uVar1 = uVar1 + 1 & 0xffff;
    } while (uVar1 < 0xf);
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 < 4);
  return param_1;
}


// ==== FUN_00014408 @ 00014408  size=156  callers=[]

undefined1 * FUN_00014408(int param_1,undefined1 *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  undefined1 *puVar6;
  undefined4 auStack_14 [3];
  
  if (*(ushort *)(param_1 + 0x274) < *(ushort *)(param_1 + 0x276)) {
    uVar5 = *(ushort *)(param_1 + 0x274) + 1;
    *(ushort *)(param_1 + 0x274) = uVar5;
    iVar3 = 0xc;
    puVar2 = param_2;
    puVar6 = (undefined1 *)((uint)uVar5 * 0xc + param_1 + -8);
    do {
      iVar4 = iVar3 + -1;
      *puVar2 = *puVar6;
      bVar1 = 0 < iVar3;
      iVar3 = iVar4;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar4 != 0 && bVar1);
  }
  else {
    puVar2 = (undefined1 *)FUN_00014328(auStack_14);
    iVar3 = 0xc;
    puVar6 = param_2;
    do {
      iVar4 = iVar3 + -1;
      *puVar6 = *puVar2;
      bVar1 = 0 < iVar3;
      puVar2 = puVar2 + 1;
      iVar3 = iVar4;
      puVar6 = puVar6 + 1;
    } while (iVar4 != 0 && bVar1);
  }
  return param_2;
}


// ==== FUN_000144a4 @ 000144a4  size=236  callers=[00013acc, 00014e88, 00017400, 000177a0]

undefined1 * FUN_000144a4(int param_1,undefined1 *param_2)

{
  bool bVar1;
  short sVar2;
  undefined1 *puVar3;
  int iVar4;
  ushort uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 auStack_34 [16];
  undefined4 auStack_24 [3];
  
  sVar2 = *(short *)(param_1 + 0x276);
  if (sVar2 == 0) {
    puVar3 = (undefined1 *)FUN_00014328(auStack_24);
    iVar4 = 0xc;
    puVar6 = param_2;
    do {
      iVar7 = iVar4 + -1;
      *puVar6 = *puVar3;
      bVar1 = 0 < iVar4;
      puVar3 = puVar3 + 1;
      iVar4 = iVar7;
      puVar6 = puVar6 + 1;
    } while (iVar7 != 0 && bVar1);
  }
  else {
    puVar3 = (undefined1 *)(param_1 + 4);
    puVar6 = auStack_34;
    iVar4 = 0xc;
    do {
      iVar7 = iVar4 + -1;
      *puVar6 = *puVar3;
      bVar1 = 0 < iVar4;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
      iVar4 = iVar7;
    } while (iVar7 != 0 && bVar1);
    uVar5 = sVar2 - 1;
    *(ushort *)(param_1 + 0x276) = uVar5;
    Ordinal_1046((undefined1 *)(param_1 + 4),param_1 + 0x10,(uint)uVar5 * 0xc);
    puVar3 = (undefined1 *)FUN_00014328(auStack_24);
    iVar4 = 0xc;
    puVar6 = (undefined1 *)((uint)*(ushort *)(param_1 + 0x276) * 0xc + param_1 + 4);
    do {
      iVar7 = iVar4 + -1;
      *puVar6 = *puVar3;
      bVar1 = 0 < iVar4;
      puVar3 = puVar3 + 1;
      iVar4 = iVar7;
      puVar6 = puVar6 + 1;
    } while (iVar7 != 0 && bVar1);
    iVar4 = 0xc;
    puVar3 = param_2;
    puVar6 = auStack_34;
    do {
      iVar7 = iVar4 + -1;
      *puVar3 = *puVar6;
      bVar1 = 0 < iVar4;
      iVar4 = iVar7;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 != 0 && bVar1);
  }
  return param_2;
}


// ==== FUN_00014590 @ 00014590  size=224  callers=[00015a28, 00015e38]

undefined1 * FUN_00014590(int param_1,undefined1 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 auStack_30 [16];
  undefined4 auStack_20 [3];
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x276);
  if (uVar2 == 0) {
    puVar3 = (undefined1 *)FUN_00014328(auStack_20);
    iVar5 = 0xc;
    puVar6 = param_2;
    do {
      iVar4 = iVar5 + -1;
      *puVar6 = *puVar3;
      bVar1 = 0 < iVar5;
      puVar3 = puVar3 + 1;
      iVar5 = iVar4;
      puVar6 = puVar6 + 1;
    } while (iVar4 != 0 && bVar1);
  }
  else {
    iVar5 = 0xc;
    puVar3 = auStack_30;
    puVar6 = (undefined1 *)(uVar2 * 0xc + param_1 + -8);
    do {
      iVar4 = iVar5 + -1;
      *puVar3 = *puVar6;
      bVar1 = 0 < iVar5;
      iVar5 = iVar4;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar4 != 0 && bVar1);
    *(short *)(param_1 + 0x276) = (short)((uVar2 + 0xffff) * 0x10000 >> 0x10);
    puVar3 = (undefined1 *)FUN_00014328(auStack_20);
    iVar5 = 0xc;
    puVar6 = (undefined1 *)((uint)*(ushort *)(param_1 + 0x276) * 0xc + param_1 + 4);
    do {
      iVar4 = iVar5 + -1;
      *puVar6 = *puVar3;
      bVar1 = 0 < iVar5;
      puVar3 = puVar3 + 1;
      iVar5 = iVar4;
      puVar6 = puVar6 + 1;
    } while (iVar4 != 0 && bVar1);
    iVar5 = 0xc;
    puVar3 = param_2;
    puVar6 = auStack_30;
    do {
      iVar4 = iVar5 + -1;
      *puVar3 = *puVar6;
      bVar1 = 0 < iVar5;
      iVar5 = iVar4;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar4 != 0 && bVar1);
  }
  return param_2;
}


// ==== FUN_00014670 @ 00014670  size=88  callers=[000169b4, 000171fc]

int FUN_00014670(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(ushort *)(param_1 + 0x276) != 0) {
    iVar1 = 0;
    do {
      iVar3 = iVar1 * 0xc;
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
      if (*(char *)(iVar3 + param_1 + 10) != '\0') {
        iVar2 = iVar2 + 1;
      }
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x276));
  }
  return iVar2;
}


// ==== FUN_000146c8 @ 000146c8  size=276  callers=[00013acc, 000177a0]

void FUN_000146c8(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  short extraout_r1;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  short asStack_6027c [196606];
  undefined4 uStack_280;
  short asStack_27c [310];
  
  puVar3 = &uStack_280;
  iVar8 = 0x34;
  do {
    FUN_00014328(puVar3);
    iVar8 = iVar8 + -1;
    puVar3 = puVar3 + 3;
  } while (iVar8 != 0);
  Ordinal_535();
  Ordinal_1061();
  uVar7 = 0;
  do {
    do {
      uVar2 = Ordinal_1053();
      (*(code *)*DAT_000147dc)(0x34,uVar2);
    } while (asStack_27c[extraout_r1 * 6] != 0);
    puVar3 = &uStack_280 + extraout_r1 * 3;
    iVar8 = 0xc;
    puVar5 = (undefined1 *)(uVar7 * 0xc + param_1 + 4);
    do {
      iVar4 = iVar8 + -1;
      *(undefined1 *)puVar3 = *puVar5;
      bVar1 = 0 < iVar8;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      iVar8 = iVar4;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0 && bVar1);
    uVar6 = uVar7 + 1;
    uVar7 = uVar6 & 0xffff;
  } while ((uVar6 & 0xffff) < 0x34);
  uVar7 = 0;
  do {
    iVar8 = 0xc;
    puVar5 = (undefined1 *)(uVar7 * 0xc + param_1 + 4);
    puVar3 = &uStack_280 + uVar7 * 3;
    do {
      iVar4 = iVar8 + -1;
      *puVar5 = *(undefined1 *)puVar3;
      bVar1 = 0 < iVar8;
      iVar8 = iVar4;
      puVar5 = puVar5 + 1;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    } while (iVar4 != 0 && bVar1);
    uVar7 = uVar7 + 1 & 0xffff;
  } while (uVar7 < 0x34);
  return;
}


// ==== FUN_000147e0 @ 000147e0  size=88  callers=[00017400]

void FUN_000147e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  uStack_8 = param_3;
  uStack_c = param_2;
  if (*(ushort *)(param_1 + 0x276) < 0x34) {
    puVar2 = &uStack_c;
    puVar3 = (undefined1 *)((uint)*(ushort *)(param_1 + 0x276) * 0xc + param_1 + 4);
    iVar4 = 0xc;
    do {
      iVar5 = iVar4 + -1;
      *puVar3 = *(undefined1 *)puVar2;
      bVar1 = 0 < iVar4;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar3 = puVar3 + 1;
      iVar4 = iVar5;
    } while (iVar5 != 0 && bVar1);
    *(short *)(param_1 + 0x276) = *(short *)(param_1 + 0x276) + 1;
  }
  return;
}


// ==== FUN_00014838 @ 00014838  size=68  callers=[00015a28, 00015e38]

void FUN_00014838(int param_1)

{
  if (*(ushort *)(param_1 + 0x276) != 0) {
    *(undefined1 *)((uint)*(ushort *)(param_1 + 0x276) * 0xc + param_1 + -1) = 0;
    *(undefined1 *)((uint)*(ushort *)(param_1 + 0x276) * 0xc + param_1 + -2) = 1;
  }
  return;
}


// ==== FUN_0001487c @ 0001487c  size=60  callers=[00013acc]

undefined4 * FUN_0001487c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x13;
  puVar1 = param_1;
  do {
    FUN_00014328(puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 3;
  } while (iVar2 != 0);
  *(undefined1 *)((int)param_1 + 0xe6) = 0;
  *(undefined2 *)(param_1 + 0x39) = 0;
  return param_1;
}


// ==== FUN_000148b8 @ 000148b8  size=96  callers=[00014e88, 00015e38]

void FUN_000148b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  uStack_8 = param_3;
  uStack_c = param_2;
  if (*(ushort *)(param_1 + 0xe4) < 0x13) {
    puVar2 = &uStack_c;
    puVar3 = (undefined1 *)((uint)*(ushort *)(param_1 + 0xe4) * 0xc + param_1);
    iVar4 = 0xc;
    do {
      iVar5 = iVar4 + -1;
      *puVar3 = *(undefined1 *)puVar2;
      bVar1 = 0 < iVar4;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar3 = puVar3 + 1;
      iVar4 = iVar5;
    } while (iVar5 != 0 && bVar1);
    *(undefined1 *)((uint)*(ushort *)(param_1 + 0xe4) * 0xc + param_1 + 7) = param_5;
    *(short *)(param_1 + 0xe4) = *(short *)(param_1 + 0xe4) + 1;
  }
  return;
}


// ==== FUN_00014950 @ 00014950  size=84  callers=[00011ef0, 000154f8, 0001564c, 00015798, 00015e38, 000169b4, 000176a8]

int FUN_00014950(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(short *)(param_1 + 0xe4) + -1;
  iVar1 = iVar2 * 0x10000 >> 0x10;
  while ((-1 < iVar1 && (*(char *)(iVar1 * 0xc + param_1 + 7) == '\0'))) {
    iVar2 = (iVar1 + -1) * 0x10000 >> 0x10;
    iVar1 = iVar2;
  }
  return (*(short *)(param_1 + 0xe4) - iVar2) + -1;
}


// ==== FUN_000149a4 @ 000149a4  size=96  callers=[00015e38]

int FUN_000149a4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xe6) == '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (*(ushort *)(param_1 + 0xe4) != 0) {
      iVar2 = 0;
      do {
        iVar3 = iVar2 * 0xc;
        iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
        if (*(char *)(iVar3 + param_1 + 8) != '\0') {
          iVar1 = iVar1 + 1;
        }
      } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0xe4));
    }
  }
  return iVar1;
}


// ==== FUN_00014a04 @ 00014a04  size=212  callers=[]

undefined1 * FUN_00014a04(int param_1,undefined1 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 auStack_2c [16];
  undefined4 auStack_1c [3];
  
  uVar2 = (uint)*(ushort *)(param_1 + 0xe4);
  if (uVar2 == 0) {
    puVar3 = (undefined1 *)FUN_00014328(auStack_1c);
    iVar5 = 0xc;
    puVar6 = param_2;
    do {
      iVar4 = iVar5 + -1;
      *puVar6 = *puVar3;
      bVar1 = 0 < iVar5;
      puVar3 = puVar3 + 1;
      iVar5 = iVar4;
      puVar6 = puVar6 + 1;
    } while (iVar4 != 0 && bVar1);
  }
  else {
    iVar5 = 0xc;
    puVar3 = auStack_2c;
    puVar6 = (undefined1 *)(uVar2 * 0xc + param_1 + -0xc);
    do {
      iVar4 = iVar5 + -1;
      *puVar3 = *puVar6;
      bVar1 = 0 < iVar5;
      iVar5 = iVar4;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar4 != 0 && bVar1);
    *(short *)(param_1 + 0xe4) = (short)((uVar2 + 0xffff) * 0x10000 >> 0x10);
    puVar3 = (undefined1 *)FUN_00014328(auStack_1c);
    iVar5 = 0xc;
    puVar6 = (undefined1 *)((uint)*(ushort *)(param_1 + 0xe4) * 0xc + param_1);
    do {
      iVar4 = iVar5 + -1;
      *puVar6 = *puVar3;
      bVar1 = 0 < iVar5;
      puVar3 = puVar3 + 1;
      iVar5 = iVar4;
      puVar6 = puVar6 + 1;
    } while (iVar4 != 0 && bVar1);
    iVar5 = 0xc;
    puVar3 = param_2;
    puVar6 = auStack_2c;
    do {
      iVar4 = iVar5 + -1;
      *puVar3 = *puVar6;
      bVar1 = 0 < iVar5;
      iVar5 = iVar4;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar4 != 0 && bVar1);
  }
  return param_2;
}


// ==== FUN_00014ad8 @ 00014ad8  size=248  callers=[00015a28, 00015e38]

undefined1 * FUN_00014ad8(int param_1,undefined1 *param_2,short param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStack_38 [16];
  undefined4 auStack_28 [3];
  
  uVar6 = (uint)*(ushort *)(param_1 + 0xe4);
  if (uVar6 != 0) {
    iVar4 = (int)param_3;
    if (iVar4 <= (int)(uVar6 - 1)) {
      puVar2 = (undefined1 *)(iVar4 * 0xc + param_1);
      puVar3 = auStack_38;
      iVar5 = 0xc;
      puVar7 = puVar2;
      do {
        iVar8 = iVar5 + -1;
        *puVar3 = *puVar7;
        bVar1 = 0 < iVar5;
        puVar3 = puVar3 + 1;
        iVar5 = iVar8;
        puVar7 = puVar7 + 1;
      } while (iVar8 != 0 && bVar1);
      if (iVar4 < (int)(uVar6 - 1)) {
        Ordinal_1046(puVar2,(iVar4 + 1) * 0xc + param_1,uVar6 * 0xc + (iVar4 + 1) * -0xc);
      }
      *(short *)(param_1 + 0xe4) = *(short *)(param_1 + 0xe4) + -1;
      puVar3 = (undefined1 *)FUN_00014328(auStack_28);
      iVar4 = 0xc;
      puVar7 = (undefined1 *)((uint)*(ushort *)(param_1 + 0xe4) * 0xc + param_1);
      do {
        iVar5 = iVar4 + -1;
        *puVar7 = *puVar3;
        bVar1 = 0 < iVar4;
        puVar3 = puVar3 + 1;
        iVar4 = iVar5;
        puVar7 = puVar7 + 1;
      } while (iVar5 != 0 && bVar1);
      iVar4 = 0xc;
      puVar3 = param_2;
      puVar7 = auStack_38;
      do {
        iVar5 = iVar4 + -1;
        *puVar3 = *puVar7;
        bVar1 = 0 < iVar4;
        iVar4 = iVar5;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar5 != 0 && bVar1);
      return param_2;
    }
  }
  puVar3 = (undefined1 *)FUN_00014328(auStack_28);
  iVar4 = 0xc;
  puVar7 = param_2;
  do {
    iVar5 = iVar4 + -1;
    *puVar7 = *puVar3;
    bVar1 = 0 < iVar4;
    puVar3 = puVar3 + 1;
    iVar4 = iVar5;
    puVar7 = puVar7 + 1;
  } while (iVar5 != 0 && bVar1);
  return param_2;
}


// ==== FUN_00014bd0 @ 00014bd0  size=124  callers=[00015e38]

undefined1 * FUN_00014bd0(int param_1,undefined1 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  iVar3 = *(short *)(param_1 + 0xe4) + -1;
  iVar2 = iVar3 * 0x10000 >> 0x10;
  while ((-1 < iVar2 && (*(char *)(iVar2 * 0xc + param_1 + 8) != '\0'))) {
    iVar3 = (iVar2 + -1) * 0x10000 >> 0x10;
    iVar2 = iVar3;
  }
  iVar2 = 0xc;
  puVar4 = param_2;
  puVar5 = (undefined1 *)(((short)iVar3 + 1) * 0xc + param_1);
  do {
    iVar3 = iVar2 + -1;
    *puVar4 = *puVar5;
    bVar1 = 0 < iVar2;
    iVar2 = iVar3;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar3 != 0 && bVar1);
  return param_2;
}


// ==== FUN_00014c4c @ 00014c4c  size=60  callers=[00013acc]

undefined1 * FUN_00014c4c(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 4);
  iVar2 = 0xd;
  do {
    FUN_00014328(puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 3;
  } while (iVar2 != 0);
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0xa0) = 0;
  return param_1;
}


// ==== FUN_00014c90 @ 00014c90  size=92  callers=[]

void FUN_00014c90(int param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  
  if (*(ushort *)(param_1 + 0xa0) < 0xd) {
    puVar2 = &stack0x00000004;
    puVar3 = (undefined1 *)((uint)*(ushort *)(param_1 + 0xa0) * 0xc + param_1 + 4);
    iVar4 = 0xc;
    do {
      iVar5 = iVar4 + -1;
      *puVar3 = *puVar2;
      bVar1 = 0 < iVar4;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      iVar4 = iVar5;
    } while (iVar5 != 0 && bVar1);
    *(undefined1 *)((uint)*(ushort *)(param_1 + 0xa0) * 0xc + param_1 + 0xb) = 0;
    *(short *)(param_1 + 0xa0) = *(short *)(param_1 + 0xa0) + 1;
  }
  return;
}


// ==== FUN_00014cec @ 00014cec  size=200  callers=[00015220]

char * FUN_00014cec(int param_1,char *param_2)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 auStack_14 [3];
  
  uVar5 = (uint)*(ushort *)(param_1 + 0xa0);
  if (uVar5 == 0) {
    pcVar2 = (char *)FUN_00014328(auStack_14);
    iVar4 = 0xc;
    pcVar6 = param_2;
    do {
      iVar3 = iVar4 + -1;
      *pcVar6 = *pcVar2;
      bVar1 = 0 < iVar4;
      pcVar2 = pcVar2 + 1;
      iVar4 = iVar3;
      pcVar6 = pcVar6 + 1;
    } while (iVar3 != 0 && bVar1);
  }
  else {
    pcVar2 = (char *)(uVar5 * 0xc + param_1);
    if (*pcVar2 == '\0') {
      iVar4 = 0xc;
      pcVar6 = param_2;
      pcVar2 = pcVar2 + -8;
      do {
        iVar3 = iVar4 + -1;
        *pcVar6 = *pcVar2;
        bVar1 = 0 < iVar4;
        iVar4 = iVar3;
        pcVar6 = pcVar6 + 1;
        pcVar2 = pcVar2 + 1;
      } while (iVar3 != 0 && bVar1);
    }
    else if (uVar5 < 2) {
      pcVar2 = (char *)FUN_00014328(auStack_14);
      iVar4 = 0xc;
      pcVar6 = param_2;
      do {
        iVar3 = iVar4 + -1;
        *pcVar6 = *pcVar2;
        bVar1 = 0 < iVar4;
        pcVar2 = pcVar2 + 1;
        iVar4 = iVar3;
        pcVar6 = pcVar6 + 1;
      } while (iVar3 != 0 && bVar1);
    }
    else {
      iVar4 = 0xc;
      pcVar6 = param_2;
      pcVar2 = pcVar2 + -0x14;
      do {
        iVar3 = iVar4 + -1;
        *pcVar6 = *pcVar2;
        bVar1 = 0 < iVar4;
        iVar4 = iVar3;
        pcVar6 = pcVar6 + 1;
        pcVar2 = pcVar2 + 1;
      } while (iVar3 != 0 && bVar1);
    }
  }
  return param_2;
}


// ==== FUN_00014db4 @ 00014db4  size=212  callers=[00015e38]

undefined1 * FUN_00014db4(int param_1,undefined1 *param_2,short param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 auStack_2c [3];
  
  uVar9 = (uint)*(ushort *)(param_1 + 0xa0);
  if (uVar9 != 0) {
    iVar4 = (int)param_3;
    if (iVar4 <= (int)(uVar9 - 1)) {
      iVar6 = iVar4 * 0xc + param_1;
      puVar2 = (undefined1 *)(iVar6 + 4);
      iVar5 = 0xc;
      puVar3 = puVar2;
      puVar7 = auStack_2c;
      do {
        iVar8 = iVar5 + -1;
        *(undefined1 *)puVar7 = *puVar3;
        bVar1 = 0 < iVar5;
        iVar5 = iVar8;
        puVar3 = puVar3 + 1;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      } while (iVar8 != 0 && bVar1);
      if (iVar4 < (int)(uVar9 - 1)) {
        Ordinal_1046(puVar2,iVar6 + 0x10,uVar9 * 0xc + (iVar4 + 1) * -0xc);
      }
      *(short *)(param_1 + 0xa0) = *(short *)(param_1 + 0xa0) + -1;
      iVar4 = 0xc;
      puVar3 = param_2;
      puVar7 = auStack_2c;
      do {
        iVar5 = iVar4 + -1;
        *puVar3 = *(undefined1 *)puVar7;
        bVar1 = 0 < iVar4;
        iVar4 = iVar5;
        puVar3 = puVar3 + 1;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      } while (iVar5 != 0 && bVar1);
      return param_2;
    }
  }
  puVar3 = (undefined1 *)FUN_00014328(auStack_2c);
  iVar4 = 0xc;
  puVar2 = param_2;
  do {
    iVar5 = iVar4 + -1;
    *puVar2 = *puVar3;
    bVar1 = 0 < iVar4;
    puVar3 = puVar3 + 1;
    iVar4 = iVar5;
    puVar2 = puVar2 + 1;
  } while (iVar5 != 0 && bVar1);
  return param_2;
}


// ==== FUN_00014e88 @ 00014e88  size=144  callers=[00013acc, 000177a0]

void FUN_00014e88(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_24 [12];
  
  iVar3 = 0;
  do {
    if (-1 < iVar3) {
      iVar2 = 0;
      bVar4 = iVar3 == 0;
      do {
        puVar1 = (undefined4 *)FUN_000144a4(param_1,auStack_24);
        FUN_000148b8(iVar3 * 0xe8 + param_1 + 0x4f0,*puVar1,puVar1[1],puVar1[2],!bVar4);
        iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
        bVar4 = iVar2 == iVar3;
      } while (iVar2 <= iVar3);
    }
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
  } while (iVar3 < 7);
  return;
}


// ==== FUN_00014f18 @ 00014f18  size=500  callers=[00011ef0]

void FUN_00014f18(int param_1,int param_2)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0xdde) == '\0') {
    FUN_00015110(param_1,param_2);
    FUN_00016fc8(param_1,param_2);
    FUN_000151e4(param_1,param_2);
    uVar2 = 0;
    uVar5 = 0;
    do {
      FUN_00015418(param_1,param_2,uVar5 * 0xe8 + param_1 + 0x4f0,uVar2 * 0x22 + 3,0x41);
      uVar2 = uVar5 + 1 & 0xffff;
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < 7);
  }
  else {
    iVar3 = *(short *)(param_1 + 0xdec) + 0x10;
    *(short *)(param_1 + 0xdec) = (short)iVar3;
    piVar4 = (int *)((*(short *)(param_1 + 0xdee) + 0xf1) * 0xc + *(short *)(param_1 + 0xdf0) * 0xa4
                    + param_1);
    FUN_0001753c(param_1,param_2,*piVar4,piVar4[1],piVar4[2],(int)*(short *)(param_1 + 0xdea),
                 iVar3 * 0x10000 >> 0x10);
    iVar3 = *(short *)(param_1 + 0xdee) + 1;
    *(short *)(param_1 + 0xdee) = (short)iVar3;
    psVar1 = DAT_0001510c;
    if (iVar3 * 0x10000 >> 0x10 == 0xd) {
      *(undefined2 *)(param_1 + 0xdee) = 0;
      *(short *)(param_1 + 0xdf0) = *(short *)(param_1 + 0xdf0) + -1;
      *(short *)(param_1 + 0xdea) = *(short *)(param_1 + 0xdea) + -0x22;
      *(short *)(param_1 + 0xdec) = psVar1[2] + -0x10;
    }
    if (*(short *)(param_1 + 0xdf0) < 0) {
      *(undefined2 *)(param_1 + 0xdf0) = 3;
    }
    if (*(short *)(param_1 + 0xdea) < 0) {
      *(short *)(param_1 + 0xdea) = *psVar1 + 0x66;
      *(short *)(param_1 + 0xdec) = psVar1[2] + -0x10;
    }
    FUN_00013ff0(param_2,0xcc,10,100,0xdc,0x29,0xff00);
  }
  return;
}


// ==== FUN_00015110 @ 00015110  size=208  callers=[00012e68, 00013370, 00014f18]

void FUN_00015110(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = DAT_000151e0;
  if (*(short *)(param_1 + 0x276) != 0) {
    FUN_00013ff0(param_2,*(short *)(param_1 + 0xdd8) + 0xfa,*DAT_000151e0,DAT_000151e0[1],0x1e,0x2a,
                 0xff00);
    if (5 < *(ushort *)(param_1 + 0x276)) {
      FUN_00013ff0(param_2,*(short *)(param_1 + 0xdd8) + 0xfa,*piVar1 + 3,piVar1[1],0x1e,0x2a,0xff00
                  );
    }
    if (0xb < *(ushort *)(param_1 + 0x276)) {
      FUN_00013ff0(param_2,*(short *)(param_1 + 0xdd8) + 0xfa,*piVar1 + 6,piVar1[1],0x1e,0x2a,0xff00
                  );
    }
  }
  return;
}


// ==== FUN_000151e4 @ 000151e4  size=60  callers=[00014f18]

void FUN_000151e4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_00015220(param_1,param_2,(short)iVar1);
    iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
  } while (iVar1 < 4);
  return;
}


// ==== FUN_00015220 @ 00015220  size=208  callers=[00013370, 000151e4, 000171fc]

void FUN_00015220(int param_1,int param_2,short param_3)

{
  int iVar1;
  int *piVar2;
  char acStack_1c [12];
  
  iVar1 = param_3 * 0xa4 + param_1;
  if ((*(short *)(iVar1 + 0xbe8) != 0) &&
     ((*(short *)(iVar1 + 0xbe8) != 1 || (*(char *)(iVar1 + 0xb54) == '\0')))) {
    piVar2 = (int *)FUN_00014cec(iVar1 + 0xb48,acStack_1c);
    FUN_0001753c(param_1,param_2,*piVar2,piVar2[1],piVar2[2],param_3 * 0x22 + *DAT_000152f0,
                 DAT_000152f0[1]);
  }
  return;
}


// ==== FUN_000152f4 @ 000152f4  size=220  callers=[00016e08]

void FUN_000152f4(int param_1,int param_2,int param_3,uint param_4,ushort param_5)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  psVar1 = DAT_000153d0;
  iVar3 = 0;
  if (*(short *)(param_3 + 0xe4) != 0) {
    iVar4 = 0;
    do {
      piVar2 = (int *)(iVar4 * 0xc + param_3);
      if ((char)piVar2[2] != '\0') {
        FUN_0001753c(param_1,param_2,*piVar2,piVar2[1],piVar2[2],param_4 & 0xffff,
                     (*psVar1 + 4) * (int)(short)iVar3 + (uint)param_5);
        iVar3 = ((short)iVar3 + 1) * 0x10000 >> 0x10;
      }
      iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
    } while (iVar4 < (int)(uint)*(ushort *)(param_3 + 0xe4));
  }
  return;
}


// ==== FUN_000153d4 @ 000153d4  size=68  callers=[]

void FUN_000153d4(int param_1,int param_2,int param_3)

{
  FUN_00015418(param_1,param_2,(short)param_3 * 0xe8 + param_1 + 0x4f0,param_3 * 0x22 + 3,0x41);
  return;
}


// ==== FUN_00015418 @ 00015418  size=220  callers=[00014f18, 000153d4]

void FUN_00015418(int param_1,int param_2,int param_3,uint param_4,ushort param_5)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  
  psVar1 = DAT_000154f4;
  sVar4 = 0;
  if (*(short *)(param_3 + 0xe4) != 0) {
    iVar3 = 0;
    do {
      piVar2 = (int *)(iVar3 * 0xc + param_3);
      if ((char)piVar2[2] == '\0') {
        FUN_0001753c(param_1,param_2,*piVar2,piVar2[1],piVar2[2],param_4 & 0xffff,
                     (int)*psVar1 * (int)sVar4 + iVar3 * 4 + (uint)param_5);
      }
      iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
      if (*(char *)((int)piVar2 + 7) == '\0') {
        sVar4 = sVar4 + 1;
      }
    } while (iVar3 < (int)(uint)*(ushort *)(param_3 + 0xe4));
  }
  return;
}


// ==== FUN_000154f8 @ 000154f8  size=336  callers=[00015e38]

undefined1 * FUN_000154f8(int param_1,undefined1 *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar4 = (short)param_3 * 0xe8;
  iVar3 = iVar4 + param_1;
  local_28 = 0;
  local_24 = 0;
  iVar2 = FUN_00014950(iVar3 + 0x4f0);
  sVar1 = *(short *)(iVar3 + 0x5d4);
  iVar3 = (sVar1 - iVar2) * 4 + 0x41;
  iVar2 = (sVar1 - iVar2) * 0x10000 >> 0x10;
  if (iVar2 < sVar1) {
    do {
      if (*(char *)(iVar2 * 0xc + iVar4 + param_1 + 0x4f7) == '\0') {
        if (iVar2 == ((int)sVar1 - (int)*(short *)(param_1 + 0xddc)) * 0x10000 >> 0x10) {
          local_28 = (param_3 * 0x22 + 3) * 0x10000 >> 0x10;
          local_24 = (int)(short)iVar3;
          break;
        }
        iVar3 = *DAT_000155dc + iVar3 + 4;
      }
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < sVar1);
  }
  *param_2 = (undefined1)local_28;
  param_2[1] = local_28._1_1_;
  param_2[2] = local_28._2_1_;
  param_2[3] = local_28._3_1_;
  param_2[4] = (undefined1)local_24;
  param_2[5] = local_24._1_1_;
  param_2[6] = local_24._2_1_;
  param_2[7] = local_24._3_1_;
  return param_2;
}


// ==== FUN_0001564c @ 0001564c  size=328  callers=[]

void FUN_0001564c(int param_1,int param_2,short param_3,char param_4)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  
  iVar6 = param_3 * 0xe8 + param_1;
  iVar3 = FUN_00014950(iVar6 + 0x4f0);
  uVar2 = *(ushort *)(iVar6 + 0x5d4);
  iVar3 = ((int)(short)uVar2 - (int)(short)iVar3) * 0x10000;
  sVar1 = (short)((uint)iVar3 >> 0x10);
  iVar3 = (iVar3 >> 0x10) * 4 + 0x41;
  sVar7 = sVar1;
  if (param_4 != '\0') {
    sVar7 = (uVar2 - *(short *)(param_1 + 0xddc)) + -1;
  }
  iVar5 = (int)sVar1;
  if (iVar5 < (int)(uint)uVar2) {
    do {
      iVar4 = iVar5 * 0xc + param_3 * 0xe8 + param_1;
      if (*(char *)(iVar4 + 0x4f7) == '\0') {
        if (sVar7 <= iVar5) {
          FUN_0001753c(param_1,param_2,*(int *)(iVar4 + 0x4f0),*(undefined4 *)(iVar4 + 0x4f4),
                       *(undefined4 *)(iVar4 + 0x4f8),(uint)(ushort)(param_3 * 0x22 + 3),
                       (int)(short)iVar3);
        }
        iVar3 = *DAT_00015794 + iVar3 + 4;
      }
      iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
    } while (iVar5 < (int)(uint)*(ushort *)(iVar6 + 0x5d4));
  }
  return;
}


// ==== FUN_00015798 @ 00015798  size=212  callers=[000171fc]

void FUN_00015798(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  
  FUN_00014950(param_3);
  piVar1 = (int *)(((((int)*(short *)(param_3 + 0xe4) - (int)*(short *)(param_1 + 0xddc)) + -1) *
                    0x10000 >> 0x10) * 0xc + param_3);
  if (((char)piVar1[2] == '\0') && (*(short *)(param_1 + 0xddc) != *(short *)(param_3 + 0xe4))) {
    if (*(char *)((int)piVar1 + 7) == '\0') {
      param_5 = param_5 - *DAT_0001586c;
    }
    FUN_0001753c(param_1,param_2,*piVar1,piVar1[1],
                 CONCAT13(*(undefined1 *)((int)piVar1 + 0xb),
                          CONCAT12(*(undefined1 *)((int)piVar1 + 10),
                                   CONCAT11(*(undefined1 *)((int)piVar1 + 9),(char)piVar1[2]))),
                 param_4,param_5 + -4);
  }
  return;
}


// ==== FUN_00015870 @ 00015870  size=432  callers=[00011c3c, 00012e68, 00013370, 00013914, 00015a28, 00015e38]

void FUN_00015870(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x278) == '\0') {
    iVar1 = 0;
    do {
      if (*(char *)(iVar1 * 0xe8 + param_1 + 0x5d6) != '\0') {
        iVar3 = (short)iVar1 * 0xe8;
        iVar1 = iVar3 + param_1;
        *(undefined1 *)(iVar1 + 0x5d6) = 0;
        if (*(short *)(iVar1 + 0x5d4) == 0) {
          return;
        }
        iVar2 = 0;
        do {
          *(undefined1 *)((iVar2 + 0x6a) * 0xc + iVar3 + param_1) = 0;
          iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
        } while (iVar2 < (int)(uint)*(ushort *)(iVar1 + 0x5d4));
        return;
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < 7);
    iVar1 = 0;
    do {
      if (*(char *)(iVar1 * 0xa4 + param_1 + 0xb48) != '\0') {
        iVar3 = (short)iVar1 * 0xa4;
        iVar1 = iVar3 + param_1;
        *(undefined1 *)(iVar1 + 0xb48) = 0;
        if (*(short *)(iVar1 + 0xbe8) == 0) {
          return;
        }
        iVar2 = 0;
        do {
          *(undefined1 *)(iVar2 * 0xc + iVar3 + param_1 + 0xb54) = 0;
          iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
        } while (iVar2 < (int)(uint)*(ushort *)(iVar1 + 0xbe8));
        return;
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < 4);
  }
  else {
    *(undefined1 *)(param_1 + 0x278) = 0;
    if (*(short *)(param_1 + 0x4ee) != 0) {
      iVar1 = 0;
      do {
        *(undefined1 *)(iVar1 * 0xc + param_1 + 0x284) = 0;
        iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
      } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x4ee));
    }
  }
  return;
}


// ==== FUN_00015a28 @ 00015a28  size=1032  callers=[]

undefined4 FUN_00015a28(undefined1 *param_1,short *param_2,undefined1 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  short sVar9;
  short *psStack00000000;
  undefined1 *puStack00000004;
  int iStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  
  sVar9 = 0;
  psStack00000000 = param_2;
  puStack00000004 = param_3;
  do {
    *psStack00000000 = sVar9;
    if (param_1[0x278] == '\0') {
      iStack_3c = 0;
      do {
        iVar3 = iStack_3c * 0xe8;
        if (param_1[iVar3 + 0x5d6] != '\0') {
          iVar5 = sVar9 * 0xa4;
          if (*(ushort *)(param_1 + iVar5 + 0xbe8) == 0) {
            if (*(short *)(param_1 +
                          (uint)*(ushort *)(param_1 + iVar3 + 0x5d4) * 0xc + iVar3 + 0x4e8) == 0xe)
            {
LAB_00015d70:
              iVar3 = 0xdf4;
              puVar4 = puStack00000004;
              puVar8 = param_1;
              do {
                iVar5 = iVar3 + -1;
                *puVar4 = *puVar8;
                bVar1 = 0 < iVar3;
                iVar3 = iVar5;
                puVar4 = puVar4 + 1;
                puVar8 = puVar8 + 1;
              } while (iVar5 != 0 && bVar1);
              puVar4 = FUN_00014ad8((int)(param_1 + (short)iStack_3c * 0xe8 + 0x4f0),
                                    (undefined1 *)&uStack_34,
                                    *(short *)(param_1 + (short)iStack_3c * 0xe8 + 0x5d4) + -1);
              iVar3 = 0xc;
              puVar6 = &uStack_34;
              do {
                iVar5 = iVar3 + -1;
                *(undefined1 *)puVar6 = *puVar4;
                bVar1 = 0 < iVar3;
                puVar4 = puVar4 + 1;
                iVar3 = iVar5;
                puVar6 = (undefined4 *)((int)puVar6 + 1);
              } while (iVar5 != 0 && bVar1);
              uStack_2c = uStack_2c & 0xffffff00;
              uStack_30._0_3_ = CONCAT12(1,(short)uStack_30);
              uStack_30 = (uint)(uint3)uStack_30;
              func_0x00014c88(param_1 + sVar9 * 0xa4 + 0xb48,uStack_34,uStack_30,uStack_2c);
              FUN_00015870((int)param_1);
              func_0x00014918(param_1 + (short)iStack_3c * 0xe8 + 0x4f0);
              return 1;
            }
          }
          else {
            puVar6 = (undefined4 *)
                     (param_1 + (*(ushort *)(param_1 + iVar5 + 0xbe8) + 0xf0) * 0xc + iVar5);
            iVar3 = (uint)*(ushort *)(param_1 + iVar3 + 0x5d4) * 0xc + iVar3;
            cVar2 = func_0x000142d8(*(undefined4 *)(param_1 + iVar3 + 0x4e4),
                                    *(undefined4 *)(param_1 + iVar3 + 0x4e8),
                                    *(undefined4 *)(param_1 + iVar3 + 0x4ec),*puVar6,
                                    *(undefined1 *)(puVar6 + 1),*(undefined1 *)(puVar6 + 2));
            if (cVar2 != '\0') goto LAB_00015d70;
          }
          if (2 < sVar9) goto LAB_00015c0c;
        }
        iStack_3c = (iStack_3c + 1) * 0x10000 >> 0x10;
      } while (iStack_3c < 7);
    }
    else if ((*(short *)(param_1 + (uint)*(ushort *)(param_1 + 0x4ee) * 0xc + 0x274) != 0xe) ||
            (*(short *)(param_1 + sVar9 * 0xa4 + 0xbe8) == 0)) {
      iVar3 = sVar9 * 0xa4;
      if (*(ushort *)(param_1 + iVar3 + 0xbe8) == 0) {
        if (*(short *)(param_1 + (uint)*(ushort *)(param_1 + 0x4ee) * 0xc + 0x274) == 0xe) {
LAB_00015ad8:
          iVar3 = 0xdf4;
          puVar4 = puStack00000004;
          puVar8 = param_1;
          do {
            iVar5 = iVar3 + -1;
            *puVar4 = *puVar8;
            bVar1 = 0 < iVar3;
            iVar3 = iVar5;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar5 != 0 && bVar1);
          if (param_1[(uint)*(ushort *)(param_1 + 0x4ee) * 0xc + 0x278] != '\0') {
            puVar4 = FUN_00014590((int)(param_1 + 0x278),(undefined1 *)&uStack_34);
            iVar3 = 0xc;
            puVar6 = &uStack_34;
            do {
              iVar5 = iVar3 + -1;
              *(undefined1 *)puVar6 = *puVar4;
              bVar1 = 0 < iVar3;
              puVar4 = puVar4 + 1;
              iVar3 = iVar5;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            } while (iVar5 != 0 && bVar1);
            uStack_2c = uStack_2c & 0xffffff00;
            uStack_30._0_3_ = CONCAT12(1,(short)uStack_30);
            uStack_30 = (uint)(uint3)uStack_30;
            func_0x00014c88(param_1 + sVar9 * 0xa4 + 0xb48,uStack_34,uStack_30,uStack_2c);
          }
          FUN_00015870((int)param_1);
          FUN_00014838((int)(param_1 + 0x278));
          return 1;
        }
      }
      else {
        puVar6 = (undefined4 *)
                 (param_1 + (*(ushort *)(param_1 + iVar3 + 0xbe8) + 0xf0) * 0xc + iVar3);
        puVar7 = (undefined4 *)(param_1 + (*(ushort *)(param_1 + 0x4ee) + 0x34) * 0xc);
        cVar2 = func_0x000142d8(*puVar7,puVar7[1],puVar7[2],*puVar6,*(undefined1 *)(puVar6 + 1),
                                *(undefined1 *)(puVar6 + 2));
        if (cVar2 != '\0') goto LAB_00015ad8;
      }
      if (2 < sVar9) break;
    }
    sVar9 = sVar9 + 1;
  } while (sVar9 < 4);
LAB_00015c0c:
  FUN_00015870((int)param_1);
  return 0;
}


// ==== FUN_00015e38 @ 00015e38  size=2920  callers=[]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00015e38(undefined1 *param_1,int param_2,int param_3,short *param_4)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  char *pcVar19;
  int iVar20;
  int iStack00000008;
  short *psStack0000000c;
  undefined1 *in_stack_00000010;
  short in_stack_00000014;
  byte in_stack_00000018;
  undefined4 *in_stack_0000001c;
  undefined1 *in_stack_00000020;
  uint uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  piVar11 = _UNK_00016588;
  iStack00000008 = param_3;
  psStack0000000c = param_4;
  if (param_3 < 0x41) {
    iVar5 = *_UNK_00016588;
    if (iVar5 <= param_2) {
      iVar4 = 0;
      do {
        if (param_1[iVar4 * 0xa4 + 0xb48] == '\0') {
          iStack_44 = piVar11[1];
          iStack_48 = iVar4 * 0x22 + iVar5;
          iStack_40 = iStack_48 + 0x1e;
          iStack_3c = iStack_44 + 0x2a;
          iVar5 = 0x10;
          puVar12 = &uStack_38;
          piVar16 = &iStack_48;
          do {
            iVar20 = iVar5 + -1;
            *(char *)puVar12 = (char)*piVar16;
            bVar1 = 0 < iVar5;
            iVar5 = iVar20;
            puVar12 = (undefined4 *)((int)puVar12 + 1);
            piVar16 = (int *)((int)piVar16 + 1);
          } while (iVar20 != 0 && bVar1);
          iVar5 = func_0x000181d8(&uStack_38,param_2,iStack00000008);
          if (iVar5 != 0) {
            *in_stack_0000001c = uStack_38;
            in_stack_0000001c[1] = uStack_34;
            sVar3 = (short)iVar4;
            *psStack0000000c = sVar3;
            *in_stack_00000010 = 0;
            if (param_1[0x278] != '\0') {
              iVar5 = sVar3 * 0xa4;
              if (*(ushort *)(param_1 + iVar5 + 0xbe8) == 0) {
                if (*(short *)(param_1 + (uint)*(ushort *)(param_1 + 0x4ee) * 0xc + 0x274) != 0xe)
                break;
              }
              else {
                puVar12 = (undefined4 *)(param_1 + (*(ushort *)(param_1 + 0x4ee) + 0x34) * 0xc);
                cVar2 = func_0x000142d8(*puVar12,puVar12[1],puVar12[2],
                                        *(undefined4 *)
                                         (param_1 +
                                         (*(ushort *)(param_1 + iVar5 + 0xbe8) + 0xf0) * 0xc + iVar5
                                         ));
                if (cVar2 == '\0') break;
              }
              iVar4 = 0xdf4;
              puVar18 = param_1;
              do {
                iVar20 = iVar4 + -1;
                *in_stack_00000020 = *puVar18;
                bVar1 = 0 < iVar4;
                iVar4 = iVar20;
                in_stack_00000020 = in_stack_00000020 + 1;
                puVar18 = puVar18 + 1;
              } while (iVar20 != 0 && bVar1);
              if (param_1[(uint)*(ushort *)(param_1 + 0x4ee) * 0xc + 0x278] != '\0') {
                puVar18 = FUN_00014590((int)(param_1 + 0x278),(undefined1 *)&iStack_48);
                iVar4 = 0xc;
                puVar12 = &uStack_58;
                do {
                  iVar20 = iVar4 + -1;
                  *(undefined1 *)puVar12 = *puVar18;
                  bVar1 = 0 < iVar4;
                  puVar18 = puVar18 + 1;
                  iVar4 = iVar20;
                  puVar12 = (undefined4 *)((int)puVar12 + 1);
                } while (iVar20 != 0 && bVar1);
                uStack_50 = uStack_50 & 0xffffff00;
                uStack_54._0_3_ = CONCAT12(1,(short)uStack_54);
                uStack_54 = (uint)(uint3)uStack_54;
                func_0x00014c88(param_1 + iVar5 + 0xb48,uStack_58,uStack_54,uStack_50);
              }
              FUN_00015870((int)param_1);
              FUN_00014838((int)(param_1 + 0x278));
              return 1;
            }
            if ((in_stack_00000018 != 0) && (-1 < in_stack_00000014)) {
              iVar4 = in_stack_00000014 * 0xe8;
              puVar18 = param_1 + iVar4 + 0x4f0;
              iVar5 = FUN_000149a4((int)puVar18);
              if (1 < (short)iVar5) break;
              iVar5 = sVar3 * 0xa4;
              if (*(ushort *)(param_1 + iVar5 + 0xbe8) == 0) {
                if (*(short *)(param_1 +
                              (uint)*(ushort *)(param_1 + iVar4 + 0x5d4) * 0xc + iVar4 + 0x4e8) !=
                    0xe) break;
              }
              else {
                iVar20 = (uint)*(ushort *)(param_1 + iVar4 + 0x5d4) * 0xc + iVar4;
                cVar2 = func_0x000142d8(*(undefined4 *)(param_1 + iVar20 + 0x4e4),
                                        *(undefined4 *)(param_1 + iVar20 + 0x4e8),
                                        *(undefined4 *)(param_1 + iVar20 + 0x4ec),
                                        *(undefined4 *)
                                         (param_1 +
                                         (*(ushort *)(param_1 + iVar5 + 0xbe8) + 0xf0) * 0xc + iVar5
                                         ));
                if (cVar2 == '\0') break;
              }
              iVar20 = 0xdf4;
              puVar6 = param_1;
              do {
                iVar10 = iVar20 + -1;
                *in_stack_00000020 = *puVar6;
                bVar1 = 0 < iVar20;
                iVar20 = iVar10;
                in_stack_00000020 = in_stack_00000020 + 1;
                puVar6 = puVar6 + 1;
              } while (iVar10 != 0 && bVar1);
              if (param_1[(uint)*(ushort *)(param_1 + iVar4 + 0x5d4) * 0xc + iVar4 + 0x4ec] != '\0')
              {
                puVar6 = FUN_00014ad8((int)puVar18,(undefined1 *)&iStack_48,
                                      *(ushort *)(param_1 + iVar4 + 0x5d4) - 1);
                iVar4 = 0xc;
                puVar12 = &uStack_58;
                do {
                  iVar20 = iVar4 + -1;
                  *(undefined1 *)puVar12 = *puVar6;
                  bVar1 = 0 < iVar4;
                  puVar6 = puVar6 + 1;
                  iVar4 = iVar20;
                  puVar12 = (undefined4 *)((int)puVar12 + 1);
                } while (iVar20 != 0 && bVar1);
                uStack_50 = uStack_50 & 0xffffff00;
                uStack_54._0_3_ = CONCAT12(1,(short)uStack_54);
                uStack_54 = (uint)(uint3)uStack_54;
                func_0x00014c88(param_1 + iVar5 + 0xb48,uStack_58,uStack_54,uStack_50);
              }
              FUN_00015870((int)param_1);
              func_0x00014918(puVar18);
              return 1;
            }
            if ((in_stack_00000018 == 0) && (-1 < in_stack_00000014)) {
              if ((*(short *)(param_1 + sVar3 * 0xa4 + 0xbe8) == 0) &&
                 (iVar5 = in_stack_00000014 * 0xa4,
                 *(short *)(param_1 +
                           (uint)*(ushort *)(param_1 + iVar5 + 0xbe8) * 0xc + iVar5 + 0xb44) == 0xe)
                 ) {
                puVar18 = param_1;
                iVar4 = 0xdf4;
                do {
                  iVar20 = iVar4 + -1;
                  *in_stack_00000020 = *puVar18;
                  bVar1 = 0 < iVar4;
                  in_stack_00000020 = in_stack_00000020 + 1;
                  puVar18 = puVar18 + 1;
                  iVar4 = iVar20;
                } while (iVar20 != 0 && bVar1);
                if (param_1[(uint)*(ushort *)(param_1 + iVar5 + 0xbe8) * 0xc + iVar5 + 0xb48] !=
                    '\0') {
                  puVar18 = FUN_00014db4((int)(param_1 + iVar5 + 0xb48),(undefined1 *)&iStack_48,
                                         *(ushort *)(param_1 + iVar5 + 0xbe8) - 1);
                  iVar5 = 0xc;
                  puVar12 = &uStack_58;
                  do {
                    iVar4 = iVar5 + -1;
                    *(undefined1 *)puVar12 = *puVar18;
                    bVar1 = 0 < iVar5;
                    puVar18 = puVar18 + 1;
                    iVar5 = iVar4;
                    puVar12 = (undefined4 *)((int)puVar12 + 1);
                  } while (iVar4 != 0 && bVar1);
                  uStack_50 = uStack_50 & 0xffffff00;
                  uStack_54._0_3_ = CONCAT12(1,(short)uStack_54);
                  uStack_54 = (uint)(uint3)uStack_54;
                  func_0x00014c88(param_1 + sVar3 * 0xa4 + 0xb48,uStack_58,uStack_54,uStack_50);
                }
                uVar17 = 1;
                goto LAB_00015ffc;
              }
              break;
            }
          }
          iVar5 = *piVar11;
        }
        iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
      } while (iVar4 < 4);
    }
  }
  else {
    sVar3 = (*(code *)*_UNK_00016014)(0x22,param_2 + -3);
    iVar5 = (int)sVar3;
    if ((iVar5 < 7) &&
       ((uStack_68 = (uint)in_stack_00000018, uStack_68 == 0 || (in_stack_00000014 != iVar5)))) {
      iVar20 = iVar5 * 0xe8;
      puVar18 = param_1 + iVar20 + 0x4f0;
      iVar4 = FUN_00014950((int)puVar18);
      iStack_48 = iVar5 * 0x22 + 3;
      iStack_44 = 0x41;
      iStack_40 = iVar5 * 0x22 + 0x21;
      iStack_3c = (*_UNK_00016010 + 4) * ((short)iVar4 + 1) +
                  (((int)*(short *)(param_1 + iVar20 + 0x5d4) - (int)(short)iVar4) * 0x10000 >> 0x10
                  ) * 2 + 0x6b;
      iVar5 = 0x10;
      puVar12 = &uStack_38;
      piVar11 = &iStack_48;
      do {
        iVar4 = iVar5 + -1;
        *(char *)puVar12 = (char)*piVar11;
        bVar1 = 0 < iVar5;
        iVar5 = iVar4;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        piVar11 = (int *)((int)piVar11 + 1);
      } while (iVar4 != 0 && bVar1);
      iVar5 = func_0x000181d8(&uStack_38,param_2,param_3);
      if (iVar5 != 0) {
        *psStack0000000c = sVar3;
        *in_stack_00000010 = 1;
        pcVar19 = param_1 + 0x278;
        if (*pcVar19 == '\0') {
          if (uStack_68 != 0) {
            if (-1 < in_stack_00000014) {
              uVar9 = in_stack_00000014 * 0xe8;
              puVar6 = param_1 + uVar9 + 0x4f0;
              uStack_68 = uVar9;
              puVar7 = (undefined4 *)FUN_00014bd0((int)puVar6,(undefined1 *)&iStack_48);
              iVar5 = 0xc;
              puVar12 = puVar7;
              puVar15 = &uStack_58;
              do {
                iVar4 = iVar5 + -1;
                *(undefined1 *)puVar15 = *(undefined1 *)puVar12;
                bVar1 = 0 < iVar5;
                iVar5 = iVar4;
                puVar12 = (undefined4 *)((int)puVar12 + 1);
                puVar15 = (undefined4 *)((int)puVar15 + 1);
              } while (iVar4 != 0 && bVar1);
              if (*(ushort *)(param_1 + iVar20 + 0x5d4) == 0) {
                if ((short)uStack_54 != 0xd) goto LAB_00015ff8;
              }
              else {
                iVar5 = 0xc;
                puVar8 = &stack0xffffff84;
                puVar14 = param_1 + (uint)*(ushort *)(param_1 + iVar20 + 0x5d4) * 0xc + iVar20 +
                                    0x4e4;
                do {
                  iVar4 = iVar5 + -1;
                  *puVar8 = *puVar14;
                  bVar1 = 0 < iVar5;
                  iVar5 = iVar4;
                  puVar8 = puVar8 + 1;
                  puVar14 = puVar14 + 1;
                } while (iVar4 != 0 && bVar1);
                cVar2 = func_0x000141d4(param_1,*puVar7,puVar7[1],puVar7[2]);
                if (cVar2 == '\0') goto LAB_00015ff8;
              }
              iVar5 = 0xdf4;
              puVar8 = param_1;
              do {
                iVar4 = iVar5 + -1;
                *in_stack_00000020 = *puVar8;
                bVar1 = 0 < iVar5;
                iVar5 = iVar4;
                in_stack_00000020 = in_stack_00000020 + 1;
                puVar8 = puVar8 + 1;
              } while (iVar4 != 0 && bVar1);
              iVar5 = 0;
              if (*(short *)(param_1 + uVar9 + 0x5d4) != 0) {
                do {
                  iVar4 = iVar5 * 0xc + uStack_68;
                  while ((param_1[iVar4 + 0x4f8] != '\0' &&
                         (iVar5 <= (int)(*(ushort *)(param_1 + uVar9 + 0x5d4) - 1)))) {
                    puVar8 = FUN_00014ad8((int)puVar6,(undefined1 *)&iStack_48,(short)iVar5);
                    iVar20 = 0xc;
                    puVar12 = &uStack_58;
                    do {
                      iVar10 = iVar20 + -1;
                      *(undefined1 *)puVar12 = *puVar8;
                      bVar1 = 0 < iVar20;
                      puVar8 = puVar8 + 1;
                      iVar20 = iVar10;
                      puVar12 = (undefined4 *)((int)puVar12 + 1);
                    } while (iVar10 != 0 && bVar1);
                    uStack_50 = uStack_50 & 0xffffff00;
                    uStack_54._0_3_ = CONCAT12(1,(short)uStack_54);
                    uStack_54 = (uint)(uint3)uStack_54;
                    FUN_000148b8((int)puVar18,uStack_58,uStack_54,uStack_50,0);
                  }
                  iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
                } while (iVar5 < (int)(uint)*(ushort *)(param_1 + uVar9 + 0x5d4));
              }
              FUN_00015870((int)param_1);
              func_0x00014918(puVar6);
              goto LAB_000160d4;
            }
            if (uStack_68 != 0) goto LAB_00015ff8;
          }
          if (in_stack_00000014 < 0) goto LAB_00015ff8;
          iVar4 = in_stack_00000014 * 0xa4;
          puVar7 = (undefined4 *)
                   (param_1 + (*(ushort *)(param_1 + iVar4 + 0xbe8) + 0xf0) * 0xc + iVar4);
          iVar5 = 0xc;
          puVar12 = puVar7;
          puVar15 = &uStack_58;
          do {
            iVar10 = iVar5 + -1;
            *(undefined1 *)puVar15 = *(undefined1 *)puVar12;
            bVar1 = 0 < iVar5;
            iVar5 = iVar10;
            puVar12 = (undefined4 *)((int)puVar12 + 1);
            puVar15 = (undefined4 *)((int)puVar15 + 1);
          } while (iVar10 != 0 && bVar1);
          if (*(ushort *)(param_1 + iVar20 + 0x5d4) == 0) {
            if ((short)uStack_54 != 0xd) goto LAB_00015ff8;
          }
          else {
            iVar5 = 0xc;
            puVar6 = &stack0xffffff84;
            puVar8 = param_1 + (uint)*(ushort *)(param_1 + iVar20 + 0x5d4) * 0xc + iVar20 + 0x4e4;
            do {
              iVar20 = iVar5 + -1;
              *puVar6 = *puVar8;
              bVar1 = 0 < iVar5;
              iVar5 = iVar20;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar20 != 0 && bVar1);
            cVar2 = func_0x000141d4(param_1,*puVar7,puVar7[1],puVar7[2]);
            if (cVar2 == '\0') goto LAB_00015ff8;
          }
          iVar5 = 0xdf4;
          puVar6 = param_1;
          do {
            iVar20 = iVar5 + -1;
            *in_stack_00000020 = *puVar6;
            bVar1 = 0 < iVar5;
            iVar5 = iVar20;
            in_stack_00000020 = in_stack_00000020 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar20 != 0 && bVar1);
          if (param_1[(uint)*(ushort *)(param_1 + iVar4 + 0xbe8) * 0xc + iVar4 + 0xb48] != '\0') {
            puVar6 = FUN_00014db4((int)(param_1 + iVar4 + 0xb48),(undefined1 *)&iStack_48,
                                  *(ushort *)(param_1 + iVar4 + 0xbe8) - 1);
            iVar5 = 0xc;
            puVar12 = &uStack_58;
            do {
              iVar4 = iVar5 + -1;
              *(undefined1 *)puVar12 = *puVar6;
              bVar1 = 0 < iVar5;
              puVar6 = puVar6 + 1;
              iVar5 = iVar4;
              puVar12 = (undefined4 *)((int)puVar12 + 1);
            } while (iVar4 != 0 && bVar1);
            uStack_50 = uStack_50 & 0xffffff00;
            uStack_54._0_3_ = CONCAT12(1,(short)uStack_54);
            uStack_54 = (uint)(uint3)uStack_54;
            FUN_000148b8((int)puVar18,uStack_58,uStack_54,uStack_50,0);
          }
          FUN_00015870((int)param_1);
        }
        else {
          if (*(ushort *)(param_1 + iVar20 + 0x5d4) == 0) {
            if (*(short *)(param_1 + (uint)*(ushort *)(param_1 + 0x4ee) * 0xc + 0x274) != 0xd)
            goto LAB_00015ff8;
          }
          else {
            iVar5 = 0xc;
            puVar6 = &stack0xffffff84;
            puVar8 = param_1 + (uint)*(ushort *)(param_1 + iVar20 + 0x5d4) * 0xc + iVar20 + 0x4e4;
            do {
              iVar4 = iVar5 + -1;
              *puVar6 = *puVar8;
              bVar1 = 0 < iVar5;
              iVar5 = iVar4;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar4 != 0 && bVar1);
            puVar12 = (undefined4 *)(param_1 + (*(ushort *)(param_1 + 0x4ee) + 0x34) * 0xc);
            cVar2 = func_0x000141d4(param_1,*puVar12,puVar12[1],puVar12[2]);
            if (cVar2 == '\0') goto LAB_00015ff8;
          }
          iVar5 = 0xdf4;
          puVar6 = param_1;
          do {
            iVar4 = iVar5 + -1;
            *in_stack_00000020 = *puVar6;
            bVar1 = 0 < iVar5;
            iVar5 = iVar4;
            in_stack_00000020 = in_stack_00000020 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar4 != 0 && bVar1);
          if (param_1[(uint)*(ushort *)(param_1 + 0x4ee) * 0xc + 0x278] != '\0') {
            puVar6 = FUN_00014590((int)pcVar19,(undefined1 *)&uStack_58);
            iVar5 = 0xc;
            puVar13 = &uStack_68;
            do {
              iVar4 = iVar5 + -1;
              *(undefined1 *)puVar13 = *puVar6;
              bVar1 = 0 < iVar5;
              puVar6 = puVar6 + 1;
              iVar5 = iVar4;
              puVar13 = (uint *)((int)puVar13 + 1);
            } while (iVar4 != 0 && bVar1);
            uStack_60 = uStack_60 & 0xffffff00;
            uStack_64 = (uint)CONCAT12(1,(undefined2)uStack_64);
            FUN_000148b8((int)puVar18,uStack_68,uStack_64,uStack_60,0);
          }
          FUN_00015870((int)param_1);
          FUN_00014838((int)pcVar19);
        }
LAB_000160d4:
        puVar18 = FUN_000154f8((int)param_1,(undefined1 *)&uStack_68,(int)*psStack0000000c);
        *(undefined1 *)in_stack_0000001c = *puVar18;
        *(undefined1 *)((int)in_stack_0000001c + 1) = puVar18[1];
        *(undefined1 *)((int)in_stack_0000001c + 2) = puVar18[2];
        *(undefined1 *)((int)in_stack_0000001c + 3) = puVar18[3];
        *(undefined1 *)(in_stack_0000001c + 1) = puVar18[4];
        *(undefined1 *)((int)in_stack_0000001c + 5) = puVar18[5];
        *(undefined1 *)((int)in_stack_0000001c + 6) = puVar18[6];
        *(undefined1 *)((int)in_stack_0000001c + 7) = puVar18[7];
        return 1;
      }
    }
  }
LAB_00015ff8:
  uVar17 = 0;
LAB_00015ffc:
  FUN_00015870((int)param_1);
  return uVar17;
}


// ==== FUN_000169b4 @ 000169b4  size=1088  callers=[]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000169b4(int param_1,int param_2,int param_3,undefined1 *param_4)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  undefined1 *puStack0000000c;
  short *in_stack_00000010;
  undefined1 *in_stack_00000014;
  undefined1 auStack_48 [16];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  puStack0000000c = param_4;
  if (param_3 < 0x41) {
    iVar6 = FUN_00014670(param_1 + 0x278);
    puVar3 = PTR_DAT_00016ad8;
    if ((0 < (short)iVar6) && (param_2 < *(int *)PTR_DAT_00016ad8)) {
      iStack_38 = ((short)iVar6 + -1) * (int)*(short *)PTR_DAT_00016ad4 + *(int *)PTR_DAT_00016ad0;
      iStack_30 = iStack_38 + 0x1e;
      iStack_2c = *(int *)(PTR_DAT_00016ad0 + 4) + 0x2a;
      iStack_34 = *(int *)(PTR_DAT_00016ad0 + 4);
      iVar6 = 0x10;
      puVar11 = auStack_48;
      piVar15 = &iStack_38;
      do {
        iVar8 = iVar6 + -1;
        *puVar11 = (char)*piVar15;
        bVar1 = 0 < iVar6;
        iVar6 = iVar8;
        puVar11 = puVar11 + 1;
        piVar15 = (int *)((int)piVar15 + 1);
      } while (iVar8 != 0 && bVar1);
      iVar6 = func_0x000181d8(auStack_48,param_2,param_3);
      if (iVar6 != 0) {
        *in_stack_00000014 = 0;
        *in_stack_00000010 = -1;
        *(undefined1 *)(param_1 + 0x278) = 1;
        *(undefined1 *)((uint)*(ushort *)(param_1 + 0x4ee) * 0xc + param_1 + 0x278) = 1;
        iVar6 = 0x10;
        puVar11 = auStack_48;
        do {
          iVar8 = iVar6 + -1;
          *param_4 = *puVar11;
          bVar1 = 0 < iVar6;
          iVar6 = iVar8;
          puVar11 = puVar11 + 1;
          param_4 = param_4 + 1;
        } while (iVar8 != 0 && bVar1);
LAB_00016ac0:
        *(undefined2 *)(param_1 + 0xddc) = 1;
        return 1;
      }
    }
    iVar6 = 0;
    do {
      iStack_34 = *(int *)(puVar3 + 4);
      iStack_38 = iVar6 * 0x22 + *(int *)puVar3;
      iStack_30 = iStack_38 + 0x1e;
      iStack_2c = iStack_34 + 0x2a;
      iVar8 = 0x10;
      puVar11 = auStack_48;
      piVar15 = &iStack_38;
      do {
        iVar9 = iVar8 + -1;
        *puVar11 = (char)*piVar15;
        bVar1 = 0 < iVar8;
        iVar8 = iVar9;
        puVar11 = puVar11 + 1;
        piVar15 = (int *)((int)piVar15 + 1);
      } while (iVar9 != 0 && bVar1);
      iVar8 = func_0x000181d8(auStack_48,param_2,param_3);
      if (iVar8 != 0) {
        *in_stack_00000010 = (short)iVar6;
        *in_stack_00000014 = 0;
        iVar6 = (short)iVar6 * 0xa4;
        iVar8 = iVar6 + param_1;
        uVar12 = (uint)*(ushort *)(iVar8 + 0xbe8);
        if (uVar12 == 0) {
          return 0;
        }
        *(undefined1 *)(iVar8 + 0xb48) = 1;
        *(undefined1 *)(uVar12 * 0xc + iVar6 + param_1 + 0xb48) = 1;
        iVar6 = 0x10;
        puVar11 = auStack_48;
        do {
          iVar8 = iVar6 + -1;
          *param_4 = *puVar11;
          bVar1 = 0 < iVar6;
          iVar6 = iVar8;
          puVar11 = puVar11 + 1;
          param_4 = param_4 + 1;
        } while (iVar8 != 0 && bVar1);
        goto LAB_00016ac0;
      }
      iVar6 = (iVar6 + 1) * 0x10000 >> 0x10;
    } while (iVar6 < 4);
  }
  else {
    sVar4 = (*(code *)*_UNK_00016cac)(0x22,param_2 + -3);
    iVar6 = (int)sVar4;
    if (iVar6 < 7) {
      iVar8 = iVar6 * 0xe8 + param_1;
      if (*(short *)(iVar8 + 0x5d4) != 0) {
        iVar7 = FUN_00014950(iVar8 + 0x4f0);
        iVar2 = (int)(short)iVar7;
        iVar10 = (*(short *)(iVar8 + 0x5d4) - iVar2) * 0x10000 >> 0x10;
        iVar9 = iVar10 * 4;
        iVar16 = *_UNK_00016cb0 + 4;
        sVar5 = (*(code *)*_UNK_00016cac)(iVar16,param_3 + iVar10 * -4 + -0x41);
        iVar10 = (int)sVar5;
        if (iVar2 <= iVar10) {
          iVar10 = iVar7 + -1;
        }
        iVar7 = (int)(short)iVar10;
        while (iVar7 < iVar2) {
          iVar13 = iVar7 * iVar16 + iVar9;
          if (iVar13 + 0x41 <= param_3) {
            iVar14 = 0x2a;
            if (iVar7 != iVar2 + -1) {
              iVar14 = iVar16;
            }
            if (param_3 <= iVar13 + iVar14 + 0x41) {
              sVar5 = 0;
              *in_stack_00000010 = sVar4;
              *in_stack_00000014 = 1;
              *(undefined1 *)(iVar8 + 0x5d6) = 1;
              iVar10 = (int)(short)iVar10;
              for (iVar7 = iVar10; iVar7 < iVar2; iVar7 = (iVar7 + 1) * 0x10000 >> 0x10) {
                *(undefined1 *)
                 (((iVar10 - iVar7) + (uint)*(ushort *)(iVar8 + 0x5d4) + 0x69) * 0xc + iVar6 * 0xe8
                 + param_1) = 1;
                sVar5 = sVar5 + 1;
              }
              iStack_38 = iVar6 * 0x22 + 3;
              iStack_30 = iVar6 * 0x22 + 0x21;
              iStack_2c = (iVar10 + sVar5 + -1) * (*_UNK_00016cb0 + 4) + iVar9 + 0x6b;
              iStack_34 = iVar10 * (*_UNK_00016cb0 + 4) + iVar9 + 0x41;
              iVar6 = 0x10;
              piVar15 = &iStack_38;
              do {
                iVar8 = iVar6 + -1;
                *puStack0000000c = (char)*piVar15;
                bVar1 = 0 < iVar6;
                iVar6 = iVar8;
                puStack0000000c = puStack0000000c + 1;
                piVar15 = (int *)((int)piVar15 + 1);
              } while (iVar8 != 0 && bVar1);
              *(short *)(param_1 + 0xddc) = sVar5;
              return 1;
            }
          }
          iVar7 = (iVar7 + 1) * 0x10000 >> 0x10;
          iVar10 = iVar7;
        }
      }
    }
  }
  return 0;
}


// ==== FUN_00016e08 @ 00016e08  size=448  callers=[00011ef0]

void FUN_00016e08(int param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(char *)(param_1 + 0x278) == '\0') ||
     (*(char *)((uint)*(ushort *)(param_1 + 0x4ee) * 0xc + param_1 + 0x278) == '\0')) {
    iVar2 = 0;
    do {
      if (*(char *)(iVar2 * 0xe8 + param_1 + 0x5d6) != '\0') {
        FUN_000152f4(param_1,param_2,(short)iVar2 * 0xe8 + param_1 + 0x4f0,param_3 & 0xffff,
                     (ushort)param_4);
        return;
      }
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < 7);
    iVar2 = 0;
    do {
      iVar3 = iVar2 * 0xa4 + param_1;
      if ((*(char *)(iVar3 + 0xb48) != '\0') &&
         (uVar4 = (uint)*(ushort *)(iVar3 + 0xbe8), uVar4 != 0)) {
        piVar1 = (int *)((uVar4 + 0xf0) * 0xc + iVar2 * 0xa4 + param_1);
        FUN_0001753c(param_1,param_2,*piVar1,piVar1[1],piVar1[2],param_3,param_4);
      }
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < 4);
  }
  else {
    piVar1 = (int *)((*(ushort *)(param_1 + 0x4ee) + 0x34) * 0xc + param_1);
    FUN_0001753c(param_1,param_2,*piVar1,piVar1[1],piVar1[2],param_3,param_4);
  }
  return;
}


// ==== FUN_00016fc8 @ 00016fc8  size=268  callers=[00012e68, 00013370, 00014f18]

void FUN_00016fc8(int param_1,int param_2)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  psVar2 = DAT_000170d8;
  piVar1 = DAT_000170d4;
  iVar3 = 0;
  if (*(short *)(param_1 + 0x4ee) != 0) {
    iVar6 = 0;
    do {
      iVar4 = iVar6 * 0xc + param_1;
      if (((*(char *)(iVar4 + 0x282) != '\0') && (*(char *)(iVar4 + 0x283) == '\0')) &&
         (*(char *)(iVar4 + 0x284) == '\0')) {
        piVar5 = (int *)((iVar6 + 0x35) * 0xc + param_1);
        FUN_0001753c(param_1,param_2,*piVar5,piVar5[1],piVar5[2],
                     (int)*psVar2 * (int)(short)iVar3 + *piVar1,piVar1[1]);
        iVar3 = ((short)iVar3 + 1) * 0x10000 >> 0x10;
      }
      iVar6 = (iVar6 + 1) * 0x10000 >> 0x10;
    } while (iVar6 < (int)(uint)*(ushort *)(param_1 + 0x4ee));
  }
  return;
}


// ==== FUN_000170dc @ 000170dc  size=272  callers=[00013370]

void FUN_000170dc(int param_1,int param_2)

{
  int *piVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  short sVar7;
  
  psVar2 = DAT_000171f0;
  piVar1 = DAT_000171ec;
  uVar3 = (uint)*(ushort *)(param_1 + 0x4ee);
  sVar7 = 0;
  if (uVar3 != 0) {
    iVar6 = 0;
    do {
      iVar4 = iVar6 * 0xc + param_1;
      if (((*(char *)(iVar4 + 0x282) != '\0') && (*(char *)(iVar4 + 0x283) == '\0')) &&
         (*(char *)(iVar4 + 0x284) == '\0')) {
        if (iVar6 == uVar3 - 1) {
          piVar5 = (int *)((iVar6 + 0x35) * 0xc + param_1);
          FUN_0001753c(param_1,param_2,*piVar5,piVar5[1],piVar5[2],
                       (int)*psVar2 * (int)sVar7 + *piVar1,piVar1[1]);
        }
        sVar7 = sVar7 + 1;
      }
      uVar3 = (uint)*(ushort *)(param_1 + 0x4ee);
      iVar6 = (iVar6 + 1) * 0x10000 >> 0x10;
    } while (iVar6 < (int)uVar3);
  }
  return;
}


// ==== FUN_000171fc @ 000171fc  size=508  callers=[]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000171fc(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  short sVar5;
  int iStack00000008;
  int in_stack_0000000c;
  
  iStack00000008 = param_3;
  iVar2 = FUN_00014670(param_1 + 0x278);
  sVar5 = (short)(iVar2 + -2);
  if ((iVar2 + -2) * 0x10000 >> 0x10 < 0) {
    sVar5 = 0;
  }
  if (*(char *)(param_1 + 0x278) == '\0') {
    bVar1 = false;
    iVar2 = 0;
    do {
      if (bVar1) break;
      iVar3 = (short)iVar2 * 0xe8 + param_1;
      if (*(char *)(iVar3 + 0x5d6) != '\0') {
        FUN_00015798(param_1,param_2,iVar3 + 0x4f0,param_3,in_stack_0000000c);
        bVar1 = true;
      }
      iVar2 = ((short)iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < 7);
    iVar2 = 0;
    do {
      if (bVar1) {
        return;
      }
      sVar5 = (short)iVar2;
      if (*(char *)(sVar5 * 0xa4 + param_1 + 0xb48) != '\0') {
        FUN_00015220(param_1,param_2,sVar5);
        bVar1 = true;
      }
      iVar2 = (sVar5 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < 4);
  }
  else {
    iVar2 = *(short *)(param_1 + 0x4ee) + -1;
    iVar3 = iVar2 * 0x10000 >> 0x10;
    while (-1 < iVar3) {
      if (*(char *)(iVar3 * 0xc + param_1 + 0x284) == '\0') {
        piVar4 = (int *)(((short)iVar2 + 0x35) * 0xc + param_1);
        FUN_0001753c(param_1,param_2,*piVar4,piVar4[1],piVar4[2],
                     (int)*_UNK_00017304 * (int)sVar5 + *_UNK_00017308,_UNK_00017308[1]);
        return;
      }
      iVar2 = (iVar3 + -1) * 0x10000 >> 0x10;
      iVar3 = iVar2;
    }
  }
  return;
}


// ==== FUN_00017400 @ 00017400  size=316  callers=[00012e68, 00013370]

void FUN_00017400(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_24 [12];
  
  if (*(short *)(param_1 + 0x276) == 0) {
    if (*(short *)(param_1 + 0x4ee) != 0) {
      do {
        puVar4 = (undefined4 *)FUN_000144a4(param_1 + 0x278,(undefined1 *)&local_34);
        FUN_000147e0(param_1,*puVar4,puVar4[1],puVar4[2]);
      } while (*(short *)(param_1 + 0x4ee) != 0);
    }
  }
  else {
    if (*(short *)(param_1 + 0x4ee) != 0) {
      iVar5 = 0;
      do {
        *(undefined1 *)(iVar5 * 0xc + param_1 + 0x282) = 0;
        iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
      } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 0x4ee));
    }
    uVar3 = *(ushort *)(param_1 + 0xde8);
    if ((int)(uint)*(ushort *)(param_1 + 0x276) < (int)(short)*(ushort *)(param_1 + 0xde8)) {
      uVar3 = *(ushort *)(param_1 + 0x276);
    }
    if (0 < (short)uVar3) {
      iVar5 = 0;
      do {
        puVar6 = FUN_000144a4(param_1,auStack_24);
        iVar7 = 0xc;
        puVar4 = &local_34;
        do {
          iVar8 = iVar7 + -1;
          *(undefined1 *)puVar4 = *puVar6;
          bVar1 = 0 < iVar7;
          puVar6 = puVar6 + 1;
          iVar7 = iVar8;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        } while (iVar8 != 0 && bVar1);
        uVar2 = (undefined2)local_30;
        local_30 = (uint)CONCAT12(1,uVar2);
        FUN_000147e0(param_1 + 0x278,local_34,local_30,local_2c);
        iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
      } while (iVar5 < (short)uVar3);
    }
  }
  return;
}


// ==== FUN_0001753c @ 0001753c  size=364  callers=[00014f18, 00015220, 000152f4, 00015418, 0001564c, 00015798, 00016e08, 00016fc8, 000170dc, 000171fc, 000176a8]

void FUN_0001753c(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,int param_7)

{
  short sVar1;
  undefined2 local_4;
  undefined1 local_1;
  
  local_1 = (char)((uint)param_4 >> 0x18);
  if (local_1 == '\0') {
    FUN_00013ff0(param_2,0x82,param_6,param_7,0x1e,0x2a,0xff00);
    if ((param_3 == 2) || (sVar1 = 0x8c, param_3 == 1)) {
      sVar1 = 0x99;
    }
    local_4 = (short)param_4;
    FUN_00013ff0(param_2,local_4 + sVar1 + -2,param_6 + 2,param_7 + 2,9,9,0xffffff);
    FUN_00013ff0(param_2,(short)param_3 + 0x88,param_6 + 0x11,param_7 + 2,9,9,0xffffff);
    if ((param_3 == 2) || (sVar1 = 0xa6, param_3 == 1)) {
      sVar1 = 0xb3;
    }
    FUN_00013ff0(param_2,local_4 + sVar1 + -2,param_6 + 0x13,param_7 + 0x1f,9,9,0xffffff);
    sVar1 = 0x89;
    if (param_3 != 1) {
      sVar1 = (short)param_3 + 0xc0;
    }
    FUN_00013ff0(param_2,sVar1,param_6 + 4,param_7 + 0x1f,9,9,0xffffff);
  }
  else {
    FUN_00013ff0(param_2,*(short *)(param_1 + 0xdd8) + 0xfa,param_6,param_7,0x1e,0x2a,0xff00);
  }
  return;
}


// ==== FUN_000176a8 @ 000176a8  size=244  callers=[00011ef0, 00013370]

void FUN_000176a8(int param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_3 * 0xe8 + param_1;
  if (*(short *)(iVar3 + 0x5d4) != 0) {
    iVar1 = FUN_00014950(iVar3 + 0x4f0);
    iVar2 = *(short *)(iVar3 + 0x5d4) * 0xc + param_3 * 0xe8 + param_1;
    FUN_0001753c(param_1,param_2,*(int *)(iVar2 + 0x4e4),*(undefined4 *)(iVar2 + 0x4e8),
                 *(undefined4 *)(iVar2 + 0x4ec),param_3 * 0x22 + 3U & 0xffff,
                 ((*DAT_0001779c + 4) * (iVar1 + -1) +
                  (((int)*(short *)(iVar3 + 0x5d4) - (int)(short)iVar1) * 0x10000 >> 0x10) * 4 +
                 0x41) * 0x10000 >> 0x10);
  }
  return;
}


// ==== FUN_000177a0 @ 000177a0  size=312  callers=[00011c3c, 00012e68, 00013864]

void FUN_000177a0(undefined1 *param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_r1;
  int iVar5;
  undefined1 *puVar6;
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [632];
  
  *(undefined4 *)(param_1 + 0xde0) = 0;
  *(undefined2 *)(param_1 + 0x4ee) = 0;
  puVar2 = FUN_00014348(auStack_288);
  iVar3 = 0x278;
  puVar6 = param_1;
  do {
    iVar5 = iVar3 + -1;
    *puVar6 = *puVar2;
    bVar1 = 0 < iVar3;
    puVar2 = puVar2 + 1;
    iVar3 = iVar5;
    puVar6 = puVar6 + 1;
  } while (iVar5 != 0 && bVar1);
  iVar3 = 0;
  do {
    *(undefined2 *)(param_1 + iVar3 * 0xe8 + 0x5d4) = 0;
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
  } while (iVar3 < 7);
  iVar3 = 0;
  do {
    *(undefined2 *)(param_1 + iVar3 * 0xa4 + 0xbe8) = 0;
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
  } while (iVar3 < 4);
  FUN_000146c8((int)param_1);
  FUN_00014e88((int)param_1);
  param_1[0xdde] = 0;
  if (param_1[0xdda] != '\0') {
    uVar4 = Ordinal_1053();
    (*(code *)*DAT_000178d8)(5,uVar4);
    *(undefined2 *)(param_1 + 0xdd8) = extraout_r1;
  }
  if (*(short *)(param_1 + 0x4ee) != 0) {
    do {
      FUN_000144a4((int)(param_1 + 0x278),auStack_298);
    } while (*(short *)(param_1 + 0x4ee) != 0);
  }
  return;
}


// ==== FUN_000178dc @ 000178dc  size=172  callers=[00013370, 000136dc]

undefined4 FUN_000178dc(int param_1)

{
  short *psVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0xdde) = 0;
  psVar1 = DAT_00017980;
  iVar2 = 0;
  do {
    if (*(short *)(iVar2 * 0xa4 + param_1 + 0xbe8) != 0xd) {
      return 0;
    }
    iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
  } while (iVar2 < 4);
  *(short *)(param_1 + 0xdea) = *DAT_00017980 + 0x66;
  *(short *)(param_1 + 0xdec) = psVar1[2] + -0x10;
  *(undefined2 *)(param_1 + 0xdee) = 0;
  *(undefined2 *)(param_1 + 0xdf0) = 3;
  *(undefined1 *)(param_1 + 0xdde) = 1;
  return 1;
}


// ==== Ordinal_1079 @ 000179b0  size=8  callers=[00013960, 000139bc]

void Ordinal_1079(void)

{
                    /* WARNING: Could not recover jumptable at 0x000179b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000179b8)();
  return;
}


// ==== Ordinal_77 @ 00017b84  size=8  callers=[00011000, 000139bc]

void Ordinal_77(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017b8c)();
  return;
}


// ==== Ordinal_317 @ 00017b90  size=8  callers=[000115f4, 00011618, 00011664, 000116d4, 0001192c, 00011a28, 00013bec, 00013c94, 00013fcc]

void Ordinal_317(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017b98)();
  return;
}


// ==== Ordinal_231 @ 00017b9c  size=8  callers=[000115f4, 00013960, 000139bc]

void Ordinal_231(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017ba4)();
  return;
}


// ==== Ordinal_1939 @ 00017ba8  size=8  callers=[00011094]

void Ordinal_1939(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017bb0)();
  return;
}


// ==== Ordinal_846 @ 00017bb4  size=8  callers=[000110b0]

void Ordinal_846(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017bbc)();
  return;
}


// ==== Ordinal_1691 @ 00017bc0  size=8  callers=[00011158]

void Ordinal_1691(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017bc8)();
  return;
}


// ==== Ordinal_271 @ 00017bfc  size=8  callers=[00011330, 00011ef0]

void Ordinal_271(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c04)();
  return;
}


// ==== Ordinal_297 @ 00017c08  size=8  callers=[00011330, 00013864]

void Ordinal_297(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c10)();
  return;
}


// ==== Ordinal_177 @ 00017c14  size=8  callers=[00011330, 00013864]

void Ordinal_177(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c1c)();
  return;
}


// ==== Ordinal_1040 @ 00017c20  size=8  callers=[00011330, 00011664, 000116d4, 00011db8, 00013c94, 00013ff0, 000140e4]

void Ordinal_1040(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c28)();
  return;
}


// ==== Ordinal_2267 @ 00017c2c  size=8  callers=[00011330]

void Ordinal_2267(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c34)();
  return;
}


// ==== Ordinal_800 @ 00017c38  size=8  callers=[00011330, 00011ef0, 00013d04]

void Ordinal_800(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c40)();
  return;
}


// ==== Ordinal_2510 @ 00017c44  size=8  callers=[00011330]

void Ordinal_2510(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c4c)();
  return;
}


// ==== Ordinal_136 @ 00017c50  size=8  callers=[00011330, 00011ef0]

void Ordinal_136(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c58)();
  return;
}


// ==== Ordinal_201 @ 00017d64  size=8  callers=[0001184c]

void Ordinal_201(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017d6c)();
  return;
}


// ==== Ordinal_310 @ 00017d70  size=8  callers=[0001192c]

void Ordinal_310(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017d78)();
  return;
}


// ==== Ordinal_228 @ 00017d7c  size=8  callers=[00011870]

void Ordinal_228(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017d84)();
  return;
}


// ==== Ordinal_2446 @ 00017d88  size=8  callers=[00011870]

void Ordinal_2446(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017d90)();
  return;
}


// ==== Ordinal_2114 @ 00017d94  size=8  callers=[00011870]

void Ordinal_2114(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017d9c)();
  return;
}


// ==== Ordinal_2075 @ 00017da0  size=8  callers=[00011870]

void Ordinal_2075(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017da8)();
  return;
}


// ==== Ordinal_72 @ 00017dac  size=8  callers=[00011870]

void Ordinal_72(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017db4)();
  return;
}


// ==== Ordinal_572 @ 00017db8  size=8  callers=[00011870]

void Ordinal_572(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017dc0)();
  return;
}


// ==== Ordinal_162 @ 00017dc4  size=8  callers=[00011870]

void Ordinal_162(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017dcc)();
  return;
}


// ==== Ordinal_315 @ 00017dd0  size=8  callers=[00011870, 00011950, 00011aec, 00011c3c, 00011ef0, 00013d3c, 00013f7c]

void Ordinal_315(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017dd8)();
  return;
}


// ==== Ordinal_2400 @ 00017ddc  size=8  callers=[00011870]

void Ordinal_2400(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017de4)();
  return;
}


// ==== Ordinal_85 @ 00017efc  size=8  callers=[000119ac]

void Ordinal_85(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017f04)();
  return;
}


// ==== Ordinal_1961 @ 00017f14  size=8  callers=[00011a0c]

void Ordinal_1961(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017f1c)();
  return;
}


// ==== Ordinal_76 @ 00017fd4  size=8  callers=[00011c3c, 000140e4]

void Ordinal_76(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017fdc)();
  return;
}


// ==== Ordinal_200 @ 00017fe0  size=8  callers=[00011c3c]

void Ordinal_200(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017fe8)();
  return;
}


// ==== Ordinal_1036 @ 00018004  size=8  callers=[00011ef0]

void Ordinal_1036(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001800c)();
  return;
}


// ==== Ordinal_2264 @ 00018010  size=8  callers=[00011ef0, 00012e68, 00013370, 000140e4]

void Ordinal_2264(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018018)();
  return;
}


// ==== Ordinal_799 @ 0001801c  size=8  callers=[00011ef0, 000140e4]

void Ordinal_799(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018024)();
  return;
}


// ==== Ordinal_1760 @ 00018028  size=8  callers=[00013864]

void Ordinal_1760(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001802c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018030)();
  return;
}


// ==== Ordinal_1021 @ 00018034  size=8  callers=[00013aac]

void Ordinal_1021(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001803c)();
  return;
}


// ==== Ordinal_628 @ 0001804c  size=8  callers=[00013d04]

void Ordinal_628(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018054)();
  return;
}


// ==== Ordinal_48 @ 00018148  size=8  callers=[00013d98]

void Ordinal_48(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001814c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018150)();
  return;
}


// ==== Ordinal_103 @ 00018154  size=8  callers=[00013d98]

void Ordinal_103(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001815c)();
  return;
}


// ==== Ordinal_219 @ 0001816c  size=8  callers=[00013dd8]

void Ordinal_219(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018174)();
  return;
}


// ==== Ordinal_2313 @ 00018178  size=8  callers=[00013e18]

void Ordinal_2313(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001817c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018180)();
  return;
}


// ==== Ordinal_562 @ 00018184  size=8  callers=[00013e18]

void Ordinal_562(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001818c)();
  return;
}


// ==== Ordinal_1676 @ 00018190  size=8  callers=[00013e18]

void Ordinal_1676(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018198)();
  return;
}


// ==== Ordinal_1850 @ 0001819c  size=8  callers=[00013e18]

void Ordinal_1850(void)

{
                    /* WARNING: Could not recover jumptable at 0x000181a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000181a4)();
  return;
}


// ==== Ordinal_2093 @ 000181a8  size=8  callers=[00013f64]

void Ordinal_2093(void)

{
                    /* WARNING: Could not recover jumptable at 0x000181ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000181b0)();
  return;
}


// ==== Ordinal_644 @ 000181b4  size=8  callers=[00013f7c, 00018570]

void Ordinal_644(void)

{
                    /* WARNING: Could not recover jumptable at 0x000181b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000181bc)();
  return;
}


// ==== Ordinal_230 @ 000181c0  size=8  callers=[000140e4]

void Ordinal_230(void)

{
                    /* WARNING: Could not recover jumptable at 0x000181c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000181c8)();
  return;
}


// ==== Ordinal_250 @ 000181cc  size=8  callers=[0001122c, 00012e68, 00013280, 00013370, 000136dc, 00013864, 00013914, 00013aac]

void Ordinal_250(void)

{
                    /* WARNING: Could not recover jumptable at 0x000181d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000181d4)();
  return;
}


// ==== Ordinal_249 @ 000181e4  size=8  callers=[0001122c, 00011330]

void Ordinal_249(void)

{
                    /* WARNING: Could not recover jumptable at 0x000181e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000181ec)();
  return;
}


// ==== Ordinal_941 @ 000181f0  size=8  callers=[00011330]

void Ordinal_941(void)

{
                    /* WARNING: Could not recover jumptable at 0x000181f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000181f8)();
  return;
}


// ==== Ordinal_98 @ 000181fc  size=8  callers=[00011330]

void Ordinal_98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018204)();
  return;
}


// ==== Ordinal_897 @ 00018208  size=8  callers=[00011744]

void Ordinal_897(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001820c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018210)();
  return;
}


// ==== Ordinal_267 @ 00018220  size=8  callers=[00011870, 00012e68, 00013280, 00013370, 000136dc, 00013864, 00013914]

void Ordinal_267(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018228)();
  return;
}


// ==== Ordinal_1118 @ 0001822c  size=8  callers=[00011b4c, 00011bdc]

void Ordinal_1118(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018234)();
  return;
}


// ==== Ordinal_1120 @ 00018238  size=8  callers=[00011b4c]

void Ordinal_1120(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001823c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018240)();
  return;
}


// ==== Ordinal_1113 @ 00018244  size=8  callers=[00011b4c, 00011bdc]

void Ordinal_1113(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001824c)();
  return;
}


// ==== Ordinal_1065 @ 00018250  size=8  callers=[00011b4c]

void Ordinal_1065(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018258)();
  return;
}


// ==== Ordinal_1121 @ 0001825c  size=8  callers=[00011bdc]

void Ordinal_1121(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018264)();
  return;
}


// ==== Ordinal_1053 @ 00018268  size=8  callers=[00013acc, 000146c8, 000177a0]

void Ordinal_1053(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001826c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018270)();
  return;
}


// ==== Ordinal_944 @ 00018274  size=8  callers=[00011ef0]

void Ordinal_944(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001827c)();
  return;
}


// ==== Ordinal_936 @ 00018280  size=8  callers=[00011ef0]

void Ordinal_936(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018288)();
  return;
}


// ==== Ordinal_902 @ 0001828c  size=8  callers=[00011ef0]

void Ordinal_902(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018294)();
  return;
}


// ==== Ordinal_910 @ 00018298  size=8  callers=[00011ef0, 000140e4]

void Ordinal_910(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001829c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000182a0)();
  return;
}


// ==== Ordinal_903 @ 000182a4  size=8  callers=[00011ef0]

void Ordinal_903(void)

{
                    /* WARNING: Could not recover jumptable at 0x000182a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000182ac)();
  return;
}


// ==== Ordinal_906 @ 000182b0  size=8  callers=[00012e68, 00013370, 00013ff0, 00014080]

void Ordinal_906(void)

{
                    /* WARNING: Could not recover jumptable at 0x000182b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000182b8)();
  return;
}


// ==== Ordinal_101 @ 000182bc  size=8  callers=[00013280, 000136dc]

void Ordinal_101(void)

{
                    /* WARNING: Could not recover jumptable at 0x000182c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000182c4)();
  return;
}


// ==== Ordinal_493 @ 000182c8  size=8  callers=[000139ec]

void Ordinal_493(void)

{
                    /* WARNING: Could not recover jumptable at 0x000182cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000182d0)();
  return;
}


// ==== Ordinal_875 @ 000182d4  size=8  callers=[00013a34]

void Ordinal_875(void)

{
                    /* WARNING: Could not recover jumptable at 0x000182d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000182dc)();
  return;
}


// ==== Ordinal_876 @ 000182e0  size=8  callers=[00013a70]

void Ordinal_876(void)

{
                    /* WARNING: Could not recover jumptable at 0x000182e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000182e8)();
  return;
}


// ==== Ordinal_873 @ 000182ec  size=8  callers=[00013d04]

void Ordinal_873(void)

{
                    /* WARNING: Could not recover jumptable at 0x000182f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000182f4)();
  return;
}


// ==== Ordinal_868 @ 000182f8  size=8  callers=[00013e18]

void Ordinal_868(void)

{
                    /* WARNING: Could not recover jumptable at 0x000182fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018300)();
  return;
}


// ==== Ordinal_61 @ 00018304  size=8  callers=[00013f7c]

void Ordinal_61(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001830c)();
  return;
}


// ==== Ordinal_63 @ 00018310  size=8  callers=[00013f7c]

void Ordinal_63(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018318)();
  return;
}


// ==== Ordinal_874 @ 0001831c  size=8  callers=[00013f7c]

void Ordinal_874(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018324)();
  return;
}


// ==== Ordinal_905 @ 00018328  size=8  callers=[000140e4]

void Ordinal_905(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001832c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018330)();
  return;
}


// ==== Ordinal_1046 @ 00018334  size=8  callers=[000144a4, 00014ad8, 00014db4]

void Ordinal_1046(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001833c)();
  return;
}


// ==== Ordinal_1061 @ 00018340  size=8  callers=[000146c8]

void Ordinal_1061(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018348)();
  return;
}


// ==== Ordinal_535 @ 0001834c  size=8  callers=[000146c8]

void Ordinal_535(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00018354)();
  return;
}


// ==== entry @ 00018358  size=212  callers=[]

void entry(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_0001844c();
  uVar2 = Ordinal_775(param_1,param_2,param_3,param_4);
  *DAT_000184fc = 0;
  puVar1 = DAT_000184f8;
  puVar3 = (undefined4 *)*DAT_000184f8;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*DAT_000184f4;
    while (puVar4 = puVar4 + -1, puVar3 <= puVar4) {
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)();
        puVar3 = (undefined4 *)*puVar1;
      }
    }
  }
  FUN_0001847c(DAT_00018564,DAT_00018568);
  FUN_0001847c(DAT_0001855c,DAT_00018560);
  (*DAT_00018558)(0x42,uVar2);
  return;
}


// ==== FUN_0001838c @ 0001838c  size=160  callers=[00018434]

undefined4 FUN_0001838c(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = DAT_000183dc;
  uVar3 = Ordinal_35(*DAT_000183dc);
  piVar1 = DAT_000183d8;
  puVar5 = (undefined4 *)*DAT_000183d8;
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


// ==== FUN_00018434 @ 00018434  size=24  callers=[0001183c]

undefined4 FUN_00018434(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001838c(param_1);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ==== FUN_0001844c @ 0001844c  size=32  callers=[00018358]

void FUN_0001844c(void)

{
  FUN_0001847c(DAT_00018474,DAT_00018478);
  FUN_0001847c(DAT_0001846c,DAT_00018470);
  return;
}


// ==== FUN_0001847c @ 0001847c  size=48  callers=[00018358, 0001844c]

void FUN_0001847c(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


// ==== Ordinal_775 @ 0001856c  size=4  callers=[00018358]

void Ordinal_775(void)

{
                    /* WARNING: Could not recover jumptable at 0x000185c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000185c4)();
  return;
}


// ==== FUN_00018570 @ 00018570  size=36  callers=[00018598]

undefined4 FUN_00018570(undefined1 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Ordinal_644();
  *(undefined1 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x2040) = param_2;
  return 1;
}


// ==== FUN_00018598 @ 00018598  size=32  callers=[]

void FUN_00018598(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018570(0,0x600);
  *DAT_000185b8 = (char)uVar1;
  return;
}


// ==== Ordinal_775 @ 000185bc  size=8  callers=[]

void Ordinal_775(void)

{
                    /* WARNING: Could not recover jumptable at 0x000185c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000185c4)();
  return;
}


// ==== Ordinal_34 @ 000185c8  size=8  callers=[0001838c]

void Ordinal_34(void)

{
                    /* WARNING: Could not recover jumptable at 0x000185cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000185d0)();
  return;
}


// ==== Ordinal_33 @ 000185d4  size=8  callers=[0001838c]

void Ordinal_33(void)

{
                    /* WARNING: Could not recover jumptable at 0x000185d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000185dc)();
  return;
}


// ==== Ordinal_35 @ 000185e0  size=8  callers=[0001838c]

void Ordinal_35(void)

{
                    /* WARNING: Could not recover jumptable at 0x000185e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000185e8)();
  return;
}


