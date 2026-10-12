// ==== FUN_00011000 @ 00011000  size=128  callers=[00013fe4]

undefined1 *
FUN_00011000(undefined1 *param_1,undefined2 *param_2,char *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  Ordinal_77(param_1,0xee,param_8);
  uVar1 = DAT_00011080;
  *(undefined2 **)(param_1 + 0x7c) = param_2;
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  *(char **)(param_1 + 0x88) = param_3;
  *(undefined4 *)(param_1 + 0x90) = param_4;
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  *(undefined4 *)(param_1 + 0x94) = param_5;
  *(undefined4 *)(param_1 + 0x8c) = param_6;
  *(undefined4 *)(param_1 + 0x80) = param_7;
  uVar2 = 5;
  if (*param_3 == '\0') {
    uVar2 = *param_2;
  }
  *(undefined2 *)(param_1 + 0x84) = uVar2;
  return param_1;
}


// ==== FUN_000110a4 @ 000110a4  size=28  callers=[]

undefined4 FUN_000110a4(int param_1)

{
  Ordinal_1939();
  FUN_000110c0(param_1);
  return 1;
}


// ==== FUN_000110c0 @ 000110c0  size=296  callers=[000110a4]

void FUN_000110c0(int param_1)

{
  Ordinal_846(param_1,0x3ea,**(int **)(param_1 + 0x90) == 0xcc0020);
  Ordinal_846(param_1,0x3eb,**(int **)(param_1 + 0x90) == 0x330008);
  Ordinal_846(param_1,0x3ec,**(int **)(param_1 + 0x94) == 0xcc0020);
  Ordinal_846(param_1,0x3ed,**(int **)(param_1 + 0x94) == 0x330008);
  Ordinal_846(param_1,0x3e9,**(short **)(param_1 + 0x80) == 0);
  Ordinal_846(param_1,0x3ee,**(short **)(param_1 + 0x80) == 1);
  Ordinal_846(param_1,0x3ef,1 < **(ushort **)(param_1 + 0x80));
  Ordinal_846(param_1,1000,**(undefined1 **)(param_1 + 0x8c));
  return;
}


// ==== FUN_000111e8 @ 000111e8  size=308  callers=[0001131c]

void FUN_000111e8(int param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_1691(param_1,0x3ea);
  if (iVar1 == 0) {
    iVar1 = Ordinal_1691(param_1,0x3eb);
    if (iVar1 != 0) {
      **(undefined4 **)(param_1 + 0x90) = 0x330008;
    }
  }
  else {
    **(undefined4 **)(param_1 + 0x90) = 0xcc0020;
  }
  iVar1 = Ordinal_1691(param_1,0x3ec);
  if (iVar1 == 0) {
    iVar1 = Ordinal_1691(param_1,0x3ed);
    if (iVar1 != 0) {
      **(undefined4 **)(param_1 + 0x94) = 0x330008;
    }
  }
  else {
    **(undefined4 **)(param_1 + 0x94) = 0xcc0020;
  }
  iVar1 = Ordinal_1691(param_1,0x3e9);
  if (iVar1 == 0) {
    iVar1 = Ordinal_1691(param_1,0x3ee);
    if (iVar1 == 0) {
      iVar1 = Ordinal_1691(param_1,0x3ef);
      if (iVar1 != 0) {
        **(undefined2 **)(param_1 + 0x80) = 2;
      }
    }
    else {
      **(undefined2 **)(param_1 + 0x80) = 1;
    }
  }
  else {
    **(undefined2 **)(param_1 + 0x80) = 0;
  }
  iVar1 = Ordinal_1691(param_1,1000);
  *(bool *)*(undefined4 *)(param_1 + 0x8c) = iVar1 != 0;
  if (*(short *)(param_1 + 0x84) == 5) {
    **(undefined1 **)(param_1 + 0x88) = 1;
  }
  else {
    **(undefined1 **)(param_1 + 0x88) = 0;
    **(undefined2 **)(param_1 + 0x7c) = *(undefined2 *)(param_1 + 0x84);
  }
  return;
}


// ==== FUN_0001131c @ 0001131c  size=24  callers=[]

void FUN_0001131c(int param_1)

{
  FUN_000111e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00017520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017524)(param_1);
  return;
}


// ==== FUN_0001133c @ 0001133c  size=260  callers=[]

void FUN_0001133c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    iVar3 = iVar8 * 0x1b + 0x10;
    sVar2 = (short)iVar3;
    iVar3 = (iVar3 * 0x10000 >> 0x10) + 0x1b;
    if (iStack_38 - aiStack_40[0] < iVar3) {
      sVar2 = 0x10;
      sVar7 = sVar7 + 0x22;
    }
    iStack_50 = (int)sVar2;
    iStack_4c = (int)sVar7;
    iStack_48 = sVar2 + 0x16;
    iStack_44 = sVar7 + 0x1f;
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
    iVar3 = Ordinal_102(auStack_30,param_3,param_4);
    if (iVar3 != 0) break;
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 1;
    if (5 < iVar9 * 0x10000 >> 0x10) {
      return;
    }
  }
  if ((uint)*(ushort *)(param_1 + 0x84) == (int)(short)iVar9) {
    return;
  }
  *(short *)(param_1 + 0x84) = (short)iVar9;
  Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,1);
  return;
}


// ==== FUN_00011440 @ 00011440  size=688  callers=[]

