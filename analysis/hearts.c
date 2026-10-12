// ==== FUN_00011000 @ 00011000  size=192  callers=[000132a8, 0001339c, 00013490]

undefined1 *
FUN_00011000(undefined1 *param_1,undefined4 param_2,undefined2 *param_3,char *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  Ordinal_77(param_1,0xee,param_16);
  uVar1 = DAT_000110c0;
  *(undefined2 **)(param_1 + 0x88) = param_3;
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  *(char **)(param_1 + 0x8c) = param_4;
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  *(undefined4 *)(param_1 + 0x90) = param_5;
  *(undefined4 *)(param_1 + 0xb4) = param_6;
  *(undefined4 *)(param_1 + 0x94) = param_7;
  *(undefined4 *)(param_1 + 0x98) = param_8;
  *(undefined4 *)(param_1 + 0x9c) = param_9;
  *(undefined4 *)(param_1 + 0xb0) = param_10;
  *(undefined4 *)(param_1 + 0xa0) = param_11;
  *(undefined4 *)(param_1 + 0xa4) = param_12;
  *(undefined4 *)(param_1 + 0xa8) = param_13;
  *(undefined4 *)(param_1 + 0xac) = param_14;
  *(undefined4 *)(param_1 + 0xb8) = param_15;
  uVar2 = 5;
  if (*param_4 == '\0') {
    uVar2 = *param_3;
  }
  *(undefined2 *)(param_1 + 0x84) = uVar2;
  return param_1;
}


// ==== FUN_000110e4 @ 000110e4  size=176  callers=[]

undefined4 FUN_000110e4(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  Ordinal_1939();
  uVar2 = Ordinal_1273(param_1,0x3ee);
  puVar1 = PTR_u_Display_0001119c;
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  Ordinal_1673(uVar2,1,0,puVar1,0,0);
  Ordinal_1673(*(undefined4 *)(param_1 + 0x80),1,1,PTR_u_Rules_00011198,0,0);
  Ordinal_1673(*(undefined4 *)(param_1 + 0x80),1,2,PTR_u_Difficulty_00011194,0,0);
  Ordinal_868(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x20),0x130c,
              *(undefined4 *)(param_1 + 0x7c),0);
  FUN_000111a0(param_1);
  FUN_000112e0(param_1);
  return 1;
}


// ==== FUN_000111a0 @ 000111a0  size=240  callers=[000110e4, 0001129c]

void FUN_000111a0(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_DAT_00011298;
  uVar3 = 0;
  do {
    uVar4 = Ordinal_1273(param_1,*(undefined4 *)(puVar1 + (short)uVar3 * 4));
    Ordinal_2446(uVar4,*(int *)(param_1 + 0x7c) == 0);
    puVar2 = PTR_DAT_00011294;
    uVar3 = ((short)uVar3 + 1) * 0x10000 >> 0x10;
  } while ((uVar3 & 0xffff) < 6);
  uVar3 = 0;
  do {
    uVar4 = Ordinal_1273(param_1,*(undefined4 *)(puVar2 + (short)uVar3 * 4));
    Ordinal_2446(uVar4,*(int *)(param_1 + 0x7c) == 1);
    puVar1 = PTR_DAT_00011290;
    uVar3 = ((short)uVar3 + 1) * 0x10000 >> 0x10;
  } while ((uVar3 & 0xffff) < 0xe);
  uVar3 = 0;
  do {
    uVar4 = Ordinal_1273(param_1,*(undefined4 *)(puVar1 + (short)uVar3 * 4));
    Ordinal_2446(uVar4,*(int *)(param_1 + 0x7c) == 2);
    uVar3 = ((short)uVar3 + 1) * 0x10000 >> 0x10;
  } while ((uVar3 & 0xffff) < 4);
  return;
}


// ==== FUN_0001129c @ 0001129c  size=68  callers=[]

void FUN_0001129c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = Ordinal_868(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x20),0x130b,0,0);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  FUN_000111a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001acd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001acd8)(*(undefined4 *)(param_1 + 0x20),0,1);
  return;
}


// ==== FUN_000112e0 @ 000112e0  size=680  callers=[000110e4]

void FUN_000112e0(int param_1)

{
  Ordinal_846(param_1,0x3ea,**(int **)(param_1 + 0xb4) == 0);
  Ordinal_846(param_1,0x3eb,**(int **)(param_1 + 0xb4) == 1);
  Ordinal_846(param_1,0x3ec,**(int **)(param_1 + 0xb4) == 2);
  Ordinal_846(param_1,0x3ed,**(char **)(param_1 + 0x90) == '\x01');
  Ordinal_846(param_1,1000,**(char **)(param_1 + 0x94) == '\0');
  Ordinal_846(param_1,0x3e9,**(char **)(param_1 + 0x94) == '\x01');
  Ordinal_846(param_1,0x3f2,**(int **)(param_1 + 0xb0) == 0);
  Ordinal_846(param_1,0x3f3,**(int **)(param_1 + 0xb0) == 1);
  Ordinal_846(param_1,0x3f4,**(int **)(param_1 + 0xb0) == 2);
  Ordinal_846(param_1,0x3f5,**(int **)(param_1 + 0xb0) == 3);
  Ordinal_846(param_1,0x3f6,**(char **)(param_1 + 0x98) == '\x01');
  Ordinal_846(param_1,0x3f7,**(char **)(param_1 + 0x9c) == '\x01');
  Ordinal_846(param_1,0x3f9,**(char **)(param_1 + 0xa0) == '\x01');
  Ordinal_846(param_1,0x3fa,**(char **)(param_1 + 0xa4) == '\x01');
  Ordinal_846(param_1,0x3fc,**(char **)(param_1 + 0xa8) == '\x01');
  Ordinal_846(param_1,0x3fb,**(char **)(param_1 + 0xac) == '\x01');
  Ordinal_846(param_1,0x405,**(int **)(param_1 + 0xb8) == 0);
  Ordinal_846(param_1,0x3fe,**(int **)(param_1 + 0xb8) == 1);
  Ordinal_846(param_1,0x3ff,**(int **)(param_1 + 0xb8) == 2);
  return;
}


// ==== FUN_00011588 @ 00011588  size=588  callers=[000117d4]

void FUN_00011588(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x84) == 5) {
    **(undefined1 **)(param_1 + 0x8c) = 1;
  }
  else {
    **(undefined1 **)(param_1 + 0x8c) = 0;
    **(undefined2 **)(param_1 + 0x88) = *(undefined2 *)(param_1 + 0x84);
  }
  iVar1 = Ordinal_1691(param_1,0x3ea);
  if (iVar1 == 0) {
    iVar1 = Ordinal_1691(param_1,0x3eb);
    if (iVar1 == 0) {
      iVar1 = Ordinal_1691(param_1,0x3ec);
      if (iVar1 != 0) {
        **(undefined4 **)(param_1 + 0xb4) = 2;
      }
    }
    else {
      **(undefined4 **)(param_1 + 0xb4) = 1;
    }
  }
  else {
    **(undefined4 **)(param_1 + 0xb4) = 0;
  }
  iVar1 = Ordinal_1691(param_1,0x3ed);
  *(bool *)*(undefined4 *)(param_1 + 0x90) = iVar1 != 0;
  iVar1 = Ordinal_1691(param_1,0x3e9);
  *(bool *)*(undefined4 *)(param_1 + 0x94) = iVar1 != 0;
  iVar1 = Ordinal_1691(param_1,0x3f2);
  if (iVar1 == 0) {
    iVar1 = Ordinal_1691(param_1,0x3f3);
    if (iVar1 == 0) {
      iVar1 = Ordinal_1691(param_1,0x3f4);
      if (iVar1 == 0) {
        **(undefined4 **)(param_1 + 0xb0) = 3;
      }
      else {
        **(undefined4 **)(param_1 + 0xb0) = 2;
      }
    }
    else {
      **(undefined4 **)(param_1 + 0xb0) = 1;
    }
  }
  else {
    **(undefined4 **)(param_1 + 0xb0) = 0;
  }
  iVar1 = Ordinal_1691(param_1,0x3f6);
  *(bool *)*(undefined4 *)(param_1 + 0x98) = iVar1 != 0;
  iVar1 = Ordinal_1691(param_1,0x3f7);
  *(bool *)*(undefined4 *)(param_1 + 0x9c) = iVar1 != 0;
  iVar1 = Ordinal_1691(param_1,0x3f9);
  *(bool *)*(undefined4 *)(param_1 + 0xa0) = iVar1 != 0;
  iVar1 = Ordinal_1691(param_1,0x3fa);
  *(bool *)*(undefined4 *)(param_1 + 0xa4) = iVar1 != 0;
  iVar1 = Ordinal_1691(param_1,0x3fc);
  *(bool *)*(undefined4 *)(param_1 + 0xa8) = iVar1 != 0;
  iVar1 = Ordinal_1691(param_1,0x3fb);
  *(bool *)*(undefined4 *)(param_1 + 0xac) = iVar1 != 0;
  iVar1 = Ordinal_1691(param_1,0x405);
  if (iVar1 == 0) {
    iVar1 = Ordinal_1691(param_1,0x3fe);
    if (iVar1 == 0) {
      **(undefined4 **)(param_1 + 0xb8) = 2;
    }
    else {
      **(undefined4 **)(param_1 + 0xb8) = 1;
    }
  }
  else {
    **(undefined4 **)(param_1 + 0xb8) = 0;
  }
  return;
}


// ==== FUN_000117d4 @ 000117d4  size=32  callers=[]

void FUN_000117d4(int param_1)

{
  FUN_00011588(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a690)(param_1);
  return;
}


// ==== FUN_000117f4 @ 000117f4  size=260  callers=[]

void FUN_000117f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  sVar7 = 0x3c;
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
    iVar3 = func_0x0001acdc(auStack_30,param_3,param_4);
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


// ==== FUN_000118f8 @ 000118f8  size=700  callers=[]

void FUN_000118f8(int param_1)

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
  sVar13 = 0x3c;
  Ordinal_249(*(undefined4 *)(param_1 + 0x20),local_94);
  uVar4 = DAT_00011bc4;
  uVar3 = DAT_00011bc0;
  if (*(int *)(param_1 + 0x7c) == 0) {
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
      if (*(ushort *)(param_1 + 0x84) == uVar12) {
        local_d8 = 0;
        local_dc = DAT_00011bbc;
        uVar6 = Ordinal_2510(0,3,0);
        Ordinal_800(&local_dc,uVar6);
        uVar6 = Ordinal_2267(&local_7c,&local_dc);
        Ordinal_98(&local_c4,2,2);
        Ordinal_941(local_78,local_c4,local_c0,local_bc,local_b8);
        Ordinal_2267(&local_7c,uVar6);
        local_dc = DAT_00011bb8;
        Ordinal_1040(&local_dc);
        local_dc = DAT_00011bb4;
      }
      sVar8 = (short)uVar12 + 0xfa;
      if (4 < (int)uVar12) {
        sVar8 = 0x82;
      }
      FUN_0001851c((int)&local_7c,sVar8,iVar5,iVar2,0x1e,0x2a,0xff00);
      if (uVar12 == 5) {
        piVar7 = (int *)Ordinal_177(auStack_d4,uVar3);
        piVar7 = (int *)FUN_00011d18((int)&local_7c,auStack_84,piVar7);
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
  }
  Ordinal_271(&local_7c);
  return;
}


// ==== FUN_00011bc8 @ 00011bc8  size=36  callers=[]

undefined4 FUN_00011bc8(undefined4 param_1,uint param_2)

{
  Ordinal_231();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011bec @ 00011bec  size=60  callers=[]

undefined1 * FUN_00011bec(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00011c28;
  *param_1 = (char)DAT_00011c28;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011c38 @ 00011c38  size=104  callers=[]

undefined1 * FUN_00011c38(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00011ca4;
  *param_1 = (char)DAT_00011ca4;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_00011ca0;
  *param_1 = (char)DAT_00011ca0;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011ca8 @ 00011ca8  size=104  callers=[]

undefined1 * FUN_00011ca8(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00011d14;
  *param_1 = (char)DAT_00011d14;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_00011d10;
  *param_1 = (char)DAT_00011d10;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011d18 @ 00011d18  size=136  callers=[000118f8, 00013d04, 000188b4, 00019e70]

undefined1 * FUN_00011d18(int param_1,undefined1 *param_2,int *param_3)

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


// ==== FUN_00011e10 @ 00011e10  size=24  callers=[]

void FUN_00011e10(void)

{
  FUN_00011e20();
  FUN_0001af38(DAT_00011e34);
  return;
}


// ==== FUN_00011e20 @ 00011e20  size=64  callers=[00011e10]

undefined1 * FUN_00011e20(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  puVar2 = DAT_00011e28;
  Ordinal_201(DAT_00011e28,0);
  uVar1 = DAT_00011e0c;
  *puVar2 = (char)DAT_00011e0c;
  puVar2[1] = (char)((uint)uVar1 >> 8);
  puVar2[2] = (char)((uint)uVar1 >> 0x10);
  puVar2[3] = (char)((uint)uVar1 >> 0x18);
  return puVar2;
}


// ==== FUN_00011e44 @ 00011e44  size=172  callers=[]

bool FUN_00011e44(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [24];
  
  Ordinal_2400(param_1,PTR_u_Hearts_PPC___Don_Turner_00011e90);
  iVar1 = Ordinal_315(0x6c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = Ordinal_162(iVar1,0x80,PTR_DAT_00011e84,PTR_DAT_00011e88,PTR_DAT_00011e8c);
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


// ==== FUN_00011f00 @ 00011f00  size=60  callers=[00011f60]

undefined1 * FUN_00011f00(undefined1 *param_1)

{
  undefined4 uVar1;
  
  Ordinal_77(param_1,100,0);
  uVar1 = DAT_00011f3c;
  *param_1 = (char)DAT_00011f3c;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_00011f60 @ 00011f60  size=40  callers=[]

void FUN_00011f60(void)

{
  undefined1 auStack_80 [124];
  
  FUN_00011f00(auStack_80);
  Ordinal_1079(auStack_80);
  Ordinal_231(auStack_80);
  return;
}


// ==== FUN_00011f88 @ 00011f88  size=32  callers=[]

undefined4 FUN_00011f88(undefined4 param_1)

{
  Ordinal_1939();
  Ordinal_840(param_1,0);
  return 1;
}


// ==== FUN_00011fa8 @ 00011fa8  size=36  callers=[]

undefined4 FUN_00011fa8(undefined4 param_1,uint param_2)

{
  Ordinal_310();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011fcc @ 00011fcc  size=36  callers=[]

undefined4 FUN_00011fcc(undefined4 param_1,uint param_2)

{
  Ordinal_231();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00011ff0 @ 00011ff0  size=36  callers=[]

undefined1 * FUN_00011ff0(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)Ordinal_315(0x58);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_0001204c(puVar1);
  }
  return puVar1;
}


// ==== FUN_0001204c @ 0001204c  size=52  callers=[00011ff0]

undefined1 * FUN_0001204c(undefined1 *param_1)

{
  undefined4 uVar1;
  
  Ordinal_85();
  uVar1 = DAT_00012080;
  *param_1 = (char)DAT_00012080;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_00012084 @ 00012084  size=44  callers=[000120c8]

void FUN_00012084(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_000120a8;
  *param_1 = (char)DAT_000120a8;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001a9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a9cc)();
  return;
}


// ==== FUN_000120ac @ 000120ac  size=24  callers=[]

bool FUN_000120ac(void)

{
  int iVar1;
  
  iVar1 = Ordinal_1961();
  return iVar1 != 0;
}


// ==== FUN_000120c8 @ 000120c8  size=36  callers=[]

undefined1 * FUN_000120c8(undefined1 *param_1,uint param_2)

{
  FUN_00012084(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_0001218c @ 0001218c  size=36  callers=[00012748, 00012ab8]

void FUN_0001218c(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Ordinal_535();
  do {
    iVar2 = Ordinal_535();
  } while ((uint)(iVar2 - iVar1) < param_1);
  return;
}


// ==== FUN_000121b0 @ 000121b0  size=40  callers=[]

undefined1 * FUN_000121b0(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)Ordinal_315(0x50c);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_00012300(puVar1);
  }
  return puVar1;
}


// ==== FUN_00012210 @ 00012210  size=132  callers=[00012300]

bool FUN_00012210(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_24 [20];
  
  bVar3 = false;
  iVar1 = Ordinal_1113(DAT_00012298,DAT_0001229c);
  local_24[0] = 0;
  if (iVar1 != 0) {
    Ordinal_1120(local_24,0x13,1,iVar1);
    iVar2 = Ordinal_1065(local_24,DAT_00012294);
    bVar3 = iVar2 == 0;
    if (bVar3) {
      Ordinal_1120(param_1 + 0x4c,0x468,1,iVar1);
    }
    Ordinal_1118(iVar1);
  }
  return bVar3;
}


// ==== FUN_000122a0 @ 000122a0  size=84  callers=[000123ec]

void FUN_000122a0(int param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_1113(DAT_000122f8,DAT_000122fc);
  if (iVar1 != 0) {
    Ordinal_1121(DAT_000122f4,0x13,1,iVar1);
    Ordinal_1121(param_1 + 0x4c,0x468,1,iVar1);
  }
  Ordinal_1118(iVar1);
  return;
}


// ==== FUN_00012300 @ 00012300  size=224  callers=[000121b0]

undefined1 * FUN_00012300(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  Ordinal_200();
  FUN_000136a8((undefined4 *)(param_1 + 0x4c));
  FUN_000138b0(param_1 + 0x4bc);
  uVar3 = DAT_00012394;
  *param_1 = (char)DAT_00012394;
  param_1[1] = (char)((uint)uVar3 >> 8);
  puVar1 = DAT_00012390;
  param_1[2] = (char)((uint)uVar3 >> 0x10);
  param_1[3] = (char)((uint)uVar3 >> 0x18);
  param_1[0x508] = 0;
  param_1[0x4cc] = 0;
  *puVar1 = param_1;
  *DAT_0001238c = 0;
  iVar2 = Ordinal_315(0x14);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = Ordinal_76();
  }
  *(undefined4 *)(param_1 + 0x4b4) = uVar3;
  puVar4 = (undefined1 *)Ordinal_315(0x10);
  if (puVar4 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_000138b0(puVar4);
  }
  *(undefined4 *)(param_1 + 0x4b8) = uVar3;
  FUN_00012210((int)param_1);
  FUN_000139a4(param_1 + 0x4bc,200);
  return param_1;
}


// ==== FUN_000123ec @ 000123ec  size=224  callers=[0001388c]

void FUN_000123ec(undefined1 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  
  uVar1 = DAT_000124cc;
  *param_1 = (char)DAT_000124cc;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  FUN_000122a0((int)param_1);
  piVar2 = *(int **)(param_1 + 0x4b4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
  piVar2 = *(int **)(param_1 + 0x4b8);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
  uVar1 = DAT_000124c8;
  puVar3 = param_1 + 0x4bc;
  *puVar3 = (char)DAT_000124c8;
  param_1[0x4bd] = (char)((uint)uVar1 >> 8);
  param_1[0x4be] = (char)((uint)uVar1 >> 0x10);
  param_1[0x4bf] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(puVar3);
  uVar1 = DAT_000124c4;
  *puVar3 = (char)DAT_000124c4;
  param_1[0x4bd] = (char)((uint)uVar1 >> 8);
  param_1[0x4be] = (char)((uint)uVar1 >> 0x10);
  param_1[0x4bf] = (char)((uint)uVar1 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001aaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001aab0)(param_1);
  return;
}


// ==== FUN_000124d8 @ 000124d8  size=504  callers=[]

void FUN_000124d8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [4];
  undefined4 local_74;
  
  Ordinal_136(auStack_78,param_1);
  if (*(char *)(param_1 + 0x508) == '\0') {
    FUN_000126d0(param_1);
  }
  if (*(char *)(param_1 + 0x4cc) == '\0') {
    iVar2 = *(int *)(param_1 + 0x4b4);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == 0)) {
      uVar1 = Ordinal_910(local_74);
      Ordinal_799(iVar2,uVar1);
      if (param_1 == -0x4bc) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x4c0);
      }
      iVar2 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar1);
      uVar3 = *(undefined4 *)(param_1 + 0x4b8);
      uVar1 = Ordinal_902(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),0xf0,0x140);
      Ordinal_800(uVar3,uVar1);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = *(undefined4 *)(iVar2 + 4);
      }
      Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar1);
    }
    uVar1 = 0;
    if (*(int *)(param_1 + 0x4b8) != 0) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x4b8) + 4);
    }
    iVar2 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar1);
    FUN_000185ac(*(int *)(param_1 + 0x4b4),param_1 + 0x4bc,0,0,0xf0,0x140,0xff00);
    FUN_00018850((int *)(param_1 + 0x4c),*(int **)(param_1 + 0x4b4));
    if (*(int *)(param_1 + 0x4b4) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4);
    }
    Ordinal_903(local_74,0,0,0xf0,0x140,uVar1,0,0,0xcc0020);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(iVar2 + 4);
    }
    Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar1);
  }
  else {
    if (*(int *)(param_1 + 0x4b4) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4);
    }
    Ordinal_903(local_74,0,0,0xf0,0x140,uVar1,0,0,0xcc0020);
    *(undefined1 *)(param_1 + 0x4cc) = 0;
  }
  Ordinal_271(auStack_78);
  return;
}


// ==== FUN_000126d0 @ 000126d0  size=60  callers=[000124d8]

void FUN_000126d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = Ordinal_875(*(undefined4 *)(param_1 + 0x20),1,100,0);
  *(undefined4 *)(param_1 + 0x504) = uVar1;
  *(undefined1 *)(param_1 + 0x508) = 1;
  return;
}


// ==== FUN_0001270c @ 0001270c  size=60  callers=[00013690]

void FUN_0001270c(int param_1)

{
  if (*(char *)(param_1 + 0x508) != '\0') {
    Ordinal_876(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x504));
    *(undefined1 *)(param_1 + 0x508) = 0;
  }
  return;
}


// ==== FUN_00012748 @ 00012748  size=868  callers=[]

void FUN_00012748(int param_1)

