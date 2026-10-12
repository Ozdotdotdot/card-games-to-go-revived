// ==== FUN_00011000 @ 00011000  size=104  callers=[00013344]

undefined1 *
FUN_00011000(undefined1 *param_1,undefined2 *param_2,char *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  Ordinal_77(param_1,0xee,param_5);
  uVar1 = DAT_00011068;
  *(undefined2 **)(param_1 + 0x7c) = param_2;
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  *(char **)(param_1 + 0x84) = param_3;
  *(undefined4 *)(param_1 + 0x88) = param_4;
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  uVar2 = 5;
  if (*param_3 == '\0') {
    uVar2 = *param_2;
  }
  *(undefined2 *)(param_1 + 0x80) = uVar2;
  return param_1;
}


// ==== FUN_0001108c @ 0001108c  size=28  callers=[]

undefined4 FUN_0001108c(int param_1)

{
  Ordinal_1939();
  FUN_000110a8(param_1);
  return 1;
}


// ==== FUN_000110a8 @ 000110a8  size=36  callers=[0001108c]

void FUN_000110a8(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00015860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015864)(param_1,1000,**(char **)(param_1 + 0x88) == '\x01');
  return;
}


// ==== FUN_000110c4 @ 000110c4  size=84  callers=[00011118]

void FUN_000110c4(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x80) == 5) {
    **(undefined1 **)(param_1 + 0x84) = 1;
  }
  else {
    **(undefined1 **)(param_1 + 0x84) = 0;
    **(undefined2 **)(param_1 + 0x7c) = *(undefined2 *)(param_1 + 0x80);
  }
  iVar1 = Ordinal_1691(param_1,1000);
  *(bool *)*(undefined4 *)(param_1 + 0x88) = iVar1 != 0;
  return;
}


// ==== FUN_00011118 @ 00011118  size=32  callers=[]

void FUN_00011118(int param_1)

{
  FUN_000110c4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00015878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001587c)(param_1);
  return;
}


// ==== FUN_00011138 @ 00011138  size=260  callers=[]