void FUN_00011440(int param_1)

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
  uVar4 = DAT_00011700;
  uVar3 = DAT_000116fc;
  uVar12 = 0;
  do {
    iVar5 = local_e4 * 0x1b + 0x10;
    sVar8 = (short)iVar5;
    if (local_8c - local_94[0] < (iVar5 * 0x10000 >> 0x10) + 0x1b) {
      sVar8 = 0x10;
      local_e4 = 0;
      sVar13 = sVar13 + 0x22;
    }
    iVar5 = (int)sVar8;
    local_b4 = iVar5;
    iVar2 = (int)sVar13;
    local_b0 = iVar2;
    local_ac = iVar5 + 0x16;
    local_a8 = iVar2 + 0x1f;
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
    if (*(ushort *)(param_1 + 0x84) == uVar12) {
      local_d8 = 0;
      local_dc = DAT_000116f8;
      uVar6 = Ordinal_2510(0,3,0);
      Ordinal_800(&local_dc,uVar6);
      uVar6 = Ordinal_2267(&local_7c,&local_dc);
      Ordinal_98(&local_c4,2,2);
      Ordinal_941(local_78,local_c4,local_c0,local_bc,local_b8);
      Ordinal_2267(&local_7c,uVar6);
      local_dc = DAT_000116f4;
      Ordinal_1040(&local_dc);
      local_dc = DAT_000116f0;
    }
    sVar8 = (short)uVar12 + 0x84;
    if (4 < (int)uVar12) {
      sVar8 = 0x83;
    }
    FUN_00014474((int)&local_7c,sVar8,iVar5,iVar2,0x16,0x1f,0xff00);
    if (uVar12 == 5) {
      piVar7 = (int *)Ordinal_177(auStack_d4,uVar3);
      piVar7 = (int *)FUN_00011854((int)&local_7c,auStack_84,piVar7);
      local_cc = *piVar7;
      local_c8 = piVar7[1];
      Ordinal_297(auStack_d4);
      iVar11 = local_cc;
      if (local_cc < 0) {
        iVar11 = local_cc + 1;
      }
      local_a4 = (iVar5 - (iVar11 >> 1)) + 0xb;
      iVar9 = local_c8;
      if (local_c8 < 0) {
        iVar9 = local_c8 + 1;
      }
      local_a0 = (iVar2 - (iVar9 >> 1)) + 0xf;
      local_9c = (iVar11 >> 1) + iVar5 + 0xb;
      local_98 = (iVar9 >> 1) + iVar2 + 0xf;
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


// ==== FUN_00011704 @ 00011704  size=36  callers=[]

undefined4 FUN_00011704(undefined4 param_1,uint param_2)

{
  Ordinal_231();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011728 @ 00011728  size=60  callers=[]

undefined1 * FUN_00011728(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00011764;
  *param_1 = (char)DAT_00011764;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011774 @ 00011774  size=104  callers=[]

undefined1 * FUN_00011774(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_000117e0;
  *param_1 = (char)DAT_000117e0;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_000117dc;
  *param_1 = (char)DAT_000117dc;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_000117e4 @ 000117e4  size=104  callers=[]

undefined1 * FUN_000117e4(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00011850;
  *param_1 = (char)DAT_00011850;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_0001184c;
  *param_1 = (char)DAT_0001184c;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011854 @ 00011854  size=136  callers=[00011440]

undefined1 * FUN_00011854(int param_1,undefined1 *param_2,int *param_3)

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


// ==== FUN_000118f4 @ 000118f4  size=84  callers=[00014158]

undefined1 *
FUN_000118f4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  Ordinal_77(param_1,0xef,param_4);
  uVar1 = DAT_00011948;
  *(undefined4 *)(param_1 + 0x80) = param_2;
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  *(undefined4 *)(param_1 + 0x7c) = param_3;
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  *(undefined4 *)(param_1 + 0x48) = 0;
  return param_1;
}


// ==== FUN_0001196c @ 0001196c  size=36  callers=[]

undefined4 FUN_0001196c(int param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  Ordinal_1939();
  FUN_00011990(param_1);
  return 1;
}


// ==== FUN_00011990 @ 00011990  size=140  callers=[0001196c]

void FUN_00011990(int param_1)

{
  Ordinal_846(param_1,0x3e9,**(short **)(param_1 + 0x7c) == 0);
  Ordinal_846(param_1,0x3ee,**(short **)(param_1 + 0x7c) == 1);
  Ordinal_846(param_1,0x3ef,1 < **(ushort **)(param_1 + 0x7c));
  Ordinal_846(param_1,1000,**(undefined1 **)(param_1 + 0x80));
  return;
}


// ==== FUN_00011a1c @ 00011a1c  size=132  callers=[00011aa0]

void FUN_00011a1c(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = Ordinal_1691(param_1,0x3e9);
  if (iVar1 == 0) {
    iVar1 = Ordinal_1691(param_1,0x3ee);
    if (iVar1 == 0) {
      iVar1 = Ordinal_1691(param_1,0x3ef);
      if (iVar1 == 0) goto LAB_00011a7c;
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  **(undefined2 **)(param_1 + 0x7c) = uVar2;
LAB_00011a7c:
  iVar1 = Ordinal_1691(param_1,1000);
  *(bool *)*(undefined4 *)(param_1 + 0x80) = iVar1 != 0;
  return;
}


// ==== FUN_00011aa0 @ 00011aa0  size=32  callers=[]

void FUN_00011aa0(int param_1)

{
  FUN_00011a1c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00017520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017524)(param_1);
  return;
}


// ==== FUN_00011ab8 @ 00011ab8  size=36  callers=[]

undefined4 FUN_00011ab8(undefined4 param_1,uint param_2)

{
  Ordinal_231();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011adc @ 00011adc  size=36  callers=[]

undefined1 * FUN_00011adc(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)Ordinal_315(0x1e8);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_00011b38(puVar1);
  }
  return puVar1;
}


// ==== FUN_00011b38 @ 00011b38  size=60  callers=[00011adc]

undefined1 * FUN_00011b38(undefined1 *param_1)

{
  undefined4 uVar1;
  
  Ordinal_103();
  Ordinal_48(param_1 + 0xe8);
  uVar1 = DAT_00011b74;
  *param_1 = (char)DAT_00011b74;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_00011b78 @ 00011b78  size=68  callers=[00011d64]

void FUN_00011b78(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00011bb4;
  *param_1 = (char)DAT_00011bb4;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_219(param_1 + 0xe8);
                    /* WARNING: Could not recover jumptable at 0x000176dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000176e0)(param_1);
  return;
}


// ==== FUN_00011bb8 @ 00011bb8  size=324  callers=[]

undefined4 FUN_00011bb8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = Ordinal_1850();
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    uVar2 = FUN_00011d14(param_1,65000);
    *(undefined4 *)(param_1 + 0x1c8) = uVar2;
    uVar2 = FUN_00011d14(param_1,0x68);
    *(undefined4 *)(param_1 + 0x1cc) = uVar2;
    uVar2 = FUN_00011d14(param_1,0x69);
    *(undefined4 *)(param_1 + 0x1d0) = uVar2;
    uVar2 = FUN_00011d14(param_1,0x8003);
    *(undefined4 *)(param_1 + 0x1d4) = uVar2;
    uVar2 = FUN_00011d14(param_1,0x8004);
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


// ==== FUN_00011cfc @ 00011cfc  size=24  callers=[]

bool FUN_00011cfc(void)

{
  int iVar1;
  
  iVar1 = Ordinal_2093();
  return iVar1 != 0;
}


// ==== FUN_00011d14 @ 00011d14  size=80  callers=[00011bb8]

undefined4 FUN_00011d14(undefined4 param_1,undefined4 param_2)

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


// ==== FUN_00011d64 @ 00011d64  size=36  callers=[]

undefined1 * FUN_00011d64(undefined1 *param_1,uint param_2)

{
  FUN_00011b78(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011de4 @ 00011de4  size=24  callers=[]

void FUN_00011de4(void)

{
  FUN_00011df4();
  FUN_00017d9c(DAT_00011e08);
  return;
}


// ==== FUN_00011df4 @ 00011df4  size=64  callers=[00011de4]

undefined1 * FUN_00011df4(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  puVar2 = DAT_00011dfc;
  Ordinal_201(DAT_00011dfc,0);
  uVar1 = DAT_00011de0;
  *puVar2 = (char)DAT_00011de0;
  puVar2[1] = (char)((uint)uVar1 >> 8);
  puVar2[2] = (char)((uint)uVar1 >> 0x10);
  puVar2[3] = (char)((uint)uVar1 >> 0x18);
  return puVar2;
}


// ==== FUN_00011e18 @ 00011e18  size=172  callers=[]

bool FUN_00011e18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [24];
  
  Ordinal_2400(param_1,PTR_u_Spider_Solitaire___Don_Turner_00011e64);
  iVar1 = Ordinal_315(0x6c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = Ordinal_162(iVar1,0x80,PTR_DAT_00011e58,PTR_DAT_00011e5c,PTR_DAT_00011e60);
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


// ==== FUN_00011ed4 @ 00011ed4  size=60  callers=[00011f34]

undefined1 * FUN_00011ed4(undefined1 *param_1)

{
  undefined4 uVar1;
  
  Ordinal_77(param_1,100,0);
  uVar1 = DAT_00011f10;
  *param_1 = (char)DAT_00011f10;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_00011f34 @ 00011f34  size=40  callers=[]

void FUN_00011f34(void)

{
  undefined1 auStack_80 [124];
  
  FUN_00011ed4(auStack_80);
  Ordinal_1079(auStack_80);
  Ordinal_231(auStack_80);
  return;
}


// ==== FUN_00011f5c @ 00011f5c  size=32  callers=[]

undefined4 FUN_00011f5c(undefined4 param_1)

{
  Ordinal_1939();
  Ordinal_840(param_1,0);
  return 1;
}


// ==== FUN_00011f7c @ 00011f7c  size=36  callers=[]

undefined4 FUN_00011f7c(undefined4 param_1,uint param_2)

{
  Ordinal_310();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011fa0 @ 00011fa0  size=36  callers=[]

undefined4 FUN_00011fa0(undefined4 param_1,uint param_2)

{
  Ordinal_231();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011fc4 @ 00011fc4  size=36  callers=[]

undefined1 * FUN_00011fc4(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)Ordinal_315(0x58);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_00012020(puVar1);
  }
  return puVar1;
}


// ==== FUN_00012020 @ 00012020  size=52  callers=[00011fc4]

undefined1 * FUN_00012020(undefined1 *param_1)

{
  undefined4 uVar1;
  
  Ordinal_85();
  uVar1 = DAT_00012054;
  *param_1 = (char)DAT_00012054;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_00012058 @ 00012058  size=44  callers=[0001209c]

void FUN_00012058(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001207c;
  *param_1 = (char)DAT_0001207c;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x000179e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000179ec)();
  return;
}


// ==== FUN_00012080 @ 00012080  size=24  callers=[]

bool FUN_00012080(void)

{
  int iVar1;
  
  iVar1 = Ordinal_1961();
  return iVar1 != 0;
}


// ==== FUN_0001209c @ 0001209c  size=36  callers=[]

undefined1 * FUN_0001209c(undefined1 *param_1,uint param_2)

{
  FUN_00012058(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00012160 @ 00012160  size=24  callers=[]

void FUN_00012160(void)

{
  FUN_00012170();
  FUN_00017d9c(DAT_00012184);
  return;
}


// ==== FUN_00012170 @ 00012170  size=8  callers=[00012160]

void FUN_00012170(void)

{
  FUN_0001432c(DAT_00012178);
  return;
}


// ==== FUN_00012188 @ 00012188  size=36  callers=[]

void FUN_00012188(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_000121b0;
  *(undefined **)PTR_DAT_000121b0 = PTR_PTR_000121b4;
  Ordinal_1040(puVar1);
  *(undefined **)puVar1 = PTR_PTR_000121ac;
  return;
}


// ==== FUN_000121b8 @ 000121b8  size=40  callers=[]

undefined1 * FUN_000121b8(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)Ordinal_315(0x2148);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_00012308(puVar1);
  }
  return puVar1;
}


// ==== FUN_00012218 @ 00012218  size=132  callers=[00014158]

bool FUN_00012218(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_24 [20];
  
  bVar3 = false;
  iVar1 = Ordinal_1113(DAT_000122a0,DAT_000122a4);
  local_24[0] = 0;
  if (iVar1 != 0) {
    Ordinal_1120(local_24,0x13,1,iVar1);
    iVar2 = Ordinal_1065(local_24,DAT_0001229c);
    bVar3 = iVar2 == 0;
    if (bVar3) {
      Ordinal_1120(param_1 + 0x4c,0x1054,1,iVar1);
    }
    Ordinal_1118(iVar1);
  }
  return bVar3;
}


// ==== FUN_000122a8 @ 000122a8  size=84  callers=[00012444]

void FUN_000122a8(int param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_1113(DAT_00012300,DAT_00012304);
  if (iVar1 != 0) {
    Ordinal_1121(DAT_000122fc,0x13,1,iVar1);
    Ordinal_1121(param_1 + 0x4c,0x1054,1,iVar1);
  }
  Ordinal_1118(iVar1);
  return;
}


// ==== FUN_00012308 @ 00012308  size=304  callers=[000121b8]

undefined1 * FUN_00012308(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  Ordinal_200();
  FUN_00014224(param_1 + 0x4c);
  FUN_00014224(param_1 + 0x10a0);
  uVar3 = DAT_000123a4;
  *param_1 = (char)DAT_000123a4;
  param_1[1] = (char)((uint)uVar3 >> 8);
  puVar1 = DAT_000123a0;
  param_1[2] = (char)((uint)uVar3 >> 0x10);
  param_1[3] = (char)((uint)uVar3 >> 0x18);
  param_1[0x2116] = 0;
  param_1[0x2113] = 0;
  param_1[0x2112] = 0;
  param_1[0x2115] = 0;
  *puVar1 = param_1;
  iVar2 = Ordinal_315(0x14);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = Ordinal_76();
  }
  *(undefined4 *)(param_1 + 0x20f4) = uVar3;
  puVar4 = (undefined1 *)Ordinal_315(0x10);
  if (puVar4 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0001432c(puVar4);
  }
  *(undefined4 *)(param_1 + 0x20fc) = uVar3;
  iVar2 = Ordinal_315(0x14);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = Ordinal_76();
  }
  *(undefined4 *)(param_1 + 0x20f8) = uVar3;
  puVar4 = (undefined1 *)Ordinal_315(0x10);
  if (puVar4 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0001432c(puVar4);
  }
  *(undefined4 *)(param_1 + 0x2100) = uVar3;
  FUN_00014420(DAT_00012440,0x82);
  return param_1;
}


// ==== FUN_00012444 @ 00012444  size=208  callers=[00014308]

void FUN_00012444(undefined1 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = DAT_0001250c;
  *param_1 = (char)DAT_0001250c;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  FUN_000122a8((int)param_1);
  piVar2 = *(int **)(param_1 + 0x20f4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
  piVar2 = *(int **)(param_1 + 0x20fc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
  piVar2 = *(int **)(param_1 + 0x20f8);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
  piVar2 = *(int **)(param_1 + 0x2100);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00017aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017aac)(param_1);
  return;
}


// ==== FUN_00012518 @ 00012518  size=4048  callers=[]

void FUN_00012518(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  int *piVar14;
  char *pcVar15;
  int *piVar16;
  int *piVar17;
  bool bVar18;
  int local_ac;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined1 auStack_7c [4];
  undefined4 local_78;
  
  Ordinal_136(auStack_7c,param_1);
  iVar1 = DAT_0001277c;
  if (*(char *)(param_1 + 0x106a) != '\0') {
    FUN_0001552c(param_1 + 0x4c,*(int *)(param_1 + 0x20f4));
    iVar1 = *(int *)(param_1 + 0x20f4);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 4);
    }
    Ordinal_903(local_78,0,0,0xf0,0x140,uVar2,0,0,0xcc0020);
    goto LAB_000134e0;
  }
  pcVar10 = (char *)(param_1 + 0x2116);
  if (*pcVar10 == '\0') {
    if (*(char *)(param_1 + 0x2113) == '\0') {
      piVar8 = (int *)(param_1 + 0x20f4);
      iVar11 = *piVar8;
      if ((iVar11 == 0) || (*(int *)(iVar11 + 4) == 0)) {
        uVar2 = Ordinal_910(local_78);
        Ordinal_799(iVar11,uVar2);
        iVar11 = Ordinal_2264(*(undefined4 *)(*piVar8 + 4),*(undefined4 *)(iVar1 + 4));
        uVar13 = *(undefined4 *)(&DAT_000020fc + param_1);
        uVar2 = Ordinal_902(*(undefined4 *)(*piVar8 + 4),0xf0,0x140);
        Ordinal_800(uVar13,uVar2);
        uVar2 = 0;
        if (iVar11 != 0) {
          uVar2 = *(undefined4 *)(iVar11 + 4);
        }
        Ordinal_2264(*(undefined4 *)(*piVar8 + 4),uVar2);
      }
      uVar2 = 0;
      if (*(int *)(&DAT_000020fc + param_1) != 0) {
        uVar2 = *(undefined4 *)(*(int *)(&DAT_000020fc + param_1) + 4);
      }
      iVar11 = Ordinal_2264(*(undefined4 *)(*piVar8 + 4),uVar2);
      FUN_00014504(*piVar8,iVar1,0,0,0xf0,0x140,0xff00);
      FUN_0001552c(param_1 + 0x4c,*piVar8);
      if (*piVar8 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(*piVar8 + 4);
      }
      Ordinal_903(local_78,0,0,0xf0,0x140,uVar2,0,0,0xcc0020);
      uVar2 = 0;
      if (iVar11 != 0) {
        uVar2 = *(undefined4 *)(iVar11 + 4);
      }
      Ordinal_2264(*(undefined4 *)(*piVar8 + 4),uVar2);
      goto LAB_000134e0;
    }
    piVar8 = (int *)(&DAT_000020f8 + param_1);
    iVar1 = *piVar8;
    bVar18 = false;
    if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == 0)) {
      uVar2 = Ordinal_910(local_78);
      Ordinal_799(iVar1,uVar2);
      iVar1 = Ordinal_2264(*(undefined4 *)(*piVar8 + 4),*(undefined4 *)(DAT_0001277c + 4));
      uVar13 = *(undefined4 *)(&DAT_00002100 + param_1);
      uVar2 = Ordinal_902(*(undefined4 *)(*piVar8 + 4),
                          *(int *)(param_1 + 0x2120) - *(int *)(param_1 + 0x2118),
                          *(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c));
      Ordinal_800(uVar13,uVar2);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = *(undefined4 *)(iVar1 + 4);
      }
      Ordinal_2264(*(undefined4 *)(*piVar8 + 4),uVar2);
      bVar18 = true;
    }
    uVar2 = 0;
    if (*(int *)(&DAT_00002100 + param_1) != 0) {
      uVar2 = *(undefined4 *)(*(int *)(&DAT_00002100 + param_1) + 4);
    }
    iVar1 = Ordinal_2264(*(undefined4 *)(*piVar8 + 4),uVar2);
    if (bVar18) {
      FUN_00016b64(param_1 + 0x4c,*piVar8,0,0);
    }
    iVar11 = *(int *)(&DAT_000020fc + param_1);
    piVar12 = (int *)(param_1 + 0x20f4);
    if (iVar11 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar11 + 4);
    }
    local_ac = Ordinal_2264(*(undefined4 *)(*piVar12 + 4),uVar2);
    iVar11 = 0x10;
    puVar6 = (undefined1 *)(param_1 + 0x2128);
    piVar9 = &local_8c;
    do {
      iVar7 = iVar11 + -1;
      *(undefined1 *)piVar9 = *puVar6;
      bVar18 = 0 < iVar11;
      iVar11 = iVar7;
      puVar6 = puVar6 + 1;
      piVar9 = (int *)((int)piVar9 + 1);
    } while (iVar7 != 0 && bVar18);
    piVar9 = (int *)(param_1 + 0x2118);
    iVar3 = *piVar9;
    iVar11 = local_8c;
    iVar7 = iVar3;
    if (iVar3 <= local_8c) {
      iVar11 = *(int *)(param_1 + 0x2120);
      iVar7 = local_84;
    }
    local_84 = iVar7;
    if (iVar3 <= local_8c) {
      local_8c = iVar11;
    }
    if (*piVar12 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*piVar12 + 4);
    }
    Ordinal_903(local_78,iVar11,local_88,local_84 - iVar11,local_80 - local_88,uVar2,iVar11,local_88
                ,0xcc0020);
    iVar11 = 0x10;
    piVar17 = &local_8c;
    puVar6 = (undefined1 *)(param_1 + 0x2128);
    do {
      iVar7 = iVar11 + -1;
      *(undefined1 *)piVar17 = *puVar6;
      bVar18 = 0 < iVar11;
      iVar11 = iVar7;
      piVar17 = (int *)((int)piVar17 + 1);
      puVar6 = puVar6 + 1;
    } while (iVar7 != 0 && bVar18);
    piVar17 = (int *)(param_1 + 0x211c);
    iVar11 = *piVar17;
    iVar7 = local_88;
    if (iVar11 <= local_88) {
      iVar7 = *(int *)(param_1 + 0x2124);
    }
    if (iVar11 <= local_88) {
      iVar11 = local_80;
    }
    if (*piVar12 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*piVar12 + 4);
    }
    Ordinal_903(local_78,local_8c,iVar7,local_84 - local_8c,iVar11 - iVar7,uVar2,local_8c,iVar7,
                0xcc0020);
    pcVar10 = (char *)(param_1 + 0x2115);
    if (*pcVar10 == '\0') {
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar9,*piVar17);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),0,0,uVar2);
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar9 + 1,*piVar17);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),1,0,uVar2);
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar9,*piVar17 + 1);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),0,1,uVar2);
      piVar14 = (int *)(param_1 + 0x2124);
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar9,*piVar14 + -1);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),0,
                  (*(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c)) + -1,uVar2);
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar9 + 1,*piVar14 + -1);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),1,
                  (*(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c)) + -1,uVar2);
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar9,*piVar14 + -2);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),0,
                  (-2 - *(int *)(param_1 + 0x211c)) + *(int *)(param_1 + 0x2124),uVar2);
      piVar16 = (int *)(param_1 + 0x2120);
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar16 + -2,*piVar17);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),(-2 - *piVar9) + *(int *)(param_1 + 0x2120),0,uVar2);
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar16 + -1,*piVar17);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),(*(int *)(param_1 + 0x2120) - *piVar9) + -1,0,uVar2);
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar16 + -1,*piVar17 + 1);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),(*(int *)(param_1 + 0x2120) - *piVar9) + -1,1,uVar2);
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar16 + -2,*piVar14 + -1);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),(-2 - *piVar9) + *(int *)(param_1 + 0x2120),
                  (*(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c)) + -1,uVar2);
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar16 + -1,*piVar14 + -1);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),(*(int *)(param_1 + 0x2120) - *piVar9) + -1,
                  (*(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c)) + -1,uVar2);
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar16 + -1,*piVar14 + -2);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),(*(int *)(param_1 + 0x2120) - *piVar9) + -1,
                  (-2 - *(int *)(param_1 + 0x211c)) + *(int *)(param_1 + 0x2124),uVar2);
      uVar4 = FUN_00016ff0(param_1 + 0x4c,*(undefined4 *)(param_1 + 0x2108),
                           *(int *)(param_1 + 0x210c));
      if ((uVar4 & 0xff) == 0) {
        iVar11 = 0x1070;
      }
      else {
        iVar11 = 0x1074;
      }
      if (*piVar8 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(*piVar8 + 4);
      }
      Ordinal_903(local_78,*piVar9,*piVar17,*(int *)(param_1 + 0x2120) - *piVar9,
                  *(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c),uVar2,0,0,
                  *(undefined4 *)(param_1 + iVar11));
    }
    else {
      uVar2 = 0;
      iVar11 = *(int *)(&DAT_000020fc + param_1);
      if (iVar11 != 0) {
        uVar2 = *(undefined4 *)(iVar11 + 4);
      }
      local_ac = Ordinal_2264(*(undefined4 *)(*piVar12 + 4),uVar2);
      pcVar15 = (char *)(param_1 + 0x2114);
      iVar11 = param_1 + 0x2140;
      if (*pcVar15 == '\0') {
        iVar11 = param_1 + 0x2138;
      }
      puVar5 = (undefined4 *)(param_1 + 0x2140);
      if (*pcVar15 == '\0') {
        puVar5 = (undefined4 *)(param_1 + 0x2138);
      }
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*puVar5,*(undefined4 *)(iVar11 + 4));
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),0,0,uVar2);
      iVar11 = param_1 + 0x2140;
      if (*pcVar15 == '\0') {
        iVar11 = param_1 + 0x2138;
      }
      piVar17 = (int *)(param_1 + 0x2140);
      if (*pcVar15 == '\0') {
        piVar17 = (int *)(param_1 + 0x2138);
      }
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar17 + 1,*(undefined4 *)(iVar11 + 4));
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),1,0,uVar2);
      iVar11 = param_1 + 0x2140;
      if (*pcVar15 == '\0') {
        iVar11 = param_1 + 0x2138;
      }
      puVar5 = (undefined4 *)(param_1 + 0x2140);
      if (*pcVar15 == '\0') {
        puVar5 = (undefined4 *)(param_1 + 0x2138);
      }
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*puVar5,*(int *)(iVar11 + 4) + 1);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),0,1,uVar2);
      iVar11 = param_1 + 0x2140;
      if (*pcVar15 == '\0') {
        iVar11 = param_1 + 0x2138;
      }
      puVar5 = (undefined4 *)(param_1 + 0x2140);
      if (*pcVar15 == '\0') {
        puVar5 = (undefined4 *)(param_1 + 0x2138);
      }
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*puVar5,
                          *(int *)(iVar11 + 4) +
                          (*(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c)) + -1);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),0,
                  (*(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c)) + -1,uVar2);
      iVar11 = param_1 + 0x2140;
      if (*pcVar15 == '\0') {
        iVar11 = param_1 + 0x2138;
      }
      piVar17 = (int *)(param_1 + 0x2140);
      if (*pcVar15 == '\0') {
        piVar17 = (int *)(param_1 + 0x2138);
      }
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*piVar17 + 1,
                          *(int *)(iVar11 + 4) +
                          (*(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c)) + -1);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),1,
                  (*(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c)) + -1,uVar2);
      iVar11 = param_1 + 0x2140;
      if (*pcVar15 == '\0') {
        iVar11 = param_1 + 0x2138;
      }
      puVar5 = (undefined4 *)(param_1 + 0x2140);
      if (*pcVar15 == '\0') {
        puVar5 = (undefined4 *)(param_1 + 0x2138);
      }
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),*puVar5,
                          (*(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c)) + -2 +
                          *(int *)(iVar11 + 4));
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),0,
                  (-2 - *(int *)(param_1 + 0x211c)) + *(int *)(param_1 + 0x2124),uVar2);
      iVar11 = param_1 + 0x2140;
      if (*pcVar15 == '\0') {
        iVar11 = param_1 + 0x2138;
      }
      piVar17 = (int *)(param_1 + 0x2140);
      if (*pcVar15 == '\0') {
        piVar17 = (int *)(param_1 + 0x2138);
      }
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),
                          (*piVar17 - *piVar9) + -2 + *(int *)(param_1 + 0x2120),
                          *(undefined4 *)(iVar11 + 4));
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),*(int *)(param_1 + 0x2120) + (-2 - *piVar9),0,uVar2);
      iVar11 = param_1 + 0x2140;
      if (*pcVar15 == '\0') {
        iVar11 = param_1 + 0x2138;
      }
      piVar17 = (int *)(param_1 + 0x2140);
      if (*pcVar15 == '\0') {
        piVar17 = (int *)(param_1 + 0x2138);
      }
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),
                          (*piVar17 - *piVar9) + *(int *)(param_1 + 0x2120) + -1,
                          *(undefined4 *)(iVar11 + 4));
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),(*(int *)(param_1 + 0x2120) - *piVar9) + -1,0,uVar2);
      iVar11 = param_1 + 0x2140;
      if (*pcVar15 == '\0') {
        iVar11 = param_1 + 0x2138;
      }
      piVar17 = (int *)(param_1 + 0x2140);
      if (*pcVar15 == '\0') {
        piVar17 = (int *)(param_1 + 0x2138);
      }
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),
                          (*piVar17 - *piVar9) + *(int *)(param_1 + 0x2120) + -1,
                          *(int *)(iVar11 + 4) + 1);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),(*(int *)(param_1 + 0x2120) - *piVar9) + -1,1,uVar2);
      iVar11 = param_1 + 0x2140;
      if (*pcVar15 == '\0') {
        iVar11 = param_1 + 0x2138;
      }
      piVar17 = (int *)(param_1 + 0x2140);
      if (*pcVar15 == '\0') {
        piVar17 = (int *)(param_1 + 0x2138);
      }
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),
                          (*piVar17 - *piVar9) + -2 + *(int *)(param_1 + 0x2120),
                          *(int *)(iVar11 + 4) +
                          (*(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c)) + -1);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),*(int *)(param_1 + 0x2120) + (-2 - *piVar9),
                  (*(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c)) + -1,uVar2);
      iVar11 = param_1 + 0x2140;
      if (*pcVar15 == '\0') {
        iVar11 = param_1 + 0x2138;
      }
      piVar17 = (int *)(param_1 + 0x2140);
      if (*pcVar15 == '\0') {
        piVar17 = (int *)(param_1 + 0x2138);
      }
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),
                          (*piVar17 - *piVar9) + *(int *)(param_1 + 0x2120) + -1,
                          *(int *)(iVar11 + 4) +
                          (*(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c)) + -1);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),(*(int *)(param_1 + 0x2120) - *piVar9) + -1,
                  (*(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c)) + -1,uVar2);
      iVar11 = param_1 + 0x2140;
      if (*pcVar15 == '\0') {
        iVar11 = param_1 + 0x2138;
      }
      piVar17 = (int *)(param_1 + 0x2140);
      if (*pcVar15 == '\0') {
        piVar17 = (int *)(param_1 + 0x2138);
      }
      uVar2 = Ordinal_936(*(undefined4 *)(*piVar12 + 4),
                          (*piVar17 - *piVar9) + *(int *)(param_1 + 0x2120) + -1,
                          *(int *)(iVar11 + 4) +
                          (*(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c)) + -2);
      Ordinal_944(*(undefined4 *)(*piVar8 + 4),(*(int *)(param_1 + 0x2120) - *piVar9) + -1,
                  (-2 - *(int *)(param_1 + 0x211c)) + *(int *)(param_1 + 0x2124),uVar2);
      if (*pcVar15 == '\0') {
        iVar11 = *piVar8;
        bVar18 = iVar11 == 0;
        if (bVar18) {
          iVar11 = 0;
        }
        if (!bVar18) {
          iVar11 = *(int *)(iVar11 + 4);
        }
        Ordinal_903(*(undefined4 *)(*piVar12 + 4),*(undefined4 *)(param_1 + 0x2138),
                    *(undefined4 *)(param_1 + 0x213c),*(int *)(param_1 + 0x2120) - *piVar9,
                    *(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c),iVar11,0,0,0xcc0020);
      }
      else {
        if ((*(int *)(param_1 + 0x2144) - *(int *)(param_1 + 0x211c)) + *(int *)(param_1 + 0x2124) <
            *(int *)(DAT_00013380 + 4)) {
          if (*piVar8 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined4 *)(*piVar8 + 4);
          }
          Ordinal_903(*(undefined4 *)(*piVar12 + 4),*(undefined4 *)(param_1 + 0x2140),
                      *(int *)(param_1 + 0x2144),*(int *)(param_1 + 0x2120) - *piVar9,
                      *(int *)(param_1 + 0x2124) - *(int *)(param_1 + 0x211c),uVar2,0,0,0xcc0020);
        }
        if (*(char *)(param_1 + 0x2110) != '\0') {
          iVar11 = FUN_00014ff0(*(short *)(param_1 + 0x2104) * 0x148 + param_1 + 0x394);
          if ((short)iVar11 == 1) {
            FUN_00016f24(param_1 + 0x4c,*piVar12,*(short *)(param_1 + 0x2104));
          }
        }
      }
      if (*piVar12 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(*piVar12 + 4);
      }
      Ordinal_903(local_78,0,0,0xf0,0x140,uVar2,0,0,0xcc0020);
    }
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 4);
    }
    Ordinal_2264(*(undefined4 *)(*piVar8 + 4),uVar2);
    uVar2 = 0;
    if (local_ac != 0) {
      uVar2 = *(undefined4 *)(local_ac + 4);
    }
    Ordinal_2264(*(undefined4 *)(*piVar12 + 4),uVar2);
    if (*pcVar10 == '\0') goto LAB_000134e0;
    Ordinal_1036(*piVar8);
    piVar8 = *(int **)(&DAT_00002100 + param_1);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8,1);
    }
    puVar6 = (undefined1 *)Ordinal_315(0x10);
    if (puVar6 == (undefined1 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0001432c(puVar6);
    }
    *(undefined4 *)(&DAT_00002100 + param_1) = uVar2;
    *(undefined1 *)(param_1 + 0x2112) = 0;
    *(char *)(param_1 + 0x2113) = '\0';
  }
  else {
    if (*(int *)(param_1 + 0x20f4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x20f4) + 4);
    }
    Ordinal_903(local_78,0,0,0xf0,0x140,uVar2,0,0,0xcc0020);
  }
  *pcVar10 = '\0';
LAB_000134e0:
  Ordinal_271(auStack_7c);
  return;
}


// ==== FUN_000134f8 @ 000134f8  size=1292  callers=[]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000134f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *puVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  puVar1 = PTR_DAT_00013674;
  if (*(char *)(param_1 + 0x106a) == '\0') {
    iVar4 = Ordinal_102(PTR_DAT_00013674,param_3,param_4);
    if (iVar4 != 0) {
      if (*(short *)(param_1 + 0x392) == 0) {
        puVar5 = (undefined4 *)Ordinal_177(&uStack_40,PTR_s_Spider_00013670);
        uVar13 = *puVar5;
        puVar5 = (undefined4 *)Ordinal_177(auStack_48,PTR_s_Start_New_Game___0001366c);
        iVar4 = Ordinal_1760(param_1,*puVar5,uVar13,4);
        Ordinal_297(auStack_48);
        Ordinal_297(&uStack_40);
        if (iVar4 != 6) {
          return;
        }
        *(undefined1 *)(param_1 + 0x2112) = 0;
        *(undefined1 *)(param_1 + 0x2115) = 0;
        puVar10 = (undefined1 *)(param_1 + 0x4c);
        *(undefined1 *)(param_1 + 0x2113) = 0;
        FUN_000171e0(puVar10);
        FUN_000163b4((int)puVar10);
        Ordinal_1044(param_1 + 0x10a0,puVar10,0x1054);
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
        return;
      }
      if (*(short *)(param_1 + 0x392) == 0) {
        return;
      }
      uVar12 = param_1 + 0x4c;
      bVar2 = FUN_000162f0(uVar12);
      if (bVar2) {
        Ordinal_1044(param_1 + 0x10a0,uVar12,0x1054);
        piVar11 = (int *)(param_1 + 0x20f4);
        if ((*piVar11 == 0) || (*(int *)(*piVar11 + 4) == 0)) {
          Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
        }
        if (*(int *)(&DAT_000020fc + param_1) == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined4 *)(*(int *)(&DAT_000020fc + param_1) + 4);
        }
        iVar4 = Ordinal_2264(*(undefined4 *)(*piVar11 + 4),uVar13);
        FUN_00016ca0(uVar12,*piVar11);
        uVar13 = *(undefined4 *)(_UNK_000137c0 + 4);
        iVar6 = *piVar11;
        iVar14 = *(int *)(puVar1 + 0xc) - *(int *)(puVar1 + 4);
        iVar7 = *(int *)puVar1;
        bVar2 = iVar6 == 0;
        if (bVar2) {
          iVar6 = 0;
        }
        uVar16 = 0xff00;
        uVar8 = *(undefined4 *)(puVar1 + 4);
        iVar9 = *(int *)(puVar1 + 8) - iVar7;
        if (!bVar2) {
          iVar6 = *(int *)(iVar6 + 4);
        }
        iVar15 = iVar14;
        Ordinal_906(iVar6);
        FUN_000155f4(uVar12,*piVar11);
        *(undefined1 *)(param_1 + 0x2116) = 1;
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0,0x2116,iVar14,uVar13,iVar7,uVar8,iVar9,
                    iVar15,uVar16);
        Ordinal_267(*(undefined4 *)(param_1 + 0x20));
        uVar13 = 0;
        if (iVar4 != 0) {
          uVar13 = *(undefined4 *)(iVar4 + 4);
        }
        Ordinal_2264(*(undefined4 *)(*piVar11 + 4),uVar13);
        return;
      }
      puVar5 = (undefined4 *)Ordinal_177(&uStack_40,_UNK_000137f0);
      Ordinal_1760(param_1,*puVar5,0,0);
      Ordinal_297(&uStack_40);
      return;
    }
    if (*(char *)(param_1 + 0x2112) != '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x2113) != '\0') {
      return;
    }
    cVar3 = func_0x000167a4(param_1 + 0x4c,param_3,param_4,&iStack_38,param_1 + 0x2104,
                            param_1 + 0x2110);
    if (cVar3 == '\0') {
      return;
    }
    *(char *)(param_1 + 0x2113) = '\x01';
    *(char *)(param_1 + 0x2112) = '\x01';
    piVar11 = (int *)(param_1 + 0x20f4);
    uVar13 = 0;
    if (*(int *)(&DAT_000020fc + param_1) != 0) {
      uVar13 = *(undefined4 *)(*(int *)(&DAT_000020fc + param_1) + 4);
    }
    iVar4 = Ordinal_2264(*(undefined4 *)(*piVar11 + 4),uVar13);
    uVar13 = *(undefined4 *)(_UNK_000137c0 + 4);
    iVar6 = *piVar11;
    iStack_2c = iStack_2c - iStack_34;
    bVar2 = iVar6 == 0;
    if (bVar2) {
      iVar6 = 0;
    }
    uVar8 = 0xff00;
    iVar7 = iStack_30 - iStack_38;
    if (!bVar2) {
      iVar6 = *(int *)(iVar6 + 4);
    }
    iVar14 = iStack_38;
    iVar9 = iStack_34;
    iVar15 = iStack_2c;
    Ordinal_906(iVar6);
    uStack_40 = iStack_38;
    uStack_3c = iStack_34;
    func_0x00016be8(param_1 + 0x4c,*piVar11,iStack_38,iStack_34,iStack_2c,uVar13,iVar14,iVar9,iVar7,
                    iVar15,uVar8);
    uVar13 = 0;
    if (iVar4 != 0) {
      uVar13 = *(undefined4 *)(iVar4 + 4);
    }
    Ordinal_2264(*(undefined4 *)(*piVar11 + 4),uVar13);
    *(undefined4 *)(param_1 + 0x2108) = param_3;
    *(undefined4 *)(param_1 + 0x210c) = param_4;
    iVar4 = 0x10;
    piVar11 = &iStack_38;
    puVar10 = (undefined1 *)(param_1 + 0x2118);
    do {
      iVar6 = iVar4 + -1;
      *puVar10 = (char)*piVar11;
      bVar2 = 0 < iVar4;
      iVar4 = iVar6;
      piVar11 = (int *)((int)piVar11 + 1);
      puVar10 = puVar10 + 1;
    } while (iVar6 != 0 && bVar2);
    iVar4 = 0x10;
    piVar11 = &iStack_38;
    puVar10 = (undefined1 *)(param_1 + 0x2128);
    do {
      iVar6 = iVar4 + -1;
      *puVar10 = (char)*piVar11;
      bVar2 = 0 < iVar4;
      iVar4 = iVar6;
      piVar11 = (int *)((int)piVar11 + 1);
      puVar10 = puVar10 + 1;
    } while (iVar6 != 0 && bVar2);
    uStack_40 = iStack_38;
    iVar4 = uStack_40;
    uStack_3c = iStack_34;
    iVar6 = uStack_3c;
    uStack_40._0_1_ = (undefined1)iStack_38;
    *(undefined1 *)(param_1 + 0x2138) = (undefined1)uStack_40;
    uStack_40._1_1_ = (undefined1)((uint)iStack_38 >> 8);
    *(undefined1 *)(param_1 + 0x2139) = uStack_40._1_1_;
    uStack_40._2_1_ = (undefined1)((uint)iStack_38 >> 0x10);
    *(undefined1 *)(param_1 + 0x213a) = uStack_40._2_1_;
    uStack_40._3_1_ = (undefined1)((uint)iStack_38 >> 0x18);
    *(undefined1 *)(param_1 + 0x213b) = uStack_40._3_1_;
    uStack_3c._0_1_ = (undefined1)iStack_34;
    *(undefined1 *)(param_1 + 0x213c) = (undefined1)uStack_3c;
    uStack_3c._1_1_ = (undefined1)((uint)iStack_34 >> 8);
    *(undefined1 *)(param_1 + 0x213d) = uStack_3c._1_1_;
    uStack_3c._2_1_ = (undefined1)((uint)iStack_34 >> 0x10);
    *(undefined1 *)(param_1 + 0x213e) = uStack_3c._2_1_;
    uStack_3c._3_1_ = (undefined1)((uint)iStack_34 >> 0x18);
    *(undefined1 *)(param_1 + 0x213f) = uStack_3c._3_1_;
    uStack_40 = iVar4;
    uStack_3c = iVar6;
  }
  else {
    *(undefined1 *)(param_1 + 0x2112) = 0;
    *(undefined1 *)(param_1 + 0x2115) = 0;
    puVar10 = (undefined1 *)(param_1 + 0x4c);
    *(undefined1 *)(param_1 + 0x2113) = 0;
    FUN_000171e0(puVar10);
    FUN_000163b4((int)puVar10);
    Ordinal_1044(param_1 + 0x10a0,puVar10,0x1054);
  }
  Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
  Ordinal_267(*(undefined4 *)(param_1 + 0x20));
  return;
}


// ==== FUN_00013a20 @ 00013a20  size=952  callers=[]

void FUN_00013a20(int param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  short sVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  char *pcVar11;
  int *piVar12;
  short *psVar13;
  short *psVar14;
  int iVar15;
  
  if (*(char *)(param_1 + 0x2112) != '\0') {
    iVar15 = 0x10;
    puVar9 = (undefined1 *)(param_1 + 0x2118);
    puVar10 = (undefined1 *)(param_1 + 0x2128);
    do {
      iVar7 = iVar15 + -1;
      *puVar10 = *puVar9;
      bVar1 = 0 < iVar15;
      iVar15 = iVar7;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar7 != 0 && bVar1);
    Ordinal_101((undefined1 *)(param_1 + 0x2118),param_3 - *(int *)(param_1 + 0x2108),
                param_4 - *(int *)(param_1 + 0x210c));
    *(int *)(param_1 + 0x210c) = param_4;
    *(int *)(param_1 + 0x2108) = param_3;
    psVar13 = (short *)(param_1 + 0x2106);
    *psVar13 = -1;
    pcVar11 = (char *)(param_1 + 0x2111);
    *pcVar11 = '\0';
    pcVar4 = (char *)(param_1 + 0x2110);
    psVar14 = (short *)(param_1 + 0x2104);
    iVar15 = param_1 + 0x4c;
    cVar3 = func_0x0001646c(iVar15,param_3,param_4,psVar13,pcVar11,*psVar14,*pcVar4,param_1 + 0x2140
                            ,param_1 + 0x10a0);
    *(char *)(param_1 + 0x2114) = cVar3 != '\0';
    *(undefined1 *)(param_1 + 0x2115) = 1;
    Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
    Ordinal_267(*(undefined4 *)(param_1 + 0x20));
    bVar1 = false;
    if (*(char *)(param_1 + 0x2114) != '\0') {
      pcVar6 = pcVar4;
      if (*pcVar11 != '\0') {
        uVar5 = FUN_00015d90(iVar15,*psVar13);
        if ((uVar5 & 0xff) == 0) {
          if (*(ushort *)(*psVar14 * 0x148 + param_1 + 0x4d8) <
              *(ushort *)(*psVar13 * 0x148 + param_1 + 0x4d8)) {
            FUN_00015a3c(iVar15,*(int *)(param_1 + 0x20f4),*psVar13,'\0');
          }
        }
        else {
          piVar12 = (int *)(param_1 + 0x20f4);
          uVar8 = 0;
          if (*(int *)(&DAT_000020fc + param_1) != 0) {
            uVar8 = *(undefined4 *)(*(int *)(&DAT_000020fc + param_1) + 4);
          }
          bVar1 = true;
          pcVar6 = (char *)Ordinal_2264(*(undefined4 *)(*piVar12 + 4),uVar8);
          FUN_000160d8(iVar15,*piVar12);
          FUN_00015a3c(iVar15,*piVar12,*psVar13,'\0');
        }
      }
      if (((*pcVar4 != '\0') && (-1 < *psVar14)) &&
         (uVar5 = FUN_00015e68(iVar15,*psVar14), (uVar5 & 0xff) != 0)) {
        uVar8 = 0;
        if (*(int *)(&DAT_000020fc + param_1) != 0) {
          uVar8 = *(undefined4 *)(*(int *)(&DAT_000020fc + param_1) + 4);
        }
        pcVar6 = (char *)Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x20f4) + 4),uVar8);
        bVar1 = true;
        FUN_00015a3c(iVar15,*(int *)(param_1 + 0x20f4),*psVar14,'\0');
      }
      sVar2 = *psVar13;
      if ((*(short *)(param_1 + (sVar2 * 0x29 + (uint)*(ushort *)(sVar2 * 0x148 + param_1 + 0x4d4))
                                * 8 + 0x390) == 0xe) &&
         (uVar5 = FUN_00015ca8(iVar15,sVar2), (uVar5 & 0xff) != 0)) {
        uVar8 = 0;
        if (*(int *)(&DAT_000020fc + param_1) != 0) {
          uVar8 = *(undefined4 *)(*(int *)(&DAT_000020fc + param_1) + 4);
        }
        bVar1 = true;
        pcVar6 = (char *)Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x20f4) + 4),uVar8);
        FUN_0001612c(iVar15,*(int *)(param_1 + 0x20f4),(int)*psVar13);
      }
      if (bVar1) {
        uVar8 = 0;
        if (pcVar6 != (char *)0x0) {
          uVar8 = *(undefined4 *)(pcVar6 + 4);
        }
        Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x20f4) + 4),uVar8);
        if (*(char *)(param_1 + 0x106a) == '\0') {
          *(undefined1 *)(param_1 + 0x2116) = 1;
        }
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
        Ordinal_267(*(undefined4 *)(param_1 + 0x20));
      }
    }
    if (*(char *)(param_1 + 0x106a) != '\0') {
      Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
    }
  }
  return;
}


// ==== FUN_00013dd8 @ 00013dd8  size=232  callers=[]

void FUN_00013dd8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  
  uVar3 = param_3 - *(int *)(param_1 + 0x2108);
  uVar4 = param_4 - *(int *)(param_1 + 0x210c);
  if (((*(char *)(param_1 + 0x2112) != '\0') && (*(char *)(param_1 + 0x2113) != '\0')) &&
     ((uVar2 = (int)uVar3 >> 0x1f, 1 < (int)((uVar3 ^ uVar2) - uVar2) ||
      (uVar3 = (int)uVar4 >> 0x1f, 1 < (int)((uVar4 ^ uVar3) - uVar3))))) {
    puVar5 = (undefined1 *)(param_1 + 0x2128);
    iVar6 = 0x10;
    puVar8 = (undefined1 *)(param_1 + 0x2118);
    do {
      iVar7 = iVar6 + -1;
      *puVar5 = *puVar8;
      bVar1 = 0 < iVar6;
      puVar5 = puVar5 + 1;
      iVar6 = iVar7;
      puVar8 = puVar8 + 1;
    } while (iVar7 != 0 && bVar1);
    Ordinal_101();
    *(int *)(param_1 + 0x2108) = param_3;
    *(int *)(param_1 + 0x210c) = param_4;
    Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
    Ordinal_267(*(undefined4 *)(param_1 + 0x20));
  }
  return;
}


// ==== FUN_00013ec0 @ 00013ec0  size=76  callers=[]

void FUN_00013ec0(int param_1)

{
  Ordinal_1044(param_1 + 0x4c,param_1 + 0x10a0,0x1054);
  FUN_000163b4(param_1 + 0x4c);
  Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
  Ordinal_267(*(undefined4 *)(param_1 + 0x20));
  return;
}


// ==== FUN_00013f0c @ 00013f0c  size=208  callers=[]

void FUN_00013f0c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  
  puVar1 = (undefined4 *)Ordinal_177(auStack_18,DAT_00013fe0);
  uVar4 = *puVar1;
  puVar1 = (undefined4 *)Ordinal_177(auStack_1c,DAT_00013fdc);
  iVar2 = Ordinal_1760(param_1,*puVar1,uVar4,4);
  Ordinal_297(auStack_1c);
  Ordinal_297(auStack_18);
  if (iVar2 == 6) {
    *(undefined1 *)(param_1 + 0x2112) = 0;
    *(undefined1 *)(param_1 + 0x2115) = 0;
    *(undefined1 *)(param_1 + 0x2113) = 0;
    puVar3 = (undefined1 *)(param_1 + 0x4c);
    FUN_000171e0(puVar3);
    FUN_000163b4((int)puVar3);
    Ordinal_1044(param_1 + 0x10a0,puVar3,0x1054);
    Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
  }
  return;
}


// ==== FUN_00013fe4 @ 00013fe4  size=252  callers=[]

void FUN_00013fe4(int param_1)

{
  int iVar1;
  undefined1 auStack_b8 [152];
  
  FUN_00011000(auStack_b8,(undefined2 *)(param_1 + 0x1064),(char *)(param_1 + 0x1066),
               (undefined4 *)(param_1 + 0x1070),(undefined4 *)(param_1 + 0x1074),
               (undefined1 *)(param_1 + 0x109c),(undefined2 *)(param_1 + 0x1078),0);
  iVar1 = Ordinal_1079(auStack_b8);
  if (iVar1 == 1) {
    *(undefined2 *)(param_1 + 0x20b8) = *(undefined2 *)(param_1 + 0x1064);
    *(char *)(param_1 + 0x20ba) = *(char *)(param_1 + 0x1066);
    *(undefined4 *)(param_1 + 0x20c4) = *(undefined4 *)(param_1 + 0x1070);
    *(undefined4 *)(param_1 + 0x20c8) = *(undefined4 *)(param_1 + 0x1074);
    *(undefined1 *)(param_1 + 0x20f0) = *(undefined1 *)(param_1 + 0x109c);
    *(undefined2 *)(param_1 + 0x20cc) = *(undefined2 *)(param_1 + 0x1078);
  }
  Ordinal_231(auStack_b8);
  return;
}


// ==== FUN_000140e0 @ 000140e0  size=48  callers=[]

void FUN_000140e0(void)

{
  undefined1 auStack_80 [124];
  
  Ordinal_77(auStack_80,100,0);
  Ordinal_1079(auStack_80);
  Ordinal_231(auStack_80);
  return;
}


// ==== FUN_00014110 @ 00014110  size=64  callers=[]

void FUN_00014110(void)

{
  Ordinal_493(DAT_00014150,DAT_00014154,0,0,0,0,0,0,0,0);
  return;
}


// ==== FUN_00014158 @ 00014158  size=204  callers=[]

void FUN_00014158(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_90 [132];
  
  Ordinal_1946();
  bVar1 = FUN_00012218(param_1);
  if (bVar1) {
    FUN_000163b4(param_1 + 0x4c);
    if (*(char *)(param_1 + 0x106a) != '\0') {
      FUN_000171e0((undefined1 *)(param_1 + 0x4c));
    }
  }
  else {
    FUN_000118f4(auStack_90,param_1 + 0x109c,param_1 + 0x1078,0);
    iVar2 = Ordinal_1079(auStack_90);
    if (iVar2 == 1) {
      FUN_000171e0((undefined1 *)(param_1 + 0x4c));
      Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
    }
    Ordinal_231(auStack_90);
  }
  Ordinal_1044(param_1 + 0x10a0,param_1 + 0x4c,0x1054);
  Ordinal_703(*(undefined4 *)(param_1 + 0x20));
  Ordinal_1207();
  return;
}


// ==== FUN_00014224 @ 00014224  size=228  callers=[00012308]

undefined1 * FUN_00014224(undefined1 *param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 auStack_358 [840];
  
  FUN_00014864(param_1);
  puVar5 = (undefined4 *)(param_1 + 0x348);
  iVar6 = 10;
  do {
    FUN_00014ef4(puVar5);
    iVar6 = iVar6 + -1;
    puVar5 = puVar5 + 0x52;
  } while (iVar6 != 0);
  *(undefined2 *)(param_1 + 0x102c) = 2;
  puVar2 = FUN_00014718(auStack_358,2,2);
  iVar6 = 0x348;
  puVar4 = param_1;
  do {
    iVar3 = iVar6 + -1;
    *puVar4 = *puVar2;
    bVar1 = 0 < iVar6;
    puVar2 = puVar2 + 1;
    iVar6 = iVar3;
    puVar4 = puVar4 + 1;
  } while (iVar3 != 0 && bVar1);
  FUN_00014d0c((int)param_1);
  FUN_00015460((int)param_1);
  param_1[0x101e] = 0;
  *(undefined2 *)(param_1 + 0x1018) = 2;
  *(undefined2 *)(param_1 + 0x102e) = 0;
  param_1[0x101a] = 0;
  param_1[0x1050] = 0;
  *(undefined4 *)(param_1 + 0x1024) = 0xcc0020;
  *(undefined4 *)(param_1 + 0x1028) = 0xcc0020;
  return param_1;
}


// ==== FUN_00014308 @ 00014308  size=36  callers=[]

undefined1 * FUN_00014308(undefined1 *param_1,uint param_2)

{
  FUN_00012444(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_0001432c @ 0001432c  size=128  callers=[00012170, 00012308, 00012518, 00014474, 00014568]

void FUN_0001432c(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_000143ac;
  param_1[1] = (char)((uint)DAT_000143ac >> 8);
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


// ==== FUN_000143b0 @ 000143b0  size=104  callers=[]

undefined1 * FUN_000143b0(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001441c;
  *param_1 = (char)DAT_0001441c;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_00014418;
  *param_1 = (char)DAT_00014418;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00014420 @ 00014420  size=52  callers=[00012308, 00014474, 00014568]

void FUN_00014420(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = Ordinal_628(param_2,2);
  uVar1 = Ordinal_873(uVar1,param_2);
  Ordinal_800(param_1,uVar1);
  return;
}


// ==== FUN_00014454 @ 00014454  size=40  callers=[00015c24]

void FUN_00014454(void)

{
  int iVar1;
  
  iVar1 = Ordinal_644();
                    /* WARNING: Could not recover jumptable at 0x00017c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c80)(0xcb,*(undefined4 *)(iVar1 + 0xc),0x40005);
  return;
}


// ==== FUN_00014474 @ 00014474  size=140  callers=[00011440, 0001552c, 000155f4, 00016dac]

void FUN_00014474(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_0001432c((undefined1 *)&local_24);
  FUN_00014420(&local_24,param_2);
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  Ordinal_906(uVar1,param_3,param_4,param_5,param_6,local_20,0,0,param_5,param_6,param_7);
  local_24 = DAT_00014500;
  Ordinal_1040(&local_24);
  return;
}


// ==== FUN_00014504 @ 00014504  size=100  callers=[00012518]

void FUN_00014504(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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


// ==== FUN_00014568 @ 00014568  size=232  callers=[]

void FUN_00014568(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_2c [4];
  undefined4 local_28;
  
  Ordinal_76(auStack_2c);
  FUN_0001432c((undefined1 *)&local_3c);
  FUN_00014420(&local_3c,param_2);
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
  local_3c = DAT_00014654;
  Ordinal_1040(&local_3c);
  local_3c = DAT_00014650;
  Ordinal_230(auStack_2c);
  return;
}


// ==== FUN_00014658 @ 00014658  size=84  callers=[00016474, 000167ac, 00016ff0]

undefined4
FUN_00014658(undefined4 param_1,undefined4 param_2,ushort param_3,uint param_4,ushort param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_3;
  uVar1 = (uint)param_5;
  if (uVar3 == 0xe) {
    param_4 = uVar1;
  }
  if (uVar3 == 0xe && param_4 == 2) {
    uVar2 = 1;
  }
  else if ((uVar1 == 0xe) || (uVar2 = 1, uVar3 != uVar1 - 1)) {
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_000146b4 @ 000146b4  size=72  callers=[]

undefined4
FUN_000146b4(int param_1,undefined4 param_2,int param_3,undefined4 param_4,ushort param_5,
            ushort param_6)

{
  undefined4 uVar1;
  
  if (param_1 == param_3) {
    if (param_6 == 0xe) {
      if (param_5 != 2) {
        return 0;
      }
    }
    else if ((uint)param_5 != param_6 + 1) goto LAB_000146dc;
    uVar1 = 1;
  }
  else {
LAB_000146dc:
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_000146fc @ 000146fc  size=28  callers=[00014718, 00014864, 0001491c, 00014a04, 00014b94, 00014d0c, 00014ef4, 0001509c, 00015218, 00016244, 000167ac]

void FUN_000146fc(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 6) = 1;
  *(undefined1 *)((int)param_1 + 7) = 0;
  return;
}


// ==== FUN_00014718 @ 00014718  size=328  callers=[00014224, 000171e0]

undefined1 * FUN_00014718(undefined1 *param_1,short param_2,ushort param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  puVar5 = (undefined4 *)(param_1 + 4);
  iVar6 = 0x68;
  do {
    FUN_000146fc(puVar5);
    iVar6 = iVar6 + -1;
    puVar5 = puVar5 + 2;
  } while (iVar6 != 0);
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0x344) = 0;
  *(undefined2 *)(param_1 + 0x346) = 0;
  Ordinal_535();
  Ordinal_1061();
  uVar1 = Ordinal_1053();
  (*(code *)*DAT_000147d0)(4,uVar1);
  if (0 < param_2) {
    uVar8 = 0;
    uVar3 = extraout_r1;
    do {
      uVar7 = 0;
      do {
        if (param_3 == 1) {
          (*(code *)*DAT_000147d0)(2,uVar7);
          uVar3 = extraout_r1_00;
        }
        else if (1 < param_3) {
          uVar3 = uVar7;
        }
        uVar4 = 2;
        uVar2 = 2;
        do {
          iVar6 = (uVar8 * 4 + uVar7) * 0xd + uVar2;
          *(short *)(param_1 + iVar6 * 8 + -8) = (short)uVar4;
          *(uint *)(param_1 + iVar6 * 8 + -0xc) = uVar3;
          *(short *)(param_1 + 0x346) = *(short *)(param_1 + 0x346) + 1;
          uVar4 = uVar2 + 1 & 0xffff;
          uVar2 = uVar2 + 1 & 0xffff;
        } while (uVar2 < 0xf);
        uVar7 = uVar7 + 1 & 0xffff;
      } while (uVar7 < 4);
      uVar8 = uVar8 + 1 & 0xffff;
    } while ((int)uVar8 < (int)param_2);
  }
  return param_1;
}


// ==== FUN_00014864 @ 00014864  size=184  callers=[00014224]

undefined1 * FUN_00014864(undefined1 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = (undefined4 *)(param_1 + 4);
  iVar5 = 0x68;
  do {
    FUN_000146fc(puVar4);
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + 2;
  } while (iVar5 != 0);
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0x344) = 0;
  uVar3 = 0;
  *(undefined2 *)(param_1 + 0x346) = 0;
  do {
    uVar2 = 2;
    uVar1 = 2;
    do {
      iVar5 = uVar3 * 0xd + uVar1;
      *(short *)(param_1 + iVar5 * 8 + -8) = (short)uVar2;
      *(uint *)(param_1 + iVar5 * 8 + -0xc) = uVar3;
      *(short *)(param_1 + 0x346) = *(short *)(param_1 + 0x346) + 1;
      uVar2 = uVar1 + 1 & 0xffff;
      uVar1 = uVar1 + 1 & 0xffff;
    } while (uVar1 < 0xf);
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 < 4);
  return param_1;
}


// ==== FUN_0001491c @ 0001491c  size=232  callers=[]

undefined1 * FUN_0001491c(int param_1,undefined1 *param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined4 auStack_10 [2];
  
  if (*(ushort *)(param_1 + 0x344) < *(ushort *)(param_1 + 0x346)) {
    uVar1 = *(ushort *)(param_1 + 0x344) + 1;
    *(ushort *)(param_1 + 0x344) = uVar1;
    puVar2 = (undefined1 *)(param_1 + (uint)uVar1 * 8);
    *param_2 = puVar2[-4];
    param_2[1] = puVar2[-3];
    param_2[2] = puVar2[-2];
    param_2[3] = puVar2[-1];
    param_2[4] = *puVar2;
    param_2[5] = puVar2[1];
    param_2[6] = puVar2[2];
    param_2[7] = puVar2[3];
  }
  else {
    puVar2 = (undefined1 *)FUN_000146fc(auStack_10);
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
    param_2[2] = puVar2[2];
    param_2[3] = puVar2[3];
    param_2[4] = puVar2[4];
    param_2[5] = puVar2[5];
    param_2[6] = puVar2[6];
    param_2[7] = puVar2[7];
  }
  return param_2;
}


// ==== FUN_00014a04 @ 00014a04  size=400  callers=[00015460, 00016ca0]

undefined1 * FUN_00014a04(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  ushort uVar10;
  int iVar11;
  undefined4 auStack_18 [2];
  
  if (*(short *)(param_1 + 0x346) == 0) {
    puVar9 = (undefined1 *)FUN_000146fc(auStack_18);
    *param_2 = *puVar9;
    param_2[1] = puVar9[1];
    param_2[2] = puVar9[2];
    param_2[3] = puVar9[3];
    param_2[4] = puVar9[4];
    param_2[5] = puVar9[5];
    param_2[6] = puVar9[6];
    param_2[7] = puVar9[7];
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 4);
    uVar2 = *(undefined1 *)(param_1 + 5);
    uVar3 = *(undefined1 *)(param_1 + 6);
    uVar4 = *(undefined1 *)(param_1 + 7);
    uVar5 = *(undefined1 *)(param_1 + 8);
    uVar6 = *(undefined1 *)(param_1 + 9);
    uVar7 = *(undefined1 *)(param_1 + 10);
    uVar8 = *(undefined1 *)(param_1 + 0xb);
    uVar10 = *(short *)(param_1 + 0x346) - 1;
    *(ushort *)(param_1 + 0x346) = uVar10;
    Ordinal_1046((undefined1 *)(param_1 + 4),param_1 + 0xc,(uint)uVar10 << 3);
    puVar9 = (undefined1 *)FUN_000146fc(auStack_18);
    iVar11 = param_1 + (uint)*(ushort *)(param_1 + 0x346) * 8;
    *(undefined1 *)(iVar11 + 4) = *puVar9;
    *(undefined1 *)(iVar11 + 5) = puVar9[1];
    *(undefined1 *)(iVar11 + 6) = puVar9[2];
    *(undefined1 *)(iVar11 + 7) = puVar9[3];
    *(undefined1 *)(iVar11 + 8) = puVar9[4];
    *(undefined1 *)(iVar11 + 9) = puVar9[5];
    *(undefined1 *)(iVar11 + 10) = puVar9[6];
    *(undefined1 *)(iVar11 + 0xb) = puVar9[7];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    param_2[4] = uVar5;
    param_2[5] = uVar6;
    param_2[6] = uVar7;
    param_2[7] = uVar8;
  }
  return param_2;
}


// ==== FUN_00014b94 @ 00014b94  size=376  callers=[]

undefined1 * FUN_00014b94(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined4 auStack_18 [2];
  
  uVar9 = (uint)*(ushort *)(param_1 + 0x346);
  if (uVar9 == 0) {
    puVar10 = (undefined1 *)FUN_000146fc(auStack_18);
    *param_2 = *puVar10;
    param_2[1] = puVar10[1];
    param_2[2] = puVar10[2];
    param_2[3] = puVar10[3];
    param_2[4] = puVar10[4];
    param_2[5] = puVar10[5];
    param_2[6] = puVar10[6];
    param_2[7] = puVar10[7];
  }
  else {
    puVar10 = (undefined1 *)(param_1 + uVar9 * 8);
    uVar1 = puVar10[-4];
    uVar2 = puVar10[-3];
    uVar3 = puVar10[-2];
    uVar4 = puVar10[-1];
    uVar5 = *puVar10;
    uVar6 = puVar10[1];
    uVar7 = puVar10[2];
    uVar8 = puVar10[3];
    *(short *)(param_1 + 0x346) = (short)((uVar9 + 0xffff) * 0x10000 >> 0x10);
    puVar10 = (undefined1 *)FUN_000146fc(auStack_18);
    iVar11 = param_1 + (uint)*(ushort *)(param_1 + 0x346) * 8;
    *(undefined1 *)(iVar11 + 4) = *puVar10;
    *(undefined1 *)(iVar11 + 5) = puVar10[1];
    *(undefined1 *)(iVar11 + 6) = puVar10[2];
    *(undefined1 *)(iVar11 + 7) = puVar10[3];
    *(undefined1 *)(iVar11 + 8) = puVar10[4];
    *(undefined1 *)(iVar11 + 9) = puVar10[5];
    *(undefined1 *)(iVar11 + 10) = puVar10[6];
    *(undefined1 *)(iVar11 + 0xb) = puVar10[7];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    param_2[4] = uVar5;
    param_2[5] = uVar6;
    param_2[6] = uVar7;
    param_2[7] = uVar8;
  }
  return param_2;
}


// ==== FUN_00014d0c @ 00014d0c  size=332  callers=[00014224, 000171e0]

void FUN_00014d0c(int param_1)

{
  undefined4 uVar1;
  short extraout_r1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_350;
  undefined2 local_34c;
  undefined1 local_34a [826];
  
  puVar4 = &local_350;
  iVar6 = 0x68;
  do {
    FUN_000146fc(puVar4);
    iVar6 = iVar6 + -1;
    puVar4 = puVar4 + 2;
  } while (iVar6 != 0);
  Ordinal_535();
  Ordinal_1061();
  uVar5 = 0;
  do {
    do {
      uVar1 = Ordinal_1053();
      (*(code *)*DAT_00014e58)(0x68,uVar1);
      iVar6 = extraout_r1 * 8;
    } while (*(short *)(local_34a + iVar6 + -2) != 0);
    iVar2 = param_1 + uVar5 * 8;
    *(undefined1 *)(&local_350 + extraout_r1 * 2) = *(undefined1 *)(iVar2 + 4);
    *(undefined1 *)((int)&local_350 + iVar6 + 1) = *(undefined1 *)(iVar2 + 5);
    *(undefined1 *)((int)&local_350 + iVar6 + 2) = *(undefined1 *)(iVar2 + 6);
    *(undefined1 *)((int)&local_350 + iVar6 + 3) = *(undefined1 *)(iVar2 + 7);
    local_34a[iVar6 + -2] = *(undefined1 *)(iVar2 + 8);
    local_34a[iVar6 + -1] = *(undefined1 *)(iVar2 + 9);
    local_34a[iVar6] = *(undefined1 *)(iVar2 + 10);
    local_34a[iVar6 + 1] = *(undefined1 *)(iVar2 + 0xb);
    uVar3 = uVar5 + 1;
    uVar5 = uVar3 & 0xffff;
  } while ((uVar3 & 0xffff) < 0x68);
  uVar5 = 0;
  do {
    iVar6 = uVar5 * 8;
    iVar2 = param_1 + uVar5 * 8;
    *(undefined1 *)(iVar2 + 4) = *(undefined1 *)(&local_350 + uVar5 * 2);
    *(undefined1 *)(iVar2 + 5) = *(undefined1 *)((int)&local_350 + iVar6 + 1);
    *(undefined1 *)(iVar2 + 6) = *(undefined1 *)((int)&local_350 + iVar6 + 2);
    *(undefined1 *)(iVar2 + 7) = *(undefined1 *)((int)&local_350 + iVar6 + 3);
    *(undefined1 *)(iVar2 + 8) = local_34a[iVar6 + -2];
    *(undefined1 *)(iVar2 + 9) = local_34a[iVar6 + -1];
    *(undefined1 *)(iVar2 + 10) = local_34a[iVar6];
    *(undefined1 *)(iVar2 + 0xb) = local_34a[iVar6 + 1];
    uVar5 = uVar5 + 1 & 0xffff;
  } while (uVar5 < 0x68);
  return;
}


// ==== FUN_00014e64 @ 00014e64  size=112  callers=[]

void FUN_00014e64(int param_1)

{
  int iVar1;
  undefined1 uStack00000004;
  undefined1 uStack00000005;
  undefined1 uStack00000006;
  undefined1 uStack00000007;
  undefined1 uStack00000008;
  undefined1 uStack00000009;
  undefined1 uStack0000000a;
  undefined1 uStack0000000b;
  
  if (*(ushort *)(param_1 + 0x346) < 0x68) {
    iVar1 = param_1 + (uint)*(ushort *)(param_1 + 0x346) * 8;
    *(undefined1 *)(iVar1 + 4) = uStack00000004;
    *(undefined1 *)(iVar1 + 5) = uStack00000005;
    *(undefined1 *)(iVar1 + 6) = uStack00000006;
    *(undefined1 *)(iVar1 + 7) = uStack00000007;
    *(undefined1 *)(iVar1 + 8) = uStack00000008;
    *(undefined1 *)(iVar1 + 9) = uStack00000009;
    *(undefined1 *)(iVar1 + 10) = uStack0000000a;
    *(undefined1 *)(iVar1 + 0xb) = uStack0000000b;
    *(short *)(param_1 + 0x346) = *(short *)(param_1 + 0x346) + 1;
  }
  return;
}


// ==== FUN_00014ef4 @ 00014ef4  size=84  callers=[00014224]

undefined4 * FUN_00014ef4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x28;
  puVar1 = param_1;
  do {
    FUN_000146fc(puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined1 *)((int)param_1 + 0x142) = 0;
  *(undefined2 *)(param_1 + 0x51) = 0xc;
  return param_1;
}


// ==== FUN_00014f48 @ 00014f48  size=140  callers=[00015460, 00016474, 00016ca0]

void FUN_00014f48(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

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
  
  if (*(ushort *)(param_1 + 0x140) < 0x28) {
    puVar1 = (undefined1 *)(param_1 + (uint)*(ushort *)(param_1 + 0x140) * 8);
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
    *(undefined1 *)(param_1 + (uint)*(ushort *)(param_1 + 0x140) * 8 + 6) = param_4;
    *(short *)(param_1 + 0x140) = *(short *)(param_1 + 0x140) + 1;
  }
  return;
}


// ==== FUN_00014fd4 @ 00014fd4  size=28  callers=[0001612c, 00016474]

void FUN_00014fd4(int param_1)

{
  if (*(ushort *)(param_1 + 0x140) != 0) {
    *(undefined1 *)(param_1 + (uint)*(ushort *)(param_1 + 0x140) * 8 + -2) = 0;
  }
  return;
}


// ==== FUN_00014ff0 @ 00014ff0  size=76  callers=[00012518, 000158e0, 00015a3c, 00015b78, 00015d90, 00015e68, 00016028, 00016474, 000167ac, 00016f24, 00016ff0]

int FUN_00014ff0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(short *)(param_1 + 0x140) + -1;
  iVar1 = iVar2 * 0x10000 >> 0x10;
  while ((-1 < iVar1 && (*(char *)(param_1 + iVar1 * 8 + 6) == '\0'))) {
    iVar2 = (iVar1 + -1) * 0x10000 >> 0x10;
    iVar1 = iVar2;
  }
  return (*(short *)(param_1 + 0x140) - iVar2) + -1;
}


// ==== FUN_0001503c @ 0001503c  size=96  callers=[]

int FUN_0001503c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x142) == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (*(ushort *)(param_1 + 0x140) != 0) {
      iVar3 = 0;
      do {
        iVar1 = iVar3 * 8;
        iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
        if (*(char *)(param_1 + iVar1 + 7) != '\0') {
          iVar2 = iVar2 + 1;
        }
      } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 0x140));
    }
  }
  return iVar2;
}


// ==== FUN_0001509c @ 0001509c  size=380  callers=[]

undefined1 * FUN_0001509c(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined4 auStack_14 [2];
  
  uVar9 = (uint)*(ushort *)(param_1 + 0x140);
  if (uVar9 == 0) {
    puVar10 = (undefined1 *)FUN_000146fc(auStack_14);
    *param_2 = *puVar10;
    param_2[1] = puVar10[1];
    param_2[2] = puVar10[2];
    param_2[3] = puVar10[3];
    param_2[4] = puVar10[4];
    param_2[5] = puVar10[5];
    param_2[6] = puVar10[6];
    param_2[7] = puVar10[7];
  }
  else {
    iVar11 = param_1 + uVar9 * 8;
    uVar1 = *(undefined1 *)(iVar11 + -8);
    uVar2 = *(undefined1 *)(iVar11 + -7);
    uVar3 = *(undefined1 *)(iVar11 + -6);
    uVar4 = *(undefined1 *)(iVar11 + -5);
    uVar5 = *(undefined1 *)(iVar11 + -4);
    uVar6 = *(undefined1 *)(iVar11 + -3);
    uVar7 = *(undefined1 *)(iVar11 + -2);
    uVar8 = *(undefined1 *)(iVar11 + -1);
    *(short *)(param_1 + 0x140) = (short)((uVar9 + 0xffff) * 0x10000 >> 0x10);
    puVar10 = (undefined1 *)FUN_000146fc(auStack_14);
    puVar12 = (undefined1 *)(param_1 + (uint)*(ushort *)(param_1 + 0x140) * 8);
    *puVar12 = *puVar10;
    puVar12[1] = puVar10[1];
    puVar12[2] = puVar10[2];
    puVar12[3] = puVar10[3];
    puVar12[4] = puVar10[4];
    puVar12[5] = puVar10[5];
    puVar12[6] = puVar10[6];
    puVar12[7] = puVar10[7];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    param_2[4] = uVar5;
    param_2[5] = uVar6;
    param_2[6] = uVar7;
    param_2[7] = uVar8;
  }
  return param_2;
}


// ==== FUN_00015218 @ 00015218  size=428  callers=[0001612c, 00016474]

undefined1 * FUN_00015218(int param_1,undefined1 *param_2,short param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined4 auStack_1c [2];
  
  uVar13 = (uint)*(ushort *)(param_1 + 0x140);
  if (uVar13 != 0) {
    iVar15 = uVar13 - 1;
    iVar1 = (int)param_3;
    if (iVar1 <= iVar15) {
      puVar10 = (undefined1 *)(param_1 + iVar1 * 8);
      uVar2 = *puVar10;
      iVar11 = iVar15;
      iVar12 = iVar1;
      if (iVar1 < iVar15) {
        iVar11 = iVar1 + 1;
        iVar12 = iVar11;
      }
      uVar3 = puVar10[1];
      if (iVar1 < iVar15) {
        iVar12 = param_1 + iVar12 * 8;
      }
      uVar4 = puVar10[2];
      uVar5 = puVar10[3];
      uVar6 = puVar10[4];
      uVar7 = puVar10[5];
      uVar8 = puVar10[6];
      uVar9 = puVar10[7];
      if (iVar1 < iVar15) {
        Ordinal_1046(puVar10,iVar12,(iVar11 * 0x1fffffff + uVar13) * 8);
      }
      *(short *)(param_1 + 0x140) = *(short *)(param_1 + 0x140) + -1;
      puVar10 = (undefined1 *)FUN_000146fc(auStack_1c);
      puVar14 = (undefined1 *)(param_1 + (uint)*(ushort *)(param_1 + 0x140) * 8);
      *puVar14 = *puVar10;
      puVar14[1] = puVar10[1];
      puVar14[2] = puVar10[2];
      puVar14[3] = puVar10[3];
      puVar14[4] = puVar10[4];
      puVar14[5] = puVar10[5];
      puVar14[6] = puVar10[6];
      puVar14[7] = puVar10[7];
      *param_2 = uVar2;
      param_2[1] = uVar3;
      param_2[2] = uVar4;
      param_2[3] = uVar5;
      param_2[4] = uVar6;
      param_2[5] = uVar7;
      param_2[6] = uVar8;
      param_2[7] = uVar9;
      return param_2;
    }
  }
  puVar10 = (undefined1 *)FUN_000146fc(auStack_1c);
  *param_2 = *puVar10;
  param_2[1] = puVar10[1];
  param_2[2] = puVar10[2];
  param_2[3] = puVar10[3];
  param_2[4] = puVar10[4];
  param_2[5] = puVar10[5];
  param_2[6] = puVar10[6];
  param_2[7] = puVar10[7];
  return param_2;
}


// ==== FUN_000153c4 @ 000153c4  size=156  callers=[00016474, 00016ff0]

undefined1 * FUN_000153c4(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = *(short *)(param_1 + 0x140) + -1;
  iVar1 = iVar2 * 0x10000 >> 0x10;
  while ((-1 < iVar1 && (*(char *)(param_1 + iVar1 * 8 + 7) != '\0'))) {
    iVar2 = (iVar1 + -1) * 0x10000 >> 0x10;
    iVar1 = iVar2;
  }
  puVar3 = (undefined1 *)(param_1 + ((short)iVar2 + 1) * 8);
  *param_2 = *puVar3;
  param_2[1] = puVar3[1];
  param_2[2] = puVar3[2];
  param_2[3] = puVar3[3];
  param_2[4] = puVar3[4];
  param_2[5] = puVar3[5];
  param_2[6] = puVar3[6];
  param_2[7] = puVar3[7];
  return param_2;
}


// ==== FUN_00015460 @ 00015460  size=204  callers=[00014224, 000171e0]

void FUN_00015460(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c [8];
  
  iVar3 = 0;
  do {
    iVar2 = 0;
    do {
      if ((iVar3 < 4) || ((iVar3 == 4 && (iVar2 < 4)))) {
        puVar1 = (undefined4 *)FUN_00014a04(param_1,auStack_1c);
        FUN_00014f48(iVar2 * 0x148 + param_1 + 0x348,*puVar1,puVar1[1],1);
      }
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < 10);
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
  } while (iVar3 < 5);
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)FUN_00014a04(param_1,auStack_1c);
    FUN_00014f48(iVar3 * 0x148 + param_1 + 0x348,*puVar1,puVar1[1],0);
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
  } while (iVar3 < 10);
  return;
}


// ==== FUN_0001552c @ 0001552c  size=200  callers=[00012518]

void FUN_0001552c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x101e) == '\0') {
    FUN_000155f4(param_1,param_2);
    uVar1 = 0;
    uVar2 = 0;
    do {
      FUN_00015828(param_1,param_2,uVar2 * 0x148 + param_1 + 0x348,uVar1 * 0x18 + 1,10);
      uVar1 = uVar2 + 1 & 0xffff;
      uVar2 = uVar2 + 1 & 0xffff;
    } while (uVar2 < 10);
    FUN_00016244(param_1,param_2);
  }
  else {
    FUN_00016244(param_1,param_2);
    FUN_00014474(param_2,0xc9,10,100,0xdc,0x29,0xff00);
  }
  return;
}


// ==== FUN_000155f4 @ 000155f4  size=316  callers=[000134f8, 0001552c]

void FUN_000155f4(int param_1,int param_2)

{
  int *piVar1;
  short *psVar2;
  
  piVar1 = DAT_00015730;
  if (*(short *)(param_1 + 0x346) != 0) {
    psVar2 = (short *)(param_1 + 0x1018);
    FUN_00014474(param_2,*psVar2 + 0x84,*DAT_00015730,DAT_00015730[1],0x16,0x1f,0xff00);
    if (10 < *(ushort *)(param_1 + 0x346)) {
      FUN_00014474(param_2,*psVar2 + 0x84,*piVar1 + 3,piVar1[1],0x16,0x1f,0xff00);
    }
    if (0x14 < *(ushort *)(param_1 + 0x346)) {
      FUN_00014474(param_2,*psVar2 + 0x84,*piVar1 + 6,piVar1[1],0x16,0x1f,0xff00);
    }
    if (0x1e < *(ushort *)(param_1 + 0x346)) {
      FUN_00014474(param_2,*psVar2 + 0x84,*piVar1 + 9,piVar1[1],0x16,0x1f,0xff00);
    }
    if (0x28 < *(ushort *)(param_1 + 0x346)) {
      FUN_00014474(param_2,*psVar2 + 0x84,*piVar1 + 0xc,piVar1[1],0x16,0x1f,0xff00);
    }
  }
  return;
}


// ==== FUN_00015734 @ 00015734  size=176  callers=[00016b64]

void FUN_00015734(int param_1,int param_2,int param_3,uint param_4,ushort param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(short *)(param_3 + 0x140) != 0) {
    iVar3 = 0;
    do {
      piVar1 = (int *)(param_3 + iVar3 * 8);
      if (*(char *)((int)piVar1 + 7) != '\0') {
        FUN_00016dac(param_1,param_2,*piVar1,piVar1[1],param_4 & 0xffff,
                     (uint)*(ushort *)(param_3 + 0x144) * (int)(short)iVar2 + (uint)param_5);
        iVar2 = ((short)iVar2 + 1) * 0x10000 >> 0x10;
      }
      iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
    } while (iVar3 < (int)(uint)*(ushort *)(param_3 + 0x140));
  }
  return;
}


// ==== FUN_000157e4 @ 000157e4  size=68  callers=[0001612c]

void FUN_000157e4(int param_1,int param_2,int param_3)

{
  FUN_00015828(param_1,param_2,(short)param_3 * 0x148 + param_1 + 0x348,param_3 * 0x18 + 1,10);
  return;
}


// ==== FUN_00015828 @ 00015828  size=184  callers=[0001552c, 000157e4]

void FUN_00015828(int param_1,int param_2,int param_3,uint param_4,ushort param_5)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = 0;
  if (*(short *)(param_3 + 0x140) != 0) {
    iVar2 = 0;
    do {
      piVar1 = (int *)(param_3 + iVar2 * 8);
      if (*(char *)((int)piVar1 + 7) == '\0') {
        FUN_00016dac(param_1,param_2,*piVar1,piVar1[1],param_4 & 0xffff,
                     (*(ushort *)(param_3 + 0x144) - 4) * (int)sVar3 + iVar2 * 4 + (uint)param_5);
      }
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
      if (*(char *)((int)piVar1 + 6) == '\0') {
        sVar3 = sVar3 + 1;
      }
    } while (iVar2 < (int)(uint)*(ushort *)(param_3 + 0x140));
  }
  return;
}


// ==== FUN_000158e0 @ 000158e0  size=348  callers=[00016474]

undefined1 * FUN_000158e0(int param_1,undefined1 *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar4 = (short)param_3 * 0x148 + param_1;
  local_28 = 0;
  local_24 = 0;
  iVar2 = FUN_00014ff0(iVar4 + 0x348);
  sVar1 = *(short *)(iVar4 + 0x488);
  iVar3 = (sVar1 - iVar2) * 4 + 10;
  iVar2 = (sVar1 - iVar2) * 0x10000 >> 0x10;
  if (iVar2 < sVar1) {
    do {
      if (*(char *)(param_1 + ((short)param_3 * 0x29 + iVar2) * 8 + 0x34e) == '\0') {
        if (iVar2 == ((int)sVar1 - (int)*(short *)(param_1 + 0x101c)) * 0x10000 >> 0x10) {
          local_28 = (param_3 * 0x18 + 1) * 0x10000 >> 0x10;
          local_24 = (int)(short)iVar3;
          break;
        }
        iVar3 = ((int)*(short *)(iVar4 + 0x48c) + (int)(short)iVar3) * 0x10000 >> 0x10;
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


// ==== FUN_00015a3c @ 00015a3c  size=316  callers=[00013a20, 00016ca0]

void FUN_00015a3c(int param_1,int param_2,short param_3,char param_4)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  
  iVar7 = param_3 * 0x148 + param_1;
  iVar3 = FUN_00014ff0(iVar7 + 0x348);
  uVar2 = *(ushort *)(iVar7 + 0x488);
  iVar3 = ((int)(short)uVar2 - (int)(short)iVar3) * 0x10000;
  sVar1 = (short)((uint)iVar3 >> 0x10);
  iVar3 = (iVar3 >> 0x10) * 4 + 10;
  sVar8 = sVar1;
  if (param_4 != '\0') {
    sVar8 = (uVar2 - *(short *)(param_1 + 0x101c)) + -1;
  }
  iVar6 = (int)sVar1;
  if (iVar6 < (int)(uint)uVar2) {
    do {
      iVar4 = param_3 * 0x29 + iVar6;
      if (*(char *)(param_1 + iVar4 * 8 + 0x34e) == '\0') {
        if (sVar8 <= iVar6) {
          piVar5 = (int *)(param_1 + (iVar4 + 0x69) * 8);
          FUN_00016dac(param_1,param_2,*piVar5,piVar5[1],(uint)(ushort)(param_3 * 0x18 + 1),
                       (int)(short)iVar3);
        }
        iVar3 = ((int)*(short *)(iVar7 + 0x48c) + (int)(short)iVar3) * 0x10000 >> 0x10;
      }
      iVar6 = (iVar6 + 1) * 0x10000 >> 0x10;
    } while (iVar6 < (int)(uint)*(ushort *)(iVar7 + 0x488));
  }
  return;
}


// ==== FUN_00015b78 @ 00015b78  size=172  callers=[00016bf0]

void FUN_00015b78(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  FUN_00014ff0(param_3);
  piVar1 = (int *)(param_3 +
                  ((((int)*(short *)(param_3 + 0x140) - (int)*(short *)(param_1 + 0x101c)) + -1) *
                   0x10000 >> 0x10) * 8);
  if ((*(char *)((int)piVar1 + 7) == '\0') &&
     (*(short *)(param_1 + 0x101c) != *(short *)(param_3 + 0x140))) {
    if (*(char *)((int)piVar1 + 6) == '\0') {
      iVar2 = param_5 - (uint)*(ushort *)(param_3 + 0x144);
    }
    else {
      iVar2 = param_5 + -4;
    }
    FUN_00016dac(param_1,param_2,*piVar1,piVar1[1],param_4,iVar2);
  }
  return;
}


// ==== FUN_00015c24 @ 00015c24  size=132  callers=[0001612c]

undefined1 FUN_00015c24(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)(param_1 + 0x101e);
  *puVar3 = 0;
  if (*(short *)(param_1 + 0x346) == 0) {
    iVar2 = 0;
    do {
      if (*(short *)(iVar2 * 0x148 + param_1 + 0x488) != 0) goto LAB_00015ca0;
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < 10);
    *puVar3 = 1;
    FUN_00014454();
    uVar1 = *puVar3;
  }
  else {
LAB_00015ca0:
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_00015ca8 @ 00015ca8  size=232  callers=[00013a20, 00016ca0]

undefined4 FUN_00015ca8(int param_1,short param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  int iVar7;
  bool bVar8;
  int iVar6;
  
  uVar3 = (uint)*(ushort *)(param_2 * 0x148 + param_1 + 0x488);
  iVar7 = param_2 * 0x29;
  iVar5 = iVar7 + uVar3;
  iVar6 = 0;
  sVar4 = 0;
  while (uVar3 = (int)((uVar3 - 1) * 0x10000) >> 0x10, -1 < (int)uVar3) {
    sVar4 = (short)iVar6;
    iVar6 = param_1 + (uVar3 + iVar7) * 8;
    if ((*(char *)(iVar6 + 0x34e) != '\0') || (iVar1 = (int)sVar4, 0xc < iVar1)) break;
    if (*(int *)(iVar6 + 0x348) != *(int *)(param_1 + iVar5 * 8 + 0x340)) goto LAB_00015d88;
    if (iVar1 < 1) {
      bVar8 = *(ushort *)(iVar6 + 0x34c) == 0xe;
    }
    else {
      bVar8 = (uint)*(ushort *)(iVar6 + 0x34c) == iVar1 + 1U;
    }
    if (!bVar8) goto LAB_00015d88;
    iVar1 = (iVar1 + 1) * 0x10000;
    iVar6 = iVar1 >> 0x10;
    sVar4 = (short)((uint)iVar1 >> 0x10);
  }
  uVar2 = 1;
  if (sVar4 != 0xd) {
LAB_00015d88:
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_00015d90 @ 00015d90  size=212  callers=[00013a20, 00016ca0]

undefined4 FUN_00015d90(int param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar5 = 0;
  iVar4 = param_2 * 0x148 + param_1;
  iVar2 = FUN_00014ff0(iVar4 + 0x348);
  iVar1 = DAT_00015e64;
  iVar3 = (((int)*(short *)(iVar4 + 0x488) - (int)(short)iVar2) * 0x10000 >> 0x10) * 4 + 10;
  if (*(int *)(DAT_00015e64 + 4) <=
      (((int)*(short *)(iVar4 + 0x48c) * ((iVar2 + -1) * 0x10000 >> 0x10) +
       (iVar3 * 0x10000 >> 0x10)) * 0x10000 >> 0x10) + 0x1f) {
    uVar5 = 1;
    do {
      iVar6 = *(ushort *)(iVar4 + 0x48c) - 1;
      *(short *)(iVar4 + 0x48c) = (short)iVar6;
    } while (*(int *)(iVar1 + 4) <=
             (((iVar6 * 0x10000 >> 0x10) * ((iVar2 + -1) * 0x10000 >> 0x10) +
              (iVar3 * 0x10000 >> 0x10)) * 0x10000 >> 0x10) + 0x1f);
  }
  return uVar5;
}


// ==== FUN_00015e68 @ 00015e68  size=252  callers=[00013a20, 0001612c]

undefined4 FUN_00015e68(int param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 * 0x148 + param_1;
  if (*(short *)(iVar3 + 0x48c) != 0xc) {
    iVar1 = FUN_00014ff0(iVar3 + 0x348);
    iVar2 = (int)(short)*(ushort *)(iVar3 + 0x48c);
    if (1 < (short)iVar1) {
      do {
        iVar2 = iVar2 + 1;
      } while (((((iVar1 + -1) * 0x10000 >> 0x10) * (iVar2 * 0x10000 >> 0x10) +
                (((((int)*(short *)(iVar3 + 0x488) - (int)(short)iVar1) * 0x10000 >> 0x10) * 4 + 10)
                 * 0x10000 >> 0x10)) * 0x10000 >> 0x10) + 0x1f < *(int *)(DAT_00015f64 + 4) + -1);
      iVar1 = (iVar2 * 0x10000 >> 0x10) + -1;
      if (iVar1 <= (int)(uint)*(ushort *)(iVar3 + 0x48c)) {
        return 0;
      }
      if (0xb < iVar1) {
        iVar1 = 0xc;
      }
      *(short *)(iVar3 + 0x48c) = (short)iVar1;
      return 1;
    }
    *(undefined2 *)(iVar3 + 0x48c) = 0xc;
  }
  return 0;
}


// ==== FUN_00015f68 @ 00015f68  size=104  callers=[00015fd4, 00016028, 000160d8]

void FUN_00015f68(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  Ordinal_906(uVar1);
  return;
}


// ==== FUN_00015fd4 @ 00015fd4  size=80  callers=[0001612c]

void FUN_00015fd4(undefined4 param_1,int param_2)

{
  FUN_00015f68(param_1,param_2);
  return;
}


// ==== FUN_00016028 @ 00016028  size=172  callers=[0001612c]

void FUN_00016028(int param_1,int param_2,short param_3)

{
  FUN_00014ff0(param_3 * 0x148 + param_1 + 0x348);
  FUN_00015f68(param_1,param_2);
  return;
}


// ==== FUN_000160d8 @ 000160d8  size=80  callers=[00013a20, 00016ca0]

void FUN_000160d8(undefined4 param_1,int param_2)

{
  FUN_00015f68(param_1,param_2);
  return;
}


// ==== FUN_0001612c @ 0001612c  size=280  callers=[00013a20, 00016ca0]

undefined1 FUN_0001612c(int param_1,int param_2,int param_3)

{
  short sVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined1 auStack_2c [8];
  
  sVar1 = (short)param_3;
  iVar4 = sVar1 * 0x148 + param_1;
  puVar5 = (ushort *)(param_1 + 0x102e);
  *(undefined4 *)(param_1 + (*puVar5 + 0x40c) * 4) =
       *(undefined4 *)(param_1 + (sVar1 * 0x29 + (uint)*(ushort *)(iVar4 + 0x488)) * 8 + 0x340);
  iVar6 = 0;
  do {
    FUN_00015218(iVar4 + 0x348,auStack_2c,*(short *)(iVar4 + 0x488) + -1);
    iVar6 = (iVar6 + 1) * 0x10000 >> 0x10;
  } while (iVar6 < 0xd);
  FUN_00014fd4(iVar4 + 0x348);
  *puVar5 = *puVar5 + 1;
  uVar3 = FUN_00015e68(param_1,sVar1);
  if ((uVar3 & 0xff) == 0) {
    FUN_00016028(param_1,param_2,sVar1);
    FUN_00016f24(param_1,param_2,sVar1);
  }
  else {
    FUN_00015fd4(param_1,param_2);
    FUN_000157e4(param_1,param_2,param_3);
  }
  FUN_00016244(param_1,param_2);
  uVar2 = FUN_00015c24(param_1);
  return uVar2;
}


// ==== FUN_00016244 @ 00016244  size=168  callers=[0001552c, 0001612c]

void FUN_00016244(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_20;
  undefined4 local_1c;
  
  FUN_000146fc(&local_20);
  iVar1 = DAT_000162ec;
  local_1c = CONCAT13(local_1c._3_1_,0xd);
  if (*(ushort *)(param_1 + 0x102e) != 0) {
    iVar2 = 0;
    do {
      local_20 = *(int *)(param_1 + iVar2 * 4 + 0x1030);
      FUN_00016dac(param_1,param_2,local_20,local_1c,iVar2 * 0x11 + 0x28,*(int *)(iVar1 + 4));
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x102e));
  }
  return;
}


// ==== FUN_000162f0 @ 000162f0  size=196  callers=[000134f8]

bool FUN_000162f0(int param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  bVar2 = false;
  iVar3 = 0;
  do {
    sVar1 = *(short *)(iVar3 * 0x148 + param_1 + 0x488);
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
    if (sVar1 == 0) {
      bVar2 = true;
    }
    else {
      iVar4 = ((int)sVar1 + (int)(short)iVar4) * 0x10000 >> 0x10;
    }
  } while (iVar3 < 10);
  if ((short)iVar4 < 10) {
    iVar3 = 0;
    do {
      if (1 < *(ushort *)(iVar3 * 0x148 + param_1 + 0x488)) {
        return false;
      }
      iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
    } while (iVar3 < 10);
    bVar2 = true;
  }
  else {
    bVar2 = !bVar2;
  }
  return bVar2;
}


// ==== FUN_000163b4 @ 000163b4  size=184  callers=[000134f8, 00013ec0, 00013f0c, 00014158, 00016474]

void FUN_000163b4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if (*(char *)(iVar3 * 0x148 + param_1 + 0x48a) != '\0') {
      iVar2 = (short)iVar3 * 0x148 + param_1;
      *(undefined1 *)(iVar2 + 0x48a) = 0;
      if (*(short *)(iVar2 + 0x488) == 0) {
        return;
      }
      iVar1 = 0;
      do {
        *(undefined1 *)(param_1 + ((short)iVar3 * 0x29 + iVar1) * 8 + 0x34f) = 0;
        iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
      } while (iVar1 < (int)(uint)*(ushort *)(iVar2 + 0x488));
      return;
    }
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
  } while (iVar3 < 10);
  return;
}


// ==== FUN_00016474 @ 00016474  size=812  callers=[]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00016474(int param_1,int param_2,int param_3,short *param_4)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  short *psStack0000000c;
  undefined1 *in_stack_00000010;
  short in_stack_00000014;
  char in_stack_00000018;
  undefined1 *in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack_50;
  uint uStack_4c;
  int aiStack_48 [3];
  int iStack_3c;
  undefined1 auStack_38 [16];
  
  psStack0000000c = param_4;
  if (9 < param_3) {
    sVar2 = (*(code *)*_UNK_00016670)(0x18,param_2 + -1);
    iVar11 = (int)sVar2;
    if ((iVar11 < 10) && ((in_stack_00000018 == '\0' || (in_stack_00000014 != iVar11)))) {
      iVar10 = iVar11 * 0x148 + param_1;
      iVar3 = FUN_00014ff0(iVar10 + 0x348);
      aiStack_48[0] = iVar11 * 0x18 + 1;
      aiStack_48[1] = 10;
      aiStack_48[2] = iVar11 * 0x18 + 0x17;
      iStack_3c = (uint)*(ushort *)(iVar10 + 0x48c) * ((short)iVar3 + 1) +
                  (((int)*(short *)(iVar10 + 0x488) - (int)(short)iVar3) * 0x10000 >> 0x10) * 2 +
                  0x29;
      iVar3 = 0x10;
      puVar6 = auStack_38;
      piVar9 = aiStack_48;
      do {
        iVar7 = iVar3 + -1;
        *puVar6 = (char)*piVar9;
        bVar1 = 0 < iVar3;
        iVar3 = iVar7;
        puVar6 = puVar6 + 1;
        piVar9 = (int *)((int)piVar9 + 1);
      } while (iVar7 != 0 && bVar1);
      iVar3 = Ordinal_102(auStack_38,param_2,param_3);
      if (iVar3 != 0) {
        *psStack0000000c = sVar2;
        *in_stack_00000010 = 1;
        iVar3 = in_stack_00000014 * 0x148 + param_1;
        iVar7 = iVar3 + 0x348;
        puVar4 = (undefined4 *)FUN_000153c4(iVar7,(undefined1 *)&uStack_50);
        if ((*(ushort *)(iVar10 + 0x488) == 0) ||
           (puVar8 = (uint *)(param_1 +
                             (iVar11 * 0x29 + (uint)*(ushort *)(iVar10 + 0x488) + 0x68) * 8),
           uVar5 = FUN_00014658(param_1,*puVar4,(ushort)puVar4[1],*puVar8,(ushort)puVar8[1]),
           (uVar5 & 0xff) != 0)) {
          Ordinal_1044(in_stack_00000020,param_1,0x1054);
          iVar11 = 0;
          if (*(short *)(iVar3 + 0x488) != 0) {
            do {
              while ((*(char *)(param_1 + (in_stack_00000014 * 0x29 + iVar11) * 8 + 0x34f) != '\0'
                     && (iVar11 <= (int)(*(ushort *)(iVar3 + 0x488) - 1)))) {
                puVar4 = (undefined4 *)FUN_00015218(iVar7,(undefined1 *)aiStack_48,(short)iVar11);
                uStack_50 = *puVar4;
                uStack_4c = (uint)*(ushort *)(puVar4 + 1);
                FUN_00014f48(iVar10 + 0x348,uStack_50,uStack_4c,0);
              }
              iVar11 = (iVar11 + 1) * 0x10000 >> 0x10;
            } while (iVar11 < (int)(uint)*(ushort *)(iVar3 + 0x488));
          }
          FUN_000163b4(param_1);
          FUN_00014fd4(iVar7);
          puVar6 = FUN_000158e0(param_1,(undefined1 *)aiStack_48,(int)*psStack0000000c);
          *in_stack_0000001c = *puVar6;
          in_stack_0000001c[1] = puVar6[1];
          in_stack_0000001c[2] = puVar6[2];
          in_stack_0000001c[3] = puVar6[3];
          in_stack_0000001c[4] = puVar6[4];
          in_stack_0000001c[5] = puVar6[5];
          in_stack_0000001c[6] = puVar6[6];
          in_stack_0000001c[7] = puVar6[7];
          return 1;
        }
      }
    }
  }
  FUN_000163b4(param_1);
  return 0;
}


// ==== FUN_000167ac @ 000167ac  size=948  callers=[]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_000167ac(int param_1,int param_2,int param_3,undefined1 *param_4,undefined4 param_5,
            short *param_6,undefined1 *param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  uint uStack_38;
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  
  param_5 = param_4;
  sVar4 = (*(code *)*_UNK_00016880)(0x18,param_2 + -1);
  iVar9 = (int)sVar4;
  if ((9 < iVar9) || (iVar14 = iVar9 * 0x148 + param_1, *(short *)(iVar14 + 0x488) == 0)) {
    return 0;
  }
  iVar6 = FUN_00014ff0(iVar14 + 0x348);
  iVar3 = (int)(short)iVar6;
  iVar7 = (*(short *)(iVar14 + 0x488) - iVar3) * 0x10000 >> 0x10;
  iVar2 = iVar7 * 4;
  uVar15 = (uint)*(ushort *)(iVar14 + 0x48c);
  sVar5 = (*(code *)*_UNK_00016880)(uVar15,param_3 + iVar7 * -4 + -10);
  iVar7 = (int)sVar5;
  if (iVar3 <= iVar7) {
    iVar7 = iVar6 + -1;
  }
  iVar8 = (int)(short)iVar7;
  do {
    if (iVar3 <= iVar8) {
      return 0;
    }
    iVar10 = iVar8 * uVar15 + iVar2;
    if (iVar10 + 10 <= param_3) {
      uVar12 = 0x1f;
      if (iVar8 != iVar3 + -1) {
        uVar12 = uVar15;
      }
      if (param_3 <= (int)(iVar10 + uVar12 + 10)) {
        iVar8 = (int)(short)iVar7;
        if (iVar8 < iVar3 + -1) {
          FUN_000146fc(&uStack_40);
          FUN_000146fc(&uStack_38);
          iVar7 = (((int)(short)iVar7 - (int)(short)iVar6) + (int)*(short *)(iVar14 + 0x488)) *
                  0x10000 >> 0x10;
          if (iVar7 < *(short *)(iVar14 + 0x488) + -1) {
            do {
              iVar6 = iVar9 * 0x29 + iVar7;
              puVar13 = (uint *)(param_1 + (iVar6 + 0x69) * 8);
              iVar6 = iVar6 + 0x6a;
              uStack_40 = *puVar13;
              uStack_3c = (undefined1)puVar13[1];
              uStack_3b = *(undefined1 *)((int)puVar13 + 5);
              uStack_3a = *(undefined1 *)((int)puVar13 + 6);
              uStack_39 = *(undefined1 *)((int)puVar13 + 7);
              puVar11 = (uint *)(param_1 + iVar6 * 8);
              uStack_38 = *puVar11;
              uStack_34 = puVar11[1];
              uVar15 = FUN_00014658(param_1,*(undefined4 *)(param_1 + iVar6 * 8),(ushort)puVar11[1],
                                    uStack_40,(ushort)puVar13[1]);
              if ((uVar15 & 0xff) == 0) {
                return 0;
              }
              if ((*(char *)(param_1 + 0x1050) == '\0') && (uStack_40 != uStack_38)) {
                return 0;
              }
              iVar7 = (iVar7 + 1) * 0x10000 >> 0x10;
            } while (iVar7 < (int)(*(ushort *)(iVar14 + 0x488) - 1));
          }
        }
        sVar5 = 0;
        *param_6 = sVar4;
        *param_7 = 1;
        *(undefined1 *)(iVar14 + 0x48a) = 1;
        if (iVar8 < iVar3) {
          iVar7 = iVar8;
          do {
            iVar6 = iVar9 * 0x29 - iVar7;
            iVar7 = (iVar7 + 1) * 0x10000 >> 0x10;
            *(undefined1 *)
             (param_1 + (iVar6 + (uint)*(ushort *)(iVar14 + 0x488) + iVar8) * 8 + 0x347) = 1;
            sVar5 = sVar5 + 1;
          } while (iVar7 < iVar3);
        }
        uStack_38 = iVar9 * 0x18 + 1;
        uStack_34 = iVar8 * (uint)*(ushort *)(iVar14 + 0x48c) + iVar2 + 10;
        iStack_30 = iVar9 * 0x18 + 0x17;
        iStack_2c = (iVar8 + sVar5 + -1) * (uint)*(ushort *)(iVar14 + 0x48c) + iVar2 + 0x29;
        iVar9 = 0x10;
        puVar11 = &uStack_38;
        do {
          iVar14 = iVar9 + -1;
          *param_5 = (char)*puVar11;
          bVar1 = 0 < iVar9;
          iVar9 = iVar14;
          param_5 = param_5 + 1;
          puVar11 = (uint *)((int)puVar11 + 1);
        } while (iVar14 != 0 && bVar1);
        *(short *)(param_1 + 0x101c) = sVar5;
        return 1;
      }
    }
    iVar7 = (iVar8 + 1) * 0x10000 >> 0x10;
    iVar8 = iVar7;
  } while( true );
}


// ==== FUN_00016b64 @ 00016b64  size=132  callers=[00012518]

void FUN_00016b64(int param_1,int param_2,uint param_3,ushort param_4)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(iVar1 * 0x148 + param_1 + 0x48a) != '\0') {
      FUN_00015734(param_1,param_2,(short)iVar1 * 0x148 + param_1 + 0x348,param_3 & 0xffff,param_4);
      return;
    }
    iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
  } while (iVar1 < 10);
  return;
}


// ==== FUN_00016bf0 @ 00016bf0  size=176  callers=[]

void FUN_00016bf0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iStack00000008;
  int in_stack_0000000c;
  
  bVar1 = false;
  iVar2 = 0;
  iStack00000008 = param_3;
  do {
    if (bVar1) {
      return;
    }
    iVar3 = (short)iVar2 * 0x148 + param_1;
    if (*(char *)(iVar3 + 0x48a) != '\0') {
      FUN_00015b78(param_1,param_2,iVar3 + 0x348,param_3,in_stack_0000000c);
      bVar1 = true;
    }
    iVar2 = ((short)iVar2 + 1) * 0x10000 >> 0x10;
  } while (iVar2 < 10);
  return;
}


// ==== FUN_00016ca0 @ 00016ca0  size=268  callers=[000134f8]

uint FUN_00016ca0(uint param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_20 [8];
  
  uVar3 = param_1;
  if (*(short *)(param_1 + 0x346) != 0) {
    iVar5 = 0;
    do {
      puVar2 = (undefined4 *)FUN_00014a04(param_1,auStack_20);
      iVar6 = iVar5 * 0x148 + param_1;
      FUN_00014f48(iVar6 + 0x348,*puVar2,puVar2[1],0);
      sVar4 = (short)iVar5;
      uVar3 = FUN_00015d90(param_1,sVar4);
      if ((uVar3 & 0xff) == 0) {
        uVar3 = FUN_00016f24(param_1,param_2,sVar4);
      }
      else {
        FUN_000160d8(param_1,param_2);
        uVar3 = FUN_00015a3c(param_1,param_2,sVar4,'\0');
      }
      if ((*(short *)(param_1 + (iVar5 * 0x29 + (uint)*(ushort *)(iVar6 + 0x488)) * 8 + 0x344) ==
           0xe) && (uVar3 = FUN_00015ca8(param_1,sVar4), (uVar3 & 0xff) != 0)) {
        bVar1 = FUN_0001612c(param_1,param_2,iVar5);
        uVar3 = (uint)bVar1;
      }
      iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
    } while (iVar5 < 10);
  }
  return uVar3;
}


// ==== FUN_00016dac @ 00016dac  size=376  callers=[00015734, 00015828, 00015a3c, 00015b78, 00016244, 00016f24]

void FUN_00016dac(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  short sVar1;
  undefined2 local_4;
  undefined1 local_2;
  
  local_2 = (char)((uint)param_4 >> 0x10);
  if (local_2 == '\0') {
    FUN_00014474(param_2,0x83,param_5,param_6,0x16,0x1f,0xff00);
    if ((param_3 == 2) || (sVar1 = 0x92, param_3 == 1)) {
      sVar1 = 0xae;
    }
    local_4 = (short)param_4;
    FUN_00014474(param_2,local_4 + sVar1 + -2,param_5 + 2,param_6 + 2,5,8,0xffffff);
    FUN_00014474(param_2,(short)param_3 + 0x89,param_5 + 0xb,param_6 + 2,7,7,0xffffff);
    if ((param_3 == 2) || (sVar1 = 0xa0, param_3 == 1)) {
      sVar1 = 0xbc;
    }
    FUN_00014474(param_2,local_4 + sVar1 + -2,param_5 + 0xf,param_6 + 0x15,5,8,0xffffff);
    sVar1 = 0x8a;
    if (param_3 != 1) {
      sVar1 = (short)param_3 + 0x8d;
    }
    FUN_00014474(param_2,sVar1,param_5 + 4,param_6 + 0x16,7,7,0xffffff);
  }
  else {
    FUN_00014474(param_2,*(short *)(param_1 + 0x1018) + 0x84,param_5,param_6,0x16,0x1f,0xff00);
  }
  return;
}


// ==== FUN_00016f24 @ 00016f24  size=204  callers=[00012518, 0001612c, 00016ca0]

void FUN_00016f24(int param_1,int param_2,short param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = param_3 * 0x148 + param_1;
  if (*(short *)(iVar3 + 0x488) != 0) {
    iVar1 = FUN_00014ff0(iVar3 + 0x348);
    piVar2 = (int *)(param_1 + (param_3 * 0x29 + (int)*(short *)(iVar3 + 0x488) + 0x68) * 8);
    FUN_00016dac(param_1,param_2,*piVar2,piVar2[1],param_3 * 0x18 + 1U & 0xffff,
                 ((int)*(short *)(iVar3 + 0x48c) * (iVar1 + -1) +
                  (((int)*(short *)(iVar3 + 0x488) - (int)(short)iVar1) * 0x10000 >> 0x10) * 4 + 10)
                 * 0x10000 >> 0x10);
  }
  return;
}


// ==== FUN_00016ff0 @ 00016ff0  size=496  callers=[00012518]

undefined4 FUN_00016ff0(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  short local_60;
  int local_58 [3];
  int local_4c;
  undefined1 auStack_48 [16];
  
  if (param_3 < 10) {
    return 0;
  }
  local_60 = 0;
  iVar9 = 0;
  do {
    iVar8 = iVar9 * 0x148 + param_1;
    if (*(char *)(iVar8 + 0x48a) == '\0') {
      iVar2 = FUN_00014ff0(iVar8 + 0x348);
      local_58[0] = iVar9 * 0x18 + 1;
      local_58[1] = 10;
      local_58[2] = iVar9 * 0x18 + 0x17;
      local_4c = (uint)*(ushort *)(iVar8 + 0x48c) * ((short)iVar2 + 1) +
                 (((int)*(short *)(iVar8 + 0x488) - (int)(short)iVar2) * 0x10000 >> 0x10) * 4 + 0x29
      ;
      iVar8 = 0x10;
      puVar5 = auStack_48;
      piVar7 = local_58;
      do {
        iVar2 = iVar8 + -1;
        *puVar5 = (char)*piVar7;
        bVar1 = 0 < iVar8;
        iVar8 = iVar2;
        puVar5 = puVar5 + 1;
        piVar7 = (int *)((int)piVar7 + 1);
      } while (iVar2 != 0 && bVar1);
      iVar8 = Ordinal_102(auStack_48,param_2,param_3);
      if (iVar8 != 0) {
        iVar8 = (int)local_60;
        iVar9 = 0;
        while ((iVar9 == iVar8 || (*(char *)(iVar9 * 0x148 + param_1 + 0x48a) == '\0'))) {
          iVar9 = (iVar9 + 1) * 0x10000 >> 0x10;
          if (9 < iVar9) {
            return 0;
          }
        }
        puVar3 = (undefined4 *)
                 FUN_000153c4((short)iVar9 * 0x148 + param_1 + 0x348,(undefined1 *)local_58);
        uVar4 = (uint)*(ushort *)(iVar8 * 0x148 + param_1 + 0x488);
        if ((uVar4 != 0) &&
           (puVar6 = (uint *)(param_1 + (iVar8 * 0x29 + uVar4 + 0x68) * 8),
           uVar4 = FUN_00014658(param_1,*puVar3,(ushort)puVar3[1],*puVar6,(ushort)puVar6[1]),
           (uVar4 & 0xff) == 0)) {
          return 0;
        }
        return 1;
      }
    }
    iVar8 = (iVar9 + 1) * 0x10000;
    iVar9 = iVar8 >> 0x10;
    local_60 = (short)((uint)iVar8 >> 0x10);
    if (9 < iVar9) {
      return 0;
    }
  } while( true );
}


// ==== FUN_000171e0 @ 000171e0  size=248  callers=[000134f8, 00013f0c, 00014158]

void FUN_000171e0(undefined1 *param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_r1;
  int iVar5;
  undefined1 *puVar6;
  undefined1 auStack_354 [840];
  
  puVar2 = FUN_00014718(auStack_354,2,*(ushort *)(param_1 + 0x102c));
  iVar3 = 0x348;
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
    *(undefined2 *)(param_1 + iVar3 * 0x148 + 0x488) = 0;
    *(undefined2 *)(param_1 + iVar3 * 0x148 + 0x48c) = 0xc;
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
  } while (iVar3 < 10);
  FUN_00014d0c((int)param_1);
  FUN_00015460((int)param_1);
  param_1[0x101e] = 0;
  *(undefined2 *)(param_1 + 0x102e) = 0;
  if (param_1[0x101a] != '\0') {
    uVar4 = Ordinal_1053();
    (*(code *)*DAT_000172d8)(5,uVar4);
    *(undefined2 *)(param_1 + 0x1018) = extraout_r1;
  }
  return;
}


// ==== Ordinal_1079 @ 00017300  size=8  callers=[00011f34, 00013fe4, 000140e0, 00014158]

void Ordinal_1079(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017308)();
  return;
}


// ==== Ordinal_77 @ 000174d4  size=8  callers=[00011000, 000118f4, 00011ed4, 000140e0]

void Ordinal_77(void)

{
                    /* WARNING: Could not recover jumptable at 0x000174d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000174dc)();
  return;
}


// ==== Ordinal_317 @ 000174e0  size=8  callers=[00011704, 00011728, 00011774, 000117e4, 00011ab8, 00011d64, 00011f7c, 00011fa0, 0001209c, 00014308, 000143b0]

void Ordinal_317(void)

{
                    /* WARNING: Could not recover jumptable at 0x000174e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000174e8)();
  return;
}


// ==== Ordinal_231 @ 000174ec  size=8  callers=[00011704, 00011ab8, 00011f34, 00011fa0, 00013fe4, 000140e0, 00014158]

void Ordinal_231(void)

{
                    /* WARNING: Could not recover jumptable at 0x000174f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000174f4)();
  return;
}


// ==== Ordinal_1939 @ 000174f8  size=8  callers=[000110a4, 0001196c, 00011f5c]

void Ordinal_1939(void)

{
                    /* WARNING: Could not recover jumptable at 0x000174fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017500)();
  return;
}


// ==== Ordinal_846 @ 00017504  size=8  callers=[000110c0, 00011990]

void Ordinal_846(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001750c)();
  return;
}


// ==== Ordinal_1691 @ 00017510  size=8  callers=[000111e8, 00011a1c]

void Ordinal_1691(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017518)();
  return;
}


// ==== Ordinal_271 @ 0001754c  size=8  callers=[00011440, 00012518]

void Ordinal_271(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017554)();
  return;
}


// ==== Ordinal_297 @ 00017558  size=8  callers=[00011440, 000134f8, 00013f0c]

void Ordinal_297(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001755c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017560)();
  return;
}


// ==== Ordinal_177 @ 00017564  size=8  callers=[00011440, 000134f8, 00013f0c]

void Ordinal_177(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001756c)();
  return;
}


// ==== Ordinal_1040 @ 00017570  size=8  callers=[00011440, 00011774, 000117e4, 00012188, 000143b0, 00014474, 00014568]

void Ordinal_1040(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017578)();
  return;
}


// ==== Ordinal_2267 @ 0001757c  size=8  callers=[00011440]

void Ordinal_2267(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017584)();
  return;
}


// ==== Ordinal_800 @ 00017588  size=8  callers=[00011440, 00012518, 00014420]

void Ordinal_800(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001758c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017590)();
  return;
}


// ==== Ordinal_2510 @ 00017594  size=8  callers=[00011440]

void Ordinal_2510(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001759c)();
  return;
}


// ==== Ordinal_136 @ 000175a0  size=8  callers=[00011440, 00012518]

void Ordinal_136(void)

{
                    /* WARNING: Could not recover jumptable at 0x000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000175a8)();
  return;
}


// ==== Ordinal_315 @ 000175ac  size=8  callers=[00011adc, 00011d14, 00011e18, 00011fc4, 000121b8, 00012308, 00012518]

void Ordinal_315(void)

{
                    /* WARNING: Could not recover jumptable at 0x000175b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000175b4)();
  return;
}


// ==== Ordinal_48 @ 000176c0  size=8  callers=[00011b38]

void Ordinal_48(void)

{
                    /* WARNING: Could not recover jumptable at 0x000176c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000176c8)();
  return;
}


// ==== Ordinal_103 @ 000176cc  size=8  callers=[00011b38]

void Ordinal_103(void)

{
                    /* WARNING: Could not recover jumptable at 0x000176d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000176d4)();
  return;
}


// ==== Ordinal_219 @ 000176e4  size=8  callers=[00011b78]

void Ordinal_219(void)

{
                    /* WARNING: Could not recover jumptable at 0x000176e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000176ec)();
  return;
}


// ==== Ordinal_2313 @ 000176f0  size=8  callers=[00011bb8]

void Ordinal_2313(void)

{
                    /* WARNING: Could not recover jumptable at 0x000176f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000176f8)();
  return;
}


// ==== Ordinal_562 @ 000176fc  size=8  callers=[00011bb8]

void Ordinal_562(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017704)();
  return;
}


// ==== Ordinal_1676 @ 00017708  size=8  callers=[00011bb8]

void Ordinal_1676(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001770c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017710)();
  return;
}


// ==== Ordinal_1850 @ 00017714  size=8  callers=[00011bb8]

void Ordinal_1850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001771c)();
  return;
}


// ==== Ordinal_2093 @ 00017720  size=8  callers=[00011cfc]

void Ordinal_2093(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017728)();
  return;
}


// ==== Ordinal_644 @ 0001772c  size=8  callers=[00011d14, 00014454, 00017ed8]

void Ordinal_644(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017734)();
  return;
}


// ==== Ordinal_201 @ 00017840  size=8  callers=[00011df4]

void Ordinal_201(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017848)();
  return;
}


// ==== Ordinal_310 @ 0001784c  size=8  callers=[00011f7c]

void Ordinal_310(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017854)();
  return;
}


// ==== Ordinal_228 @ 00017858  size=8  callers=[00011e18]

void Ordinal_228(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001785c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017860)();
  return;
}


// ==== Ordinal_2446 @ 00017864  size=8  callers=[00011e18]

void Ordinal_2446(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001786c)();
  return;
}


// ==== Ordinal_2114 @ 00017870  size=8  callers=[00011e18]

void Ordinal_2114(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017878)();
  return;
}


// ==== Ordinal_2075 @ 0001787c  size=8  callers=[00011e18]

void Ordinal_2075(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017884)();
  return;
}


// ==== Ordinal_72 @ 00017888  size=8  callers=[00011e18]

void Ordinal_72(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001788c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017890)();
  return;
}


// ==== Ordinal_572 @ 00017894  size=8  callers=[00011e18]

void Ordinal_572(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001789c)();
  return;
}


// ==== Ordinal_162 @ 000178a0  size=8  callers=[00011e18]

void Ordinal_162(void)

{
                    /* WARNING: Could not recover jumptable at 0x000178a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000178a8)();
  return;
}


// ==== Ordinal_2400 @ 000178ac  size=8  callers=[00011e18]

void Ordinal_2400(void)

{
                    /* WARNING: Could not recover jumptable at 0x000178b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000178b4)();
  return;
}


// ==== Ordinal_840 @ 000178b8  size=8  callers=[00011f5c]

void Ordinal_840(void)

{
                    /* WARNING: Could not recover jumptable at 0x000178bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000178c0)();
  return;
}


// ==== Ordinal_85 @ 000179d8  size=8  callers=[00012020]

void Ordinal_85(void)

{
                    /* WARNING: Could not recover jumptable at 0x000179dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000179e0)();
  return;
}


// ==== Ordinal_1961 @ 000179f0  size=8  callers=[00012080]

void Ordinal_1961(void)

{
                    /* WARNING: Could not recover jumptable at 0x000179f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_000179f8)();
  return;
}


// ==== Ordinal_76 @ 00017a8c  size=8  callers=[00012308, 00014568]

void Ordinal_76(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017a94)();
  return;
}


// ==== Ordinal_200 @ 00017a98  size=8  callers=[00012308]

void Ordinal_200(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017aa0)();
  return;
}


// ==== Ordinal_1036 @ 00017abc  size=8  callers=[00012518]

void Ordinal_1036(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017ac4)();
  return;
}


// ==== Ordinal_2264 @ 00017ac8  size=8  callers=[00012518, 000134f8, 00013a20, 00014568]

void Ordinal_2264(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017ad0)();
  return;
}


// ==== Ordinal_799 @ 00017ad4  size=8  callers=[00012518, 00014568]

void Ordinal_799(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017adc)();
  return;
}


// ==== Ordinal_1760 @ 00017ae0  size=8  callers=[000134f8, 00013f0c]

void Ordinal_1760(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017ae8)();
  return;
}


// ==== Ordinal_1207 @ 00017aec  size=8  callers=[00014158]

void Ordinal_1207(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017af4)();
  return;
}


// ==== Ordinal_1946 @ 00017af8  size=8  callers=[00014158]

void Ordinal_1946(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017b00)();
  return;
}


// ==== Ordinal_628 @ 00017b10  size=8  callers=[00014420]

void Ordinal_628(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017b18)();
  return;
}


// ==== Ordinal_230 @ 00017b1c  size=8  callers=[00014568]

void Ordinal_230(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017b24)();
  return;
}


// ==== Ordinal_250 @ 00017b28  size=8  callers=[0001133c, 000134f8, 00013a20, 00013dd8, 00013ec0, 00013f0c, 00014158]

void Ordinal_250(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017b30)();
  return;
}


// ==== Ordinal_102 @ 00017b34  size=8  callers=[0001133c, 000134f8, 00016474, 00016ff0]

void Ordinal_102(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017b3c)();
  return;
}


// ==== Ordinal_249 @ 00017b40  size=8  callers=[0001133c, 00011440]

void Ordinal_249(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017b48)();
  return;
}


// ==== Ordinal_941 @ 00017b4c  size=8  callers=[00011440]

void Ordinal_941(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017b54)();
  return;
}


// ==== Ordinal_98 @ 00017b58  size=8  callers=[00011440]

void Ordinal_98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017b60)();
  return;
}


// ==== Ordinal_897 @ 00017b64  size=8  callers=[00011854]

void Ordinal_897(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017b6c)();
  return;
}


// ==== Ordinal_868 @ 00017b7c  size=8  callers=[00011bb8]

void Ordinal_868(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017b84)();
  return;
}


// ==== Ordinal_61 @ 00017b88  size=8  callers=[00011d14]

void Ordinal_61(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017b90)();
  return;
}


// ==== Ordinal_63 @ 00017b94  size=8  callers=[00011d14]

void Ordinal_63(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017b9c)();
  return;
}


// ==== Ordinal_874 @ 00017ba0  size=8  callers=[00011d14]

void Ordinal_874(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017ba8)();
  return;
}


// ==== Ordinal_267 @ 00017bac  size=8  callers=[00011e18, 000134f8, 00013a20, 00013dd8, 00013ec0]

void Ordinal_267(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017bb4)();
  return;
}


// ==== Ordinal_1118 @ 00017bb8  size=8  callers=[00012218, 000122a8]

void Ordinal_1118(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017bc0)();
  return;
}


// ==== Ordinal_1120 @ 00017bc4  size=8  callers=[00012218]

void Ordinal_1120(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017bcc)();
  return;
}


// ==== Ordinal_1113 @ 00017bd0  size=8  callers=[00012218, 000122a8]

void Ordinal_1113(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017bd8)();
  return;
}


// ==== Ordinal_1065 @ 00017bdc  size=8  callers=[00012218]

void Ordinal_1065(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017be4)();
  return;
}


// ==== Ordinal_1121 @ 00017be8  size=8  callers=[000122a8]

void Ordinal_1121(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017bf0)();
  return;
}


// ==== Ordinal_944 @ 00017bf4  size=8  callers=[00012518]

void Ordinal_944(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017bfc)();
  return;
}


// ==== Ordinal_936 @ 00017c00  size=8  callers=[00012518]

void Ordinal_936(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c08)();
  return;
}


// ==== Ordinal_902 @ 00017c0c  size=8  callers=[00012518]

void Ordinal_902(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c14)();
  return;
}


// ==== Ordinal_910 @ 00017c18  size=8  callers=[00012518, 00014568]

void Ordinal_910(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c20)();
  return;
}


// ==== Ordinal_903 @ 00017c24  size=8  callers=[00012518]

void Ordinal_903(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c2c)();
  return;
}


// ==== Ordinal_906 @ 00017c30  size=8  callers=[000134f8, 00014474, 00014504, 00015f68]

void Ordinal_906(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c38)();
  return;
}


// ==== Ordinal_1044 @ 00017c3c  size=8  callers=[000134f8, 00013ec0, 00013f0c, 00014158, 00016474]

void Ordinal_1044(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c44)();
  return;
}


// ==== Ordinal_101 @ 00017c48  size=8  callers=[00013a20, 00013dd8]

void Ordinal_101(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c50)();
  return;
}


// ==== Ordinal_493 @ 00017c54  size=8  callers=[00014110]

void Ordinal_493(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c5c)();
  return;
}


// ==== Ordinal_703 @ 00017c60  size=8  callers=[00014158]

void Ordinal_703(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c68)();
  return;
}


// ==== Ordinal_873 @ 00017c6c  size=8  callers=[00014420]

void Ordinal_873(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c74)();
  return;
}


// ==== Ordinal_905 @ 00017c84  size=8  callers=[00014568]

void Ordinal_905(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c8c)();
  return;
}


// ==== Ordinal_1053 @ 00017c90  size=8  callers=[00014718, 00014d0c, 000171e0]

void Ordinal_1053(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017c98)();
  return;
}


// ==== Ordinal_1061 @ 00017c9c  size=8  callers=[00014718, 00014d0c]

void Ordinal_1061(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017ca4)();
  return;
}


// ==== Ordinal_535 @ 00017ca8  size=8  callers=[00014718, 00014d0c]

void Ordinal_535(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017cb0)();
  return;
}


// ==== Ordinal_1046 @ 00017cb4  size=8  callers=[00014a04, 00015218]

void Ordinal_1046(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017cbc)();
  return;
}


// ==== entry @ 00017cc0  size=212  callers=[]

void entry(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_00017db4();
  uVar2 = Ordinal_775(param_1,param_2,param_3,param_4);
  *DAT_00017e64 = 0;
  puVar1 = DAT_00017e60;
  puVar3 = (undefined4 *)*DAT_00017e60;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*DAT_00017e5c;
    while (puVar4 = puVar4 + -1, puVar3 <= puVar4) {
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)();
        puVar3 = (undefined4 *)*puVar1;
      }
    }
  }
  FUN_00017de4(DAT_00017ecc,DAT_00017ed0);
  FUN_00017de4(DAT_00017ec4,DAT_00017ec8);
  (*DAT_00017ec0)(0x42,uVar2);
  return;
}


// ==== FUN_00017cf4 @ 00017cf4  size=160  callers=[00017d9c]

undefined4 FUN_00017cf4(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = DAT_00017d44;
  uVar3 = Ordinal_35(*DAT_00017d44);
  piVar1 = DAT_00017d40;
  puVar5 = (undefined4 *)*DAT_00017d40;
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


// ==== FUN_00017d9c @ 00017d9c  size=24  callers=[00011de4, 00012160]

undefined4 FUN_00017d9c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00017cf4(param_1);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ==== FUN_00017db4 @ 00017db4  size=32  callers=[00017cc0]

void FUN_00017db4(void)

{
  FUN_00017de4(DAT_00017ddc,DAT_00017de0);
  FUN_00017de4(DAT_00017dd4,DAT_00017dd8);
  return;
}


// ==== FUN_00017de4 @ 00017de4  size=48  callers=[00017cc0, 00017db4]

void FUN_00017de4(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


// ==== Ordinal_775 @ 00017ed4  size=4  callers=[00017cc0]

void Ordinal_775(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017f2c)();
  return;
}


// ==== FUN_00017ed8 @ 00017ed8  size=36  callers=[00017f00]

undefined4 FUN_00017ed8(undefined1 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Ordinal_644();
  *(undefined1 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x2040) = param_2;
  return 1;
}


// ==== FUN_00017f00 @ 00017f00  size=32  callers=[]

void FUN_00017f00(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00017ed8(0,0x600);
  *DAT_00017f20 = (char)uVar1;
  return;
}


// ==== Ordinal_775 @ 00017f24  size=8  callers=[]

void Ordinal_775(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017f2c)();
  return;
}


// ==== Ordinal_34 @ 00017f30  size=8  callers=[00017cf4]

void Ordinal_34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017f38)();
  return;
}


// ==== Ordinal_33 @ 00017f3c  size=8  callers=[00017cf4]

void Ordinal_33(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017f44)();
  return;
}


// ==== Ordinal_35 @ 00017f48  size=8  callers=[00017cf4]

void Ordinal_35(void)

{
                    /* WARNING: Could not recover jumptable at 0x00017f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_00017f50)();
  return;
}