{
  short sVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined1 auStack_a4 [128];
  
  Ordinal_1021();
  pcVar2 = DAT_00012904;
  if (*DAT_00012904 == '\0') {
    iVar3 = *(int *)(param_1 + 0x4c);
    if (((iVar3 == 3) && (*(short *)(param_1 + 0x480) == 4)) ||
       ((*(short *)(param_1 + 0x480) < 4 && ((iVar3 == 3 && (*(short *)(param_1 + 0x484) != 2))))))
    {
      puVar6 = (undefined4 *)(param_1 + 0x4c);
      *DAT_00012904 = '\x01';
      sVar1 = *(short *)(param_1 + 0x484);
      bVar7 = *(short *)(param_1 + 0x480) != 4;
      FUN_00016bfc(puVar6);
      uVar4 = Ordinal_535();
      *(undefined4 *)(param_1 + 0x500) = uVar4;
      if (bVar7) {
        uVar4 = 0;
        if (*(int *)(param_1 + 0x4b8) != 0) {
          uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x4b8) + 4);
        }
        iVar3 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar4);
        FUN_000130a4(param_1);
        FUN_00018c74((int)puVar6,*(int *)(param_1 + 0x4b4),sVar1);
        *(undefined1 *)(param_1 + 0x4cc) = 1;
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
        Ordinal_267(*(undefined4 *)(param_1 + 0x20));
        uVar4 = 0;
        if (iVar3 != 0) {
          uVar4 = *(undefined4 *)(iVar3 + 4);
        }
        Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar4);
      }
      uVar4 = FUN_00016f28((int)puVar6);
      FUN_0001218c((int)(short)uVar4);
      uVar4 = 0;
      if (*(int *)(param_1 + 0x4b8) != 0) {
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x4b8) + 4);
      }
      iVar3 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar4);
      if (bVar7) {
        FUN_000199e0((int)puVar6,*(int *)(param_1 + 0x4b4));
      }
      else {
        FUN_00013214(param_1);
        FUN_000188b4((int)puVar6,*(int **)(param_1 + 0x4b4));
        if (*(char *)(param_1 + 0x497) == '\0') {
          uVar4 = FUN_00016f28((int)puVar6);
          FUN_0001218c((int)(short)uVar4);
          FUN_0001317c(param_1);
        }
        else {
          *(undefined4 *)(param_1 + 0x4c) = 5;
        }
      }
      *(undefined1 *)(param_1 + 0x4cc) = 1;
      Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
      Ordinal_267(*(undefined4 *)(param_1 + 0x20));
      uVar4 = 0;
      if (iVar3 != 0) {
        uVar4 = *(undefined4 *)(iVar3 + 4);
      }
      Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar4);
      uVar4 = FUN_00016f28(param_1 + 0x4c);
      FUN_0001218c((int)(short)uVar4);
      *DAT_00012904 = '\0';
    }
    else {
      puVar6 = (undefined4 *)(param_1 + 0x4c);
      if (iVar3 == 4) {
        *DAT_00012904 = '\x01';
        FUN_00013c9c(auStack_a4,puVar6);
        Ordinal_1079(auStack_a4);
        uVar5 = FUN_0001a194((int)puVar6);
        if ((uVar5 & 0xff) == 0) {
          FUN_00016e90(puVar6);
        }
        else {
          FUN_0001a0fc(puVar6);
        }
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
        *pcVar2 = '\0';
        Ordinal_231(auStack_a4);
      }
      else {
        iVar3 = Ordinal_535();
        if (((4000 < (uint)(iVar3 - *(int *)(param_1 + 0x500))) &&
            (*(short *)(param_1 + 0x484) == 2)) && (*(int *)(param_1 + 0x4c) == 3)) {
          *(int *)(param_1 + 0x4c) = 6;
          uVar4 = 0;
          if (*(int *)(param_1 + 0x4b8) != 0) {
            uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x4b8) + 4);
          }
          iVar3 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar4);
          FUN_00019e70((int *)(param_1 + 0x4c),*(int **)(param_1 + 0x4b4));
          *(undefined1 *)(param_1 + 0x4cc) = 1;
          Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
          Ordinal_267(*(undefined4 *)(param_1 + 0x20));
          uVar4 = 0;
          if (iVar3 != 0) {
            uVar4 = *(undefined4 *)(iVar3 + 4);
          }
          Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar4);
        }
      }
    }
  }
  return;
}


// ==== FUN_00012ab8 @ 00012ab8  size=1396  callers=[]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00012ab8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  short asStack_6c [4];
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined1 auStack_44 [28];
  
  if (*_UNK_00012b98 == '\0') {
    if (*(int *)(param_1 + 0x4c) == 5) {
      puVar5 = (undefined4 *)(param_1 + 0x4c);
      *puVar5 = 3;
      if (*(short *)(param_1 + 0x480) == 4) {
        FUN_000193c4(puVar5);
        uVar1 = FUN_00016f28((int)puVar5);
        FUN_0001218c((int)(short)uVar1);
        uVar1 = 0;
        if (*(int *)(param_1 + 0x4b8) != 0) {
          uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x4b8) + 4);
        }
        iVar2 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar1);
        FUN_0001317c(param_1);
        uVar1 = FUN_00016f28((int)puVar5);
        FUN_0001218c((int)(short)uVar1);
        uVar1 = 0;
        if (iVar2 != 0) {
          uVar1 = *(undefined4 *)(iVar2 + 4);
        }
        Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar1);
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
        Ordinal_267(*(undefined4 *)(param_1 + 0x20));
      }
    }
    else {
      if (*(int *)(param_1 + 0x4c) == 6) {
        *(undefined4 *)(param_1 + 0x4c) = 3;
        uVar1 = 0;
        if (*(int *)(param_1 + 0x4b8) != 0) {
          uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x4b8) + 4);
        }
        iVar2 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar1);
        FUN_000131c8(param_1);
        *(undefined1 *)(param_1 + 0x4cc) = 1;
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
        Ordinal_267(*(undefined4 *)(param_1 + 0x20));
        uVar1 = 0;
        if (iVar2 != 0) {
          uVar1 = *(undefined4 *)(iVar2 + 4);
        }
        Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar1);
      }
      uVar3 = FUN_00018f30((int *)(param_1 + 0x4c),(int *)&stack0x00000008,asStack_6c,
                           (undefined1 *)&iStack_64);
      if ((uVar3 & 0xff) == 0) {
        piVar6 = (int *)(param_1 + 0x4c);
        if (*piVar6 == 2) {
          uVar1 = 0;
          if (*(int *)(param_1 + 0x4b8) != 0) {
            uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x4b8) + 4);
          }
          iVar2 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar1);
          FUN_000131c8(param_1);
          FUN_00016490(piVar6);
          FUN_000130a4(param_1);
          FUN_00018c74((int)piVar6,*(int *)(param_1 + 0x4b4),2);
          *(undefined1 *)(param_1 + 0x4cc) = 1;
          Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
          Ordinal_267(*(undefined4 *)(param_1 + 0x20));
          uVar1 = 0;
          if (iVar2 != 0) {
            uVar1 = *(undefined4 *)(iVar2 + 4);
          }
          Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar1);
          uVar1 = FUN_00016f28((int)piVar6);
          FUN_0001218c((int)(short)uVar1);
          uVar1 = 0;
          if (*(int *)(param_1 + 0x4b8) != 0) {
            uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x4b8) + 4);
          }
          iVar2 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar1);
          func_0x00015604(param_1 + 0x334);
          FUN_000130a4(param_1);
          FUN_00018c74((int)piVar6,*(int *)(param_1 + 0x4b4),2);
          *(undefined1 *)(param_1 + 0x4cc) = 1;
          Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
          Ordinal_267(*(undefined4 *)(param_1 + 0x20));
          uVar1 = 0;
          if (iVar2 != 0) {
            uVar1 = *(undefined4 *)(iVar2 + 4);
          }
          Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar1);
          uVar1 = Ordinal_535();
          *(undefined4 *)(param_1 + 0x500) = uVar1;
        }
      }
      else {
        piVar6 = (int *)(param_1 + 0x4c);
        iVar2 = *piVar6;
        if (iVar2 == 3) {
          uVar1 = Ordinal_535();
          uVar4 = 0;
          *(undefined4 *)(param_1 + 0x500) = uVar1;
          if (*(int *)(param_1 + 0x4b8) != 0) {
            uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x4b8) + 4);
          }
          Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar4);
          FUN_000199e0((int)piVar6,*(int *)(param_1 + 0x4b4));
          FUN_000130a4(param_1);
          FUN_00018c74((int)piVar6,*(int *)(param_1 + 0x4b4),2);
          *(undefined1 *)(param_1 + 0x4cc) = 1;
          Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
          Ordinal_267(*(undefined4 *)(param_1 + 0x20));
          if (*(short *)(param_1 + 0x480) == 4) {
            if (*(char *)(param_1 + 0x497) == '\0') {
              uVar1 = 0;
              if (*(int *)(param_1 + 0x4b8) != 0) {
                uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x4b8) + 4);
              }
              Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar1);
              FUN_000193c4(piVar6);
              uVar1 = FUN_00016f28((int)piVar6);
              FUN_0001218c((int)(short)uVar1);
              FUN_0001317c(param_1);
              uVar1 = FUN_00016f28((int)piVar6);
              FUN_0001218c((int)(short)uVar1);
              *(undefined1 *)(param_1 + 0x4cc) = 1;
              Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
              Ordinal_267(*(undefined4 *)(param_1 + 0x20));
            }
            else {
              *(undefined4 *)(param_1 + 0x4c) = 5;
            }
            FUN_00013214(param_1);
            FUN_000188b4(param_1 + 0x4c,*(int **)(param_1 + 0x4b4));
          }
          else {
            *(short *)(param_1 + 0x484) = *(short *)(param_1 + 0x484) + 1;
          }
        }
        else if (((iVar2 == 1) || (iVar2 == 2)) && (0 < iStack_5c - iStack_64)) {
          iStack_4c = iStack_5c + 0x1e;
          uVar1 = 0;
          iStack_48 = iStack_58 + 4;
          if (*(int *)(param_1 + 0x4b8) != 0) {
            uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x4b8) + 4);
          }
          iStack_54 = iStack_64;
          uStack_50 = uStack_60;
          iVar2 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar1);
          FUN_00013030(param_1);
          FUN_00018c74(param_1 + 0x4c,*(int *)(param_1 + 0x4b4),2);
          FUN_000131c8(param_1);
          FUN_00019e70((int *)(param_1 + 0x4c),*(int **)(param_1 + 0x4b4));
          *(undefined1 *)(param_1 + 0x4cc) = 1;
          Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
          Ordinal_267(*(undefined4 *)(param_1 + 0x20));
          uVar1 = 0;
          if (iVar2 != 0) {
            uVar1 = *(undefined4 *)(iVar2 + 4);
          }
          Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4),uVar1);
        }
      }
      do {
        iVar2 = func_0x0001adc0(auStack_44,*(undefined4 *)(param_1 + 0x20),0x201,0x201,1);
      } while (iVar2 != 0);
      do {
        iVar2 = func_0x0001adc0(auStack_44,*(undefined4 *)(param_1 + 0x20),0x202,0x202,1);
      } while (iVar2 != 0);
    }
  }
  return;
}


// ==== FUN_00013030 @ 00013030  size=116  callers=[00012ab8, 000130a4, 0001317c, 000131c8, 00013214]

void FUN_00013030(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4b4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x4b4) + 4);
  }
  Ordinal_906(uVar1);
  return;
}


// ==== FUN_000130a4 @ 000130a4  size=216  callers=[00012748, 00012ab8]

void FUN_000130a4(int param_1)

{
  FUN_00013030(param_1);
  return;
}


// ==== FUN_0001317c @ 0001317c  size=72  callers=[00012748, 00012ab8]

void FUN_0001317c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *DAT_000131c4;
  FUN_00013030(param_1);
  return;
}


// ==== FUN_000131c8 @ 000131c8  size=72  callers=[00012ab8]

void FUN_000131c8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *DAT_00013210;
  FUN_00013030(param_1);
  return;
}


// ==== FUN_00013214 @ 00013214  size=72  callers=[00012748, 00012ab8]

void FUN_00013214(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *DAT_0001325c;
  FUN_00013030(param_1);
  return;
}


// ==== FUN_00013260 @ 00013260  size=64  callers=[]

void FUN_00013260(void)

{
  Ordinal_493(DAT_000132a0,DAT_000132a4,0,0,0,0,0,0,0,0);
  return;
}


// ==== FUN_000132a8 @ 000132a8  size=244  callers=[]

void FUN_000132a8(int param_1)

{
  undefined1 auStack_c0 [188];
  
  FUN_00011000(auStack_c0,1,(undefined2 *)(param_1 + 0x494),(char *)(param_1 + 0x496),
               param_1 + 0x497,param_1 + 0x498,param_1 + 0x49c,param_1 + 0x4a4,param_1 + 0x4a5,
               param_1 + 0x4a0,param_1 + 0x4a6,param_1 + 0x4a7,param_1 + 0x4a8,param_1 + 0x4a9,
               param_1 + 0x4ac,0);
  Ordinal_1079(auStack_c0);
  Ordinal_231(auStack_c0);
  return;
}


// ==== FUN_0001339c @ 0001339c  size=244  callers=[]

void FUN_0001339c(int param_1)

{
  undefined1 auStack_c0 [188];
  
  FUN_00011000(auStack_c0,0,(undefined2 *)(param_1 + 0x494),(char *)(param_1 + 0x496),
               param_1 + 0x497,param_1 + 0x498,param_1 + 0x49c,param_1 + 0x4a4,param_1 + 0x4a5,
               param_1 + 0x4a0,param_1 + 0x4a6,param_1 + 0x4a7,param_1 + 0x4a8,param_1 + 0x4a9,
               param_1 + 0x4ac,0);
  Ordinal_1079(auStack_c0);
  Ordinal_231(auStack_c0);
  return;
}


// ==== FUN_00013490 @ 00013490  size=244  callers=[]

void FUN_00013490(int param_1)

{
  undefined1 auStack_c0 [188];
  
  FUN_00011000(auStack_c0,2,(undefined2 *)(param_1 + 0x494),(char *)(param_1 + 0x496),
               param_1 + 0x497,param_1 + 0x498,param_1 + 0x49c,param_1 + 0x4a4,param_1 + 0x4a5,
               param_1 + 0x4a0,param_1 + 0x4a6,param_1 + 0x4a7,param_1 + 0x4a8,param_1 + 0x4a9,
               param_1 + 0x4ac,0);
  Ordinal_1079(auStack_c0);
  Ordinal_231(auStack_c0);
  return;
}


// ==== FUN_00013584 @ 00013584  size=80  callers=[]

void FUN_00013584(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = Ordinal_1760(param_1,DAT_000135d8,DAT_000135dc,4);
  puVar1 = DAT_000135d4;
  if (iVar2 == 6) {
    *DAT_000135d4 = 1;
    FUN_0001a0fc((undefined4 *)(param_1 + 0x4c));
    Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
    *puVar1 = 0;
  }
  return;
}


// ==== FUN_000135e0 @ 000135e0  size=80  callers=[]

void FUN_000135e0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = Ordinal_1760(param_1,DAT_00013634,DAT_00013638,4);
  puVar1 = DAT_00013630;
  if (iVar2 == 6) {
    *DAT_00013630 = 1;
    FUN_00016e90((undefined4 *)(param_1 + 0x4c));
    Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
    *puVar1 = 0;
  }
  return;
}


// ==== FUN_0001363c @ 0001363c  size=48  callers=[]

void FUN_0001363c(int param_1)

{
  undefined1 auStack_84 [128];
  
  FUN_00013c9c(auStack_84,param_1 + 0x4c);
  Ordinal_1079(auStack_84);
  Ordinal_231(auStack_84);
  return;
}


// ==== FUN_00013690 @ 00013690  size=32  callers=[]

void FUN_00013690(int param_1)

{
  FUN_0001270c(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001aaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001aaf8)(param_1);
  return;
}


// ==== FUN_000136a8 @ 000136a8  size=468  callers=[00012300]

undefined4 * FUN_000136a8(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined2 extraout_r1;
  undefined4 *puVar4;
  int iVar5;
  
  FUN_000141d0((undefined1 *)(param_1 + 1));
  iVar5 = 4;
  puVar4 = param_1 + 0x6b;
  do {
    FUN_00015e38((int)puVar4);
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + 0x26;
  } while (iVar5 != 0);
  FUN_00014824(param_1 + 0x103);
  *(undefined1 *)(param_1 + 0x119) = 0;
  *param_1 = 0;
  *(undefined2 *)((int)param_1 + 0x43a) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined2 *)(param_1 + 0x10f) = 0;
  *(undefined2 *)(param_1 + 0x10e) = 0;
  *(undefined1 *)((int)param_1 + 0x43e) = 0;
  *(undefined1 *)((int)param_1 + 0x43f) = 0;
  *(undefined1 *)(param_1 + 0x116) = 1;
  *(undefined1 *)((int)param_1 + 0x459) = 0;
  param_1[0x115] = 2;
  param_1[0x111] = 0;
  uVar2 = Ordinal_1053();
  (*(code *)*DAT_00013888)(5,uVar2);
  pcVar3 = DAT_00013884;
  *(undefined1 *)(param_1 + 0x114) = 1;
  param_1[0x118] = 1;
  *(undefined2 *)(param_1 + 0x112) = extraout_r1;
  *(undefined1 *)((int)param_1 + 0x44a) = 1;
  *(undefined1 *)((int)param_1 + 1099) = 0;
  param_1[0x113] = 1;
  *(undefined1 *)((int)param_1 + 0x45a) = 0;
  *(undefined1 *)((int)param_1 + 0x45b) = 0;
  *(undefined1 *)(param_1 + 0x117) = 0;
  *(undefined1 *)((int)param_1 + 0x45d) = 0;
  iVar5 = (int)(param_1 + 0x6b) - (int)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3[iVar5] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0x244 - (int)DAT_00013880;
  pcVar3 = DAT_00013880;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)param_1 + iVar5] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0x374 - (int)DAT_0001387c;
  pcVar3 = DAT_0001387c;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)param_1 + iVar5] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00018700((int)(param_1 + 1));
  FUN_000161bc(param_1);
  return param_1;
}


// ==== FUN_0001388c @ 0001388c  size=36  callers=[]

undefined1 * FUN_0001388c(undefined1 *param_1,uint param_2)