void FUN_00011138(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    iVar3 = func_0x00015e8c(auStack_30,param_3,param_4);
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


// ==== FUN_0001123c @ 0001123c  size=688  callers=[]

void FUN_0001123c(int param_1)

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
  uVar4 = DAT_000114fc;
  uVar3 = DAT_000114f8;
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
      local_dc = DAT_000114f4;
      uVar6 = Ordinal_2510(0,3,0);
      Ordinal_800(&local_dc,uVar6);
      uVar6 = Ordinal_2267(&local_7c,&local_dc);
      Ordinal_98(&local_c4,2,2);
      Ordinal_941(local_78,local_c4,local_c0,local_bc,local_b8);
      Ordinal_2267(&local_7c,uVar6);
      local_dc = DAT_000114f0;
      Ordinal_1040(&local_dc);
      local_dc = DAT_000114ec;
    }
    sVar8 = (short)uVar12 + 0xfa;
    if (4 < (int)uVar12) {
      sVar8 = 0x82;
    }
    FUN_00013870((int)&local_7c,sVar8,iVar5,iVar2,0x1e,0x2a,0xff00);
    if (uVar12 == 5) {
      piVar7 = (int *)Ordinal_177(auStack_d4,uVar3);
      piVar7 = (int *)FUN_00011650((int)&local_7c,auStack_84,piVar7);
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


// ==== FUN_00011500 @ 00011500  size=36  callers=[]

undefined4 FUN_00011500(undefined4 param_1,uint param_2)

{
  Ordinal_231();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011524 @ 00011524  size=60  callers=[]

undefined1 * FUN_00011524(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00011560;
  *param_1 = (char)DAT_00011560;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011570 @ 00011570  size=104  callers=[]

undefined1 * FUN_00011570(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_000115dc;
  *param_1 = (char)DAT_000115dc;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_000115d8;
  *param_1 = (char)DAT_000115d8;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_000115e0 @ 000115e0  size=104  callers=[]

undefined1 * FUN_000115e0(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001164c;
  *param_1 = (char)DAT_0001164c;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_00011648;
  *param_1 = (char)DAT_00011648;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011650 @ 00011650  size=136  callers=[0001123c]

undefined1 * FUN_00011650(int param_1,undefined1 *param_2,int *param_3)

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


// ==== FUN_00011748 @ 00011748  size=24  callers=[]

void FUN_00011748(void)

{
  FUN_00011758();
  FUN_000160d0(DAT_0001176c);
  return;
}


// ==== FUN_00011758 @ 00011758  size=64  callers=[00011748]

undefined1 * FUN_00011758(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  puVar2 = DAT_00011760;
  Ordinal_201(DAT_00011760,0);
  uVar1 = DAT_00011744;
  *puVar2 = (char)DAT_00011744;
  puVar2[1] = (char)((uint)uVar1 >> 8);
  puVar2[2] = (char)((uint)uVar1 >> 0x10);
  puVar2[3] = (char)((uint)uVar1 >> 0x18);
  return puVar2;
}


// ==== FUN_0001177c @ 0001177c  size=172  callers=[]

bool FUN_0001177c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [24];
  
  Ordinal_2400(param_1,PTR_u_Local_AppWizard_Generated_Applic_000117c8);
  iVar1 = Ordinal_315(0x6c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = Ordinal_162(iVar1,0x80,PTR_DAT_000117bc,PTR_DAT_000117c0,PTR_DAT_000117c4);
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


// ==== FUN_00011838 @ 00011838  size=60  callers=[00011898]

undefined1 * FUN_00011838(undefined1 *param_1)

{
  undefined4 uVar1;
  
  Ordinal_77(param_1,100,0);
  uVar1 = DAT_00011874;
  *param_1 = (char)DAT_00011874;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_00011898 @ 00011898  size=40  callers=[]

void FUN_00011898(void)

{
  undefined1 auStack_80 [124];
  
  FUN_00011838(auStack_80);
  Ordinal_1079(auStack_80);
  Ordinal_231(auStack_80);
  return;
}


// ==== FUN_000118c0 @ 000118c0  size=32  callers=[]

undefined4 FUN_000118c0(undefined4 param_1)

{
  Ordinal_1939();
  Ordinal_840(param_1,0);
  return 1;
}


// ==== FUN_000118e0 @ 000118e0  size=36  callers=[]

undefined4 FUN_000118e0(undefined4 param_1,uint param_2)

{
  Ordinal_310();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011904 @ 00011904  size=36  callers=[]

undefined4 FUN_00011904(undefined4 param_1,uint param_2)

{
  Ordinal_231();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011928 @ 00011928  size=36  callers=[]

undefined1 * FUN_00011928(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)Ordinal_315(0x58);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_00011984(puVar1);
  }
  return puVar1;
}


// ==== FUN_00011984 @ 00011984  size=52  callers=[00011928]

undefined1 * FUN_00011984(undefined1 *param_1)

{
  undefined4 uVar1;
  
  Ordinal_85();
  uVar1 = DAT_000119b8;
  *param_1 = (char)DAT_000119b8;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_000119bc @ 000119bc  size=44  callers=[00011a00]

void FUN_000119bc(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_000119e0;
  *param_1 = (char)DAT_000119e0;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x00015bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015bc4)();
  return;
}


// ==== FUN_000119e4 @ 000119e4  size=24  callers=[]

bool FUN_000119e4(void)

{
  int iVar1;
  
  iVar1 = Ordinal_1961();
  return iVar1 != 0;
}


// ==== FUN_00011a00 @ 00011a00  size=36  callers=[]

undefined1 * FUN_00011a00(undefined1 *param_1,uint param_2)

{
  FUN_000119bc(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011af4 @ 00011af4  size=40  callers=[]

undefined1 * FUN_00011af4(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)Ordinal_315(0x174c);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_00011c44(puVar1);
  }
  return puVar1;
}


// ==== FUN_00011b54 @ 00011b54  size=132  callers=[00011c44]

bool FUN_00011b54(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_24 [20];
  
  bVar3 = false;
  iVar1 = Ordinal_1113(DAT_00011bdc,DAT_00011be0);
  local_24[0] = 0;
  if (iVar1 != 0) {
    Ordinal_1120(local_24,0x11,1,iVar1);
    iVar2 = Ordinal_1065(local_24,DAT_00011bd8);
    bVar3 = iVar2 == 0;
    if (bVar3) {
      Ordinal_1120(param_1 + 0x4c,0xb4c,1,iVar1);
    }
    Ordinal_1118(iVar1);
  }
  return bVar3;
}


// ==== FUN_00011be4 @ 00011be4  size=84  callers=[00011d9c]

void FUN_00011be4(int param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_1113(DAT_00011c3c,DAT_00011c40);
  if (iVar1 != 0) {
    Ordinal_1121(DAT_00011c38,0x11,1,iVar1);
    Ordinal_1121(param_1 + 0x4c,0xb4c,1,iVar1);
  }
  Ordinal_1118(iVar1);
  return;
}


// ==== FUN_00011c44 @ 00011c44  size=336  callers=[00011af4]

undefined1 * FUN_00011c44(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  Ordinal_200();
  FUN_000133b8(param_1 + 0x4c);
  FUN_000133b8(param_1 + 0xb98);
  FUN_00013484(param_1 + 0x16f4);
  uVar3 = DAT_00011cec;
  *param_1 = (char)DAT_00011cec;
  param_1[1] = (char)((uint)uVar3 >> 8);
  puVar1 = DAT_00011ce8;
  param_1[2] = (char)((uint)uVar3 >> 0x10);
  param_1[3] = (char)((uint)uVar3 >> 0x18);
  param_1[0x1716] = 0;
  param_1[0x1713] = 0;
  param_1[0x1712] = 0;
  *puVar1 = param_1;
  iVar2 = Ordinal_315(0x14);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = Ordinal_76();
  }
  *(undefined4 *)(param_1 + 0x16e4) = uVar3;
  puVar4 = (undefined1 *)Ordinal_315(0x10);
  if (puVar4 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00013484(puVar4);
  }
  *(undefined4 *)(param_1 + 0x16ec) = uVar3;
  iVar2 = Ordinal_315(0x14);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = Ordinal_76();
  }
  *(undefined4 *)(param_1 + 0x16e8) = uVar3;
  puVar4 = (undefined1 *)Ordinal_315(0x10);
  if (puVar4 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00013484(puVar4);
  }
  *(undefined4 *)(param_1 + 0x16f0) = uVar3;
  FUN_00011b54((int)param_1);
  FUN_00014c28((int)(param_1 + 0x4c));
  FUN_00013578(param_1 + 0x16f4,200);
  return param_1;
}


// ==== FUN_00011d9c @ 00011d9c  size=296  callers=[00013460]

void FUN_00011d9c(undefined1 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  
  uVar1 = DAT_00011ec4;
  *param_1 = (char)DAT_00011ec4;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  FUN_00011be4((int)param_1);
  piVar2 = *(int **)(param_1 + 0x16e4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
  piVar2 = *(int **)(param_1 + 0x16ec);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
  piVar2 = *(int **)(param_1 + 0x16e8);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
  piVar2 = *(int **)(param_1 + 0x16f0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
  uVar1 = DAT_00011ec0;
  puVar3 = param_1 + 0x16f4;
  *puVar3 = (char)DAT_00011ec0;
  param_1[0x16f5] = (char)((uint)uVar1 >> 8);
  param_1[0x16f6] = (char)((uint)uVar1 >> 0x10);
  param_1[0x16f7] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(puVar3);
  uVar1 = DAT_00011ebc;
  *puVar3 = (char)DAT_00011ebc;
  param_1[0x16f5] = (char)((uint)uVar1 >> 8);
  param_1[0x16f6] = (char)((uint)uVar1 >> 0x10);
  param_1[0x16f7] = (char)((uint)uVar1 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x00015ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015ca8)(param_1);
  return;
}


// ==== FUN_00011ed8 @ 00011ed8  size=940  callers=[]

void FUN_00011ed8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  int *piVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  short asStack_3c [2];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [16];
  
  puVar12 = (undefined1 *)(param_1 + 0x4c);
  iVar4 = FUN_0001491c((int)puVar12);
  puVar2 = PTR_DAT_00011fac;
  if ((short)iVar4 == 0) {
LAB_00011f88:
    FUN_0001553c(puVar12);
    Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
  }
  else {
    iVar4 = func_0x00015e8c(PTR_DAT_00011fac,param_3,param_4);
    if (iVar4 == 0) {
      cVar3 = func_0x00014cd4(puVar12,param_3,param_4,asStack_3c,auStack_34,param_1 + 0xb98);
      if (cVar3 == '\0') {
        return;
      }
      piVar11 = (int *)(param_1 + 0x16e4);
      if ((*piVar11 == 0) || (*(int *)(*piVar11 + 4) == 0)) {
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
      }
      uVar14 = 0;
      if (*(int *)(&DAT_000016ec + param_1) != 0) {
        uVar14 = *(undefined4 *)(*(int *)(&DAT_000016ec + param_1) + 4);
      }
      iVar4 = Ordinal_2264(*(undefined4 *)(*piVar11 + 4),uVar14);
      if (*piVar11 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined4 *)(*piVar11 + 4);
      }
      Ordinal_906(uVar14);
      FUN_0001545c((int)puVar12,*piVar11,asStack_3c[0]);
      FUN_0001510c((int)puVar12,*piVar11);
      FUN_000147d4((int)puVar12,*piVar11);
      iVar7 = FUN_0001491c((int)puVar12);
      if ((short)iVar7 == 0) {
        FUN_00013870(*piVar11,0xcc,10,100,0xdc,0x29,0xff00);
      }
      *(undefined1 *)(param_1 + 0x1716) = 1;
      Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
      Ordinal_267(*(undefined4 *)(param_1 + 0x20));
      iVar7 = *piVar11;
      uVar14 = 0;
      if (iVar4 != 0) {
        uVar14 = *(undefined4 *)(iVar4 + 4);
      }
    }
    else {
      if (*(short *)(param_1 + 0x2c2) == 0) {
        puVar5 = (undefined4 *)Ordinal_177(auStack_38,PTR_s_Golf_Solitaire_00011fa8);
        uVar14 = *puVar5;
        puVar5 = (undefined4 *)Ordinal_177(asStack_3c,PTR_s_Start_new_game___00011fa4);
        iVar4 = Ordinal_1760(param_1,*puVar5,uVar14,4);
        Ordinal_297(asStack_3c);
        Ordinal_297(auStack_38);
        if (iVar4 != 6) {
          return;
        }
        goto LAB_00011f88;
      }
      puVar13 = (undefined1 *)(param_1 + 0x4c);
      iVar4 = 0xb4c;
      puVar12 = puVar13;
      puVar9 = (undefined1 *)(param_1 + 0xb98);
      do {
        iVar7 = iVar4 + -1;
        *puVar9 = *puVar12;
        bVar1 = 0 < iVar4;
        iVar4 = iVar7;
        puVar12 = puVar12 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar7 != 0 && bVar1);
      piVar11 = (int *)(param_1 + 0x16e4);
      if ((*piVar11 == 0) || (*(int *)(*piVar11 + 4) == 0)) {
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
      }
      uVar14 = 0;
      if (*(int *)(&DAT_000016ec + param_1) != 0) {
        uVar14 = *(undefined4 *)(*(int *)(&DAT_000016ec + param_1) + 4);
      }
      iVar4 = Ordinal_2264(*(undefined4 *)(*piVar11 + 4),uVar14);
      uVar14 = 0;
      iVar7 = *(int *)puVar2;
      iVar15 = *(int *)(puVar2 + 0xc) - *(int *)(puVar2 + 4);
      if (param_1 != -0x16f4) {
        uVar14 = *(undefined4 *)(param_1 + 0x16f8);
      }
      iVar10 = *(int *)(puVar2 + 8) - iVar7;
      uVar17 = 0xff00;
      uVar8 = *(undefined4 *)(puVar2 + 4);
      if (*piVar11 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(*piVar11 + 4);
      }
      iVar16 = iVar15;
      Ordinal_906(uVar6);
      FUN_00015214(puVar13,*piVar11);
      FUN_0001510c((int)puVar13,*piVar11);
      *(undefined1 *)(param_1 + 0x1716) = 1;
      Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0,0x1716,iVar15,uVar14,iVar7,uVar8,iVar10,iVar16
                  ,uVar17);
      Ordinal_267(*(undefined4 *)(param_1 + 0x20));
      iVar7 = *piVar11;
      uVar14 = 0;
      if (iVar4 != 0) {
        uVar14 = *(undefined4 *)(iVar4 + 4);
      }
    }
    Ordinal_2264(*(undefined4 *)(iVar7 + 4),uVar14);
  }
  return;
}


// ==== FUN_00012294 @ 00012294  size=3904  callers=[]

void FUN_00012294(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  char *pcVar15;
  int *piVar16;
  int *piVar17;
  bool bVar18;
  int local_a4;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined1 auStack_7c [4];
  undefined4 local_78;
  
  Ordinal_136(auStack_7c,param_1);
  if (*(char *)(param_1 + 0x1716) == '\0') {
    if (*(char *)(param_1 + 0x1713) == '\0') {
      piVar9 = (int *)(param_1 + 0x16e4);
      iVar11 = *piVar9;
      if ((iVar11 == 0) || (*(int *)(iVar11 + 4) == 0)) {
        uVar1 = Ordinal_910(local_78);
        Ordinal_799(iVar11,uVar1);
        if (param_1 == -0x16f4) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(undefined4 *)(param_1 + 0x16f8);
        }
        iVar11 = Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar1);
        uVar12 = *(undefined4 *)(&DAT_000016ec + param_1);
        uVar1 = Ordinal_902(*(undefined4 *)(*piVar9 + 4),0xf0,0x140);
        Ordinal_800(uVar12,uVar1);
        uVar1 = 0;
        if (iVar11 != 0) {
          uVar1 = *(undefined4 *)(iVar11 + 4);
        }
        Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar1);
      }
      uVar1 = 0;
      if (*(int *)(&DAT_000016ec + param_1) != 0) {
        uVar1 = *(undefined4 *)(*(int *)(&DAT_000016ec + param_1) + 4);
      }
      iVar11 = Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar1);
      FUN_00013900(*piVar9,(int)(&DAT_000016f4 + param_1),0,0,0xf0,0x140,0xff00);
      FUN_0001470c(param_1 + 0x4c,*piVar9);
      iVar2 = FUN_0001491c(param_1 + 0x4c);
      if ((short)iVar2 == 0) {
        FUN_00013870(*piVar9,0xcc,10,100,0xdc,0x29,0xff00);
      }
      if (*piVar9 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(*piVar9 + 4);
      }
      Ordinal_903(local_78,0,0,0xf0,0x140,uVar1,0,0,0xcc0020);
      uVar1 = 0;
      if (iVar11 != 0) {
        uVar1 = *(undefined4 *)(iVar11 + 4);
      }
      Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar1);
    }
    else {
      piVar9 = (int *)(&DAT_000016e8 + param_1);
      iVar11 = *piVar9;
      bVar18 = false;
      if ((iVar11 == 0) || (*(int *)(iVar11 + 4) == 0)) {
        uVar1 = Ordinal_910(local_78);
        Ordinal_799(iVar11,uVar1);
        if (param_1 == -0x16f4) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(undefined4 *)(param_1 + 0x16f8);
        }
        iVar11 = Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar1);
        uVar12 = *(undefined4 *)(&DAT_000016f0 + param_1);
        uVar1 = Ordinal_902(*(undefined4 *)(*piVar9 + 4),
                            *(int *)(param_1 + 0x1720) - *(int *)(param_1 + 0x1718),
                            *(int *)(param_1 + 0x1724) - *(int *)(param_1 + 0x171c));
        Ordinal_800(uVar12,uVar1);
        uVar1 = 0;
        if (iVar11 != 0) {
          uVar1 = *(undefined4 *)(iVar11 + 4);
        }
        Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar1);
        bVar18 = true;
      }
      piVar3 = (int *)(&DAT_000016f0 + param_1);
      if (*piVar3 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(*piVar3 + 4);
      }
      iVar11 = Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar1);
      if (bVar18) {
        FUN_00014edc(param_1 + 0x4c,*piVar9,0,0);
      }
      iVar2 = *(int *)(&DAT_000016ec + param_1);
      piVar13 = (int *)(param_1 + 0x16e4);
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(iVar2 + 4);
      }
      local_a4 = Ordinal_2264(*(undefined4 *)(*piVar13 + 4),uVar1);
      iVar2 = 0x10;
      puVar7 = (undefined1 *)(param_1 + 0x1728);
      piVar10 = &local_8c;
      do {
        iVar8 = iVar2 + -1;
        *(undefined1 *)piVar10 = *puVar7;
        bVar18 = 0 < iVar2;
        iVar2 = iVar8;
        puVar7 = puVar7 + 1;
        piVar10 = (int *)((int)piVar10 + 1);
      } while (iVar8 != 0 && bVar18);
      piVar10 = (int *)(param_1 + 0x1718);
      iVar4 = *piVar10;
      iVar2 = local_8c;
      iVar8 = iVar4;
      if (iVar4 <= local_8c) {
        iVar2 = *(int *)(param_1 + 0x1720);
        iVar8 = local_84;
      }
      local_84 = iVar8;
      if (iVar4 <= local_8c) {
        local_8c = iVar2;
      }
      if (*piVar13 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(*piVar13 + 4);
      }
      Ordinal_903(local_78,iVar2,local_88,local_84 - iVar2,local_80 - local_88,uVar1,iVar2,local_88,
                  0xcc0020);
      iVar2 = 0x10;
      piVar17 = &local_8c;
      puVar7 = (undefined1 *)(param_1 + 0x1728);
      do {
        iVar8 = iVar2 + -1;
        *(undefined1 *)piVar17 = *puVar7;
        bVar18 = 0 < iVar2;
        iVar2 = iVar8;
        piVar17 = (int *)((int)piVar17 + 1);
        puVar7 = puVar7 + 1;
      } while (iVar8 != 0 && bVar18);
      piVar17 = (int *)(param_1 + 0x171c);
      iVar2 = *piVar17;
      iVar8 = local_88;
      if (iVar2 <= local_88) {
        iVar8 = *(int *)(param_1 + 0x1724);
      }
      if (iVar2 <= local_88) {
        iVar2 = local_80;
      }
      if (*piVar13 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(*piVar13 + 4);
      }
      Ordinal_903(local_78,local_8c,iVar8,local_84 - local_8c,iVar2 - iVar8,uVar1,local_8c,iVar8,
                  0xcc0020);
      pcVar5 = (char *)(param_1 + 0x1715);
      if (*pcVar5 == '\0') {
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*piVar10,*piVar17);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),0,0,uVar1);
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*piVar10 + 1,*piVar17);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),1,0,uVar1);
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*piVar10,*piVar17 + 1);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),0,1,uVar1);
        piVar14 = (int *)(param_1 + 0x1724);
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*piVar10,*piVar14 + -1);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),0,
                    (*(int *)(param_1 + 0x1724) - *(int *)(param_1 + 0x171c)) + -1,uVar1);
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*piVar10 + 1,*piVar14 + -1);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),1,
                    (*(int *)(param_1 + 0x1724) - *(int *)(param_1 + 0x171c)) + -1,uVar1);
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*piVar10,*piVar14 + -2);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),0,
                    (-2 - *(int *)(param_1 + 0x171c)) + *(int *)(param_1 + 0x1724),uVar1);
        piVar16 = (int *)(param_1 + 0x1720);
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*piVar16 + -2,*piVar17);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),(-2 - *piVar10) + *(int *)(param_1 + 0x1720),0,
                    uVar1);
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*piVar16 + -1,*piVar17);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),(*(int *)(param_1 + 0x1720) - *piVar10) + -1,0,
                    uVar1);
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*piVar16 + -1,*piVar17 + 1);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),(*(int *)(param_1 + 0x1720) - *piVar10) + -1,1,
                    uVar1);
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*piVar16 + -2,*piVar14 + -1);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),(-2 - *piVar10) + *(int *)(param_1 + 0x1720),
                    (*(int *)(param_1 + 0x1724) - *(int *)(param_1 + 0x171c)) + -1,uVar1);
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*piVar16 + -1,*piVar14 + -1);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),(*(int *)(param_1 + 0x1720) - *piVar10) + -1,
                    (*(int *)(param_1 + 0x1724) - *(int *)(param_1 + 0x171c)) + -1,uVar1);
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*piVar16 + -1,*piVar14 + -2);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),(*(int *)(param_1 + 0x1720) - *piVar10) + -1,
                    (-2 - *(int *)(param_1 + 0x171c)) + *(int *)(param_1 + 0x1724),uVar1);
        if (*piVar9 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(undefined4 *)(*piVar9 + 4);
        }
        Ordinal_903(local_78,*piVar10,*piVar17,*(int *)(param_1 + 0x1720) - *piVar10,
                    *(int *)(param_1 + 0x1724) - *(int *)(param_1 + 0x171c),uVar1,0,0,0xcc0020);
      }
      else {
        uVar1 = 0;
        iVar2 = *(int *)(&DAT_000016ec + param_1);
        if (iVar2 != 0) {
          uVar1 = *(undefined4 *)(iVar2 + 4);
        }
        local_a4 = Ordinal_2264(*(undefined4 *)(*piVar13 + 4),uVar1);
        pcVar15 = (char *)(param_1 + 0x1714);
        iVar2 = param_1 + 0x1740;
        if (*pcVar15 == '\0') {
          iVar2 = param_1 + 0x1738;
        }
        puVar6 = (undefined4 *)(param_1 + 0x1740);
        if (*pcVar15 == '\0') {
          puVar6 = (undefined4 *)(param_1 + 0x1738);
        }
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*puVar6,*(undefined4 *)(iVar2 + 4));
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),0,0,uVar1);
        iVar2 = param_1 + 0x1740;
        if (*pcVar15 == '\0') {
          iVar2 = param_1 + 0x1738;
        }
        piVar17 = (int *)(param_1 + 0x1740);
        if (*pcVar15 == '\0') {
          piVar17 = (int *)(param_1 + 0x1738);
        }
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*piVar17 + 1,*(undefined4 *)(iVar2 + 4));
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),1,0,uVar1);
        iVar2 = param_1 + 0x1740;
        if (*pcVar15 == '\0') {
          iVar2 = param_1 + 0x1738;
        }
        puVar6 = (undefined4 *)(param_1 + 0x1740);
        if (*pcVar15 == '\0') {
          puVar6 = (undefined4 *)(param_1 + 0x1738);
        }
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*puVar6,*(int *)(iVar2 + 4) + 1);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),0,1,uVar1);
        iVar2 = param_1 + 0x1740;
        if (*pcVar15 == '\0') {
          iVar2 = param_1 + 0x1738;
        }
        puVar6 = (undefined4 *)(param_1 + 0x1740);
        if (*pcVar15 == '\0') {
          puVar6 = (undefined4 *)(param_1 + 0x1738);
        }
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*puVar6,
                            *(int *)(iVar2 + 4) +
                            (*(int *)(param_1 + 0x1724) - *(int *)(param_1 + 0x171c)) + -1);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),0,
                    (*(int *)(param_1 + 0x1724) - *(int *)(param_1 + 0x171c)) + -1,uVar1);
        iVar2 = param_1 + 0x1740;
        if (*pcVar15 == '\0') {
          iVar2 = param_1 + 0x1738;
        }
        piVar17 = (int *)(param_1 + 0x1740);
        if (*pcVar15 == '\0') {
          piVar17 = (int *)(param_1 + 0x1738);
        }
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*piVar17 + 1,
                            *(int *)(iVar2 + 4) +
                            (*(int *)(param_1 + 0x1724) - *(int *)(param_1 + 0x171c)) + -1);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),1,
                    (*(int *)(param_1 + 0x1724) - *(int *)(param_1 + 0x171c)) + -1,uVar1);
        iVar2 = param_1 + 0x1740;
        if (*pcVar15 == '\0') {
          iVar2 = param_1 + 0x1738;
        }
        puVar6 = (undefined4 *)(param_1 + 0x1740);
        if (*pcVar15 == '\0') {
          puVar6 = (undefined4 *)(param_1 + 0x1738);
        }
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),*puVar6,
                            (*(int *)(param_1 + 0x1724) - *(int *)(param_1 + 0x171c)) + -2 +
                            *(int *)(iVar2 + 4));
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),0,
                    (-2 - *(int *)(param_1 + 0x171c)) + *(int *)(param_1 + 0x1724),uVar1);
        iVar2 = param_1 + 0x1740;
        if (*pcVar15 == '\0') {
          iVar2 = param_1 + 0x1738;
        }
        piVar17 = (int *)(param_1 + 0x1740);
        if (*pcVar15 == '\0') {
          piVar17 = (int *)(param_1 + 0x1738);
        }
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),
                            (*piVar17 - *piVar10) + -2 + *(int *)(param_1 + 0x1720),
                            *(undefined4 *)(iVar2 + 4));
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),*(int *)(param_1 + 0x1720) + (-2 - *piVar10),0,
                    uVar1);
        iVar2 = param_1 + 0x1740;
        if (*pcVar15 == '\0') {
          iVar2 = param_1 + 0x1738;
        }
        piVar17 = (int *)(param_1 + 0x1740);
        if (*pcVar15 == '\0') {
          piVar17 = (int *)(param_1 + 0x1738);
        }
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),
                            (*piVar17 - *piVar10) + *(int *)(param_1 + 0x1720) + -1,
                            *(undefined4 *)(iVar2 + 4));
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),(*(int *)(param_1 + 0x1720) - *piVar10) + -1,0,
                    uVar1);
        iVar2 = param_1 + 0x1740;
        if (*pcVar15 == '\0') {
          iVar2 = param_1 + 0x1738;
        }
        piVar17 = (int *)(param_1 + 0x1740);
        if (*pcVar15 == '\0') {
          piVar17 = (int *)(param_1 + 0x1738);
        }
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),
                            (*piVar17 - *piVar10) + *(int *)(param_1 + 0x1720) + -1,
                            *(int *)(iVar2 + 4) + 1);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),(*(int *)(param_1 + 0x1720) - *piVar10) + -1,1,
                    uVar1);
        iVar2 = param_1 + 0x1740;
        if (*pcVar15 == '\0') {
          iVar2 = param_1 + 0x1738;
        }
        piVar17 = (int *)(param_1 + 0x1740);
        if (*pcVar15 == '\0') {
          piVar17 = (int *)(param_1 + 0x1738);
        }
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),
                            (*piVar17 - *piVar10) + -2 + *(int *)(param_1 + 0x1720),
                            *(int *)(iVar2 + 4) +
                            (*(int *)(param_1 + 0x1724) - *(int *)(param_1 + 0x171c)) + -1);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),*(int *)(param_1 + 0x1720) + (-2 - *piVar10),
                    (*(int *)(param_1 + 0x1724) - *(int *)(param_1 + 0x171c)) + -1,uVar1);
        iVar2 = param_1 + 0x1740;
        if (*pcVar15 == '\0') {
          iVar2 = param_1 + 0x1738;
        }
        piVar17 = (int *)(param_1 + 0x1740);
        if (*pcVar15 == '\0') {
          piVar17 = (int *)(param_1 + 0x1738);
        }
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),
                            (*piVar17 - *piVar10) + *(int *)(param_1 + 0x1720) + -1,
                            *(int *)(iVar2 + 4) +
                            (*(int *)(param_1 + 0x1724) - *(int *)(param_1 + 0x171c)) + -1);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),(*(int *)(param_1 + 0x1720) - *piVar10) + -1,
                    (*(int *)(param_1 + 0x1724) - *(int *)(param_1 + 0x171c)) + -1,uVar1);
        iVar2 = param_1 + 0x1740;
        if (*pcVar15 == '\0') {
          iVar2 = param_1 + 0x1738;
        }
        piVar17 = (int *)(param_1 + 0x1740);
        if (*pcVar15 == '\0') {
          piVar17 = (int *)(param_1 + 0x1738);
        }
        uVar1 = Ordinal_936(*(undefined4 *)(*piVar13 + 4),
                            (*piVar17 - *piVar10) + *(int *)(param_1 + 0x1720) + -1,
                            *(int *)(iVar2 + 4) +
                            (*(int *)(param_1 + 0x1724) - *(int *)(param_1 + 0x171c)) + -2);
        Ordinal_944(*(undefined4 *)(*piVar9 + 4),(*(int *)(param_1 + 0x1720) - *piVar10) + -1,
                    (-2 - *(int *)(param_1 + 0x171c)) + *(int *)(param_1 + 0x1724),uVar1);
        iVar2 = *piVar9;
        iVar4 = *(int *)(param_1 + 0x1724) - *(int *)(param_1 + 0x171c);
        iVar8 = *(int *)(param_1 + 0x1720) - *piVar10;
        if (*pcVar15 == '\0') {
          bVar18 = iVar2 == 0;
          if (bVar18) {
            iVar2 = 0;
          }
          if (!bVar18) {
            iVar2 = *(int *)(iVar2 + 4);
          }
          Ordinal_903(*(undefined4 *)(*piVar13 + 4),*(undefined4 *)(param_1 + 0x1738),
                      *(undefined4 *)(param_1 + 0x173c),iVar8,iVar4,iVar2,0,0,0xcc0020);
        }
        else {
          if (iVar2 == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined4 *)(iVar2 + 4);
          }
          Ordinal_903(*(undefined4 *)(*piVar13 + 4),*(undefined4 *)(param_1 + 0x1740),
                      *(undefined4 *)(param_1 + 0x1744),iVar8,iVar4,uVar1,0,0,0xcc0020);
          if (*(char *)(param_1 + 0x1710) != '\0') {
            iVar2 = FUN_00014154(*(short *)(param_1 + 0x1704) * 0xe8 + param_1 + 0x53c);
            if ((short)iVar2 == 1) {
              FUN_0001545c(param_1 + 0x4c,*piVar13,*(short *)(param_1 + 0x1704));
            }
          }
        }
        if (*piVar13 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(undefined4 *)(*piVar13 + 4);
        }
        Ordinal_903(local_78,0,0,0xf0,0x140,uVar1,0,0,0xcc0020);
      }
      uVar1 = 0;
      if (iVar11 != 0) {
        uVar1 = *(undefined4 *)(iVar11 + 4);
      }
      Ordinal_2264(*(undefined4 *)(*piVar9 + 4),uVar1);
      uVar1 = 0;
      if (local_a4 != 0) {
        uVar1 = *(undefined4 *)(local_a4 + 4);
      }
      Ordinal_2264(*(undefined4 *)(*piVar13 + 4),uVar1);
      if (*pcVar5 != '\0') {
        Ordinal_1036(*piVar9);
        piVar9 = (int *)*piVar3;
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 4))(piVar9,1);
        }
        puVar7 = (undefined1 *)Ordinal_315(0x10);
        if (puVar7 == (undefined1 *)0x0) {
          iVar11 = 0;
        }
        else {
          iVar11 = FUN_00013484(puVar7);
        }
        *piVar3 = iVar11;
        *pcVar5 = '\0';
        *(undefined1 *)(param_1 + 0x1712) = 0;
        *(char *)(param_1 + 0x1713) = '\0';
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x16e4) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x16e4) + 4);
    }
    Ordinal_903(local_78,0,0,0xf0,0x140,uVar1,0,0,0xcc0020);
    *(char *)(param_1 + 0x1716) = '\0';
  }
  Ordinal_271(auStack_7c);
  return;
}


// ==== FUN_000131d4 @ 000131d4  size=176  callers=[]

void FUN_000131d4(int param_1)

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
  
  puVar2 = (undefined4 *)Ordinal_177(auStack_14,DAT_00013288);
  uVar7 = *puVar2;
  puVar2 = (undefined4 *)Ordinal_177(auStack_18,DAT_00013284);
  iVar3 = Ordinal_1760(param_1,*puVar2,uVar7,4);
  Ordinal_297(auStack_18);
  Ordinal_297(auStack_14);
  if (iVar3 == 6) {
    FUN_0001553c((undefined1 *)(param_1 + 0x4c));
    iVar3 = 0xb4c;
    puVar5 = (undefined1 *)(param_1 + 0xb98);
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


// ==== FUN_0001328c @ 0001328c  size=64  callers=[]

void FUN_0001328c(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  iVar2 = 0xb4c;
  puVar4 = (undefined1 *)(param_1 + 0x4c);
  puVar5 = (undefined1 *)(param_1 + 0xb98);
  do {
    iVar3 = iVar2 + -1;
    *puVar4 = *puVar5;
    bVar1 = 0 < iVar2;
    iVar2 = iVar3;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar3 != 0 && bVar1);
  Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
  return;
}


// ==== FUN_000132cc @ 000132cc  size=48  callers=[]

void FUN_000132cc(void)

{
  undefined1 auStack_80 [124];
  
  Ordinal_77(auStack_80,100,0);
  Ordinal_1079(auStack_80);
  Ordinal_231(auStack_80);
  return;
}


// ==== FUN_000132fc @ 000132fc  size=64  callers=[]

void FUN_000132fc(void)

{
  Ordinal_493(DAT_0001333c,DAT_00013340,0,0,0,0,0,0,0,0);
  return;
}


// ==== FUN_00013344 @ 00013344  size=84  callers=[]

void FUN_00013344(int param_1)

{
  undefined1 auStack_98 [148];
  
  FUN_00011000(auStack_98,(undefined2 *)(param_1 + 0xb94),(char *)(param_1 + 0xb96),param_1 + 0xb97,
               0);
  Ordinal_1079(auStack_98);
  Ordinal_231(auStack_98);
  return;
}


// ==== FUN_000133b8 @ 000133b8  size=168  callers=[00011c44]

undefined1 * FUN_000133b8(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_20 [12];
  
  FUN_00013b4c(param_1);
  FUN_00013b4c(param_1 + 0x278);
  puVar1 = (undefined4 *)(param_1 + 0x4f0);
  iVar2 = 7;
  do {
    FUN_00014080(puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 0x3a;
  } while (iVar2 != 0);
  FUN_00013ecc((int)param_1);
  FUN_0001468c((int)param_1);
  *(undefined2 *)(param_1 + 0xb48) = 2;
  param_1[0xb4a] = 0;
  param_1[0xb4b] = 0;
  while (*(short *)(param_1 + 0x4ee) != 0) {
    FUN_00013ca8((int)(param_1 + 0x278),auStack_20);
  }
  return param_1;
}


// ==== FUN_00013460 @ 00013460  size=36  callers=[]

undefined1 * FUN_00013460(undefined1 *param_1,uint param_2)

{
  FUN_00011d9c(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00013484 @ 00013484  size=128  callers=[00011c44, 00012294, 00013870, 00013964]

void FUN_00013484(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00013504;
  param_1[1] = (char)((uint)DAT_00013504 >> 8);
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


// ==== FUN_00013508 @ 00013508  size=104  callers=[]

undefined1 * FUN_00013508(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00013574;
  *param_1 = (char)DAT_00013574;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_00013570;
  *param_1 = (char)DAT_00013570;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00013578 @ 00013578  size=52  callers=[00011c44, 00013870, 00013964]

void FUN_00013578(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = Ordinal_628(param_2,2);
  uVar1 = Ordinal_873(uVar1,param_2);
  Ordinal_800(param_1,uVar1);
  return;
}


// ==== FUN_000135b0 @ 000135b0  size=36  callers=[]

undefined1 * FUN_000135b0(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)Ordinal_315(0x1e8);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_0001360c(puVar1);
  }
  return puVar1;
}


// ==== FUN_0001360c @ 0001360c  size=60  callers=[000135b0]

undefined1 * FUN_0001360c(undefined1 *param_1)

{
  undefined4 uVar1;
  
  Ordinal_103();
  Ordinal_48(param_1 + 0xe8);
  uVar1 = DAT_00013648;
  *param_1 = (char)DAT_00013648;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_0001364c @ 0001364c  size=68  callers=[0001384c]

void FUN_0001364c(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00013688;
  *param_1 = (char)DAT_00013688;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_219(param_1 + 0xe8);
                    /* WARNING: Could not recover jumptable at 0x00015e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015e1c)(param_1);
  return;
}


// ==== FUN_0001368c @ 0001368c  size=344  callers=[]

undefined4 FUN_0001368c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = Ordinal_1850();
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    uVar2 = FUN_000137fc(param_1,65000);
    *(undefined4 *)(param_1 + 0x1c8) = uVar2;
    uVar2 = FUN_000137fc(param_1,0x68);
    *(undefined4 *)(param_1 + 0x1cc) = uVar2;
    uVar2 = FUN_000137fc(param_1,0xfdea);
    *(undefined4 *)(param_1 + 0x1d0) = uVar2;
    uVar2 = FUN_000137fc(param_1,65000);
    *(undefined4 *)(param_1 + 0x1d4) = uVar2;
    uVar2 = FUN_000137fc(param_1,0x69);
    *(undefined4 *)(param_1 + 0x1d8) = uVar2;
    uVar2 = FUN_000137fc(param_1,0x8005);
    piVar3 = (int *)(param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0x1dc) = uVar2;
    iVar1 = (**(code **)(*piVar3 + 0xdc))(param_1 + 0xe8,param_1,0x50002800,0xe800);
    if (((iVar1 != 0) && (iVar1 = Ordinal_1676(piVar3,0x80,0xffff), iVar1 != 0)) &&
       (iVar1 = Ordinal_562(piVar3,0), iVar1 != 0)) {
      piVar3 = (int *)(param_1 + 0xe8);
      iVar1 = (**(code **)(*piVar3 + 0xe4))(piVar3,0x80);
      if ((iVar1 != 0) &&
         (iVar1 = Ordinal_868(*(undefined4 *)(param_1 + 0x108),0x451,5,
                              (undefined4 *)(param_1 + 0x1cc)), iVar1 != 0)) {
        Ordinal_2313(piVar3,*(uint *)(param_1 + 0x158) | 0x32);
        return 0;
      }
    }
  }
  return 0xffffffff;
}


// ==== FUN_000137e4 @ 000137e4  size=24  callers=[]

bool FUN_000137e4(void)

{
  int iVar1;
  
  iVar1 = Ordinal_2093();
  return iVar1 != 0;
}


// ==== FUN_000137fc @ 000137fc  size=80  callers=[0001368c]

undefined4 FUN_000137fc(undefined4 param_1,undefined4 param_2)

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


// ==== FUN_0001384c @ 0001384c  size=36  callers=[]

undefined1 * FUN_0001384c(undefined1 *param_1,uint param_2)

{
  FUN_0001364c(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00013870 @ 00013870  size=140  callers=[0001123c, 00011ed8, 00012294, 00014828, 00014970, 000152f0]

void FUN_00013870(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_00013484((undefined1 *)&local_24);
  FUN_00013578(&local_24,param_2);
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  Ordinal_906(uVar1,param_3,param_4,param_5,param_6,local_20,0,0,param_5,param_6,param_7);
  local_24 = DAT_000138fc;
  Ordinal_1040(&local_24);
  return;
}


// ==== FUN_00013900 @ 00013900  size=100  callers=[00012294]

void FUN_00013900(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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


// ==== FUN_00013964 @ 00013964  size=232  callers=[]

void FUN_00013964(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_2c [4];
  undefined4 local_28;
  
  Ordinal_76(auStack_2c);
  FUN_00013484((undefined1 *)&local_3c);
  FUN_00013578(&local_3c,param_2);
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
  local_3c = DAT_00013a50;
  Ordinal_1040(&local_3c);
  local_3c = DAT_00013a4c;
  Ordinal_230(auStack_2c);
  return;
}


// ==== FUN_00013a5c @ 00013a5c  size=208  callers=[]

undefined4 FUN_00013a5c(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort in_stack_00000004;
  ushort in_stack_00000010;
  
  if (*(short *)(param_1 + 0x4ee) == 0) {
LAB_00013b0c:
    uVar2 = 1;
  }
  else {
    uVar3 = (uint)in_stack_00000010;
    if ((uVar3 != 0xd) || (*(char *)(param_1 + 0xb4b) != '\0')) {
      uVar1 = (uint)in_stack_00000004;
      if (((uVar3 == 0xe) && (uVar1 == 2)) || ((uVar3 == 2 && (uVar1 == 0xe)))) goto LAB_00013b0c;
      if (((uVar3 != 0xe) || (uVar1 != 0xd)) && ((uVar3 != 0xd || (uVar1 != 0xe)))) {
        if (uVar3 == uVar1 - 1) goto LAB_00013b0c;
        if (uVar3 == uVar1 + 1) {
          return 1;
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_00013b2c @ 00013b2c  size=32  callers=[00013b4c, 00013c0c, 00013ca8, 00013d94, 00013ecc, 00014080, 00014208, 000142dc, 00014450, 000144f0, 000145b8]

void FUN_00013b2c(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 7) = 1;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


// ==== FUN_00013b4c @ 00013b4c  size=192  callers=[000133b8, 0001553c]

undefined1 * FUN_00013b4c(undefined1 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = (undefined4 *)(param_1 + 4);
  iVar5 = 0x34;
  do {
    FUN_00013b2c(puVar4);
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


// ==== FUN_00013c0c @ 00013c0c  size=156  callers=[]

undefined1 * FUN_00013c0c(int param_1,undefined1 *param_2)

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
    puVar2 = (undefined1 *)FUN_00013b2c(auStack_14);
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


// ==== FUN_00013ca8 @ 00013ca8  size=236  callers=[000133b8, 0001468c, 00015214, 0001553c]

undefined1 * FUN_00013ca8(int param_1,undefined1 *param_2)

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
    puVar3 = (undefined1 *)FUN_00013b2c(auStack_24);
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
    puVar3 = (undefined1 *)FUN_00013b2c(auStack_24);
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


// ==== FUN_00013d94 @ 00013d94  size=224  callers=[]

undefined1 * FUN_00013d94(int param_1,undefined1 *param_2)

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
    puVar3 = (undefined1 *)FUN_00013b2c(auStack_20);
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
    puVar3 = (undefined1 *)FUN_00013b2c(auStack_20);
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


// ==== FUN_00013e74 @ 00013e74  size=88  callers=[]

int FUN_00013e74(int param_1)

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


// ==== FUN_00013ecc @ 00013ecc  size=276  callers=[000133b8, 0001553c]

void FUN_00013ecc(int param_1)

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
    FUN_00013b2c(puVar3);
    iVar8 = iVar8 + -1;
    puVar3 = puVar3 + 3;
  } while (iVar8 != 0);
  Ordinal_535();
  Ordinal_1061();
  uVar7 = 0;
  do {
    do {
      uVar2 = Ordinal_1053();
      (*(code *)*DAT_00013fe0)(0x34,uVar2);
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


// ==== FUN_00013fec @ 00013fec  size=80  callers=[]

void FUN_00013fec(int param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  
  if (*(ushort *)(param_1 + 0x276) < 0x34) {
    puVar2 = &stack0x00000004;
    puVar3 = (undefined1 *)((uint)*(ushort *)(param_1 + 0x276) * 0xc + param_1 + 4);
    iVar4 = 0xc;
    do {
      iVar5 = iVar4 + -1;
      *puVar3 = *puVar2;
      bVar1 = 0 < iVar4;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      iVar4 = iVar5;
    } while (iVar5 != 0 && bVar1);
    *(short *)(param_1 + 0x276) = *(short *)(param_1 + 0x276) + 1;
  }
  return;
}


// ==== FUN_0001403c @ 0001403c  size=68  callers=[]

void FUN_0001403c(int param_1)

{
  if (*(ushort *)(param_1 + 0x276) != 0) {
    *(undefined1 *)((uint)*(ushort *)(param_1 + 0x276) * 0xc + param_1 + -1) = 0;
    *(undefined1 *)((uint)*(ushort *)(param_1 + 0x276) * 0xc + param_1 + -2) = 1;
  }
  return;
}


// ==== FUN_00014080 @ 00014080  size=60  callers=[000133b8]

undefined4 * FUN_00014080(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x13;
  puVar1 = param_1;
  do {
    FUN_00013b2c(puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 3;
  } while (iVar2 != 0);
  *(undefined1 *)((int)param_1 + 0xe6) = 0;
  *(undefined2 *)(param_1 + 0x39) = 0;
  return param_1;
}


// ==== FUN_000140bc @ 000140bc  size=96  callers=[0001468c]

void FUN_000140bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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


// ==== FUN_00014154 @ 00014154  size=84  callers=[00012294, 0001545c]

int FUN_00014154(int param_1)

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


// ==== FUN_000141a8 @ 000141a8  size=96  callers=[]

int FUN_000141a8(int param_1)

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


// ==== FUN_00014208 @ 00014208  size=212  callers=[]

undefined1 * FUN_00014208(int param_1,undefined1 *param_2)

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
    puVar3 = (undefined1 *)FUN_00013b2c(auStack_1c);
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
    puVar3 = (undefined1 *)FUN_00013b2c(auStack_1c);
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


// ==== FUN_000142dc @ 000142dc  size=248  callers=[00014cdc]

undefined1 * FUN_000142dc(int param_1,undefined1 *param_2,short param_3)

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
      puVar3 = (undefined1 *)FUN_00013b2c(auStack_28);
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
  puVar3 = (undefined1 *)FUN_00013b2c(auStack_28);
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


// ==== FUN_000143d4 @ 000143d4  size=124  callers=[]

undefined1 * FUN_000143d4(int param_1,undefined1 *param_2)

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


// ==== FUN_00014450 @ 00014450  size=60  callers=[]

undefined1 * FUN_00014450(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 4);
  iVar2 = 0xd;
  do {
    FUN_00013b2c(puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 3;
  } while (iVar2 != 0);
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0xa0) = 0;
  return param_1;
}


// ==== FUN_00014494 @ 00014494  size=92  callers=[]

void FUN_00014494(int param_1)

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


// ==== FUN_000144f0 @ 000144f0  size=200  callers=[]

char * FUN_000144f0(int param_1,char *param_2)

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
    pcVar2 = (char *)FUN_00013b2c(auStack_14);
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
      pcVar2 = (char *)FUN_00013b2c(auStack_14);
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


// ==== FUN_000145b8 @ 000145b8  size=212  callers=[]

undefined1 * FUN_000145b8(int param_1,undefined1 *param_2,short param_3)

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
  puVar3 = (undefined1 *)FUN_00013b2c(auStack_2c);
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


// ==== FUN_0001468c @ 0001468c  size=128  callers=[000133b8, 0001553c]

void FUN_0001468c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [12];
  
  iVar3 = 0;
  do {
    iVar2 = 0;
    do {
      puVar1 = (undefined4 *)FUN_00013ca8(param_1,auStack_20);
      FUN_000140bc(iVar3 * 0xe8 + param_1 + 0x4f0,*puVar1,puVar1[1],puVar1[2],0);
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < 5);
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
  } while (iVar3 < 7);
  return;
}


// ==== FUN_0001470c @ 0001470c  size=200  callers=[00012294]

void FUN_0001470c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00014970(param_1,param_2);
  FUN_00014fdc(param_1,param_2);
  uVar1 = 0;
  uVar2 = 0;
  do {
    FUN_00014b64(param_1,param_2,uVar2 * 0xe8 + param_1 + 0x4f0,uVar1 * 0x22 + 3,0x12);
    uVar1 = uVar2 + 1 & 0xffff;
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 7);
  FUN_000147d4(param_1,param_2);
  FUN_00014828(param_1,param_2,*(short *)(param_1 + 0x276),0xe,0xe3,7,0xb,0x118);
  return;
}


// ==== FUN_000147d4 @ 000147d4  size=84  callers=[00011ed8, 0001470c]

void FUN_000147d4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001491c(param_1);
  FUN_00014828(param_1,param_2,(short)iVar1,0x2d,1,7,0xb,0x122);
  return;
}


// ==== FUN_00014828 @ 00014828  size=240  callers=[0001470c, 000147d4, 00015214]

void FUN_00014828(undefined4 param_1,int param_2,short param_3,short param_4,short param_5,
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
    sVar2 = (*(code *)*DAT_00014898)(10);
  }
  iVar1 = (int)param_6;
  FUN_00013870(param_2,sVar2 + param_8,(int)param_4,(int)param_5,iVar1,(int)param_7,0xff00);
  FUN_00013870(param_2,param_3 + sVar2 * -10 + param_8,param_4 + iVar1,(int)param_5,iVar1,
               (int)param_7,0xff00);
  return;
}


// ==== FUN_0001491c @ 0001491c  size=84  callers=[00011ed8, 00012294, 000147d4]

int FUN_0001491c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    iVar1 = ((int)*(short *)(iVar2 * 0xe8 + param_1 + 0x5d4) + (int)(short)iVar1) * 0x10000 >> 0x10;
    iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
  } while (iVar2 < 7);
  return iVar1;
}


// ==== FUN_00014970 @ 00014970  size=208  callers=[0001470c, 00015214]

void FUN_00014970(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = DAT_00014a40;
  if (*(short *)(param_1 + 0x276) != 0) {
    FUN_00013870(param_2,*(short *)(param_1 + 0xb48) + 0xfa,*DAT_00014a40,DAT_00014a40[1],0x1e,0x2a,
                 0xff00);
    if (5 < *(ushort *)(param_1 + 0x276)) {
      FUN_00013870(param_2,*(short *)(param_1 + 0xb48) + 0xfa,*piVar1 + 5,piVar1[1],0x1e,0x2a,0xff00
                  );
    }
    if (0xb < *(ushort *)(param_1 + 0x276)) {
      FUN_00013870(param_2,*(short *)(param_1 + 0xb48) + 0xfa,*piVar1 + 10,piVar1[1],0x1e,0x2a,
                   0xff00);
    }
  }
  return;
}


// ==== FUN_00014a44 @ 00014a44  size=216  callers=[00014edc]

void FUN_00014a44(int param_1,int param_2,int param_3,uint param_4,ushort param_5)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  psVar1 = DAT_00014b1c;
  iVar3 = 0;
  if (*(short *)(param_3 + 0xe4) != 0) {
    iVar4 = 0;
    do {
      piVar2 = (int *)(iVar4 * 0xc + param_3);
      if ((char)piVar2[2] != '\0') {
        FUN_000152f0(param_1,param_2,*piVar2,piVar2[1],piVar2[2],param_4 & 0xffff,
                     (int)*psVar1 * (int)(short)iVar3 + (uint)param_5);
        iVar3 = ((short)iVar3 + 1) * 0x10000 >> 0x10;
      }
      iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
    } while (iVar4 < (int)(uint)*(ushort *)(param_3 + 0xe4));
  }
  return;
}


// ==== FUN_00014b20 @ 00014b20  size=68  callers=[]

void FUN_00014b20(int param_1,int param_2,int param_3)

{
  FUN_00014b64(param_1,param_2,(short)param_3 * 0xe8 + param_1 + 0x4f0,param_3 * 0x22 + 3,0x12);
  return;
}


// ==== FUN_00014b64 @ 00014b64  size=192  callers=[0001470c, 00014b20]

void FUN_00014b64(int param_1,int param_2,int param_3,uint param_4,ushort param_5)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  
  psVar1 = DAT_00014c24;
  if (*(short *)(param_3 + 0xe4) != 0) {
    iVar3 = 0;
    do {
      piVar2 = (int *)(iVar3 * 0xc + param_3);
      if ((char)piVar2[2] == '\0') {
        FUN_000152f0(param_1,param_2,*piVar2,piVar2[1],piVar2[2],param_4 & 0xffff,
                     *psVar1 * iVar3 + (uint)param_5);
      }
      iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
    } while (iVar3 < (int)(uint)*(ushort *)(param_3 + 0xe4));
  }
  return;
}


// ==== FUN_00014c28 @ 00014c28  size=172  callers=[00011c44]

void FUN_00014c28(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    if (*(char *)(iVar2 * 0xe8 + param_1 + 0x5d6) != '\0') {
      iVar3 = (short)iVar2 * 0xe8;
      iVar2 = iVar3 + param_1;
      *(undefined1 *)(iVar2 + 0x5d6) = 0;
      if (*(short *)(iVar2 + 0x5d4) == 0) {
        return;
      }
      iVar1 = 0;
      do {
        *(undefined1 *)((iVar1 + 0x6a) * 0xc + iVar3 + param_1) = 0;
        iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
      } while (iVar1 < (int)(uint)*(ushort *)(iVar2 + 0x5d4));
      return;
    }
    iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
  } while (iVar2 < 7);
  return;
}


// ==== FUN_00014cdc @ 00014cdc  size=504  callers=[]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00014cdc(undefined1 *param_1,undefined4 param_2,undefined4 param_3,short *param_4)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  short *psVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  short *psStack0000000c;
  undefined1 *in_stack_00000010;
  undefined1 *in_stack_00000014;
  undefined1 auStack_54 [12];
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined1 auStack_38 [16];
  
  psVar4 = _UNK_00014e28;
  iVar12 = 0;
  uStack00000004 = param_2;
  uStack00000008 = param_3;
  psStack0000000c = param_4;
  do {
    iVar6 = iVar12 * 0xe8;
    uVar2 = *(ushort *)(param_1 + iVar6 + 0x5d4);
    if (uVar2 != 0) {
      puVar8 = auStack_54;
      puVar9 = param_1 + (*(ushort *)(param_1 + 0x4ee) + 0x34) * 0xc;
      iVar10 = 0xc;
      do {
        iVar13 = iVar10 + -1;
        *puVar8 = *puVar9;
        bVar1 = 0 < iVar10;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
        iVar10 = iVar13;
      } while (iVar13 != 0 && bVar1);
      iVar10 = (uint)uVar2 * 0xc + iVar6;
      cVar5 = func_0x00013a54(param_1,*(undefined4 *)(param_1 + iVar10 + 0x4e4),
                              *(undefined4 *)(param_1 + iVar10 + 0x4e8),
                              *(undefined4 *)(param_1 + iVar10 + 0x4ec));
      if (cVar5 != '\0') {
        iStack_48 = iVar12 * 0x22 + 3;
        iVar6 = (*(ushort *)(param_1 + iVar6 + 0x5d4) - 1) * (int)*psVar4;
        iStack_44 = iVar6 + 0x12;
        iStack_40 = iVar12 * 0x22 + 0x21;
        iStack_3c = iVar6 + 0x3c;
        iVar6 = 0x10;
        puVar8 = auStack_38;
        piVar11 = &iStack_48;
        do {
          iVar10 = iVar6 + -1;
          *puVar8 = (char)*piVar11;
          bVar1 = 0 < iVar6;
          iVar6 = iVar10;
          puVar8 = puVar8 + 1;
          piVar11 = (int *)((int)piVar11 + 1);
        } while (iVar10 != 0 && bVar1);
        iVar6 = func_0x00015e8c(auStack_38,uStack00000004,uStack00000008);
        if (iVar6 != 0) {
          iVar6 = 0xb4c;
          puVar8 = param_1;
          do {
            iVar10 = iVar6 + -1;
            *in_stack_00000014 = *puVar8;
            bVar1 = 0 < iVar6;
            iVar6 = iVar10;
            in_stack_00000014 = in_stack_00000014 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar10 != 0 && bVar1);
          sVar3 = (short)iVar12;
          *psStack0000000c = sVar3;
          iVar12 = 0x10;
          puVar8 = auStack_38;
          do {
            iVar6 = iVar12 + -1;
            *in_stack_00000010 = *puVar8;
            bVar1 = 0 < iVar12;
            iVar12 = iVar6;
            in_stack_00000010 = in_stack_00000010 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar6 != 0 && bVar1);
          puVar7 = (undefined4 *)
                   FUN_000142dc((int)(param_1 + sVar3 * 0xe8 + 0x4f0),(undefined1 *)&iStack_48,
                                *(short *)(param_1 + sVar3 * 0xe8 + 0x5d4) + -1);
          func_0x00013fe4(param_1 + 0x278,*puVar7,puVar7[1],puVar7[2]);
          if (*_UNK_00014ed8 != '\0') {
            iVar12 = Ordinal_644();
            func_0x00015fe8(0xd4,*(undefined4 *)(iVar12 + 0xc),0x40005);
          }
          return 1;
        }
      }
    }
    iVar12 = (iVar12 + 1) * 0x10000 >> 0x10;
    if (6 < iVar12) {
      return 0;
    }
  } while( true );
}


// ==== FUN_00014edc @ 00014edc  size=256  callers=[00012294]

void FUN_00014edc(int param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x278) == '\0') ||
     (*(char *)((uint)*(ushort *)(param_1 + 0x4ee) * 0xc + param_1 + 0x278) == '\0')) {
    iVar2 = 0;
    do {
      if (*(char *)(iVar2 * 0xe8 + param_1 + 0x5d6) != '\0') {
        FUN_00014a44(param_1,param_2,(short)iVar2 * 0xe8 + param_1 + 0x4f0,param_3 & 0xffff,
                     (ushort)param_4);
        return;
      }
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < 7);
  }
  else {
    piVar1 = (int *)((*(ushort *)(param_1 + 0x4ee) + 0x34) * 0xc + param_1);
    FUN_000152f0(param_1,param_2,*piVar1,piVar1[1],piVar1[2],param_3,param_4);
  }
  return;
}


// ==== FUN_00014fdc @ 00014fdc  size=292  callers=[0001470c]

void FUN_00014fdc(int param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = DAT_00015108;
  iVar7 = DAT_00015108[1];
  iVar3 = 0;
  if (*(short *)(param_1 + 0x4ee) != 0) {
    iVar6 = 0;
    do {
      sVar2 = (short)iVar3;
      iVar4 = iVar6 * 0xc + param_1;
      if ((*(char *)(iVar4 + 0x283) == '\0') && (*(char *)(iVar4 + 0x284) == '\0')) {
        if (0xf0 < (int)sVar2 * (int)*DAT_00015104 + *piVar1 + 0x1e) {
          sVar2 = 0;
          iVar7 = iVar7 + *DAT_00015100;
        }
        piVar5 = (int *)((iVar6 + 0x35) * 0xc + param_1);
        FUN_000152f0(param_1,param_2,*piVar5,piVar5[1],piVar5[2],
                     (int)sVar2 * (int)*DAT_00015104 + *piVar1,iVar7);
        iVar3 = (sVar2 + 1) * 0x10000 >> 0x10;
      }
      iVar6 = (iVar6 + 1) * 0x10000 >> 0x10;
    } while (iVar6 < (int)(uint)*(ushort *)(param_1 + 0x4ee));
  }
  return;
}


// ==== FUN_0001510c @ 0001510c  size=252  callers=[00011ed8]

void FUN_0001510c(int param_1,int param_2)

{
  short *psVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  
  piVar2 = DAT_00015210;
  psVar1 = DAT_0001520c;
  iVar8 = DAT_00015210[1];
  uVar3 = (uint)*(ushort *)(param_1 + 0x4ee);
  sVar6 = 0;
  if (uVar3 != 0) {
    iVar7 = 0;
    iVar4 = *DAT_00015210;
    do {
      if (0xf0 < (int)sVar6 * (int)*DAT_00015208 + iVar4 + 0x1e) {
        sVar6 = 0;
        iVar8 = iVar8 + *psVar1;
      }
      if (iVar7 == uVar3 - 1) {
        piVar5 = (int *)((iVar7 + 0x35) * 0xc + param_1);
        FUN_000152f0(param_1,param_2,*piVar5,piVar5[1],piVar5[2],
                     (int)sVar6 * (int)*DAT_00015208 + iVar4,iVar8);
        iVar4 = *piVar2;
      }
      uVar3 = (uint)*(ushort *)(param_1 + 0x4ee);
      iVar7 = (iVar7 + 1) * 0x10000 >> 0x10;
      sVar6 = sVar6 + 1;
    } while (iVar7 < (int)uVar3);
  }
  return;
}


// ==== FUN_00015214 @ 00015214  size=216  callers=[00011ed8]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00015214(int param_1,int param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(short *)(param_1 + 0x276) != 0) {
    puVar2 = FUN_00013ca8(param_1,(undefined1 *)&uStack_1c);
    iVar3 = 0xc;
    puVar5 = &uStack_1c;
    do {
      iVar4 = iVar3 + -1;
      *(undefined1 *)puVar5 = *puVar2;
      bVar1 = 0 < iVar3;
      puVar2 = puVar2 + 1;
      iVar3 = iVar4;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    } while (iVar4 != 0 && bVar1);
    uStack_18 = (uint)CONCAT12(1,(undefined2)uStack_18);
    func_0x00013fe4(param_1 + 0x278,uStack_1c,uStack_18,uStack_14);
    if (*_UNK_000152ec != '\0') {
      iVar3 = Ordinal_644();
      func_0x00015fe8(0xd4,*(undefined4 *)(iVar3 + 0xc),0x40005);
    }
    FUN_00014970(param_1,param_2);
    FUN_00014828(param_1,param_2,*(short *)(param_1 + 0x276),0xe,0xe3,7,0xb,0x118);
  }
  return;
}


// ==== FUN_000152f0 @ 000152f0  size=364  callers=[00014a44, 00014b64, 00014edc, 00014fdc, 0001510c, 0001545c]

void FUN_000152f0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,int param_7)

{
  short sVar1;
  undefined2 local_4;
  undefined1 local_1;
  
  local_1 = (char)((uint)param_4 >> 0x18);
  if (local_1 == '\0') {
    FUN_00013870(param_2,0x82,param_6,param_7,0x1e,0x2a,0xff00);
    if ((param_3 == 2) || (sVar1 = 0x8c, param_3 == 1)) {
      sVar1 = 0x99;
    }
    local_4 = (short)param_4;
    FUN_00013870(param_2,local_4 + sVar1 + -2,param_6 + 2,param_7 + 2,9,9,0xffffff);
    FUN_00013870(param_2,(short)param_3 + 0x88,param_6 + 0x11,param_7 + 2,9,9,0xffffff);
    if ((param_3 == 2) || (sVar1 = 0xa6, param_3 == 1)) {
      sVar1 = 0xb3;
    }
    FUN_00013870(param_2,local_4 + sVar1 + -2,param_6 + 0x13,param_7 + 0x1f,9,9,0xffffff);
    sVar1 = 0x89;
    if (param_3 != 1) {
      sVar1 = (short)param_3 + 0xc0;
    }
    FUN_00013870(param_2,sVar1,param_6 + 4,param_7 + 0x1f,9,9,0xffffff);
  }
  else {
    FUN_00013870(param_2,*(short *)(param_1 + 0xb48) + 0xfa,param_6,param_7,0x1e,0x2a,0xff00);
  }
  return;
}


// ==== FUN_0001545c @ 0001545c  size=220  callers=[00011ed8, 00012294]

void FUN_0001545c(int param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_3 * 0xe8 + param_1;
  if (*(short *)(iVar2 + 0x5d4) != 0) {
    iVar1 = FUN_00014154(iVar2 + 0x4f0);
    iVar2 = (uint)*(ushort *)(iVar2 + 0x5d4) * 0xc + param_3 * 0xe8 + param_1;
    FUN_000152f0(param_1,param_2,*(int *)(iVar2 + 0x4e4),*(undefined4 *)(iVar2 + 0x4e8),
                 *(undefined4 *)(iVar2 + 0x4ec),param_3 * 0x22 + 3U & 0xffff,
                 ((iVar1 + -1) * (int)*DAT_00015538 + 0x12) * 0x10000 >> 0x10);
  }
  return;
}


// ==== FUN_0001553c @ 0001553c  size=244  callers=[00011ed8, 000131d4]

void FUN_0001553c(undefined1 *param_1)

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
  
  *(undefined2 *)(param_1 + 0x4ee) = 0;
  puVar2 = FUN_00013b4c(auStack_288);
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
  FUN_00013ecc((int)param_1);
  FUN_0001468c((int)param_1);
  if (param_1[0xb4a] != '\0') {
    uVar4 = Ordinal_1053();
    (*(code *)*DAT_00015630)(5,uVar4);
    *(undefined2 *)(param_1 + 0xb48) = extraout_r1;
  }
  if (*(short *)(param_1 + 0x4ee) != 0) {
    do {
      FUN_00013ca8((int)(param_1 + 0x278),auStack_298);
    } while (*(short *)(param_1 + 0x4ee) != 0);
  }
  return;
}


// ==== Ordinal_1079 @ 00015658  size=8  callers=[00011898, 000132cc, 00013344]

void Ordinal_1079(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001565c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015660)();
  return;
}


// ==== Ordinal_77 @ 0001582c  size=8  callers=[00011000, 00011838, 000132cc]

void Ordinal_77(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015834)();
  return;
}


// ==== Ordinal_317 @ 00015838  size=8  callers=[00011500, 00011524, 00011570, 000115e0, 000118e0, 00011904, 00011a00, 00013460, 00013508, 0001384c]

void Ordinal_317(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001583c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015840)();
  return;
}


// ==== Ordinal_231 @ 00015844  size=8  callers=[00011500, 00011898, 00011904, 000132cc, 00013344]

void Ordinal_231(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001584c)();
  return;
}


// ==== Ordinal_1939 @ 00015850  size=8  callers=[0001108c, 000118c0]

void Ordinal_1939(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015858)();
  return;
}


// ==== Ordinal_1691 @ 00015868  size=8  callers=[000110c4]

void Ordinal_1691(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001586c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015870)();
  return;
}


// ==== Ordinal_271 @ 000158a4  size=8  callers=[0001123c, 00012294]

void Ordinal_271(void)

{
                    /* WARNING: Could not recover jumptable at 0x000158a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000158ac)();
  return;
}


// ==== Ordinal_297 @ 000158b0  size=8  callers=[0001123c, 00011ed8, 000131d4]

void Ordinal_297(void)

{
                    /* WARNING: Could not recover jumptable at 0x000158b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000158b8)();
  return;
}


// ==== Ordinal_177 @ 000158bc  size=8  callers=[0001123c, 00011ed8, 000131d4]

void Ordinal_177(void)

{
                    /* WARNING: Could not recover jumptable at 0x000158c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000158c4)();
  return;
}


// ==== Ordinal_1040 @ 000158c8  size=8  callers=[0001123c, 00011570, 000115e0, 00011d9c, 00013508, 00013870, 00013964]

void Ordinal_1040(void)

{
                    /* WARNING: Could not recover jumptable at 0x000158cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000158d0)();
  return;
}


// ==== Ordinal_2267 @ 000158d4  size=8  callers=[0001123c]

void Ordinal_2267(void)

{
                    /* WARNING: Could not recover jumptable at 0x000158d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000158dc)();
  return;
}


// ==== Ordinal_800 @ 000158e0  size=8  callers=[0001123c, 00012294, 00013578]

void Ordinal_800(void)

{
                    /* WARNING: Could not recover jumptable at 0x000158e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000158e8)();
  return;
}


// ==== Ordinal_2510 @ 000158ec  size=8  callers=[0001123c]

void Ordinal_2510(void)

{
                    /* WARNING: Could not recover jumptable at 0x000158f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000158f4)();
  return;
}


// ==== Ordinal_136 @ 000158f8  size=8  callers=[0001123c, 00012294]

void Ordinal_136(void)

{
                    /* WARNING: Could not recover jumptable at 0x000158fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015900)();
  return;
}


// ==== Ordinal_201 @ 00015a0c  size=8  callers=[00011758]

void Ordinal_201(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015a14)();
  return;
}


// ==== Ordinal_310 @ 00015a18  size=8  callers=[000118e0]

void Ordinal_310(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015a20)();
  return;
}


// ==== Ordinal_228 @ 00015a24  size=8  callers=[0001177c]

void Ordinal_228(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015a2c)();
  return;
}


// ==== Ordinal_2446 @ 00015a30  size=8  callers=[0001177c]

void Ordinal_2446(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015a38)();
  return;
}


// ==== Ordinal_2114 @ 00015a3c  size=8  callers=[0001177c]

void Ordinal_2114(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015a44)();
  return;
}


// ==== Ordinal_2075 @ 00015a48  size=8  callers=[0001177c]

void Ordinal_2075(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015a50)();
  return;
}


// ==== Ordinal_72 @ 00015a54  size=8  callers=[0001177c]

void Ordinal_72(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015a5c)();
  return;
}


// ==== Ordinal_572 @ 00015a60  size=8  callers=[0001177c]

void Ordinal_572(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015a68)();
  return;
}


// ==== Ordinal_162 @ 00015a6c  size=8  callers=[0001177c]

void Ordinal_162(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015a74)();
  return;
}


// ==== Ordinal_315 @ 00015a78  size=8  callers=[0001177c, 00011928, 00011af4, 00011c44, 00012294, 000135b0, 000137fc]

void Ordinal_315(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015a80)();
  return;
}


// ==== Ordinal_2400 @ 00015a84  size=8  callers=[0001177c]

void Ordinal_2400(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015a8c)();
  return;
}


// ==== Ordinal_840 @ 00015a90  size=8  callers=[000118c0]

void Ordinal_840(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015a98)();
  return;
}


// ==== Ordinal_85 @ 00015bb0  size=8  callers=[00011984]

void Ordinal_85(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015bb8)();
  return;
}


// ==== Ordinal_1961 @ 00015bc8  size=8  callers=[000119e4]

void Ordinal_1961(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015bd0)();
  return;
}


// ==== Ordinal_76 @ 00015c88  size=8  callers=[00011c44, 00013964]

void Ordinal_76(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015c90)();
  return;
}


// ==== Ordinal_200 @ 00015c94  size=8  callers=[00011c44]

void Ordinal_200(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015c9c)();
  return;
}


// ==== Ordinal_2264 @ 00015cb8  size=8  callers=[00011ed8, 00012294, 00013964]

void Ordinal_2264(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015cc0)();
  return;
}


// ==== Ordinal_1760 @ 00015cc4  size=8  callers=[00011ed8, 000131d4]

void Ordinal_1760(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015ccc)();
  return;
}


// ==== Ordinal_1036 @ 00015cdc  size=8  callers=[00012294]

void Ordinal_1036(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015ce4)();
  return;
}


// ==== Ordinal_799 @ 00015ce8  size=8  callers=[00012294, 00013964]

void Ordinal_799(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015cf0)();
  return;
}


// ==== Ordinal_628 @ 00015d00  size=8  callers=[00013578]

void Ordinal_628(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015d08)();
  return;
}


// ==== Ordinal_48 @ 00015dfc  size=8  callers=[0001360c]

void Ordinal_48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015e04)();
  return;
}


// ==== Ordinal_103 @ 00015e08  size=8  callers=[0001360c]

void Ordinal_103(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015e10)();
  return;
}


// ==== Ordinal_219 @ 00015e20  size=8  callers=[0001364c]

void Ordinal_219(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015e28)();
  return;
}


// ==== Ordinal_2313 @ 00015e2c  size=8  callers=[0001368c]

void Ordinal_2313(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015e34)();
  return;
}


// ==== Ordinal_562 @ 00015e38  size=8  callers=[0001368c]

void Ordinal_562(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015e40)();
  return;
}


// ==== Ordinal_1676 @ 00015e44  size=8  callers=[0001368c]

void Ordinal_1676(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015e4c)();
  return;
}


// ==== Ordinal_1850 @ 00015e50  size=8  callers=[0001368c]

void Ordinal_1850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015e58)();
  return;
}


// ==== Ordinal_2093 @ 00015e5c  size=8  callers=[000137e4]

void Ordinal_2093(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015e64)();
  return;
}


// ==== Ordinal_644 @ 00015e68  size=8  callers=[000137fc, 00014cdc, 00015214, 0001620c]

void Ordinal_644(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015e70)();
  return;
}


// ==== Ordinal_230 @ 00015e74  size=8  callers=[00013964]

void Ordinal_230(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015e7c)();
  return;
}


// ==== Ordinal_250 @ 00015e80  size=8  callers=[00011138, 00011ed8, 000131d4, 0001328c]

void Ordinal_250(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015e88)();
  return;
}


// ==== Ordinal_249 @ 00015e98  size=8  callers=[00011138, 0001123c]

void Ordinal_249(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015ea0)();
  return;
}


// ==== Ordinal_941 @ 00015ea4  size=8  callers=[0001123c]

void Ordinal_941(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015eac)();
  return;
}


// ==== Ordinal_98 @ 00015eb0  size=8  callers=[0001123c]

void Ordinal_98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015eb8)();
  return;
}


// ==== Ordinal_897 @ 00015ebc  size=8  callers=[00011650]

void Ordinal_897(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015ec4)();
  return;
}


// ==== Ordinal_267 @ 00015ed4  size=8  callers=[0001177c, 00011ed8, 000131d4]

void Ordinal_267(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015edc)();
  return;
}


// ==== Ordinal_1118 @ 00015ee0  size=8  callers=[00011b54, 00011be4]

void Ordinal_1118(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015ee8)();
  return;
}


// ==== Ordinal_1120 @ 00015eec  size=8  callers=[00011b54]

void Ordinal_1120(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015ef4)();
  return;
}


// ==== Ordinal_1113 @ 00015ef8  size=8  callers=[00011b54, 00011be4]

void Ordinal_1113(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015f00)();
  return;
}


// ==== Ordinal_1065 @ 00015f04  size=8  callers=[00011b54]

void Ordinal_1065(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015f0c)();
  return;
}


// ==== Ordinal_1121 @ 00015f10  size=8  callers=[00011be4]

void Ordinal_1121(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015f18)();
  return;
}


// ==== Ordinal_906 @ 00015f1c  size=8  callers=[00011ed8, 00013870, 00013900]

void Ordinal_906(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015f24)();
  return;
}


// ==== Ordinal_944 @ 00015f28  size=8  callers=[00012294]

void Ordinal_944(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015f30)();
  return;
}


// ==== Ordinal_936 @ 00015f34  size=8  callers=[00012294]

void Ordinal_936(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015f3c)();
  return;
}


// ==== Ordinal_902 @ 00015f40  size=8  callers=[00012294]

void Ordinal_902(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015f48)();
  return;
}


// ==== Ordinal_910 @ 00015f4c  size=8  callers=[00012294, 00013964]

void Ordinal_910(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015f54)();
  return;
}


// ==== Ordinal_903 @ 00015f58  size=8  callers=[00012294]

void Ordinal_903(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015f60)();
  return;
}


// ==== Ordinal_493 @ 00015f64  size=8  callers=[000132fc]

void Ordinal_493(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015f6c)();
  return;
}


// ==== Ordinal_873 @ 00015f70  size=8  callers=[00013578]

void Ordinal_873(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015f78)();
  return;
}


// ==== Ordinal_868 @ 00015f7c  size=8  callers=[0001368c]

void Ordinal_868(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015f84)();
  return;
}


// ==== Ordinal_61 @ 00015f88  size=8  callers=[000137fc]

void Ordinal_61(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015f90)();
  return;
}


// ==== Ordinal_63 @ 00015f94  size=8  callers=[000137fc]

void Ordinal_63(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015f9c)();
  return;
}


// ==== Ordinal_874 @ 00015fa0  size=8  callers=[000137fc]

void Ordinal_874(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015fa8)();
  return;
}


// ==== Ordinal_905 @ 00015fac  size=8  callers=[00013964]

void Ordinal_905(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015fb4)();
  return;
}


// ==== Ordinal_1046 @ 00015fb8  size=8  callers=[00013ca8, 000142dc, 000145b8]

void Ordinal_1046(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015fc0)();
  return;
}


// ==== Ordinal_1053 @ 00015fc4  size=8  callers=[00013ecc, 0001553c]

void Ordinal_1053(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015fcc)();
  return;
}


// ==== Ordinal_1061 @ 00015fd0  size=8  callers=[00013ecc]

void Ordinal_1061(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015fd8)();
  return;
}


// ==== Ordinal_535 @ 00015fdc  size=8  callers=[00013ecc]

void Ordinal_535(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00015fe4)();
  return;
}


// ==== entry @ 00015ff4  size=212  callers=[]

void entry(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_000160e8();
  uVar2 = Ordinal_775(param_1,param_2,param_3,param_4);
  *DAT_00016198 = 0;
  puVar1 = DAT_00016194;
  puVar3 = (undefined4 *)*DAT_00016194;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*DAT_00016190;
    while (puVar4 = puVar4 + -1, puVar3 <= puVar4) {
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)();
        puVar3 = (undefined4 *)*puVar1;
      }
    }
  }
  FUN_00016118(DAT_00016200,DAT_00016204);
  FUN_00016118(DAT_000161f8,DAT_000161fc);
  (*DAT_000161f4)(0x42,uVar2);
  return;
}


// ==== FUN_00016028 @ 00016028  size=160  callers=[000160d0]

undefined4 FUN_00016028(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = DAT_00016078;
  uVar3 = Ordinal_35(*DAT_00016078);
  piVar1 = DAT_00016074;
  puVar5 = (undefined4 *)*DAT_00016074;
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


// ==== FUN_000160d0 @ 000160d0  size=24  callers=[00011748]

undefined4 FUN_000160d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00016028(param_1);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ==== FUN_000160e8 @ 000160e8  size=32  callers=[00015ff4]

void FUN_000160e8(void)

{
  FUN_00016118(DAT_00016110,DAT_00016114);
  FUN_00016118(DAT_00016108,DAT_0001610c);
  return;
}


// ==== FUN_00016118 @ 00016118  size=48  callers=[00015ff4, 000160e8]

void FUN_00016118(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


// ==== Ordinal_775 @ 00016208  size=4  callers=[00015ff4]

void Ordinal_775(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001625c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00016260)();
  return;
}


// ==== FUN_0001620c @ 0001620c  size=36  callers=[00016234]

undefined4 FUN_0001620c(undefined1 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Ordinal_644();
  *(undefined1 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x2040) = param_2;
  return 1;
}


// ==== FUN_00016234 @ 00016234  size=32  callers=[]

void FUN_00016234(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001620c(0,0x600);
  *DAT_00016254 = (char)uVar1;
  return;
}


// ==== Ordinal_775 @ 00016258  size=8  callers=[]

void Ordinal_775(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001625c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00016260)();
  return;
}


// ==== Ordinal_34 @ 00016264  size=8  callers=[00016028]

void Ordinal_34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00016268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001626c)();
  return;
}


// ==== Ordinal_33 @ 00016270  size=8  callers=[00016028]

void Ordinal_33(void)

{
                    /* WARNING: Could not recover jumptable at 0x00016274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00016278)();
  return;
}


// ==== Ordinal_35 @ 0001627c  size=8  callers=[00016028]

void Ordinal_35(void)

{
                    /* WARNING: Could not recover jumptable at 0x00016280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00016284)();
  return;
}