{
  FUN_000123ec(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_000138b0 @ 000138b0  size=128  callers=[00012300, 0001851c, 00018610]

void FUN_000138b0(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00013930;
  param_1[1] = (char)((uint)DAT_00013930 >> 8);
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


// ==== FUN_00013934 @ 00013934  size=104  callers=[]

undefined1 * FUN_00013934(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_000139a0;
  *param_1 = (char)DAT_000139a0;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_0001399c;
  *param_1 = (char)DAT_0001399c;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_000139a4 @ 000139a4  size=52  callers=[00012300, 0001851c, 00018610]

void FUN_000139a4(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = Ordinal_628(param_2,2);
  uVar1 = Ordinal_873(uVar1,param_2);
  Ordinal_800(param_1,uVar1);
  return;
}


// ==== FUN_000139dc @ 000139dc  size=36  callers=[]

undefined1 * FUN_000139dc(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)Ordinal_315(0x1e8);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_00013a38(puVar1);
  }
  return puVar1;
}


// ==== FUN_00013a38 @ 00013a38  size=60  callers=[000139dc]

undefined1 * FUN_00013a38(undefined1 *param_1)

{
  undefined4 uVar1;
  
  Ordinal_103();
  Ordinal_48(param_1 + 0xe8);
  uVar1 = DAT_00013a74;
  *param_1 = (char)DAT_00013a74;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_00013a78 @ 00013a78  size=68  callers=[00013c78]

void FUN_00013a78(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00013ab4;
  *param_1 = (char)DAT_00013ab4;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_219(param_1 + 0xe8);
                    /* WARNING: Could not recover jumptable at 0x0001ac20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ac24)(param_1);
  return;
}


// ==== FUN_00013ab8 @ 00013ab8  size=344  callers=[]

undefined4 FUN_00013ab8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = Ordinal_1850();
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    uVar2 = FUN_00013c28(param_1,65000);
    *(undefined4 *)(param_1 + 0x1c8) = uVar2;
    uVar2 = FUN_00013c28(param_1,0xfde9);
    *(undefined4 *)(param_1 + 0x1cc) = uVar2;
    uVar2 = FUN_00013c28(param_1,0xfdea);
    *(undefined4 *)(param_1 + 0x1d0) = uVar2;
    uVar2 = FUN_00013c28(param_1,0xfdec);
    *(undefined4 *)(param_1 + 0x1d4) = uVar2;
    uVar2 = FUN_00013c28(param_1,0x68);
    *(undefined4 *)(param_1 + 0x1d8) = uVar2;
    uVar2 = FUN_00013c28(param_1,0x69);
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


// ==== FUN_00013c10 @ 00013c10  size=24  callers=[]

bool FUN_00013c10(void)

{
  int iVar1;
  
  iVar1 = Ordinal_2093();
  return iVar1 != 0;
}


// ==== FUN_00013c28 @ 00013c28  size=80  callers=[00013ab8]

undefined4 FUN_00013c28(undefined4 param_1,undefined4 param_2)

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


// ==== FUN_00013c78 @ 00013c78  size=36  callers=[]

undefined1 * FUN_00013c78(undefined1 *param_1,uint param_2)

{
  FUN_00013a78(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00013c9c @ 00013c9c  size=64  callers=[00012748, 0001363c]

undefined1 * FUN_00013c9c(undefined1 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  Ordinal_77(param_1,0x82);
  uVar1 = DAT_00013cdc;
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_00013d04 @ 00013d04  size=772  callers=[]

void FUN_00013d04(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_11c [8];
  int local_114;
  int local_110;
  undefined1 auStack_10c [4];
  undefined1 auStack_108 [4];
  undefined1 auStack_104 [8];
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  int local_f0;
  undefined4 local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined1 auStack_cc [56];
  undefined1 auStack_94 [8];
  undefined1 auStack_8c [8];
  undefined1 auStack_84 [8];
  int local_7c [22];
  
  Ordinal_136(local_7c,param_1);
  Ordinal_719(auStack_cc,DAT_00014010,*(undefined2 *)(*(int *)(param_1 + 0x7c) + 0x43a));
  piVar2 = (int *)Ordinal_177(auStack_11c,auStack_cc);
  piVar2 = (int *)FUN_00011d18((int)local_7c,auStack_84,piVar2);
  local_114 = *piVar2;
  local_110 = piVar2[1];
  Ordinal_297(auStack_11c);
  iVar4 = local_110;
  local_f8 = 0xf;
  local_fc = 5;
  local_f4 = local_114 + 5;
  local_f0 = local_110 + 0xf;
  piVar2 = (int *)Ordinal_177(auStack_11c,auStack_cc);
  (**(code **)(local_7c[0] + 0x48))(local_7c,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_fc,0x100);
  Ordinal_297(auStack_11c);
  uVar1 = DAT_0001400c;
  iVar4 = iVar4 + 0x11;
  iVar3 = 0;
  do {
    Ordinal_719(auStack_cc,DAT_00014008,*(int *)(param_1 + 0x7c) + iVar3 * 0x98 + 0x1ac);
    piVar2 = (int *)Ordinal_177(auStack_11c,auStack_cc);
    piVar2 = (int *)FUN_00011d18((int)local_7c,auStack_94,piVar2);
    local_114 = *piVar2;
    local_110 = piVar2[1];
    Ordinal_297(auStack_11c);
    local_e4 = local_114 + 5;
    local_ec = 5;
    iVar5 = local_110 + iVar4;
    local_e8 = iVar4;
    local_e0 = iVar5;
    piVar2 = (int *)Ordinal_177(auStack_10c,auStack_cc);
    (**(code **)(local_7c[0] + 0x48))
              (local_7c,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_ec,0x100);
    Ordinal_297(auStack_10c);
    iVar4 = *(int *)(param_1 + 0x7c) + iVar3 * 0x98;
    iVar5 = iVar5 + 2;
    Ordinal_719(auStack_cc,uVar1,(int)*(short *)(iVar4 + 0x23e),(int)*(short *)(iVar4 + 0x23c));
    piVar2 = (int *)Ordinal_177(auStack_108,auStack_cc);
    piVar2 = (int *)FUN_00011d18((int)local_7c,auStack_8c,piVar2);
    local_114 = *piVar2;
    local_110 = piVar2[1];
    Ordinal_297(auStack_108);
    local_d4 = local_114 + 5;
    local_dc = 5;
    iVar4 = local_110 + iVar5;
    local_d8 = iVar5;
    local_d0 = iVar4;
    piVar2 = (int *)Ordinal_177(auStack_104,auStack_cc);
    (**(code **)(local_7c[0] + 0x48))
              (local_7c,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_dc,0x100);
    Ordinal_297(auStack_104);
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
    iVar4 = iVar4 + 2;
  } while (iVar3 < 4);
  Ordinal_271(local_7c);
  return;
}


// ==== FUN_00014014 @ 00014014  size=36  callers=[]

undefined4 FUN_00014014(undefined4 param_1,uint param_2)

{
  Ordinal_231();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00014038 @ 00014038  size=76  callers=[000193c4]

undefined1 *
FUN_00014038(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  Ordinal_77(param_1,0x83,param_4);
  uVar1 = DAT_00014084;
  param_1[0x7c] = param_2;
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[0x7d] = param_3;
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_000140a8 @ 000140a8  size=204  callers=[]

undefined4 FUN_000140a8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [100];
  
  Ordinal_1939();
  puVar3 = PTR_DAT_0001417c;
  if (*(char *)(param_1 + 0x7c) == '\0') {
    puVar3 = PTR_DAT_00014178;
  }
  Ordinal_719(auStack_70,PTR_s_You_Shot_the__s____00014180,puVar3);
  uVar1 = Ordinal_1273(param_1,0x404);
  puVar2 = (undefined4 *)Ordinal_177(auStack_78,auStack_70);
  Ordinal_2443(uVar1,*puVar2);
  Ordinal_297(auStack_78);
  uVar1 = Ordinal_1273(param_1,0x403);
  if ((*(char *)(param_1 + 0x7d) == '\0') || (uVar4 = 0x34, *(char *)(param_1 + 0x7c) == '\0')) {
    uVar4 = 0x1a;
  }
  Ordinal_719(auStack_70,PTR_s_And_earned__d_points__00014174,uVar4);
  puVar2 = (undefined4 *)Ordinal_177(auStack_78,auStack_70);
  Ordinal_2443(uVar1,*puVar2);
  Ordinal_297(auStack_78);
  return 1;
}


// ==== FUN_00014198 @ 00014198  size=36  callers=[]

undefined4 FUN_00014198(undefined4 param_1,uint param_2)

{
  Ordinal_231();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_000141bc @ 000141bc  size=20  callers=[000141d0, 00014288, 00014370, 00014500, 00014824, 000148dc, 00014c98, 00015064, 0001525c, 000163bc, 000169c8, 00018700]

void FUN_000141bc(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  return;
}


// ==== FUN_000141d0 @ 000141d0  size=184  callers=[000136a8, 00016e90]

undefined1 * FUN_000141d0(undefined1 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = (undefined4 *)(param_1 + 4);
  iVar5 = 0x34;
  do {
    FUN_000141bc(puVar4);
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + 2;
  } while (iVar5 != 0);
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0x1a4) = 0;
  uVar3 = 0;
  *(undefined2 *)(param_1 + 0x1a6) = 0;
  do {
    uVar2 = 2;
    uVar1 = 2;
    do {
      iVar5 = uVar3 * 0xd + uVar1;
      *(short *)(param_1 + iVar5 * 8 + -8) = (short)uVar2;
      *(uint *)(param_1 + iVar5 * 8 + -0xc) = uVar3;
      *(short *)(param_1 + 0x1a6) = *(short *)(param_1 + 0x1a6) + 1;
      uVar2 = uVar1 + 1 & 0xffff;
      uVar1 = uVar1 + 1 & 0xffff;
    } while (uVar1 < 0xf);
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 < 4);
  return param_1;
}


// ==== FUN_00014288 @ 00014288  size=232  callers=[]

undefined1 * FUN_00014288(int param_1,undefined1 *param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined4 auStack_10 [2];
  
  if (*(ushort *)(param_1 + 0x1a4) < *(ushort *)(param_1 + 0x1a6)) {
    uVar1 = *(ushort *)(param_1 + 0x1a4) + 1;
    *(ushort *)(param_1 + 0x1a4) = uVar1;
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
    puVar2 = (undefined1 *)FUN_000141bc(auStack_10);
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


// ==== FUN_00014370 @ 00014370  size=400  callers=[000161bc]

undefined1 * FUN_00014370(int param_1,undefined1 *param_2)

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
  
  if (*(short *)(param_1 + 0x1a6) == 0) {
    puVar9 = (undefined1 *)FUN_000141bc(auStack_18);
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
    uVar10 = *(short *)(param_1 + 0x1a6) - 1;
    *(ushort *)(param_1 + 0x1a6) = uVar10;
    Ordinal_1046((undefined1 *)(param_1 + 4),param_1 + 0xc,(uint)uVar10 << 3);
    puVar9 = (undefined1 *)FUN_000141bc(auStack_18);
    iVar11 = param_1 + (uint)*(ushort *)(param_1 + 0x1a6) * 8;
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


// ==== FUN_00014500 @ 00014500  size=376  callers=[]

undefined1 * FUN_00014500(int param_1,undefined1 *param_2)

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
  
  uVar9 = (uint)*(ushort *)(param_1 + 0x1a6);
  if (uVar9 == 0) {
    puVar10 = (undefined1 *)FUN_000141bc(auStack_18);
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
    *(short *)(param_1 + 0x1a6) = (short)((uVar9 + 0xffff) * 0x10000 >> 0x10);
    puVar10 = (undefined1 *)FUN_000141bc(auStack_18);
    iVar11 = param_1 + (uint)*(ushort *)(param_1 + 0x1a6) * 8;
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


// ==== FUN_00014678 @ 00014678  size=120  callers=[000193c4]

void FUN_00014678(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  if (*(ushort *)(param_1 + 0x1a6) < 0x34) {
    iVar1 = param_1 + (uint)*(ushort *)(param_1 + 0x1a6) * 8;
    local_c = (undefined1)param_2;
    *(undefined1 *)(iVar1 + 4) = local_c;
    local_b = (undefined1)((uint)param_2 >> 8);
    *(undefined1 *)(iVar1 + 5) = local_b;
    local_a = (undefined1)((uint)param_2 >> 0x10);
    *(undefined1 *)(iVar1 + 6) = local_a;
    local_9 = (undefined1)((uint)param_2 >> 0x18);
    *(undefined1 *)(iVar1 + 7) = local_9;
    local_8 = (undefined1)param_3;
    *(undefined1 *)(iVar1 + 8) = local_8;
    local_7 = (undefined1)((uint)param_3 >> 8);
    *(undefined1 *)(iVar1 + 9) = local_7;
    local_6 = (undefined1)((uint)param_3 >> 0x10);
    *(undefined1 *)(iVar1 + 10) = local_6;
    local_5 = (undefined1)((uint)param_3 >> 0x18);
    *(undefined1 *)(iVar1 + 0xb) = local_5;
    *(short *)(param_1 + 0x1a6) = *(short *)(param_1 + 0x1a6) + 1;
  }
  return;
}


// ==== FUN_000146f4 @ 000146f4  size=96  callers=[000170b8]

undefined4 FUN_000146f4(int param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(ushort *)(param_1 + 0x1a6) != 0) {
    iVar1 = 0;
    do {
      iVar2 = param_1 + iVar1 * 8;
      if ((*(int *)(iVar2 + 4) == param_2) && (*(short *)(iVar2 + 8) == param_3)) {
        return 1;
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x1a6));
  }
  return 0;
}


// ==== FUN_00014754 @ 00014754  size=76  callers=[000170b8, 000172f4]

int FUN_00014754(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(ushort *)(param_1 + 0x1a6) != 0) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 8;
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
      if (*(int *)(param_1 + iVar1 + 4) == param_2) {
        iVar3 = iVar3 + 1;
      }
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x1a6));
  }
  return iVar3;
}


// ==== FUN_000147a0 @ 000147a0  size=132  callers=[000172f4]

bool FUN_000147a0(int param_1,int param_2,ushort param_3)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = 0;
  if (*(ushort *)(param_1 + 0x1a6) != 0) {
    iVar1 = 0;
    sVar3 = 0;
    do {
      iVar2 = param_1 + iVar1 * 8;
      if ((*(int *)(iVar2 + 4) == param_2) && ((uint)*(ushort *)(iVar2 + 8) < (uint)param_3)) {
        sVar3 = sVar3 + 1;
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x1a6));
  }
  return (int)sVar3 == param_3 - 2;
}


// ==== FUN_00014824 @ 00014824  size=56  callers=[000136a8]

undefined4 * FUN_00014824(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 4;
  puVar1 = param_1;
  do {
    FUN_000141bc(puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  *(undefined2 *)(param_1 + 10) = 0;
  return param_1;
}


// ==== FUN_0001485c @ 0001485c  size=128  callers=[00016bfc, 00018f30]

void FUN_0001485c(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

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
  
  if (*(short *)(param_1 + 0x28) < 4) {
    puVar1 = (undefined1 *)(param_1 + *(short *)(param_1 + 0x28) * 8);
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
    *(undefined2 *)(param_1 + (*(short *)(param_1 + 0x28) + 0x10) * 2) = param_4;
    *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
  }
  return;
}


// ==== FUN_000148dc @ 000148dc  size=412  callers=[00016e90, 000193c4]

undefined1 * FUN_000148dc(int param_1,undefined1 *param_2,short param_3)

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
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined4 auStack_1c [2];
  
  iVar13 = (int)*(short *)(param_1 + 0x28);
  if (0 < iVar13) {
    iVar15 = iVar13 + -1;
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
        Ordinal_1046(puVar10,iVar12,(iVar11 * 0x1fffffff + iVar13) * 8);
      }
      *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + -1;
      puVar10 = (undefined1 *)FUN_000141bc(auStack_1c);
      puVar14 = (undefined1 *)(param_1 + *(short *)(param_1 + 0x28) * 8);
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
  puVar10 = (undefined1 *)FUN_000141bc(auStack_1c);
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


// ==== FUN_00014a78 @ 00014a78  size=108  callers=[00017c80, 00018378]

int FUN_00014a78(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 1;
  if (1 < (short)param_1[10]) {
    do {
      if ((param_1[iVar1 * 2] == *param_1) &&
         (*(ushort *)(param_1 + (short)iVar2 * 2 + 1) < *(ushort *)(param_1 + iVar1 * 2 + 1))) {
        iVar2 = iVar1;
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < (short)param_1[10]);
  }
  return iVar2;
}


// ==== FUN_00014ae4 @ 00014ae4  size=84  callers=[00017c80]

undefined4 FUN_00014ae4(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (0 < *(short *)(param_1 + 0x28)) {
    iVar1 = 0;
    do {
      piVar2 = (int *)(param_1 + iVar1 * 8);
      if ((*piVar2 == 1) && ((short)piVar2[1] == 0xb)) {
        return 1;
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < *(short *)(param_1 + 0x28));
  }
  return 0;
}


// ==== FUN_00014b38 @ 00014b38  size=92  callers=[000169c8, 00016bfc, 00017c80]

undefined4 FUN_00014b38(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (0 < *(short *)(param_1 + 0x28)) {
    iVar1 = 0;
    do {
      piVar2 = (int *)(param_1 + iVar1 * 8);
      iVar3 = *piVar2;
      if ((iVar3 == 2) || ((iVar3 == 3 && ((short)piVar2[1] == 0xc)))) {
        return 1;
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < *(short *)(param_1 + 0x28));
  }
  return 0;
}


// ==== FUN_00014b94 @ 00014b94  size=64  callers=[000170b8]

int FUN_00014b94(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x28)) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 8;
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
      if (*(int *)(param_1 + iVar1) == param_2) {
        iVar3 = iVar3 + 1;
      }
    } while (iVar2 < *(short *)(param_1 + 0x28));
  }
  return iVar3;
}


// ==== FUN_00014bd4 @ 00014bd4  size=108  callers=[000169c8]

int FUN_00014bd4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 1;
  if (1 < (short)param_1[10]) {
    do {
      if ((param_1[iVar1 * 2] == *param_1) &&
         (*(ushort *)(param_1 + iVar1 * 2 + 1) < *(ushort *)(param_1 + (short)iVar2 * 2 + 1))) {
        iVar2 = iVar1;
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < (short)param_1[10]);
  }
  return iVar2;
}


// ==== FUN_00014c40 @ 00014c40  size=88  callers=[00017c80]

undefined4 FUN_00014c40(int param_1,int param_2,short param_3)

{
  int *piVar1;
  int iVar2;
  
  if (0 < *(short *)(param_1 + 0x28)) {
    iVar2 = 0;
    do {
      piVar1 = (int *)(param_1 + iVar2 * 8);
      if ((*piVar1 == param_2) && ((short)piVar1[1] == param_3)) {
        return 1;
      }
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < *(short *)(param_1 + 0x28));
  }
  return 0;
}


// ==== FUN_00014c98 @ 00014c98  size=56  callers=[00014ed0, 00015e38]

undefined4 * FUN_00014c98(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x10;
  puVar1 = param_1;
  do {
    FUN_000141bc(puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  *(undefined2 *)(param_1 + 0x20) = 0;
  return param_1;
}


// ==== FUN_00014cd0 @ 00014cd0  size=72  callers=[00015760, 00015914, 000159fc, 00015ab8, 00015b64, 00015c28, 00015e84, 000169c8, 00016bfc, 000170b8, 000172f4, 00017404, 00018f30]

int FUN_00014cd0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x80)) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 8;
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
      if (*(uint *)(param_1 + iVar1) == (param_2 & 0xffff)) {
        iVar3 = iVar3 + 1;
      }
    } while (iVar2 < *(short *)(param_1 + 0x80));
  }
  return iVar3;
}


// ==== FUN_00014d18 @ 00014d18  size=64  callers=[00014d58, 00014dec, 00014e64, 000169c8, 000172f4, 000174f4, 00017c80]

void FUN_00014d18(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)*(short *)(param_1 + 0x80);
  do {
    iVar1 = (iVar1 + -1) * 0x10000 >> 0x10;
    if (iVar1 < 0) {
      return;
    }
  } while (*(int *)(param_1 + iVar1 * 8) != param_2);
  return;
}


// ==== FUN_00014d58 @ 00014d58  size=148  callers=[00016bfc, 000174f4]

undefined4 FUN_00014d58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0xffffffff;
  iVar3 = 0;
  do {
    if (iVar3 != 2) {
      uVar2 = FUN_00014d18(param_1,iVar3);
      iVar1 = (int)(short)uVar2;
      if ((((iVar1 < 0) || (iVar3 != 3)) || (*(short *)(param_1 + iVar1 * 8 + 4) != 0xc)) &&
         (((short)uVar4 < 0 ||
          ((-1 < iVar1 &&
           (*(ushort *)(param_1 + iVar1 * 8 + 4) < *(ushort *)(param_1 + (short)uVar4 * 8 + 4)))))))
      {
        uVar4 = uVar2;
      }
    }
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
  } while (iVar3 < 4);
  return uVar4;
}


// ==== FUN_00014dec @ 00014dec  size=120  callers=[000174f4]

undefined4 FUN_00014dec(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  iVar2 = 0;
  do {
    if (iVar2 != param_2) {
      uVar1 = FUN_00014d18(param_1,iVar2);
      if (((short)uVar3 < 0) ||
         ((-1 < (short)uVar1 &&
          (*(ushort *)(param_1 + (short)uVar1 * 8 + 4) < *(ushort *)(param_1 + (short)uVar3 * 8 + 4)
          )))) {
        uVar3 = uVar1;
      }
    }
    iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
  } while (iVar2 < 4);
  return uVar3;
}


// ==== FUN_00014e64 @ 00014e64  size=108  callers=[000174f4, 00017c80]

undefined4 FUN_00014e64(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0xffffffff;
  iVar3 = 0;
  do {
    uVar1 = FUN_00014d18(param_1,iVar3);
    if (((short)uVar2 < 0) ||
       ((-1 < (short)uVar1 &&
        (*(ushort *)(param_1 + (short)uVar1 * 8 + 4) < *(ushort *)(param_1 + (short)uVar2 * 8 + 4)))
       )) {
      uVar2 = uVar1;
    }
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
  } while (iVar3 < 4);
  return uVar2;
}


// ==== FUN_00014ed0 @ 00014ed0  size=404  callers=[000161bc, 00016490]

void FUN_00014ed0(int param_1)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_400a4 [262136];
  short local_ac;
  undefined4 local_a4;
  undefined1 local_a0 [128];
  
  FUN_00014c98(&local_a4);
  iVar8 = 0;
  iVar6 = 0;
  do {
    if (iVar8 == 0) {
      local_ac = 0;
    }
    else if (iVar8 == 1) {
      local_ac = 2;
    }
    else if (iVar8 == 2) {
      local_ac = 3;
    }
    else if (iVar8 == 3) {
      local_ac = 1;
    }
    sVar2 = *(short *)(param_1 + 0x80);
    iVar7 = iVar6;
    if (0 < sVar2) {
      iVar4 = 0;
      do {
        piVar3 = (int *)(param_1 + iVar4 * 8);
        if (*piVar3 == (int)local_ac) {
          iVar7 = (int)(short)iVar7;
          iVar1 = iVar7 * 8;
          *(char *)(&local_a4 + iVar7 * 2) = (char)*piVar3;
          iVar7 = (iVar7 + 1) * 0x10000 >> 0x10;
          *(undefined1 *)((int)&local_a4 + iVar1 + 1) = *(undefined1 *)((int)piVar3 + 1);
          *(undefined1 *)((int)&local_a4 + iVar1 + 2) = *(undefined1 *)((int)piVar3 + 2);
          *(undefined1 *)((int)&local_a4 + iVar1 + 3) = *(undefined1 *)((int)piVar3 + 3);
          local_a0[iVar1] = (char)piVar3[1];
          local_a0[iVar1 + 1] = *(undefined1 *)((int)piVar3 + 5);
          local_a0[iVar1 + 2] = *(undefined1 *)((int)piVar3 + 6);
          local_a0[iVar1 + 3] = *(undefined1 *)((int)piVar3 + 7);
        }
        iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
      } while (iVar4 < sVar2);
    }
    FUN_00015064((int)&local_a4,iVar6,(short)iVar7);
    iVar8 = (iVar8 + 1) * 0x10000 >> 0x10;
    iVar6 = iVar7;
  } while (iVar8 < 4);
  if (0 < *(short *)(param_1 + 0x80)) {
    iVar8 = 0;
    do {
      iVar6 = iVar8 * 8;
      puVar5 = (undefined1 *)(param_1 + iVar8 * 8);
      *puVar5 = *(undefined1 *)(&local_a4 + iVar8 * 2);
      puVar5[1] = *(undefined1 *)((int)&local_a4 + iVar6 + 1);
      puVar5[2] = *(undefined1 *)((int)&local_a4 + iVar6 + 2);
      puVar5[3] = *(undefined1 *)((int)&local_a4 + iVar6 + 3);
      puVar5[4] = local_a0[iVar6];
      puVar5[5] = local_a0[iVar6 + 1];
      puVar5[6] = local_a0[iVar6 + 2];
      puVar5[7] = local_a0[iVar6 + 3];
      iVar8 = (iVar8 + 1) * 0x10000 >> 0x10;
    } while (iVar8 < *(short *)(param_1 + 0x80));
  }
  return;
}


// ==== FUN_00015064 @ 00015064  size=392  callers=[00014ed0]

void FUN_00015064(int param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  int iVar11;
  short sVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined4 local_20 [2];
  
  iVar1 = (int)(short)param_2;
  iVar2 = (int)param_3;
  if (iVar1 != iVar2) {
    FUN_000141bc(local_20);
    while (iVar1 <= iVar2) {
      sVar12 = (short)param_2;
      iVar15 = param_2;
      iVar11 = iVar1;
      while (iVar11 <= iVar2) {
        if (*(ushort *)(param_1 + (short)iVar15 * 8 + 4) < *(ushort *)(param_1 + iVar11 * 8 + 4)) {
          iVar15 = param_2;
        }
        sVar12 = (short)iVar15;
        param_2 = (iVar11 + 1) * 0x10000 >> 0x10;
        iVar11 = param_2;
      }
      puVar13 = (undefined1 *)(param_1 + iVar1 * 8);
      uVar3 = *puVar13;
      uVar4 = puVar13[1];
      uVar5 = puVar13[2];
      uVar6 = puVar13[3];
      uVar7 = puVar13[4];
      uVar8 = puVar13[5];
      uVar9 = puVar13[6];
      uVar10 = puVar13[7];
      puVar14 = (undefined1 *)(param_1 + sVar12 * 8);
      *puVar13 = *puVar14;
      puVar13[1] = puVar14[1];
      puVar13[2] = puVar14[2];
      puVar13[3] = puVar14[3];
      puVar13[4] = puVar14[4];
      puVar13[5] = puVar14[5];
      puVar13[6] = puVar14[6];
      puVar13[7] = puVar14[7];
      *puVar14 = uVar3;
      puVar14[1] = uVar4;
      puVar14[2] = uVar5;
      puVar14[3] = uVar6;
      puVar14[4] = uVar7;
      puVar14[5] = uVar8;
      puVar14[6] = uVar9;
      puVar14[7] = uVar10;
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
      param_2 = iVar1;
    }
  }
  return;
}


// ==== FUN_000151ec @ 000151ec  size=112  callers=[000161bc, 000163bc]

void FUN_000151ec(int param_1,undefined4 param_2,undefined4 param_3)

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
  
  if (*(short *)(param_1 + 0x80) < 0x10) {
    puVar1 = (undefined1 *)(param_1 + *(short *)(param_1 + 0x80) * 8);
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
    *(short *)(param_1 + 0x80) = *(short *)(param_1 + 0x80) + 1;
  }
  return;
}


// ==== FUN_0001525c @ 0001525c  size=412  callers=[000163bc, 00016730, 00016bfc, 00018f30]

undefined1 * FUN_0001525c(int param_1,undefined1 *param_2,short param_3)

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
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined4 auStack_1c [2];
  
  iVar13 = (int)*(short *)(param_1 + 0x80);
  if (0 < iVar13) {
    iVar15 = iVar13 + -1;
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
        Ordinal_1046(puVar10,iVar12,(iVar11 * 0x1fffffff + iVar13) * 8);
      }
      *(short *)(param_1 + 0x80) = *(short *)(param_1 + 0x80) + -1;
      puVar10 = (undefined1 *)FUN_000141bc(auStack_1c);
      puVar14 = (undefined1 *)(param_1 + *(short *)(param_1 + 0x80) * 8);
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
  puVar10 = (undefined1 *)FUN_000141bc(auStack_1c);
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


// ==== FUN_000153f8 @ 000153f8  size=68  callers=[00018f30, 00019e70]

int FUN_000153f8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x80)) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 8;
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
      if (*(char *)(param_1 + iVar1 + 6) != '\0') {
        iVar3 = iVar3 + 1;
      }
    } while (iVar2 < *(short *)(param_1 + 0x80));
  }
  return iVar3;
}


// ==== FUN_0001543c @ 0001543c  size=92  callers=[00015e84, 00017464, 000174f4, 00017c80, 00018154]

int FUN_0001543c(int param_1,uint param_2,ushort param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x80)) {
    iVar1 = 0;
    do {
      puVar2 = (uint *)(param_1 + iVar1 * 8);
      if ((*puVar2 == (param_2 & 0xffff)) && (param_3 <= (ushort)puVar2[1])) {
        iVar3 = iVar3 + 1;
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < *(short *)(param_1 + 0x80));
  }
  return iVar3;
}


// ==== FUN_00015498 @ 00015498  size=252  callers=[00015fb4]

void FUN_00015498(int param_1,uint param_2,ushort param_3,char param_4,ushort param_5,short *param_6
                 )

{
  uint *puVar1;
  int iVar2;
  
  if (param_4 == '\0') {
    iVar2 = 0;
    if (0 < *(short *)(param_1 + 0x80)) {
      do {
        if ((int)(uint)param_5 <= (int)*param_6) {
          return;
        }
        puVar1 = (uint *)(param_1 + (short)iVar2 * 8);
        if ((*puVar1 == (param_2 & 0xffff)) && (param_3 <= (ushort)puVar1[1])) {
          *(undefined1 *)((int)puVar1 + 6) = 1;
          *param_6 = *param_6 + 1;
        }
        iVar2 = ((short)iVar2 + 1) * 0x10000 >> 0x10;
      } while (iVar2 < *(short *)(param_1 + 0x80));
    }
  }
  else {
    iVar2 = (*(short *)(param_1 + 0x80) + -1) * 0x10000 >> 0x10;
    if (-1 < iVar2) {
      do {
        if ((int)(uint)param_5 <= (int)*param_6) {
          return;
        }
        puVar1 = (uint *)(param_1 + iVar2 * 8);
        if ((*puVar1 == (param_2 & 0xffff)) && (param_3 <= (ushort)puVar1[1])) {
          *(undefined1 *)((int)puVar1 + 6) = 1;
          *param_6 = *param_6 + 1;
        }
        iVar2 = (iVar2 + -1) * 0x10000 >> 0x10;
      } while (-1 < iVar2);
    }
  }
  return;
}


// ==== FUN_00015594 @ 00015594  size=112  callers=[00015698, 00015fb4, 0001665c, 00016bfc, 000170b8, 000174f4, 00017c80]

undefined4 FUN_00015594(int param_1,uint param_2,short param_3,short *param_4)

{
  int iVar1;
  uint *puVar2;
  
  *param_4 = 0;
  if (0 < *(short *)(param_1 + 0x80)) {
    do {
      puVar2 = (uint *)(param_1 + *param_4 * 8);
      if (((short)puVar2[1] == param_3) && (*puVar2 == (param_2 & 0xffff))) {
        return 1;
      }
      iVar1 = (*param_4 + 1) * 0x10000;
      *param_4 = (short)((uint)iVar1 >> 0x10);
    } while (iVar1 >> 0x10 < (int)*(short *)(param_1 + 0x80));
  }
  return 0;
}


// ==== FUN_0001563c @ 0001563c  size=92  callers=[00018154]

undefined4 FUN_0001563c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (0 < *(short *)(param_1 + 0x80)) {
    iVar1 = 0;
    do {
      piVar2 = (int *)(param_1 + iVar1 * 8);
      iVar3 = *piVar2;
      if ((iVar3 == 2) || ((iVar3 == 3 && ((short)piVar2[1] == 0xc)))) {
        return 1;
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < *(short *)(param_1 + 0x80));
  }
  return 0;
}


// ==== FUN_00015698 @ 00015698  size=124  callers=[000174f4, 00018154]

int FUN_00015698(int param_1)

{
  uint uVar1;
  int iVar2;
  short local_c [2];
  
  local_c[0] = 0;
  uVar1 = FUN_00015594(param_1,3,0xc,local_c);
  if ((uVar1 & 0xff) == 0) {
    if (0 < *(short *)(param_1 + 0x80)) {
      iVar2 = 0;
      do {
        if (*(int *)(param_1 + iVar2 * 8) == 2) {
          return iVar2;
        }
        iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
      } while (iVar2 < *(short *)(param_1 + 0x80));
    }
    iVar2 = -1;
  }
  else {
    iVar2 = (int)local_c[0];
  }
  return iVar2;
}


// ==== FUN_00015714 @ 00015714  size=76  callers=[00015ab8, 00015c28, 000174f4, 00017c80, 00018154]

int FUN_00015714(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0x80)) {
    do {
      if (*(int *)(param_1 + iVar1 * 8) == param_2) {
        return iVar1;
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < *(short *)(param_1 + 0x80));
  }
  return -1;
}


// ==== FUN_00015760 @ 00015760  size=216  callers=[00018154]

int FUN_00015760(int param_1,int param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = -1;
  iVar8 = 0;
  do {
    iVar3 = FUN_000158a0(param_1,iVar8,param_2,param_3,param_4);
    if ((short)iVar3 < 0) goto LAB_00015818;
    if ((short)iVar9 == -1) {
LAB_00015814:
      iVar9 = iVar3;
    }
    else {
      puVar6 = (ushort *)(param_1 + (short)iVar3 * 8);
      puVar7 = (ushort *)(param_1 + (short)iVar9 * 8);
      uVar1 = puVar6[2];
      uVar2 = puVar7[2];
      if (uVar2 < uVar1) goto LAB_00015814;
      if (uVar1 == uVar2) {
        iVar4 = FUN_00014cd0(param_1,(uint)*puVar6);
        iVar5 = FUN_00014cd0(param_1,(uint)*puVar7);
        if ((short)iVar4 < (short)iVar5) goto LAB_00015814;
      }
    }
LAB_00015818:
    iVar8 = (iVar8 + 1) * 0x10000 >> 0x10;
    if (3 < iVar8) {
      return iVar9;
    }
  } while( true );
}


// ==== FUN_00015838 @ 00015838  size=104  callers=[00015914, 000159fc, 00015b64, 00017c80]

int FUN_00015838(int param_1,int param_2,int param_3,short param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x80)) {
    do {
      piVar1 = (int *)(param_1 + iVar3 * 8);
      iVar2 = *piVar1;
      if (iVar2 == param_2) {
        if (iVar2 != param_3) {
          return iVar3;
        }
        if ((short)piVar1[1] != param_4) {
          return iVar3;
        }
      }
      iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
    } while (iVar3 < *(short *)(param_1 + 0x80));
  }
  return -1;
}


// ==== FUN_000158a0 @ 000158a0  size=116  callers=[00015760, 00015914]

int FUN_000158a0(int param_1,int param_2,int param_3,ushort param_4,ushort param_5)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(short *)(param_1 + 0x80)) {
    do {
      piVar2 = (int *)(param_1 + iVar4 * 8);
      iVar3 = *piVar2;
      if (iVar3 == param_2) {
        if (iVar3 != param_3) {
          return iVar4;
        }
        uVar1 = *(ushort *)(piVar2 + 1);
        if (uVar1 < param_4) {
          return iVar4;
        }
        if (param_5 < uVar1) {
          return iVar4;
        }
      }
      iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
    } while (iVar4 < *(short *)(param_1 + 0x80));
  }
  return -1;
}


// ==== FUN_00015914 @ 00015914  size=232  callers=[00018154]

int FUN_00015914(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = -1;
  iVar9 = 0;
  do {
    if (iVar9 != 2) {
      if (iVar9 == 1) {
        iVar3 = FUN_000158a0(param_1,1,1,0xb,0xe);
      }
      else {
        iVar3 = FUN_00015838(param_1,iVar9,3,0xc);
      }
      if (-1 < (short)iVar3) {
        if ((short)iVar8 != -1) {
          puVar6 = (ushort *)(param_1 + (short)iVar3 * 8);
          puVar7 = (ushort *)(param_1 + (short)iVar8 * 8);
          uVar1 = puVar6[2];
          uVar2 = puVar7[2];
          if (uVar1 <= uVar2) {
            if (uVar1 == uVar2) {
              iVar4 = FUN_00014cd0(param_1,(uint)*puVar6);
              iVar5 = FUN_00014cd0(param_1,(uint)*puVar7);
              if ((short)iVar4 < (short)iVar5) goto LAB_000159d8;
            }
            goto LAB_000159dc;
          }
        }
LAB_000159d8:
        iVar8 = iVar3;
      }
    }
LAB_000159dc:
    iVar9 = (iVar9 + 1) * 0x10000 >> 0x10;
    if (3 < iVar9) {
      return iVar8;
    }
  } while( true );
}


// ==== FUN_000159fc @ 000159fc  size=188  callers=[00018154]

int FUN_000159fc(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = -1;
  iVar9 = 0;
  do {
    if (iVar9 != 2) {
      iVar3 = FUN_00015838(param_1,iVar9,3,0xc);
      if (-1 < (short)iVar3) {
        if ((short)iVar8 != -1) {
          puVar6 = (ushort *)(param_1 + (short)iVar3 * 8);
          puVar7 = (ushort *)(param_1 + (short)iVar8 * 8);
          uVar1 = puVar6[2];
          uVar2 = puVar7[2];
          if (uVar1 <= uVar2) {
            if (uVar1 == uVar2) {
              iVar4 = FUN_00014cd0(param_1,(uint)*puVar6);
              iVar5 = FUN_00014cd0(param_1,(uint)*puVar7);
              if ((short)iVar4 < (short)iVar5) goto LAB_00015a98;
            }
            goto LAB_00015a9c;
          }
        }
LAB_00015a98:
        iVar8 = iVar3;
      }
    }
LAB_00015a9c:
    iVar9 = (iVar9 + 1) * 0x10000 >> 0x10;
    if (3 < iVar9) {
      return iVar8;
    }
  } while( true );
}


// ==== FUN_00015ab8 @ 00015ab8  size=172  callers=[000174f4, 00017c80, 00018154]

int FUN_00015ab8(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = -1;
  iVar9 = 0;
  do {
    iVar3 = FUN_00015714(param_1,iVar9);
    if ((short)iVar3 < 0) goto LAB_00015b48;
    if ((short)iVar8 == -1) {
LAB_00015b44:
      iVar8 = iVar3;
    }
    else {
      puVar6 = (ushort *)(param_1 + (short)iVar3 * 8);
      puVar7 = (ushort *)(param_1 + (short)iVar8 * 8);
      uVar1 = puVar6[2];
      uVar2 = puVar7[2];
      if (uVar2 < uVar1) goto LAB_00015b44;
      if (uVar1 == uVar2) {
        iVar4 = FUN_00014cd0(param_1,(uint)*puVar6);
        iVar5 = FUN_00014cd0(param_1,(uint)*puVar7);
        if ((short)iVar4 < (short)iVar5) goto LAB_00015b44;
      }
    }
LAB_00015b48:
    iVar9 = (iVar9 + 1) * 0x10000 >> 0x10;
    if (3 < iVar9) {
      return iVar8;
    }
  } while( true );
}


// ==== FUN_00015b64 @ 00015b64  size=196  callers=[000174f4]

int FUN_00015b64(int param_1,int param_2,short param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = -1;
  iVar8 = 0;
  do {
    iVar3 = FUN_00015838(param_1,iVar8,param_2,param_3);
    if ((short)iVar3 < 0) goto LAB_00015c08;
    if ((short)iVar9 == -1) {
LAB_00015c04:
      iVar9 = iVar3;
    }
    else {
      puVar6 = (ushort *)(param_1 + (short)iVar3 * 8);
      puVar7 = (ushort *)(param_1 + (short)iVar9 * 8);
      uVar1 = puVar6[2];
      uVar2 = puVar7[2];
      if (uVar2 < uVar1) goto LAB_00015c04;
      if (uVar1 == uVar2) {
        iVar4 = FUN_00014cd0(param_1,(uint)*puVar6);
        iVar5 = FUN_00014cd0(param_1,(uint)*puVar7);
        if ((short)iVar4 < (short)iVar5) goto LAB_00015c04;
      }
    }
LAB_00015c08:
    iVar8 = (iVar8 + 1) * 0x10000 >> 0x10;
    if (3 < iVar8) {
      return iVar9;
    }
  } while( true );
}


// ==== FUN_00015c28 @ 00015c28  size=184  callers=[000174f4]

int FUN_00015c28(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = -1;
  iVar8 = 0;
  do {
    if (iVar8 != param_2) {
      iVar3 = FUN_00015714(param_1,iVar8);
      if (-1 < (short)iVar3) {
        if ((short)iVar9 != -1) {
          puVar6 = (ushort *)(param_1 + (short)iVar3 * 8);
          puVar7 = (ushort *)(param_1 + (short)iVar9 * 8);
          uVar1 = puVar6[2];
          uVar2 = puVar7[2];
          if (uVar1 <= uVar2) {
            if (uVar1 == uVar2) {
              iVar4 = FUN_00014cd0(param_1,(uint)*puVar6);
              iVar5 = FUN_00014cd0(param_1,(uint)*puVar7);
              if ((short)iVar4 < (short)iVar5) goto LAB_00015cc0;
            }
            goto LAB_00015cc4;
          }
        }
LAB_00015cc0:
        iVar9 = iVar3;
      }
    }
LAB_00015cc4:
    iVar8 = (iVar8 + 1) * 0x10000 >> 0x10;
    if (3 < iVar8) {
      return iVar9;
    }
  } while( true );
}


// ==== FUN_00015ce0 @ 00015ce0  size=96  callers=[00017464, 00017c80]

int FUN_00015ce0(int param_1,int param_2,ushort param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0x80)) {
    do {
      piVar1 = (int *)(param_1 + iVar2 * 8);
      if ((*piVar1 == param_2) && (*(ushort *)(piVar1 + 1) < param_3)) {
        return iVar2;
      }
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < *(short *)(param_1 + 0x80));
  }
  return -1;
}


// ==== FUN_00015d40 @ 00015d40  size=88  callers=[00017c80]

void FUN_00015d40(int param_1,int param_2,ushort param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)(param_1 + 0x80);
  do {
    iVar2 = (iVar2 + -1) * 0x10000 >> 0x10;
    if (iVar2 < 0) {
      return;
    }
    piVar1 = (int *)(param_1 + iVar2 * 8);
  } while ((*(ushort *)(piVar1 + 1) <= param_3) || (*piVar1 != param_2));
  return;
}


// ==== FUN_00015d98 @ 00015d98  size=68  callers=[00015e84]

int FUN_00015d98(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x80)) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 8;
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
      if (*(short *)(param_1 + iVar1 + 4) == 0xe) {
        iVar3 = iVar3 + 1;
      }
    } while (iVar2 < *(short *)(param_1 + 0x80));
  }
  return iVar3;
}


// ==== FUN_00015ddc @ 00015ddc  size=92  callers=[00018f30]

undefined4 FUN_00015ddc(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (0 < *(short *)(param_1 + 0x80)) {
    iVar1 = 0;
    do {
      piVar2 = (int *)(param_1 + iVar1 * 8);
      iVar3 = *piVar2;
      if ((iVar3 != 2) && ((iVar3 != 3 || ((short)piVar2[1] != 0xc)))) {
        return 1;
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < *(short *)(param_1 + 0x80));
  }
  return 0;
}


// ==== FUN_00015e38 @ 00015e38  size=72  callers=[000136a8]

int FUN_00015e38(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  FUN_00014c98((undefined4 *)(param_1 + 0xc));
  iVar3 = param_1 - (int)DAT_00015e80;
  pcVar2 = DAT_00015e80;
  do {
    cVar1 = *pcVar2;
    pcVar2[iVar3] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x92) = 0;
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined2 *)(param_1 + 0x94) = 0;
  return param_1;
}


// ==== FUN_00015e84 @ 00015e84  size=304  callers=[000161bc, 00016490]

void FUN_00015e84(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1 + 0xc;
  *(undefined1 *)(param_1 + 0x96) = 0;
  iVar1 = FUN_00014cd0(iVar5,2);
  iVar2 = FUN_00014cd0(iVar5,3);
  iVar3 = FUN_00014cd0(iVar5,0);
  iVar4 = FUN_00014cd0(iVar5,1);
  if (((((4 < (short)iVar3) || (4 < (short)iVar4)) || (4 < (short)iVar2)) || (4 < (short)iVar1)) &&
     ((((iVar1 = FUN_0001543c(iVar5,3,10), 2 < (short)iVar1 ||
        (iVar1 = FUN_0001543c(iVar5,0,10), 2 < (short)iVar1)) ||
       ((iVar1 = FUN_0001543c(iVar5,1,10), 2 < (short)iVar1 ||
        (iVar1 = FUN_0001543c(iVar5,2,10), 2 < (short)iVar1)))) &&
      (iVar1 = FUN_00015d98(iVar5), 1 < (short)iVar1)))) {
    *(undefined1 *)(param_1 + 0x96) = 1;
  }
  return;
}


// ==== FUN_00015fb4 @ 00015fb4  size=520  callers=[00016490]

void FUN_00015fb4(int param_1)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  short local_18;
  short local_16;
  
  local_18 = 0;
  if (*(char *)(param_1 + 0x96) == '\0') {
    iVar2 = param_1 + 0xc;
    FUN_00015498(iVar2,3,0xc,'\x01',3,&local_18);
    FUN_00015498(iVar2,2,9,'\0',3,&local_18);
    if (local_18 < 3) {
      FUN_00015498(iVar2,0,2,'\0',3,&local_18);
    }
    if (local_18 < 3) {
      FUN_00015498(iVar2,1,2,'\0',3,&local_18);
    }
    if (local_18 < 3) {
      FUN_00015498(iVar2,3,2,'\0',3,&local_18);
    }
  }
  else {
    local_16 = -1;
    sVar3 = 2;
    do {
      if (2 < local_18) {
        return;
      }
      iVar2 = param_1 + 0xc;
      uVar1 = FUN_00015594(iVar2,0,sVar3,&local_16);
      if ((uVar1 & 0xff) != 0) {
        *(undefined1 *)(param_1 + local_16 * 8 + 0x12) = 1;
        local_18 = local_18 + 1;
      }
      if ((local_18 < 3) && (uVar1 = FUN_00015594(iVar2,1,sVar3,&local_16), (uVar1 & 0xff) != 0)) {
        *(undefined1 *)(param_1 + local_16 * 8 + 0x12) = 1;
        local_18 = local_18 + 1;
      }
      if ((local_18 < 3) && (uVar1 = FUN_00015594(iVar2,3,sVar3,&local_16), (uVar1 & 0xff) != 0)) {
        *(undefined1 *)(param_1 + local_16 * 8 + 0x12) = 1;
        local_18 = local_18 + 1;
      }
      if ((local_18 < 3) && (uVar1 = FUN_00015594(iVar2,2,sVar3,&local_16), (uVar1 & 0xff) != 0)) {
        *(undefined1 *)(param_1 + local_16 * 8 + 0x12) = 1;
        local_18 = local_18 + 1;
      }
      sVar3 = sVar3 + 1;
    } while (sVar3 < 0xf);
  }
  return;
}


// ==== FUN_000161bc @ 000161bc  size=508  callers=[000136a8, 00016e90]

void FUN_000161bc(undefined4 *param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  ushort uVar5;
  uint uVar6;
  undefined1 auStack_28 [8];
  
  uVar4 = (uint)*(ushort *)((int)param_1 + 0x43a);
  if (3 < uVar4) {
    (*(code *)*DAT_00016350)(4);
    uVar4 = extraout_r1;
  }
  uVar4 = (uVar4 & 0xffff) + 1;
  uVar1 = (undefined2)uVar4;
  uVar6 = 0;
  if (3 < (uVar4 & 0xffff)) {
    uVar1 = 0;
  }
  *(undefined2 *)(param_1 + 0x10e) = uVar1;
  uVar5 = 0;
  do {
    if (3 < (uVar4 & 0xffff)) {
      uVar4 = 0;
    }
    puVar2 = (undefined4 *)FUN_00014370((int)(param_1 + 1),auStack_28);
    FUN_000151ec((int)(param_1 + (uVar4 & 0xffff) * 0x26 + 0x6e),*puVar2,puVar2[1]);
    uVar5 = uVar5 + 1;
    uVar4 = (uVar4 & 0xffff) + 1 & 0xffff;
  } while (uVar5 < 0x34);
  uVar4 = 0;
  do {
    FUN_00014ed0((int)(param_1 + uVar4 * 0x26 + 0x6e));
    if (uVar4 != 2) {
      FUN_00015e84((int)(param_1 + uVar4 * 0x26 + 0x6b));
    }
    uVar4 = uVar4 + 1 & 0xffff;
  } while (uVar4 < 4);
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined1 *)((int)param_1 + 0x43e) = 0;
  *(undefined1 *)((int)param_1 + 0x43f) = 0;
  iVar3 = param_1[0x115];
  if (iVar3 == 0) {
    param_1[0x111] = 0;
  }
  else {
    if (iVar3 == 1) {
      uVar4 = (uint)*(ushort *)((int)param_1 + 0x43a);
      if (1 < uVar4) {
        (*(code *)*DAT_00016350)(2);
        uVar4 = extraout_r1_01;
      }
      if (uVar4 != 0) {
        uVar6 = 1;
      }
    }
    else {
      if (iVar3 != 2) {
        param_1[0x111] = 3;
        goto LAB_00016390;
      }
      uVar6 = (uint)*(ushort *)((int)param_1 + 0x43a);
      if (3 < uVar6) {
        (*(code *)*DAT_00016350)(4);
        uVar6 = extraout_r1_00;
      }
    }
    param_1[0x111] = uVar6;
  }
LAB_00016390:
  if (param_1[0x111] == 3) {
    *param_1 = 3;
    FUN_0001665c((int)param_1);
  }
  else {
    *param_1 = 1;
  }
  return;
}


// ==== FUN_000163bc @ 000163bc  size=212  callers=[00016490]

void FUN_000163bc(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_20;
  uint3 local_1c;
  undefined1 uStack_19;
  undefined1 auStack_18 [8];
  
  FUN_000141bc(&local_20);
  iVar3 = 0;
  if (0 < *(short *)(param_2 + 0x8c)) {
    do {
      sVar1 = (short)iVar3;
      if (*(char *)(param_2 + sVar1 * 8 + 0x12) != '\0') {
        puVar2 = (undefined4 *)FUN_0001525c(param_2 + 0xc,auStack_18,sVar1);
        local_20 = *puVar2;
        _local_1c = CONCAT13(*(undefined1 *)((int)puVar2 + 7),(uint3)*(ushort *)(puVar2 + 1));
        FUN_000151ec(param_3 + 0xc,local_20,_local_1c);
        iVar3 = (sVar1 + -1) * 0x10000 >> 0x10;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 * 0x10000 >> 0x10 < (int)*(short *)(param_2 + 0x8c));
  }
  return;
}


// ==== FUN_00016490 @ 00016490  size=460  callers=[00012ab8]

void FUN_00016490(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar3 = 0;
  do {
    if (iVar3 != 2) {
      FUN_00015fb4((int)(param_1 + iVar3 * 0x26 + 0x6b));
    }
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
  } while (iVar3 < 4);
  iVar3 = param_1[0x111];
  if (iVar3 == 0) {
    FUN_000163bc(param_1,(int)(param_1 + 0x91),(int)(param_1 + 0xb7));
    FUN_000163bc(param_1,(int)(param_1 + 0xb7),(int)(param_1 + 0xdd));
    puVar4 = param_1 + 0x6b;
LAB_0001658c:
    puVar2 = param_1 + 0xdd;
    puVar5 = param_1 + 0x91;
  }
  else {
    if (iVar3 == 1) {
      FUN_000163bc(param_1,(int)(param_1 + 0x91),(int)(param_1 + 0x6b));
      FUN_000163bc(param_1,(int)(param_1 + 0x6b),(int)(param_1 + 0xdd));
      puVar4 = param_1 + 0xb7;
      goto LAB_0001658c;
    }
    if (iVar3 != 2) goto LAB_000165ac;
    FUN_000163bc(param_1,(int)(param_1 + 0x91),(int)(param_1 + 0xdd));
    FUN_000163bc(param_1,(int)(param_1 + 0xdd),(int)(param_1 + 0x91));
    puVar2 = param_1 + 0x6b;
    puVar4 = param_1 + 0xb7;
    puVar5 = puVar2;
  }
  FUN_000163bc(param_1,(int)puVar2,(int)puVar4);
  FUN_000163bc(param_1,(int)puVar4,(int)puVar5);
LAB_000165ac:
  iVar3 = (int)*(short *)(param_1 + 0xda);
  iVar1 = iVar3;
  while (iVar1 = (iVar1 + -1) * 0x10000 >> 0x10, iVar3 + -4 < iVar1) {
    *(undefined1 *)((int)param_1 + iVar1 * 8 + 0x2ee) = 1;
    iVar3 = (int)*(short *)(param_1 + 0xda);
  }
  iVar3 = 0;
  do {
    FUN_00014ed0((int)(param_1 + iVar3 * 0x26 + 0x6e));
    if ((iVar3 != 2) && (*(char *)((int)param_1 + iVar3 * 0x98 + 0x242) == '\0')) {
      FUN_00015e84((int)(param_1 + iVar3 * 0x26 + 0x6b));
    }
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
  } while (iVar3 < 4);
  FUN_0001665c((int)param_1);
  *param_1 = 3;
  return;
}


// ==== FUN_0001665c @ 0001665c  size=208  callers=[000161bc, 00016490]

void FUN_0001665c(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint extraout_r1;
  undefined2 uVar3;
  int iVar4;
  bool bVar5;
  short asStack_14 [2];
  
  if (*(char *)(param_1 + 0x450) == '\0') {
    uVar2 = (uint)*(ushort *)(param_1 + 0x43a);
    if (3 < uVar2) {
      (*(code *)*DAT_0001672c)(4);
      uVar2 = extraout_r1;
    }
    uVar2 = (uVar2 & 0xffff) + 1;
    uVar1 = (undefined2)uVar2;
    bVar5 = 3 < (uVar2 & 0xffff);
    uVar3 = uVar1;
    if (bVar5) {
      uVar3 = 0;
    }
    *(undefined2 *)(param_1 + 0x438) = uVar1;
    if (bVar5) {
      *(undefined2 *)(param_1 + 0x438) = uVar3;
    }
  }
  else {
    iVar4 = 0;
    do {
      uVar2 = FUN_00015594(iVar4 * 0x98 + param_1 + 0x1b8,0,2,asStack_14);
      if ((uVar2 & 0xff) != 0) {
        *(short *)(param_1 + 0x438) = (short)iVar4;
        return;
      }
      iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
    } while (iVar4 < 4);
  }
  return;
}


// ==== FUN_00016730 @ 00016730  size=148  callers=[00016e90]

void FUN_00016730(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_20 [8];
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 0x98 + param_1;
    *(undefined2 *)(iVar1 + 0x240) = 0;
    *(undefined1 *)(iVar1 + 0x242) = 0;
    *(undefined2 *)(iVar1 + 0x23e) = 0;
    if (0 < *(short *)(iVar1 + 0x238)) {
      do {
        FUN_0001525c(iVar1 + 0x1b8,auStack_20,0);
      } while (0 < *(short *)(iVar1 + 0x238));
    }
    iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
  } while (iVar2 < 4);
  return;
}


// ==== FUN_000167c4 @ 000167c4  size=276  callers=[000193c4]

void FUN_000167c4(int param_1,uint param_2,int param_3,short param_4)

{
  int iVar1;
  short sVar2;
  
  if (param_3 == 2) {
    *(undefined1 *)(param_1 + 0x43e) = 1;
    iVar1 = (param_2 & 0xffff) * 0x98 + param_1;
    sVar2 = *(short *)(iVar1 + 0x23e) + 1;
  }
  else {
    if (param_3 == 3) {
      if (param_4 != 0xc) {
        return;
      }
      if (*(char *)(param_1 + 0x459) != '\0') {
        *(undefined1 *)(param_1 + 0x43e) = 1;
      }
      iVar1 = (param_2 & 0xffff) * 0x98 + param_1;
      *(short *)(iVar1 + 0x23e) = *(short *)(iVar1 + 0x23e) + 0xd;
      *(undefined1 *)(param_1 + 0x43f) = 1;
      return;
    }
    if (param_3 != 1) {
      return;
    }
    if (param_4 != 0xb) {
      return;
    }
    *(undefined1 *)(param_1 + 0x440) = 1;
    if (*(char *)(param_1 + 0x45a) == '\0') {
      return;
    }
    iVar1 = (param_2 & 0xffff) * 0x98 + param_1;
    sVar2 = *(short *)(iVar1 + 0x23e) + -10;
  }
  *(short *)(iVar1 + 0x23e) = sVar2;
  return;
}


// ==== FUN_000168d8 @ 000168d8  size=100  callers=[0001693c, 000183dc, 000193c4]

int FUN_000168d8(int param_1,short param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (iVar2 != param_2) {
      iVar1 = ((int)*(short *)(iVar2 * 0x98 + param_1 + 0x23e) + (int)(short)iVar1) * 0x10000 >>
              0x10;
    }
    iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
  } while (iVar2 < 4);
  return iVar1;
}


// ==== FUN_0001693c @ 0001693c  size=140  callers=[000193c4]

undefined4 FUN_0001693c(int param_1,short param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  
  sVar1 = *(short *)(param_2 * 0x98 + param_1 + 0x23e);
  if ((sVar1 == 0x1a) &&
     ((*(char *)(param_1 + 0x45a) == '\0' || (*(char *)(param_1 + 0x45b) == '\0')))) {
    uVar2 = 1;
  }
  else {
    if ((sVar1 == 0x10) &&
       ((*(char *)(param_1 + 0x45a) != '\0' &&
        (iVar3 = FUN_000168d8(param_1,param_2), (short)iVar3 == 0)))) {
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_000169c8 @ 000169c8  size=564  callers=[000193c4]

undefined4 FUN_000169c8(int param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint local_24;
  ushort local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  
  FUN_000141bc(&local_24);
  iVar7 = 0;
  uVar4 = param_2 & 0xffff;
  do {
    if (*(ushort *)(param_1 + iVar7 * 2 + 0x42c) == uVar4) {
      iVar6 = param_1 + (short)iVar7 * 8;
      local_24 = *(uint *)(iVar6 + 0x40c);
      local_20 = *(ushort *)(iVar6 + 0x410);
      local_1e = *(undefined1 *)(iVar6 + 0x412);
      local_1d = *(undefined1 *)(iVar6 + 0x413);
      break;
    }
    iVar7 = (iVar7 + 1) * 0x10000 >> 0x10;
  } while (iVar7 < 4);
  sVar1 = (short)iVar7;
  if ((((local_20 < 0xc) || (local_24 != 3)) || (sVar1 != 0)) ||
     (*(char *)(param_1 + 0x43f) != '\0')) {
    if (*(int *)(param_1 + 0x460) != 0) {
      if ((((10 < local_20) && (local_24 == 2)) &&
          ((sVar1 == 0 && (*(ushort *)(param_1 + 0x43c) < 7)))) ||
         (((0xb < local_20 && (sVar1 == 0)) &&
          (uVar3 = FUN_00014b38(param_1 + 0x40c), (uVar3 & 0xff) != 0)))) goto LAB_00016bb0;
      if (*(int *)(param_1 + 0x460) == 2) {
        iVar6 = uVar4 * 0x98 + param_1 + 0x1b8;
        sVar2 = FUN_00014d18(iVar6,local_24);
        iVar7 = FUN_00014bd4((int *)(param_1 + 0x40c));
        if (-1 < sVar2) {
          if (((*(ushort *)(param_1 + (uVar4 * 0x13 + (int)sVar2) * 8 + 0x1bc) <
                *(ushort *)(param_1 + (short)iVar7 * 8 + 0x410)) &&
              (uVar4 = FUN_00014b38(param_1 + 0x40c), (uVar4 & 0xff) != 0)) && (sVar1 != 0))
          goto LAB_00016bb0;
          if (((sVar1 == 0) && (local_20 == 0xe)) &&
             (iVar7 = FUN_00014cd0(iVar6,local_24 & 0xffff), 1 < (short)iVar7)) {
            return 1;
          }
        }
      }
    }
    uVar5 = 0;
  }
  else {
LAB_00016bb0:
    uVar5 = 1;
  }
  return uVar5;
}


// ==== FUN_00016bfc @ 00016bfc  size=464  callers=[00012748]

void FUN_00016bfc(undefined4 *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  short local_28 [4];
  undefined1 auStack_20 [8];
  
  local_28[0] = -1;
  if (*(short *)(param_1 + 0x10d) == 4) {
    if (*(char *)((int)param_1 + 1099) != '\0') {
      return;
    }
    FUN_000193c4(param_1);
    return;
  }
  if (*(short *)(param_1 + 0x10d) == 0) {
    if (((*(short *)(param_1 + 0x10f) != 0) || (*(char *)(param_1 + 0x114) == '\0')) ||
       (uVar2 = FUN_00015594((int)(param_1 + (uint)*(ushort *)(param_1 + 0x10e) * 0x26 + 0x6e),0,2,
                             local_28), (uVar2 & 0xff) == 0)) {
      iVar3 = FUN_000174f4((int)param_1);
      local_28[0] = (short)iVar3;
    }
  }
  else {
    iVar3 = FUN_00014cd0((int)(param_1 + (uint)*(ushort *)(param_1 + 0x10e) * 0x26 + 0x6e),
                         (uint)*(ushort *)(param_1 + 0x103));
    if ((short)iVar3 < 1) {
      if (((*(char *)((int)param_1 + (uint)*(ushort *)(param_1 + 0x10e) * 0x98 + 0x242) != '\0') &&
          (uVar2 = FUN_00014b38((int)(param_1 + 0x103)), (uVar2 & 0xff) == 0)) ||
         (uVar2 = FUN_000183dc((int)param_1), (uVar2 & 0xff) != 0)) {
        uVar4 = FUN_00014d58((int)(param_1 + (uint)*(ushort *)(param_1 + 0x10e) * 0x26 + 0x6e));
        local_28[0] = (short)uVar4;
        if (-1 < local_28[0]) goto LAB_00016d64;
      }
      iVar3 = FUN_00018154((int)param_1);
      local_28[0] = (short)iVar3;
    }
    else {
      local_28[0] = FUN_00017c80((int)param_1);
    }
  }
LAB_00016d64:
  if (local_28[0] < 0) {
    local_28[0] = 0;
  }
  puVar5 = (undefined4 *)
           FUN_0001525c((int)(param_1 + (uint)*(ushort *)(param_1 + 0x10e) * 0x26 + 0x6e),auStack_20
                        ,local_28[0]);
  FUN_0001485c((int)(param_1 + 0x103),*puVar5,puVar5[1],*(undefined2 *)(param_1 + 0x10e));
  sVar1 = *(short *)(param_1 + 0x10e);
  *(ushort *)(param_1 + 0x10e) = sVar1 + 1U;
  if (3 < (ushort)(sVar1 + 1U)) {
    *(undefined2 *)(param_1 + 0x10e) = 0;
  }
  return;
}


// ==== FUN_00016dcc @ 00016dcc  size=180  callers=[00019e70]

int FUN_00016dcc(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = *(int *)(param_1 + 0x444);
  if (iVar2 == 0) {
    iVar2 = param_2 - (int)DAT_00016e8c;
    pcVar3 = DAT_00016e8c;
    do {
      cVar1 = *pcVar3;
      pcVar3[iVar2] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  else if (iVar2 == 1) {
    iVar2 = param_2 - (int)DAT_00016e64;
    pcVar3 = DAT_00016e64;
    do {
      cVar1 = *pcVar3;
      pcVar3[iVar2] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  else if (iVar2 == 2) {
    iVar2 = param_2 - (int)DAT_00016e40;
    pcVar3 = DAT_00016e40;
    do {
      cVar1 = *pcVar3;
      pcVar3[iVar2] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  else if (iVar2 == 3) {
    iVar2 = param_2 - (int)DAT_00016e1c;
    pcVar3 = DAT_00016e1c;
    do {
      cVar1 = *pcVar3;
      pcVar3[iVar2] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  return param_2;
}


// ==== FUN_00016e90 @ 00016e90  size=152  callers=[00012748, 000135e0, 0001a0fc]

void FUN_00016e90(undefined4 *param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [424];
  
  FUN_00016730((int)param_1);
  if (0 < *(short *)(param_1 + 0x10d)) {
    do {
      FUN_000148dc((int)(param_1 + 0x103),auStack_1c0,0);
    } while (0 < *(short *)(param_1 + 0x10d));
  }
  puVar2 = FUN_000141d0(auStack_1b8);
  iVar3 = 0x1a8;
  puVar5 = param_1 + 1;
  do {
    iVar4 = iVar3 + -1;
    *(undefined1 *)puVar5 = *puVar2;
    bVar1 = 0 < iVar3;
    iVar3 = iVar4;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0 && bVar1);
  FUN_00018700((int)(param_1 + 1));
  FUN_000161bc(param_1);
  *(undefined2 *)(param_1 + 0x10f) = 0;
  return;
}


// ==== FUN_00016f28 @ 00016f28  size=40  callers=[00012748, 00012ab8]

undefined4 FUN_00016f28(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x44c) == 1) {
    uVar1 = 0x96;
  }
  else {
    uVar1 = 400;
    if (*(int *)(param_1 + 0x44c) != 2) {
      uVar1 = 0;
    }
  }
  return uVar1;
}


// ==== FUN_00016f50 @ 00016f50  size=360  callers=[000174f4]

bool FUN_00016f50(int param_1,short *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x438);
  iVar6 = -1;
  sVar5 = -1;
  iVar4 = 0;
  if (0 < *(short *)(uVar1 * 0x98 + param_1 + 0x238)) {
    do {
      if (((((*(short *)(param_1 + 0x434) != 0) || (*(char *)(param_1 + 0x43e) != '\0')) ||
           (*(char *)(param_1 + 0x458) == '\0')) ||
          (*(int *)(param_1 + (uVar1 * 0x13 + iVar4) * 8 + 0x1b8) != 2)) &&
         ((puVar3 = (uint *)(param_1 + (uVar1 * 0x13 + iVar4 + 0x37) * 8),
          uVar1 = FUN_000170b8(param_1,*puVar3,puVar3[1]), (uVar1 & 0xff) != 0 &&
          (((short)iVar6 == -1 ||
           (iVar2 = (uint)*(ushort *)(param_1 + 0x438) * 0x13,
           *(ushort *)(param_1 + (iVar2 + iVar4) * 8 + 0x1bc) <
           *(ushort *)(param_1 + ((short)iVar6 + iVar2) * 8 + 0x1bc))))))) {
        iVar6 = iVar4;
      }
      sVar5 = (short)iVar6;
      uVar1 = (uint)*(ushort *)(param_1 + 0x438);
      iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
    } while (iVar4 < *(short *)(uVar1 * 0x98 + param_1 + 0x238));
  }
  if (sVar5 != -1) {
    *param_2 = sVar5;
  }
  return sVar5 != -1;
}


// ==== FUN_000170b8 @ 000170b8  size=572  callers=[00016f50]

undefined4 FUN_000170b8(int param_1,uint param_2,uint param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short local_34 [2];
  uint local_30;
  
  iVar6 = (int)*(short *)(param_1 + 0x434);
  uVar4 = param_2;
  if (0 < iVar6) {
    uVar4 = *(uint *)(param_1 + 0x40c);
  }
  if (param_2 == uVar4) {
    uVar7 = param_3 & 0xffff;
    if (uVar7 != 0xe) {
      if (0 < iVar6) {
        iVar3 = 0;
        do {
          iVar5 = param_1 + iVar3 * 8;
          if ((*(uint *)(iVar5 + 0x40c) == uVar4) && (uVar7 < *(ushort *)(iVar5 + 0x410)))
          goto LAB_000172e8;
          iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
        } while (iVar3 < iVar6);
      }
      local_30 = uVar7;
      iVar6 = FUN_00014cd0((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,
                           uVar4 & 0xffff);
      iVar3 = FUN_00014754(param_1 + 4,uVar4);
      local_34[0] = (short)iVar3;
      iVar3 = FUN_00014b94(param_1 + 0x40c,uVar4);
      if ((int)(short)iVar3 + (int)local_34[0] + (int)(short)iVar6 != 0xd) {
        if (*(int *)(param_1 + 0x460) != 2) {
          iVar6 = uVar7 + 1;
          iVar3 = iVar6 * 0x10000 >> 0x10;
          while ((sVar1 = (short)iVar6, iVar3 < 0xf &&
                 ((uVar4 = FUN_000146f4(param_1 + 4,param_2,sVar1), (uVar4 & 0xff) != 0 ||
                  (uVar4 = FUN_00015594((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,
                                        param_2 & 0xffff,sVar1,local_34), (uVar4 & 0xff) != 0))))) {
            iVar6 = (iVar3 + 1) * 0x10000 >> 0x10;
            iVar3 = iVar6;
          }
          if (0xe < sVar1) {
            return 1;
          }
          goto LAB_000172e8;
        }
        uVar7 = 0;
        do {
          if ((uVar7 != *(ushort *)(param_1 + 0x438)) &&
             (iVar6 = (int)*(short *)(uVar7 * 0x98 + param_1 + 0x238), 0 < iVar6)) {
            iVar3 = 0;
            do {
              iVar5 = param_1 + (uVar7 * 0x13 + iVar3) * 8;
              if ((*(uint *)(iVar5 + 0x1b8) == uVar4) && (local_30 < *(ushort *)(iVar5 + 0x1bc)))
              goto LAB_000172e8;
              iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
            } while (iVar3 < iVar6);
          }
          uVar7 = (int)((uVar7 + 1) * 0x10000) >> 0x10;
        } while ((int)uVar7 < 4);
      }
    }
    uVar2 = 1;
  }
  else {
LAB_000172e8:
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_000172f4 @ 000172f4  size=272  callers=[000174f4]

undefined4 FUN_000172f4(int param_1,uint param_2,ushort param_3,short param_4)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_00014cd0(param_4 * 0x98 + param_1 + 0x1b8,param_2 & 0xffff);
  iVar4 = FUN_00014754(param_1 + 4,param_2);
  if ((int)(short)iVar4 + (int)(short)iVar3 != 0xd) {
    bVar1 = FUN_000147a0(param_1 + 4,param_2,param_3);
    if (bVar1) {
      return 1;
    }
    if (*(int *)(param_1 + 0x460) == 2) {
      iVar3 = 0;
      do {
        if (iVar3 != param_4) {
          sVar2 = FUN_00014d18(iVar3 * 0x98 + param_1 + 0x1b8,param_2);
          if ((-1 < sVar2) &&
             (param_3 < *(ushort *)(param_1 + (iVar3 * 0x13 + (int)sVar2) * 8 + 0x1bc))) {
            return 1;
          }
        }
        iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
      } while (iVar3 < 4);
    }
  }
  return 0;
}


// ==== FUN_00017404 @ 00017404  size=96  callers=[000174f4]

undefined4 FUN_00017404(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_00014cd0(iVar2 * 0x98 + param_1 + 0x1b8,param_2 & 0xffff);
    if ((short)iVar1 == 0) {
      return 0;
    }
    iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
  } while (iVar2 < 4);
  return 1;
}


// ==== FUN_00017464 @ 00017464  size=144  callers=[000174f4]

undefined4 FUN_00017464(int param_1,short *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001543c((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,3,0xc);
  if (((short)iVar1 < 1) && (*(char *)(param_1 + 0x43f) == '\0')) {
    iVar1 = FUN_00015ce0((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,3,0xc);
    *param_2 = (short)iVar1;
    if (-1 < (short)iVar1) {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_000174f4 @ 000174f4  size=1932  callers=[00016bfc]

int FUN_000174f4(int param_1)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  short local_28;
  short sStack_26;
  
  local_28 = -1;
  if ((*(char *)((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x242) == '\0') &&
     (uVar3 = FUN_000183dc(param_1), (uVar3 & 0xff) == 0)) {
    iVar9 = -1;
    uVar3 = FUN_00017464(param_1,&local_28);
    iVar4 = (int)local_28;
    if ((uVar3 & 0xff) != 0) {
      return iVar4;
    }
    uVar3 = (uint)*(ushort *)(param_1 + 0x438);
    iVar8 = 0;
    if (0 < *(short *)(uVar3 * 0x98 + param_1 + 0x238)) {
      do {
        sVar1 = (short)iVar8;
        if ((((*(char *)(param_1 + 0x43e) != '\0') || (*(char *)(param_1 + 0x458) == '\0')) ||
            (*(int *)(param_1 + (uVar3 * 0x13 + (int)sVar1) * 8 + 0x1b8) != 2)) &&
           (((*(char *)(param_1 + 0x45a) == '\0' ||
             (iVar6 = param_1 + (uVar3 * 0x13 + (int)sVar1) * 8, *(int *)(iVar6 + 0x1b8) != 1)) ||
            (*(short *)(iVar6 + 0x1bc) != 0xb)))) {
          puVar7 = (uint *)(param_1 + (uVar3 * 0x13 + (int)sVar1 + 0x37) * 8);
          uVar3 = FUN_000172f4(param_1,*puVar7,(ushort)puVar7[1],(short)uVar3);
          if ((uVar3 & 0xff) == 0) {
            iVar4 = (int)local_28;
          }
          else {
            iVar6 = *(int *)(param_1 + ((uint)*(ushort *)(param_1 + 0x438) * 0x13 + (int)sVar1) * 8
                            + 0x1b8);
            if (iVar6 == 2) {
              return iVar8;
            }
            iVar4 = iVar8;
            local_28 = sVar1;
            if (iVar6 != 1) {
              iVar9 = iVar8;
            }
          }
        }
        uVar3 = (uint)*(ushort *)(param_1 + 0x438);
        iVar8 = (sVar1 + 1) * 0x10000 >> 0x10;
      } while (iVar8 < *(short *)(uVar3 * 0x98 + param_1 + 0x238));
    }
    if ((short)iVar4 < 0) {
      uVar3 = FUN_00015594((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,3,0xc,
                           &sStack_26);
      if (((uVar3 & 0xff) == 0) &&
         (((uVar3 = FUN_00015594((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,3,0xd,
                                 &sStack_26), (uVar3 & 0xff) == 0 &&
           (uVar3 = FUN_00015594((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,3,0xe,
                                 &sStack_26), (uVar3 & 0xff) == 0)) ||
          (*(char *)(param_1 + 0x43f) != '\0')))) {
        iVar4 = (int)local_28;
      }
      else {
        iVar4 = FUN_00014dec((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,3);
        local_28 = (short)iVar4;
      }
      if ((short)iVar4 != -1) goto LAB_00017b44;
      if ((*(char *)(param_1 + 0x43e) == '\0') && (*(char *)(param_1 + 0x458) != '\0')) {
        iVar9 = FUN_00014d58((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8);
        goto LAB_00017b38;
      }
      iVar4 = (uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1;
LAB_00017b34:
      iVar9 = FUN_00014e64(iVar4 + 0x1b8);
    }
    else {
      iVar8 = (int)(short)iVar9;
      if (((iVar8 < 0) ||
          (*(int *)(param_1 + ((uint)*(ushort *)(param_1 + 0x438) * 0x13 + (int)(short)iVar4) * 8 +
                   0x1b8) != 1)) ||
         ((*(char *)(param_1 + 0x45a) == '\0' || (*(char *)(param_1 + 0x440) != '\0')))) {
        if (((iVar8 != -1) || (*(char *)(param_1 + 0x45a) == '\0')) ||
           (*(char *)(param_1 + 0x440) != '\0')) goto LAB_00017b44;
        iVar4 = FUN_0001543c((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,1,0xc);
        if ((short)iVar4 < 1) goto LAB_00017b40;
        iVar9 = FUN_00015714((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,1);
      }
      else if (((*(char *)(param_1 + 0x43f) == '\0') &&
               (iVar4 = FUN_0001543c((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,3,
                                     0xc), 0 < (short)iVar4)) &&
              (*(int *)(param_1 + ((uint)*(ushort *)(param_1 + 0x438) * 0x13 + iVar8) * 8 + 0x1b8)
               == 3)) {
LAB_00017b40:
        iVar4 = (int)local_28;
        goto LAB_00017b44;
      }
    }
  }
  else {
    bVar2 = FUN_00016f50(param_1,&local_28);
    if (bVar2) goto LAB_00017b40;
    uVar3 = 0;
    do {
      if ((uVar3 != 2) &&
         (((uVar3 != 3 || (*(char *)(param_1 + 0x43f) != '\0')) &&
          (uVar5 = FUN_00017404(param_1,uVar3), (uVar5 & 0xff) != 0)))) {
        iVar4 = FUN_00014d18((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,
                             (int)(short)uVar3);
        local_28 = (short)iVar4;
        goto LAB_00017988;
      }
      uVar3 = (int)((uVar3 + 1) * 0x10000) >> 0x10;
    } while ((int)uVar3 < 4);
    iVar4 = (int)local_28;
LAB_00017988:
    if ((short)iVar4 != -1) goto LAB_00017b44;
    uVar3 = FUN_00017404(param_1,3);
    if ((((uVar3 & 0xff) == 0) || (*(char *)(param_1 + 0x43f) != '\0')) ||
       ((uVar3 = FUN_00015594((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,3,0xd,
                              &local_28), (uVar3 & 0xff) != 0 ||
        (uVar3 = FUN_00015594((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,3,0xc,
                              &local_28), (uVar3 & 0xff) != 0)))) {
      iVar4 = (int)local_28;
    }
    else {
      iVar4 = FUN_00014d18((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,3);
      local_28 = (short)iVar4;
    }
    if ((short)iVar4 != -1) goto LAB_00017b44;
    if (((*(char *)(param_1 + 0x43e) == '\0') && (*(char *)(param_1 + 0x458) != '\0')) &&
       (iVar9 = (uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1,
       *(char *)(iVar9 + 0x242) != '\0')) {
      iVar4 = FUN_00015c28(iVar9 + 0x1b8,2);
LAB_00017abc:
      local_28 = (short)iVar4;
    }
    else {
      iVar9 = (uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1;
      if (*(char *)(iVar9 + 0x242) != '\0') {
        iVar4 = FUN_00015698(iVar9 + 0x1b8);
        goto LAB_00017abc;
      }
    }
    if ((short)iVar4 != -1) goto LAB_00017b44;
    iVar4 = (uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1;
    if (*(char *)(iVar4 + 0x242) == '\0') goto LAB_00017b34;
    if ((*(char *)(param_1 + 0x45a) == '\0') || (*(char *)(param_1 + 0x440) != '\0')) {
      iVar9 = FUN_00015ab8(iVar4 + 0x1b8);
    }
    else {
      iVar9 = FUN_00015b64(iVar4 + 0x1b8,1,0xb);
    }
  }
LAB_00017b38:
  local_28 = (short)iVar9;
  iVar4 = iVar9;
LAB_00017b44:
  if ((((-1 < (short)iVar4) &&
       (*(int *)(param_1 + ((uint)*(ushort *)(param_1 + 0x438) * 0x13 + (int)(short)iVar4) * 8 +
                0x1b8) == 2)) && (*(char *)(param_1 + 0x43e) == '\0')) &&
     (*(char *)(param_1 + 0x458) != '\0')) {
    iVar4 = (uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1;
    iVar9 = iVar4 + 0x1b8;
    if (*(char *)(iVar4 + 0x242) == '\0') {
      iVar4 = FUN_00014dec(iVar9,2);
    }
    else {
      iVar4 = FUN_00015c28(iVar9,2);
    }
    local_28 = (short)iVar4;
  }
  if ((((short)iVar4 < 0) && (*(char *)(param_1 + 0x43e) == '\0')) &&
     (*(char *)(param_1 + 0x458) != '\0')) {
    iVar4 = (uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1;
    iVar9 = iVar4 + 0x1b8;
    if (*(char *)(iVar4 + 0x242) == '\0') {
      iVar4 = FUN_00014dec(iVar9,2);
    }
    else {
      iVar4 = FUN_00015c28(iVar9,2);
    }
    local_28 = (short)iVar4;
  }
  if ((short)iVar4 < 0) {
    iVar4 = (uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1;
    iVar9 = iVar4 + 0x1b8;
    if (*(char *)(iVar4 + 0x242) == '\0') {
      iVar4 = FUN_00014e64(iVar9);
    }
    else {
      iVar4 = FUN_00015ab8(iVar9);
    }
  }
  return iVar4;
}


// ==== FUN_00017c80 @ 00017c80  size=1236  callers=[00016bfc]

void FUN_00017c80(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  bool bVar6;
  short local_2c;
  short local_2a;
  short asStack_28 [2];
  
  local_2c = -1;
  iVar2 = FUN_00014a78((int *)(param_1 + 0x40c));
  sVar1 = (short)iVar2;
  if ((*(char *)((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x242) == '\0') &&
     (((*(char *)(param_1 + 0x45a) == '\0' ||
       (uVar3 = FUN_00014ae4(param_1 + 0x40c), (uVar3 & 0xff) == 0)) &&
      (uVar3 = FUN_000183dc(param_1), (uVar3 & 0xff) == 0)))) {
    if (((*(char *)(param_1 + 0x45a) == '\0') || (*(short *)(param_1 + 0x434) != 3)) ||
       ((*(int *)(param_1 + 0x40c) != 1 ||
        (((10 < *(ushort *)(param_1 + sVar1 * 8 + 0x410) ||
          (uVar3 = FUN_00015594((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,1,0xb,
                                &local_2a), (uVar3 & 0xff) == 0)) ||
         (uVar3 = FUN_00014c40(param_1 + 0x40c,3,0xc), (uVar3 & 0xff) != 0)))))) {
      if (*(short *)(param_1 + 0x434) == 3) {
        iVar2 = FUN_0001543c((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,
                             (uint)*(ushort *)(param_1 + 0x40c),0xb);
        if ((((0 < (short)iVar2) && (uVar3 = FUN_00014b38(param_1 + 0x40c), (uVar3 & 0xff) == 0)) &&
            ((*(int *)(param_1 + 0x40c) != 3 ||
             (uVar3 = FUN_00015594((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,3,0xc
                                   ,&local_2a), (uVar3 & 0xff) == 0)))) &&
           (((*(char *)(param_1 + 0x45a) == '\0' || (*(int *)(param_1 + 0x40c) != 1)) ||
            (*(char *)(param_1 + 0x440) != '\0')))) goto LAB_00018128;
      }
      if (((*(int *)(param_1 + 0x40c) == 3) && (0xc < *(ushort *)(param_1 + sVar1 * 8 + 0x410))) &&
         (uVar3 = FUN_00015594((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,3,0xc,
                               &local_2c), (uVar3 & 0xff) != 0)) goto LAB_00018028;
      local_2c = -1;
      if (*(char *)(param_1 + 0x45a) == '\0') {
LAB_00017ec4:
        iVar2 = *(int *)(param_1 + 0x40c);
        uVar5 = *(ushort *)(param_1 + sVar1 * 8 + 0x410);
      }
      else {
        uVar3 = (uint)*(byte *)(param_1 + 0x440);
        bVar6 = uVar3 == 0;
        if (bVar6) {
          uVar3 = *(uint *)(param_1 + 0x40c);
        }
        if (!bVar6 || uVar3 != 1) goto LAB_00017ec4;
        uVar5 = 0xb;
        iVar2 = 1;
      }
      iVar2 = FUN_00015ce0((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,iVar2,uVar5);
      local_2c = (short)iVar2;
      if (-1 < local_2c) goto LAB_00018028;
      if (*(short *)(param_1 + 0x434) == 3) {
        iVar2 = FUN_00015838((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,
                             *(int *)(param_1 + 0x40c),3,0xc);
        local_2c = (short)iVar2;
        if (local_2c < 0) {
          iVar2 = FUN_00015714((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,
                               *(int *)(param_1 + 0x40c));
          local_2c = (short)iVar2;
        }
      }
      else {
        local_2c = FUN_00014d18((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,
                                *(int *)(param_1 + 0x40c));
      }
      if ((((*(char *)(param_1 + 0x43f) != '\0') || (2 < *(short *)(param_1 + 0x434))) ||
          ((*(int *)(param_1 + 0x40c) != 3 ||
           ((local_2c < 0 ||
            (*(ushort *)
              (param_1 + ((uint)*(ushort *)(param_1 + 0x438) * 0x13 + (int)local_2c) * 8 + 0x1bc) <
             0xd)))))) ||
         (uVar3 = FUN_00015594((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,3,0xc,
                               asStack_28), (uVar3 & 0xff) != 0)) goto LAB_00018028;
      iVar2 = FUN_00015ce0((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,
                           *(int *)(param_1 + 0x40c),0xc);
      local_2a = (short)iVar2;
      if (local_2a < 0) goto LAB_00018028;
    }
  }
  else if (*(short *)(param_1 + 0x434) == 3) {
    if ((((*(int *)(param_1 + 0x40c) == 1) && (*(ushort *)(param_1 + sVar1 * 8 + 0x410) < 0xb)) &&
        ((*(char *)(param_1 + 0x45a) != '\0' &&
         (uVar3 = FUN_00015594((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,1,0xb,
                               &local_2c), (uVar3 & 0xff) != 0)))) ||
       (local_2c = FUN_00015d40((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,
                                *(int *)(param_1 + 0x40c),*(ushort *)(param_1 + sVar1 * 8 + 0x410)),
       -1 < local_2c)) goto LAB_00018028;
    local_2a = FUN_00014d18((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,
                            *(int *)(param_1 + 0x40c));
  }
  else {
LAB_00018128:
    iVar2 = FUN_00015714((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,
                         *(int *)(param_1 + 0x40c));
    local_2a = (short)iVar2;
  }
  local_2c = local_2a;
LAB_00018028:
  if (local_2c < 0) {
    iVar2 = (uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1;
    iVar4 = iVar2 + 0x1b8;
    if (*(char *)(iVar2 + 0x242) == '\0') {
      FUN_00014e64(iVar4);
    }
    else {
      FUN_00015ab8(iVar4);
    }
  }
  return;
}


// ==== FUN_00018154 @ 00018154  size=492  callers=[00016bfc]

int FUN_00018154(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = -1;
  uVar1 = FUN_0001563c((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8);
  if (((uVar1 & 0xff) == 0) ||
     ((*(char *)(param_1 + 0x45d) == '\0' && (*(short *)(param_1 + 0x43c) == 0)))) {
    if ((*(char *)(param_1 + 0x43f) == '\0') &&
       (iVar2 = FUN_0001543c((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,3,0xc),
       0 < (short)iVar2)) {
      iVar4 = FUN_00015714((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,3);
    }
    else {
      if ((*(char *)(param_1 + 0x45a) != '\0') && (*(char *)(param_1 + 0x440) == '\0')) {
        iVar4 = FUN_00015760((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8,1,0xb,0xe);
      }
      if ((short)iVar4 == -1) {
        iVar4 = FUN_00015ab8((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8);
      }
    }
  }
  else {
    iVar4 = FUN_00015698((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8);
  }
  piVar3 = (int *)(param_1 +
                  ((uint)*(ushort *)(param_1 + 0x438) * 0x13 + (int)(short)iVar4 + 0x37) * 8);
  uVar1 = FUN_00018340(param_1,*piVar3,(short)piVar3[1]);
  iVar2 = iVar4;
  if ((((uVar1 & 0xff) != 0) && (*(short *)(param_1 + 0x43c) == 0)) &&
     (*(char *)(param_1 + 0x45d) == '\0')) {
    if ((*(char *)(param_1 + 0x45a) == '\0') || (*(char *)(param_1 + 0x440) != '\0')) {
      iVar2 = FUN_000159fc((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8);
    }
    else {
      iVar2 = FUN_00015914((uint)*(ushort *)(param_1 + 0x438) * 0x98 + param_1 + 0x1b8);
    }
    if ((short)iVar2 < 0) {
      iVar2 = iVar4;
    }
  }
  return iVar2;
}


// ==== FUN_00018340 @ 00018340  size=56  callers=[00018154, 00018f30]

undefined4 FUN_00018340(undefined4 param_1,int param_2,short param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 2) {
    uVar1 = 1;
  }
  else if ((param_2 != 3) || (uVar1 = 1, param_3 != 0xc)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_00018378 @ 00018378  size=100  callers=[000183dc]

bool FUN_00018378(int param_1,short param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*(short *)(param_1 + 0x434) < 1) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_00014a78((int *)(param_1 + 0x40c));
    bVar2 = (uint)*(ushort *)(param_1 + (short)iVar1 * 2 + 0x42c) != (int)param_2;
  }
  return bVar2;
}


// ==== FUN_000183dc @ 000183dc  size=320  callers=[00016bfc, 000174f4, 00017c80]

undefined4 FUN_000183dc(int param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x460);
  if ((((iVar3 != 0) || (6 < *(ushort *)(param_1 + 0x43c))) &&
      ((iVar3 != 1 || (3 < *(ushort *)(param_1 + 0x43c))))) &&
     (((iVar3 != 2 || (1 < *(ushort *)(param_1 + 0x43c))) || (*(char *)(param_1 + 0x372) != '\0'))))
  {
    uVar4 = 0;
    do {
      if (((uVar4 != *(ushort *)(param_1 + 0x438)) &&
          (iVar3 = uVar4 * 0x98 + param_1, *(char *)(iVar3 + 0x242) != '\0')) &&
         (*(short *)(iVar3 + 0x23e) != 0)) {
        sVar2 = (short)uVar4;
        iVar3 = FUN_000168d8(param_1,sVar2);
        if (((short)iVar3 == 0) ||
           ((*(char *)(param_1 + 0x45b) == '\0' &&
            (iVar3 = FUN_000168d8(param_1,sVar2), (short)iVar3 == -10)))) {
          bVar1 = FUN_00018378(param_1,sVar2);
          if (bVar1) {
            return 0;
          }
          return 1;
        }
      }
      uVar4 = (int)((uVar4 + 1) * 0x10000) >> 0x10;
    } while ((int)uVar4 < 4);
  }
  return 0;
}


// ==== FUN_0001851c @ 0001851c  size=140  callers=[000118f8, 00018da8]

void FUN_0001851c(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_000138b0((undefined1 *)&local_24);
  FUN_000139a4(&local_24,param_2);
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  Ordinal_906(uVar1,param_3,param_4,param_5,param_6,local_20,0,0,param_5,param_6,param_7);
  local_24 = DAT_000185a8;
  Ordinal_1040(&local_24);
  return;
}


// ==== FUN_000185ac @ 000185ac  size=100  callers=[000124d8]

void FUN_000185ac(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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


// ==== FUN_00018610 @ 00018610  size=232  callers=[]

void FUN_00018610(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_2c [4];
  undefined4 local_28;
  
  Ordinal_76(auStack_2c);
  FUN_000138b0((undefined1 *)&local_3c);
  FUN_000139a4(&local_3c,param_2);
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
  local_3c = DAT_000186fc;
  Ordinal_1040(&local_3c);
  local_3c = DAT_000186f8;
  Ordinal_230(auStack_2c);
  return;
}


// ==== FUN_00018700 @ 00018700  size=332  callers=[000136a8, 00016e90]

void FUN_00018700(int param_1)

{
  undefined4 uVar1;
  short extraout_r1;
  int iVar2;
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
    FUN_000141bc(puVar4);
    iVar6 = iVar6 + -1;
    puVar4 = puVar4 + 2;
  } while (iVar6 != 0);
  Ordinal_535();
  Ordinal_1061();
  uVar5 = 0;
  do {
    do {
      uVar1 = Ordinal_1053();
      (*(code *)*DAT_0001884c)(0x34,uVar1);
      iVar6 = extraout_r1 * 8;
    } while (*(short *)(local_1aa + iVar6 + -2) != 0);
    iVar2 = param_1 + uVar5 * 8;
    *(undefined1 *)(&local_1b0 + extraout_r1 * 2) = *(undefined1 *)(iVar2 + 4);
    *(undefined1 *)((int)&local_1b0 + iVar6 + 1) = *(undefined1 *)(iVar2 + 5);
    *(undefined1 *)((int)&local_1b0 + iVar6 + 2) = *(undefined1 *)(iVar2 + 6);
    *(undefined1 *)((int)&local_1b0 + iVar6 + 3) = *(undefined1 *)(iVar2 + 7);
    local_1aa[iVar6 + -2] = *(undefined1 *)(iVar2 + 8);
    local_1aa[iVar6 + -1] = *(undefined1 *)(iVar2 + 9);
    local_1aa[iVar6] = *(undefined1 *)(iVar2 + 10);
    local_1aa[iVar6 + 1] = *(undefined1 *)(iVar2 + 0xb);
    uVar3 = uVar5 + 1;
    uVar5 = uVar3 & 0xffff;
  } while ((uVar3 & 0xffff) < 0x34);
  uVar5 = 0;
  do {
    iVar6 = uVar5 * 8;
    iVar2 = param_1 + uVar5 * 8;
    *(undefined1 *)(iVar2 + 4) = *(undefined1 *)(&local_1b0 + uVar5 * 2);
    *(undefined1 *)(iVar2 + 5) = *(undefined1 *)((int)&local_1b0 + iVar6 + 1);
    *(undefined1 *)(iVar2 + 6) = *(undefined1 *)((int)&local_1b0 + iVar6 + 2);
    *(undefined1 *)(iVar2 + 7) = *(undefined1 *)((int)&local_1b0 + iVar6 + 3);
    *(undefined1 *)(iVar2 + 8) = local_1aa[iVar6 + -2];
    *(undefined1 *)(iVar2 + 9) = local_1aa[iVar6 + -1];
    *(undefined1 *)(iVar2 + 10) = local_1aa[iVar6];
    *(undefined1 *)(iVar2 + 0xb) = local_1aa[iVar6 + 1];
    uVar5 = uVar5 + 1 & 0xffff;
  } while (uVar5 < 0x34);
  return;
}


// ==== FUN_00018850 @ 00018850  size=100  callers=[000124d8]

void FUN_00018850(int *param_1,int *param_2)

{
  ushort uVar1;
  
  uVar1 = 0;
  do {
    FUN_00018c74((int)param_1,(int)param_2,uVar1);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  FUN_00019ba8((int)param_1,(int)param_2);
  FUN_000188b4((int)param_1,param_2);
  FUN_00019e70(param_1,param_2);
  return;
}


// ==== FUN_000188b4 @ 000188b4  size=492  callers=[00012748, 00012ab8, 00018850]

void FUN_000188b4(int param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [8];
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined1 auStack_3c [8];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  Ordinal_2316(param_2,1);
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,0xffffff);
  local_48 = 0;
  local_4c = DAT_00018ab0;
  Ordinal_982(&local_4c,0x50,DAT_00018aac,param_2);
  uVar4 = (**(code **)(*param_2 + 0x30))(param_2,&local_4c);
  piVar2 = DAT_00018aa8;
  uVar1 = DAT_00018aa4;
  iVar6 = 0;
  do {
    Ordinal_719(auStack_5c,uVar1,(int)*(short *)(iVar6 * 0x98 + param_1 + 0x23e));
    piVar5 = (int *)Ordinal_177(auStack_58,auStack_5c);
    piVar5 = (int *)FUN_00011d18((int)param_2,auStack_3c,piVar5);
    local_44 = *piVar5;
    local_40 = piVar5[1];
    Ordinal_297(auStack_58);
    local_34 = *piVar2;
    local_30 = iVar6 * 10 + piVar2[1];
    local_2c = local_34 + local_44;
    local_28 = local_30 + local_40;
    piVar5 = (int *)Ordinal_177(auStack_54,auStack_5c);
    (**(code **)(*param_2 + 0x48))(param_2,*piVar5,*(undefined4 *)(*piVar5 + -8),&local_34,0x100);
    Ordinal_297(auStack_54);
    iVar6 = (iVar6 + 1) * 0x10000 >> 0x10;
  } while (iVar6 < 4);
  (**(code **)(*param_2 + 0x38))(param_2,uVar3);
  (**(code **)(*param_2 + 0x30))(param_2,uVar4);
  Ordinal_1040(&local_4c);
  local_4c = DAT_00018aa0;
  Ordinal_1040(&local_4c);
  return;
}


// ==== FUN_00018ab4 @ 00018ab4  size=444  callers=[00018c74, 00018f30, 00019db8]

void FUN_00018ab4(int param_1,short param_2,short *param_3,short *param_4,undefined2 *param_5,
                 short *param_6)

{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_2;
  if ((iVar4 == 0) || (iVar4 == 2)) {
    *param_4 = 0;
    iVar2 = iVar4 * 0x98 + param_1;
    if (*(short *)(iVar2 + 0x238) < 2) {
      *param_3 = 0x1a;
    }
    else {
      iVar5 = 0xf0;
      if (iVar4 != 2) {
        iVar5 = 0xb2;
      }
      sVar1 = (*(code *)*DAT_00018b28)
                        (*(short *)(iVar2 + 0x238) + -1,(iVar5 - (uint)(iVar4 != 2)) + -0x1e);
      *param_3 = sVar1;
    }
    if (0x1a < *param_3) {
      *param_3 = 0x1a;
    }
    if (iVar4 == 2) {
      *param_6 = 0xe1;
      iVar4 = 0xd2 - (*(short *)(iVar2 + 0x238) + -1) * (int)*param_3;
    }
    else {
      *param_6 = 1;
      iVar4 = 0xd1 - (*(short *)(iVar2 + 0x238) + -1) * (int)*param_3;
    }
    if (iVar4 < 0) {
      iVar4 = iVar4 + 1;
    }
    uVar3 = (undefined2)(iVar4 >> 1);
  }
  else {
    *param_3 = 0;
    iVar5 = iVar4 * 0x98 + param_1;
    iVar2 = (int)*(short *)(iVar5 + 0x238);
    if (iVar2 < 2) {
      *param_4 = 0xf;
    }
    else {
      sVar1 = (*(code *)*DAT_00018b28)(iVar2 + -1,0x8a);
      *param_4 = sVar1;
    }
    if (0xf < *param_4) {
      *param_4 = 0xf;
    }
    iVar2 = (*(short *)(iVar5 + 0x238) + -1) * (int)*param_4;
    iVar5 = iVar2 + 0x2a;
    if (iVar5 < 0) {
      iVar5 = iVar2 + 0x2b;
    }
    *param_6 = 0x86 - (short)(iVar5 >> 1);
    if (iVar4 == 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0xd1;
    }
  }
  *param_5 = uVar3;
  return;
}


// ==== FUN_00018c74 @ 00018c74  size=308  callers=[00012748, 00012ab8, 00018850]

void FUN_00018c74(int param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  
  local_24 = 0;
  local_22 = 0;
  local_28 = 0;
  local_26 = 0;
  FUN_00018ab4(param_1,param_3,&local_24,&local_22,&local_28,&local_26);
  iVar1 = (int)param_3;
  iVar6 = iVar1 * 0x98 + param_1;
  if (0 < *(short *)(iVar6 + 0x238)) {
    iVar2 = (int)local_26;
    iVar5 = 0;
    do {
      iVar3 = iVar1 * 0x13 + iVar5;
      iVar2 = (int)(short)iVar2;
      if (*(char *)(param_1 + iVar3 * 8 + 0x1be) != '\0') {
        iVar2 = iVar2 + -2;
      }
      piVar4 = (int *)(param_1 + (iVar3 + 0x37) * 8);
      FUN_00018da8(param_1,param_2,*piVar4,(short)piVar4[1],iVar1 == 2,(int)local_28,iVar2);
      iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
      local_28 = local_28 + local_24;
      iVar3 = ((int)local_26 + (int)local_22) * 0x10000;
      iVar2 = iVar3 >> 0x10;
      local_26 = (short)((uint)iVar3 >> 0x10);
    } while (iVar5 < *(short *)(iVar6 + 0x238));
  }
  return;
}


// ==== FUN_00018da8 @ 00018da8  size=388  callers=[00018c74, 000199e0, 00019ba8, 00019db8]

void FUN_00018da8(int param_1,int param_2,int param_3,short param_4,char param_5,int param_6,
                 int param_7)

{
  short sVar1;
  
  if ((param_5 == '\0') && (*(char *)(param_1 + 0x464) == '\0')) {
    FUN_0001851c(param_2,*(short *)(param_1 + 0x448) + 0xfa,param_6,param_7,0x1e,0x2a,0xff00);
  }
  else {
    FUN_0001851c(param_2,0x82,param_6,param_7,0x1e,0x2a,0xff00);
    if ((param_3 == 2) || (sVar1 = 0x8c, param_3 == 1)) {
      sVar1 = 0x99;
    }
    FUN_0001851c(param_2,param_4 + sVar1 + -2,param_6 + 2,param_7 + 2,9,9,0xffffff);
    FUN_0001851c(param_2,(short)param_3 + 0x88,param_6 + 2,param_7 + 0xc,9,9,0xffffff);
    if ((param_3 == 2) || (sVar1 = 0xa6, param_3 == 1)) {
      sVar1 = 0xb3;
    }
    FUN_0001851c(param_2,param_4 + sVar1 + -2,param_6 + 0x13,param_7 + 0x1f,9,9,0xffffff);
    sVar1 = 0x89;
    if (param_3 != 1) {
      sVar1 = (short)param_3 + 0xc0;
    }
    FUN_0001851c(param_2,sVar1,param_6 + 0x13,param_7 + 0x15,9,9,0xffffff);
  }
  return;
}


// ==== FUN_00018f30 @ 00018f30  size=1136  callers=[00012ab8]

undefined4 FUN_00018f30(int *param_1,int *param_2,short *param_3,undefined1 *param_4)

{
  short sVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  short local_34;
  short local_32;
  short local_30 [2];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  if (param_2[1] < 0xe2) {
    return 0;
  }
  if ((*param_1 == 3) && ((short)param_1[0x10e] != 2)) {
    return 0;
  }
  if ((short)param_1[0xda] == 0) {
    return 0;
  }
  if (*param_1 == 4) {
    return 0;
  }
  local_34 = 0;
  local_30[1] = 0;
  local_32 = 0;
  local_30[0] = 0;
  FUN_00018ab4((int)param_1,2,&local_34,local_30 + 1,&local_32,local_30);
  iVar4 = (int)local_32;
  if ((*param_2 < iVar4) && (iVar4 < 6)) {
    *param_2 = iVar4;
  }
  iVar6 = *param_2;
  if (iVar6 < iVar4) {
    return 0;
  }
  if ((int)(short)param_1[0xda] * (int)local_34 + iVar4 + 0x1d < iVar6) {
    return 0;
  }
  sVar1 = (*(code *)*DAT_000190ac)((int)local_34,iVar6 - iVar4);
  *param_3 = sVar1;
  piVar8 = param_1 + 0xba;
  if ((short)param_1[0xda] <= sVar1) {
    *param_3 = (short)param_1[0xda] + -1;
  }
  if (*param_3 < 0) {
    *param_3 = 0;
  }
  iVar4 = FUN_000153f8((int)piVar8);
  if (((short)iVar4 == 3) && (*(char *)((int)param_1 + *param_3 * 8 + 0x2ee) == '\0')) {
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    iVar4 = 0x10;
    piVar8 = &local_2c;
    do {
      iVar6 = iVar4 + -1;
      *param_4 = (char)*piVar8;
      bVar10 = 0 < iVar4;
      iVar4 = iVar6;
      piVar8 = (int *)((int)piVar8 + 1);
      param_4 = param_4 + 1;
    } while (iVar6 != 0 && bVar10);
    return 1;
  }
  if ((*param_1 == 2) || (*param_1 == 1)) {
    *(bool *)((int)param_1 + *param_3 * 8 + 0x2ee) =
         *(char *)((int)param_1 + *param_3 * 8 + 0x2ee) == '\0';
  }
  iVar4 = (int)*param_3;
  bVar10 = iVar4 != (short)param_1[0xda] + -1;
  if (bVar10) {
    iVar6 = (int)local_34;
  }
  else {
    iVar6 = 0x1e;
  }
  if (bVar10) {
    iVar6 = iVar6 + 1;
  }
  local_2c = local_34 * iVar4 + (int)local_32;
  local_28 = local_30[0] + -2;
  local_24 = local_2c + iVar6;
  local_20 = local_30[0] + 0x2a;
  iVar4 = 0x10;
  piVar9 = &local_2c;
  do {
    iVar6 = iVar4 + -1;
    *param_4 = (char)*piVar9;
    bVar10 = 0 < iVar4;
    iVar4 = iVar6;
    piVar9 = (int *)((int)piVar9 + 1);
    param_4 = param_4 + 1;
  } while (iVar6 != 0 && bVar10);
  if (*param_1 != 3) {
    iVar4 = FUN_000153f8((int)piVar8);
    if ((short)iVar4 == 3) {
      iVar4 = 2;
    }
    else {
      iVar4 = FUN_000153f8((int)piVar8);
      if (2 < (short)iVar4) {
        return 1;
      }
      if (*param_1 == 1) {
        return 1;
      }
      iVar4 = 1;
    }
    *param_1 = iVar4;
    return 1;
  }
  sVar1 = (short)param_1[0x10d];
  if ((sVar1 < 1) || (3 < sVar1)) {
    if (sVar1 != 0) {
      return 0;
    }
    if (((((short)param_1[0x10f] != 0) || ((char)param_1[0x114] == '\0')) ||
        ((param_1[*param_3 * 2 + 0xba] == 0 && ((short)param_1[*param_3 * 2 + 0xbb] == 2)))) &&
       ((((*(char *)((int)param_1 + 0x43e) != '\0' || (param_1[*param_3 * 2 + 0xba] != 2)) ||
         ((char)param_1[0x116] == '\0')) ||
        (iVar4 = FUN_00014cd0((int)piVar8,2), (short)iVar4 == (short)param_1[0xda])))) {
      puVar3 = (undefined4 *)FUN_0001525c((int)piVar8,(undefined1 *)&local_2c,*param_3);
      uVar5 = *puVar3;
      uVar7 = puVar3[1];
      goto LAB_00019268;
    }
  }
  else {
    iVar4 = FUN_00014cd0((int)piVar8,(uint)*(ushort *)(param_1 + 0x103));
    if ((((short)iVar4 < 1) || (param_1[*param_3 * 2 + 0xba] == param_1[0x103])) &&
       (((uVar2 = FUN_00018340(param_1,param_1[(*param_3 + 0x5d) * 2],
                               (short)(param_1 + (*param_3 + 0x5d) * 2)[1]), (uVar2 & 0xff) == 0 ||
         (((short)param_1[0x10f] != 0 || (*(char *)((int)param_1 + 0x45d) != '\0')))) ||
        (uVar2 = FUN_00015ddc((int)piVar8), (uVar2 & 0xff) == 0)))) {
      puVar3 = (undefined4 *)FUN_0001525c((int)piVar8,(undefined1 *)&local_2c,*param_3);
      uVar5 = *puVar3;
      uVar7 = puVar3[1];
LAB_00019268:
      FUN_0001485c((int)(param_1 + 0x103),uVar5,uVar7,2);
      return 1;
    }
  }
  Ordinal_858(0);
  return 0;
}


// ==== FUN_000193c4 @ 000193c4  size=1548  callers=[00012ab8, 00016bfc]

void FUN_000193c4(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  short local_a0;
  int local_98;
  int local_94;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [100];
  
  if (*(short *)(param_1 + 0x10d) == 4) {
    uVar12 = (uint)*(short *)(param_1 + 0x104);
    uVar11 = (uint)*(ushort *)(param_1 + 0x10b);
    iVar1 = 1;
    do {
      if ((param_1[iVar1 * 2 + 0x103] == (uint)*(ushort *)(param_1 + 0x103)) &&
         ((int)(short)uVar12 < (int)(uint)*(ushort *)(param_1 + iVar1 * 2 + 0x104))) {
        uVar11 = (uint)*(ushort *)((int)param_1 + iVar1 * 2 + 0x42c);
        uVar12 = (uint)*(ushort *)(param_1 + iVar1 * 2 + 0x104);
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < 4);
    if (((uVar11 == 2) && (uVar12 = FUN_000169c8((int)param_1,2), (uVar12 & 0xff) != 0)) &&
       ((iVar1 = FUN_000168d8((int)param_1,2), (short)iVar1 == 0 ||
        ((*(char *)((int)param_1 + 0x45b) == '\0' &&
         (iVar1 = FUN_000168d8((int)param_1,2), (short)iVar1 < 0)))))) {
      *(undefined1 *)((int)param_1 + 0x372) = 1;
    }
    iVar1 = 0;
    do {
      piVar2 = (int *)FUN_000148dc((int)(param_1 + 0x103),auStack_90,0);
      local_98 = *piVar2;
      local_94 = piVar2[1];
      FUN_000167c4((int)param_1,uVar11,*piVar2,(short)piVar2[1]);
      FUN_00014678((int)(param_1 + 1),local_98,local_94);
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < 4);
    puVar3 = (undefined4 *)(int)*(short *)((int)param_1 + uVar11 * 0x98 + 0x23e);
    uVar12 = uVar11;
    if ((0 < (int)puVar3) ||
       (((int)puVar3 < 0 && (uVar12 = (uint)*(byte *)((int)param_1 + 0x45b), uVar12 != 0)))) {
      uVar7 = 0;
      do {
        if (uVar7 != uVar11) {
          puVar3 = param_1 + uVar7 * 0x26;
          uVar12 = (uint)*(byte *)((int)puVar3 + 0x242);
        }
        if (uVar7 != uVar11 && uVar12 != 0) {
          *(undefined1 *)((int)puVar3 + 0x242) = 0;
        }
        uVar12 = (uVar7 + 1) * 0x10000;
        uVar7 = (int)uVar12 >> 0x10;
      } while ((int)uVar7 < 4);
    }
    if (0x10 < *(short *)((int)param_1 + uVar11 * 0x98 + 0x23e)) {
      iVar1 = FUN_000168d8((int)param_1,(short)uVar11);
      uVar9 = (ushort)iVar1;
      bVar13 = uVar9 == 0;
      if (bVar13) {
        uVar9 = (ushort)*(byte *)((int)param_1 + uVar11 * 0x98 + 0x242);
      }
      if (bVar13 && uVar9 == 0) {
        *(undefined1 *)((int)param_1 + uVar11 * 0x98 + 0x242) = 1;
      }
    }
    *(short *)(param_1 + 0x10f) = *(short *)(param_1 + 0x10f) + 1;
    *(short *)(param_1 + uVar11 * 0x26 + 0x90) = *(short *)(param_1 + uVar11 * 0x26 + 0x90) + 1;
    *(short *)(param_1 + 0x10e) = (short)uVar11;
    if (0xc < *(ushort *)(param_1 + 0x10f)) {
      *(short *)((int)param_1 + 0x43a) = *(short *)((int)param_1 + 0x43a) + 1;
      bVar13 = false;
      local_a0 = 0;
      do {
        if (bVar13) break;
        uVar12 = FUN_0001693c((int)param_1,local_a0);
        if ((uVar12 & 0xff) != 0) {
          iVar1 = (int)local_a0;
          bVar13 = *(short *)(param_1 + iVar1 * 0x26 + 0x90) == 0xd;
          if (iVar1 == 2) {
            puVar5 = (undefined1 *)Ordinal_315(0x80);
            if (puVar5 == (undefined1 *)0x0) {
              piVar2 = (int *)0x0;
            }
            else {
              piVar2 = (int *)FUN_00014038(puVar5,bVar13,*(undefined1 *)(param_1 + 0x117),0);
            }
            iVar1 = (**(code **)(*piVar2 + 0xb8))(piVar2);
            (**(code **)(*piVar2 + 4))(piVar2,1);
            iVar8 = *(short *)((int)param_1 + 0x36e) + -0x1a;
            *(short *)((int)param_1 + 0x36e) = (short)iVar8;
            if (iVar1 == 0x400) {
              if ((!bVar13) || (iVar1 = 0x34, *(char *)(param_1 + 0x117) == '\0')) {
                iVar1 = 0x1a;
              }
              sVar6 = (short)((uint)(((iVar8 * 0x10000 >> 0x10) - iVar1) * 0x10000) >> 0x10);
              *(short *)((int)param_1 + 0x36e) = sVar6;
              *(short *)(param_1 + 0xdb) = *(short *)(param_1 + 0xdb) + sVar6;
            }
            else {
              if ((!bVar13) || (sVar6 = 0x34, *(char *)(param_1 + 0x117) == '\0')) {
                sVar6 = 0x1a;
              }
              sVar6 = *(short *)((int)param_1 + 0x23e) + sVar6;
              *(short *)((int)param_1 + 0x23e) = sVar6;
              *(short *)(param_1 + 0x8f) = *(short *)(param_1 + 0x8f) + sVar6;
              if ((!bVar13) || (sVar6 = 0x34, *(char *)(param_1 + 0x117) == '\0')) {
                sVar6 = 0x1a;
              }
              sVar6 = *(short *)((int)param_1 + 0x2d6) + sVar6;
              *(short *)((int)param_1 + 0x2d6) = sVar6;
              *(short *)(param_1 + 0xb5) = *(short *)(param_1 + 0xb5) + sVar6;
              if ((!bVar13) || (sVar6 = 0x34, *(char *)(param_1 + 0x117) == '\0')) {
                sVar6 = 0x1a;
              }
              sVar6 = *(short *)((int)param_1 + 0x406) + sVar6;
              *(short *)((int)param_1 + 0x406) = sVar6;
              *(short *)(param_1 + 0x101) = *(short *)(param_1 + 0x101) + sVar6;
            }
          }
          else {
            iVar8 = 0;
            do {
              if (iVar8 == iVar1) {
                puVar3 = param_1 + iVar8 * 0x26;
                sVar6 = *(short *)((int)puVar3 + 0x23e) + -0x1a;
              }
              else {
                if ((!bVar13) || (sVar6 = 0x34, *(char *)(param_1 + 0x117) == '\0')) {
                  sVar6 = 0x1a;
                }
                puVar3 = param_1 + iVar8 * 0x26;
                sVar6 = *(short *)((int)puVar3 + 0x23e) + sVar6;
              }
              *(short *)((int)puVar3 + 0x23e) = sVar6;
              iVar8 = (iVar8 + 1) * 0x10000 >> 0x10;
              *(short *)(puVar3 + 0x8f) = *(short *)(puVar3 + 0x8f) + sVar6;
            } while (iVar8 < 4);
            if ((!bVar13) || (uVar4 = 0x34, *(char *)(param_1 + 0x117) == '\0')) {
              uVar4 = 0x1a;
            }
            uVar10 = DAT_000197cc;
            if (!bVar13) {
              uVar10 = DAT_000197c8;
            }
            Ordinal_719(auStack_88,DAT_000197c4,param_1 + iVar1 * 0x26 + 0x6b,uVar10,uVar4);
            puVar3 = (undefined4 *)Ordinal_177(&local_98,auStack_88);
            Ordinal_858(0,*puVar3,DAT_000197c0,0);
            Ordinal_297(&local_98);
          }
          bVar13 = true;
        }
        iVar1 = (int)local_a0;
        local_a0 = (short)(iVar1 + 1);
      } while ((iVar1 + 1) * 0x10000 >> 0x10 < 4);
      if (!bVar13) {
        iVar1 = 0;
        do {
          *(short *)(param_1 + iVar1 * 0x26 + 0x8f) =
               *(short *)(param_1 + iVar1 * 0x26 + 0x8f) +
               *(short *)((int)param_1 + iVar1 * 0x98 + 0x23e);
          iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
        } while (iVar1 < 4);
      }
      *param_1 = 4;
    }
  }
  return;
}


// ==== FUN_000199e0 @ 000199e0  size=456  callers=[00012748, 00012ab8]

void FUN_000199e0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  
  iVar2 = (int)*(short *)(param_1 + 0x434);
  if (iVar2 != 0) {
    local_34 = 0x69;
    local_33 = 0;
    local_32 = 0;
    local_31 = 0;
    local_30 = 0x39;
    local_2f = 0;
    local_2e = 0;
    local_2d = 0;
    local_2c = 0xaf;
    local_2b = 0;
    local_2a = 0;
    local_29 = 0;
    local_28 = 0x71;
    local_27 = 0;
    local_26 = 0;
    local_25 = 0;
    local_24 = 0x69;
    local_23 = 0;
    local_22 = 0;
    local_21 = 0;
    local_20 = 0xa9;
    local_1f = 0;
    local_1e = 0;
    local_1d = 0;
    local_1c = 0x23;
    local_1b = 0;
    local_1a = 0;
    local_19 = 0;
    local_18 = 0x71;
    local_17 = 0;
    local_16 = 0;
    local_15 = 0;
    uVar1 = (uint)*(ushort *)(param_1 + iVar2 * 2 + 0x42a);
    iVar2 = param_1 + iVar2 * 8;
    FUN_00018da8(param_1,param_2,*(int *)(iVar2 + 0x404),(short)*(undefined4 *)(iVar2 + 0x408),
                 '\x01',*(int *)(&local_34 + uVar1 * 8),*(int *)(&local_30 + uVar1 * 8));
  }
  return;
}


// ==== FUN_00019ba8 @ 00019ba8  size=508  callers=[00018850]

void FUN_00019ba8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  
  local_34 = 0x69;
  local_33 = 0;
  local_32 = 0;
  local_31 = 0;
  local_30 = 0x39;
  local_2f = 0;
  local_2e = 0;
  local_2d = 0;
  local_2c = 0xaf;
  local_2b = 0;
  local_2a = 0;
  local_29 = 0;
  local_28 = 0x71;
  local_27 = 0;
  local_26 = 0;
  local_25 = 0;
  local_24 = 0x69;
  local_23 = 0;
  local_22 = 0;
  local_21 = 0;
  local_20 = 0xa9;
  local_1f = 0;
  local_1e = 0;
  local_1d = 0;
  local_1c = 0x23;
  local_1b = 0;
  local_1a = 0;
  local_19 = 0;
  local_18 = 0x71;
  local_17 = 0;
  local_16 = 0;
  local_15 = 0;
  if (0 < *(short *)(param_1 + 0x434)) {
    uVar3 = 0;
    do {
      uVar1 = (uint)*(ushort *)(param_1 + uVar3 * 2 + 0x42c);
      iVar2 = param_1 + uVar3 * 8;
      FUN_00018da8(param_1,param_2,*(int *)(iVar2 + 0x40c),(short)*(undefined4 *)(iVar2 + 0x410),
                   '\x01',*(int *)(&local_34 + uVar1 * 8),*(int *)(&local_30 + uVar1 * 8));
      uVar3 = uVar3 + 1 & 0xffff;
    } while ((int)uVar3 < (int)*(short *)(param_1 + 0x434));
  }
  return;
}


// ==== FUN_00019db8 @ 00019db8  size=184  callers=[]

void FUN_00019db8(int param_1,int param_2,short param_3)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  short local_18;
  short local_16;
  short local_14 [2];
  
  local_16 = 0;
  local_14[1] = 0;
  local_14[0] = 0;
  local_18 = 0;
  FUN_00018ab4(param_1,2,&local_16,local_14 + 1,local_14,&local_18);
  iVar1 = (int)param_3;
  bVar4 = *(char *)(param_1 + iVar1 * 8 + 0x2ee) != '\0';
  iVar2 = extraout_r1;
  if (bVar4) {
    iVar2 = local_18 + -2;
  }
  if (!bVar4) {
    iVar2 = (int)local_18;
  }
  piVar3 = (int *)(param_1 + (iVar1 + 0x5d) * 8);
  FUN_00018da8(param_1,param_2,*piVar3,(short)piVar3[1],'\x01',local_16 * iVar1 + (int)local_14[0],
               iVar2);
  return;
}


// ==== FUN_00019e70 @ 00019e70  size=616  callers=[00012748, 00012ab8, 00018850]

void FUN_00019e70(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_74 [8];
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 auStack_5c [8];
  int aiStack_54 [4];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  char local_34 [32];
  
  FUN_00016dcc((int)param_1,(int)aiStack_54);
  iVar2 = *param_1;
  if (iVar2 == 1) {
    iVar2 = FUN_000153f8((int)(param_1 + 0xba));
    iVar2 = 3 - (short)iVar2;
    Ordinal_719(local_34,DAT_0001a0f8,iVar2);
    if (1 < iVar2) {
      Ordinal_1063(local_34,DAT_0001a0f4);
    }
  }
  else {
    if (iVar2 == 2) {
      piVar5 = aiStack_54;
      uVar3 = DAT_00019ef0;
    }
    else {
      if (iVar2 != 6) {
        iVar2 = 0;
        do {
          cVar1 = *(char *)(iVar2 + DAT_00019ec8);
          local_34[iVar2] = cVar1;
          iVar2 = iVar2 + 1;
        } while (cVar1 != '\0');
        goto LAB_00019f28;
      }
      piVar5 = param_1 + 0xb7;
      uVar3 = DAT_00019ee0;
    }
    Ordinal_719(local_34,uVar3,piVar5);
  }
LAB_00019f28:
  local_68 = 0;
  local_6c = DAT_0001a0f0;
  Ordinal_982(&local_6c,0x6e,DAT_0001a0ec,param_2);
  uVar3 = (**(code **)(*param_2 + 0x30))(param_2,&local_6c);
  Ordinal_2316(param_2,1);
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,0xffffff);
  piVar5 = (int *)Ordinal_177(auStack_74,local_34);
  piVar5 = (int *)FUN_00011d18((int)param_2,auStack_5c,piVar5);
  local_64 = *piVar5;
  local_60 = (undefined1)piVar5[1];
  local_5f = *(undefined1 *)((int)piVar5 + 5);
  local_5e = *(undefined1 *)((int)piVar5 + 6);
  local_5d = *(undefined1 *)((int)piVar5 + 7);
  Ordinal_297(auStack_74);
  local_3c = *DAT_0001a0e8;
  iVar2 = DAT_0001a0e8[2] - local_3c;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  iVar6 = local_64;
  if (local_64 < 0) {
    iVar6 = local_64 + 1;
  }
  local_44 = ((iVar2 >> 1) - (iVar6 >> 1)) + local_3c;
  local_40 = DAT_0001a0e8[1];
  local_3c = (iVar6 >> 1) + (iVar2 >> 1) + local_3c;
  local_38 = DAT_0001a0e8[3];
  piVar5 = (int *)Ordinal_177(auStack_74,local_34);
  (**(code **)(*param_2 + 0x48))(param_2,*piVar5,*(undefined4 *)(*piVar5 + -8),&local_44,0x100);
  Ordinal_297(auStack_74);
  (**(code **)(*param_2 + 0x38))(param_2,uVar4);
  (**(code **)(*param_2 + 0x30))(param_2,uVar3);
  Ordinal_1040(&local_6c);
  local_6c = DAT_0001a0e4;
  Ordinal_1040(&local_6c);
  return;
}


// ==== FUN_0001a0fc @ 0001a0fc  size=148  callers=[00012748, 00013584]

void FUN_0001a0fc(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 extraout_r1;
  
  *(undefined2 *)((int)param_1 + 0x43a) = 0;
  FUN_00016e90(param_1);
  iVar1 = 0;
  do {
    *(undefined2 *)(param_1 + iVar1 * 0x26 + 0x8f) = 0;
    iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
  } while (iVar1 < 4);
  if (*(char *)((int)param_1 + 0x44a) != '\0') {
    uVar2 = Ordinal_1053();
    (*(code *)*DAT_0001a190)(5,uVar2);
    *(undefined2 *)(param_1 + 0x112) = extraout_r1;
  }
  return;
}


// ==== FUN_0001a194 @ 0001a194  size=524  callers=[00012748]

undefined4 FUN_0001a194(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [100];
  
  iVar4 = 0;
  iVar2 = 0;
  do {
    if (99 < *(short *)(iVar2 * 0x98 + param_1 + 0x23c)) break;
    iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
  } while (iVar2 < 4);
  if ((short)iVar2 == 4) {
LAB_0001a318:
    uVar3 = 0;
  }
  else {
    iVar2 = 1;
    do {
      if (*(short *)(iVar2 * 0x98 + param_1 + 0x23c) <
          *(short *)((short)iVar4 * 0x98 + param_1 + 0x23c)) {
        iVar4 = iVar2;
      }
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < 4);
    iVar2 = (int)(short)iVar4;
    iVar4 = 0;
    do {
      if ((iVar4 != iVar2) &&
         (*(short *)(iVar4 * 0x98 + param_1 + 0x23c) == *(short *)(iVar2 * 0x98 + param_1 + 0x23c)))
      {
        puVar1 = (undefined4 *)Ordinal_177(auStack_78,DAT_0001a324);
        uVar3 = *puVar1;
        puVar1 = (undefined4 *)Ordinal_177(auStack_7c,DAT_0001a320);
        Ordinal_858(0,*puVar1,uVar3,0);
        Ordinal_297(auStack_7c);
        Ordinal_297(auStack_78);
        goto LAB_0001a318;
      }
      iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
    } while (iVar4 < 4);
    if (iVar2 == 2) {
      Ordinal_719(auStack_74,DAT_0001a3b0,(int)*(short *)(param_1 + 0x36c),
                  (int)*(short *)(param_1 + 0x23c),(int)*(short *)(param_1 + 0x2d4),
                  (int)*(short *)(param_1 + 0x404));
    }
    else {
      iVar2 = iVar2 * 0x98 + param_1;
      Ordinal_719(auStack_74,DAT_0001a2d4,iVar2 + 0x1ac,(int)*(short *)(iVar2 + 0x23c),
                  (int)*(short *)(param_1 + 0x36c));
    }
    puVar1 = (undefined4 *)Ordinal_177(auStack_7c,DAT_0001a3ac);
    uVar3 = *puVar1;
    puVar1 = (undefined4 *)Ordinal_177(auStack_78,auStack_74);
    Ordinal_858(0,*puVar1,uVar3,0);
    Ordinal_297(auStack_78);
    Ordinal_297(auStack_7c);
    uVar3 = 1;
  }
  return uVar3;
}


// ==== FUN_0001a3b4 @ 0001a3b4  size=104  callers=[]

undefined1 * FUN_0001a3b4(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001a420;
  *param_1 = (char)DAT_0001a420;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_0001a41c;
  *param_1 = (char)DAT_0001a41c;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== Ordinal_1079 @ 0001a448  size=8  callers=[00011f60, 00012748, 000132a8, 0001339c, 00013490, 0001363c]

void Ordinal_1079(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a450)();
  return;
}


// ==== Ordinal_77 @ 0001a61c  size=8  callers=[00011000, 00011f00, 00013c9c, 00014038]

void Ordinal_77(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a624)();
  return;
}


// ==== Ordinal_317 @ 0001a628  size=8  callers=[00011bc8, 00011bec, 00011c38, 00011ca8, 00011fa8, 00011fcc, 000120c8, 0001388c, 00013934, 00013c78, 00014014, 00014198, 0001a3b4]

void Ordinal_317(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a630)();
  return;
}


// ==== Ordinal_231 @ 0001a634  size=8  callers=[00011bc8, 00011f60, 00011fcc, 00012748, 000132a8, 0001339c, 00013490, 0001363c, 00014014, 00014198]

void Ordinal_231(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a63c)();
  return;
}


// ==== Ordinal_1673 @ 0001a640  size=8  callers=[000110e4]

void Ordinal_1673(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a648)();
  return;
}


// ==== Ordinal_1273 @ 0001a64c  size=8  callers=[000110e4, 000111a0, 000140a8]

void Ordinal_1273(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a654)();
  return;
}


// ==== Ordinal_1939 @ 0001a658  size=8  callers=[000110e4, 00011f88, 000140a8]

void Ordinal_1939(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a660)();
  return;
}


// ==== Ordinal_2446 @ 0001a664  size=8  callers=[000111a0, 00011e44]

void Ordinal_2446(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a66c)();
  return;
}


// ==== Ordinal_846 @ 0001a670  size=8  callers=[000112e0]

void Ordinal_846(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a678)();
  return;
}


// ==== Ordinal_1691 @ 0001a67c  size=8  callers=[00011588]

void Ordinal_1691(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a684)();
  return;
}


// ==== Ordinal_271 @ 0001a6b8  size=8  callers=[000118f8, 000124d8, 00013d04]

void Ordinal_271(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a6c0)();
  return;
}


// ==== Ordinal_297 @ 0001a6c4  size=8  callers=[000118f8, 00013d04, 000140a8, 000188b4, 000193c4, 00019e70, 0001a194]

void Ordinal_297(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a6cc)();
  return;
}


// ==== Ordinal_177 @ 0001a6d0  size=8  callers=[000118f8, 00013d04, 000140a8, 000188b4, 000193c4, 00019e70, 0001a194]

void Ordinal_177(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a6d8)();
  return;
}


// ==== Ordinal_1040 @ 0001a6dc  size=8  callers=[000118f8, 00011c38, 00011ca8, 000123ec, 00013934, 0001851c, 00018610, 000188b4, 00019e70, 0001a3b4]

void Ordinal_1040(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a6e4)();
  return;
}


// ==== Ordinal_2267 @ 0001a6e8  size=8  callers=[000118f8]

void Ordinal_2267(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a6f0)();
  return;
}


// ==== Ordinal_800 @ 0001a6f4  size=8  callers=[000118f8, 000124d8, 000139a4]

void Ordinal_800(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a6fc)();
  return;
}


// ==== Ordinal_2510 @ 0001a700  size=8  callers=[000118f8]

void Ordinal_2510(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a708)();
  return;
}


// ==== Ordinal_136 @ 0001a70c  size=8  callers=[000118f8, 000124d8, 00013d04]

void Ordinal_136(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a714)();
  return;
}


// ==== Ordinal_201 @ 0001a820  size=8  callers=[00011e20]

void Ordinal_201(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a828)();
  return;
}


// ==== Ordinal_310 @ 0001a82c  size=8  callers=[00011fa8]

void Ordinal_310(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a834)();
  return;
}


// ==== Ordinal_228 @ 0001a838  size=8  callers=[00011e44]

void Ordinal_228(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a840)();
  return;
}


// ==== Ordinal_2114 @ 0001a844  size=8  callers=[00011e44]

void Ordinal_2114(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a84c)();
  return;
}


// ==== Ordinal_2075 @ 0001a850  size=8  callers=[00011e44]

void Ordinal_2075(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a858)();
  return;
}


// ==== Ordinal_72 @ 0001a85c  size=8  callers=[00011e44]

void Ordinal_72(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a864)();
  return;
}


// ==== Ordinal_572 @ 0001a868  size=8  callers=[00011e44]

void Ordinal_572(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a870)();
  return;
}


// ==== Ordinal_162 @ 0001a874  size=8  callers=[00011e44]

void Ordinal_162(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a87c)();
  return;
}


// ==== Ordinal_315 @ 0001a880  size=8  callers=[00011e44, 00011ff0, 000121b0, 00012300, 000139dc, 00013c28, 000193c4]

void Ordinal_315(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a888)();
  return;
}


// ==== Ordinal_2400 @ 0001a88c  size=8  callers=[00011e44]

void Ordinal_2400(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a894)();
  return;
}


// ==== Ordinal_840 @ 0001a898  size=8  callers=[00011f88]

void Ordinal_840(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a8a0)();
  return;
}


// ==== Ordinal_85 @ 0001a9b8  size=8  callers=[0001204c]

void Ordinal_85(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a9c0)();
  return;
}


// ==== Ordinal_1961 @ 0001a9d0  size=8  callers=[000120ac]

void Ordinal_1961(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001a9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001a9d8)();
  return;
}


// ==== Ordinal_76 @ 0001aa90  size=8  callers=[00012300, 00018610]

void Ordinal_76(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001aa94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001aa98)();
  return;
}


// ==== Ordinal_200 @ 0001aa9c  size=8  callers=[00012300]

void Ordinal_200(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001aaa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001aaa4)();
  return;
}


// ==== Ordinal_2264 @ 0001aac0  size=8  callers=[000124d8, 00012748, 00012ab8, 00018610]

void Ordinal_2264(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001aac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001aac8)();
  return;
}


// ==== Ordinal_799 @ 0001aacc  size=8  callers=[000124d8, 00018610]

void Ordinal_799(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001aad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001aad4)();
  return;
}


// ==== Ordinal_1021 @ 0001aad8  size=8  callers=[00012748]

void Ordinal_1021(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001aadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001aae0)();
  return;
}


// ==== Ordinal_1760 @ 0001aae4  size=8  callers=[00013584, 000135e0]

void Ordinal_1760(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001aae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001aaec)();
  return;
}


// ==== Ordinal_628 @ 0001ab08  size=8  callers=[000139a4]

void Ordinal_628(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ab0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ab10)();
  return;
}


// ==== Ordinal_48 @ 0001ac04  size=8  callers=[00013a38]

void Ordinal_48(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ac08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ac0c)();
  return;
}


// ==== Ordinal_103 @ 0001ac10  size=8  callers=[00013a38]

void Ordinal_103(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ac14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ac18)();
  return;
}


// ==== Ordinal_219 @ 0001ac28  size=8  callers=[00013a78]

void Ordinal_219(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ac2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ac30)();
  return;
}


// ==== Ordinal_2313 @ 0001ac34  size=8  callers=[00013ab8]

void Ordinal_2313(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ac38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ac3c)();
  return;
}


// ==== Ordinal_562 @ 0001ac40  size=8  callers=[00013ab8]

void Ordinal_562(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ac44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ac48)();
  return;
}


// ==== Ordinal_1676 @ 0001ac4c  size=8  callers=[00013ab8]

void Ordinal_1676(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ac54)();
  return;
}


// ==== Ordinal_1850 @ 0001ac58  size=8  callers=[00013ab8]

void Ordinal_1850(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ac5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ac60)();
  return;
}


// ==== Ordinal_2093 @ 0001ac64  size=8  callers=[00013c10]

void Ordinal_2093(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ac68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ac6c)();
  return;
}


// ==== Ordinal_644 @ 0001ac70  size=8  callers=[00013c28, 0001b074]

void Ordinal_644(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ac74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ac78)();
  return;
}


// ==== Ordinal_2443 @ 0001ac7c  size=8  callers=[000140a8]

void Ordinal_2443(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ac80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ac84)();
  return;
}


// ==== Ordinal_230 @ 0001ac94  size=8  callers=[00018610]

void Ordinal_230(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ac98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ac9c)();
  return;
}


// ==== Ordinal_982 @ 0001acac  size=8  callers=[000188b4, 00019e70]

void Ordinal_982(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001acb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001acb4)();
  return;
}


// ==== Ordinal_2316 @ 0001acb8  size=8  callers=[000188b4, 00019e70]

void Ordinal_2316(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001acbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001acc0)();
  return;
}


// ==== Ordinal_868 @ 0001acc4  size=8  callers=[000110e4, 0001129c, 00013ab8]

void Ordinal_868(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001acc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001accc)();
  return;
}


// ==== Ordinal_250 @ 0001acd0  size=8  callers=[000117f4, 00012748, 00012ab8, 00013584, 000135e0]

void Ordinal_250(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001acd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001acd8)();
  return;
}


// ==== Ordinal_249 @ 0001ace8  size=8  callers=[000117f4, 000118f8]

void Ordinal_249(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001acec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001acf0)();
  return;
}


// ==== Ordinal_941 @ 0001acf4  size=8  callers=[000118f8]

void Ordinal_941(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001acf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001acfc)();
  return;
}


// ==== Ordinal_98 @ 0001ad00  size=8  callers=[000118f8]

void Ordinal_98(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ad04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ad08)();
  return;
}


// ==== Ordinal_897 @ 0001ad0c  size=8  callers=[00011d18]

void Ordinal_897(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ad14)();
  return;
}


// ==== Ordinal_267 @ 0001ad24  size=8  callers=[00011e44, 00012748, 00012ab8]

void Ordinal_267(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ad2c)();
  return;
}


// ==== Ordinal_535 @ 0001ad30  size=8  callers=[0001218c, 00012748, 00012ab8, 00018700]

void Ordinal_535(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ad34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ad38)();
  return;
}


// ==== Ordinal_1118 @ 0001ad3c  size=8  callers=[00012210, 000122a0]

void Ordinal_1118(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ad40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ad44)();
  return;
}


// ==== Ordinal_1120 @ 0001ad48  size=8  callers=[00012210]

void Ordinal_1120(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ad4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ad50)();
  return;
}


// ==== Ordinal_1113 @ 0001ad54  size=8  callers=[00012210, 000122a0]

void Ordinal_1113(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ad58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ad5c)();
  return;
}


// ==== Ordinal_1065 @ 0001ad60  size=8  callers=[00012210]

void Ordinal_1065(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ad64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ad68)();
  return;
}


// ==== Ordinal_1121 @ 0001ad6c  size=8  callers=[000122a0]

void Ordinal_1121(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ad74)();
  return;
}


// ==== Ordinal_1053 @ 0001ad78  size=8  callers=[000136a8, 00018700, 0001a0fc]

void Ordinal_1053(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ad7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ad80)();
  return;
}


// ==== Ordinal_902 @ 0001ad84  size=8  callers=[000124d8]

void Ordinal_902(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ad88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ad8c)();
  return;
}


// ==== Ordinal_910 @ 0001ad90  size=8  callers=[000124d8, 00018610]

void Ordinal_910(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ad94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ad98)();
  return;
}


// ==== Ordinal_903 @ 0001ad9c  size=8  callers=[000124d8]

void Ordinal_903(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ada0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ada4)();
  return;
}


// ==== Ordinal_875 @ 0001ada8  size=8  callers=[000126d0]

void Ordinal_875(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001adac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001adb0)();
  return;
}


// ==== Ordinal_876 @ 0001adb4  size=8  callers=[0001270c]

void Ordinal_876(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001adb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001adbc)();
  return;
}


// ==== Ordinal_906 @ 0001adcc  size=8  callers=[00013030, 0001851c, 000185ac]

void Ordinal_906(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001add4)();
  return;
}


// ==== Ordinal_493 @ 0001add8  size=8  callers=[00013260]

void Ordinal_493(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001addc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ade0)();
  return;
}


// ==== Ordinal_873 @ 0001ade4  size=8  callers=[000139a4]

void Ordinal_873(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ade8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001adec)();
  return;
}


// ==== Ordinal_61 @ 0001adf0  size=8  callers=[00013c28]

void Ordinal_61(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001adf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001adf8)();
  return;
}


// ==== Ordinal_63 @ 0001adfc  size=8  callers=[00013c28]

void Ordinal_63(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ae00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ae04)();
  return;
}


// ==== Ordinal_874 @ 0001ae08  size=8  callers=[00013c28]

void Ordinal_874(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ae0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ae10)();
  return;
}


// ==== Ordinal_719 @ 0001ae14  size=8  callers=[00013d04, 000140a8, 000188b4, 000193c4, 00019e70, 0001a194]

void Ordinal_719(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ae18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ae1c)();
  return;
}


// ==== Ordinal_1046 @ 0001ae20  size=8  callers=[00014370, 000148dc, 0001525c]

void Ordinal_1046(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ae24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ae28)();
  return;
}


// ==== Ordinal_905 @ 0001ae2c  size=8  callers=[00018610]

void Ordinal_905(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ae30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ae34)();
  return;
}


// ==== Ordinal_1061 @ 0001ae38  size=8  callers=[00018700]

void Ordinal_1061(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ae3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ae40)();
  return;
}


// ==== Ordinal_858 @ 0001ae44  size=8  callers=[00018f30, 000193c4, 0001a194]

void Ordinal_858(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ae4c)();
  return;
}


// ==== Ordinal_1063 @ 0001ae50  size=8  callers=[00019e70]

void Ordinal_1063(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001ae54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001ae58)();
  return;
}


// ==== entry @ 0001ae5c  size=212  callers=[]

void entry(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_0001af50();
  uVar2 = Ordinal_775(param_1,param_2,param_3,param_4);
  *DAT_0001b000 = 0;
  puVar1 = DAT_0001affc;
  puVar3 = (undefined4 *)*DAT_0001affc;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*DAT_0001aff8;
    while (puVar4 = puVar4 + -1, puVar3 <= puVar4) {
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)();
        puVar3 = (undefined4 *)*puVar1;
      }
    }
  }
  FUN_0001af80(DAT_0001b068,DAT_0001b06c);
  FUN_0001af80(DAT_0001b060,DAT_0001b064);
  (*DAT_0001b05c)(0x42,uVar2);
  return;
}


// ==== FUN_0001ae90 @ 0001ae90  size=160  callers=[0001af38]

undefined4 FUN_0001ae90(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = DAT_0001aee0;
  uVar3 = Ordinal_35(*DAT_0001aee0);
  piVar1 = DAT_0001aedc;
  puVar5 = (undefined4 *)*DAT_0001aedc;
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


// ==== FUN_0001af38 @ 0001af38  size=24  callers=[00011e10]

undefined4 FUN_0001af38(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001ae90(param_1);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ==== FUN_0001af50 @ 0001af50  size=32  callers=[0001ae5c]

void FUN_0001af50(void)

{
  FUN_0001af80(DAT_0001af78,DAT_0001af7c);
  FUN_0001af80(DAT_0001af70,DAT_0001af74);
  return;
}


// ==== FUN_0001af80 @ 0001af80  size=48  callers=[0001ae5c, 0001af50]

void FUN_0001af80(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


// ==== Ordinal_775 @ 0001b070  size=4  callers=[0001ae5c]

void Ordinal_775(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001b0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001b0c8)();
  return;
}


// ==== FUN_0001b074 @ 0001b074  size=36  callers=[0001b09c]

undefined4 FUN_0001b074(undefined1 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Ordinal_644();
  *(undefined1 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x2040) = param_2;
  return 1;
}


// ==== FUN_0001b09c @ 0001b09c  size=32  callers=[]

void FUN_0001b09c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001b074(0,0x600);
  *DAT_0001b0bc = (char)uVar1;
  return;
}


// ==== Ordinal_775 @ 0001b0c0  size=8  callers=[]

void Ordinal_775(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001b0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001b0c8)();
  return;
}


// ==== Ordinal_34 @ 0001b0cc  size=8  callers=[0001ae90]

void Ordinal_34(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001b0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001b0d4)();
  return;
}


// ==== Ordinal_33 @ 0001b0d8  size=8  callers=[0001ae90]

void Ordinal_33(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001b0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001b0e0)();
  return;
}


// ==== Ordinal_35 @ 0001b0e4  size=8  callers=[0001ae90]

void Ordinal_35(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001b0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001b0ec)();
  return;
}


