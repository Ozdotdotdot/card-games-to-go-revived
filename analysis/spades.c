// ==== FUN_00011000 @ 00011000  size=64  callers=[00014db4]

undefined1 * FUN_00011000(undefined1 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  Ordinal_77(param_1,0x84);
  uVar1 = DAT_00011040;
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_00011064 @ 00011064  size=56  callers=[]

void FUN_00011064(int param_1)

{
  undefined1 auStack_60 [88];
  
  Ordinal_136(auStack_60,param_1);
  FUN_0001adb8(*(int **)(param_1 + 0x7c),(int)auStack_60,2);
  Ordinal_271(auStack_60);
  return;
}


// ==== FUN_0001109c @ 0001109c  size=616  callers=[]

undefined4 FUN_0001109c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 local_58 [52];
  
  Ordinal_1939();
  uVar3 = DAT_00011138;
  uVar2 = DAT_00011134;
  uVar1 = DAT_00011130;
  uVar7 = DAT_0001112c;
  iVar5 = *(int *)(param_1 + 0x7c);
  local_58[0] = 0;
  if (*(short *)(iVar5 + 0x4ac) != 0) {
    iVar10 = 0;
    do {
      if (iVar10 != 2) {
        uVar6 = FUN_0001aae0(iVar5,(short)iVar10);
        if ((uVar6 & 0xff) == 0) {
          if (iVar10 == 0) {
            uVar4 = 0x41;
          }
          else {
            uVar4 = 0x52;
            if (iVar10 != 1) {
              uVar4 = 0x4c;
            }
          }
          Ordinal_719(auStack_70,uVar3,uVar4);
        }
        else {
          if (((iVar10 == 0) && (uVar9 = uVar7, *(char *)(*(int *)(param_1 + 0x7c) + 0x4b0) != '\0')
              ) || (uVar9 = uVar1, iVar10 == 0)) {
            uVar4 = 0x41;
          }
          else {
            uVar4 = 0x52;
            if (iVar10 != 1) {
              uVar4 = 0x4c;
            }
          }
          Ordinal_719(auStack_70,uVar2,uVar4,uVar9,
                      *(undefined2 *)(iVar10 * 0xb0 + *(int *)(param_1 + 0x7c) + 0x256));
        }
        Ordinal_1063(local_58,auStack_70);
      }
      iVar5 = *(int *)(param_1 + 0x7c);
      iVar10 = (iVar10 + 1) * 0x10000 >> 0x10;
    } while (iVar10 < (int)(uint)*(ushort *)(iVar5 + 0x4ac));
  }
  uVar7 = Ordinal_1273(param_1,0x3fa);
  puVar8 = (undefined4 *)Ordinal_177(auStack_78,local_58);
  Ordinal_2443(uVar7,*puVar8);
  Ordinal_297(auStack_78);
  uVar7 = Ordinal_1273(param_1,0x3fb);
  Ordinal_719(local_58,DAT_000112f4);
  puVar8 = (undefined4 *)Ordinal_177(auStack_78,local_58);
  Ordinal_2443(uVar7,*puVar8);
  Ordinal_297(auStack_78);
  if (*(short *)(*(int *)(param_1 + 0x7c) + 0x4ac) == 3) {
    iVar5 = 0x3f6;
    do {
      uVar7 = Ordinal_1273(param_1,iVar5);
      Ordinal_2446(uVar7,1);
      iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
    } while (iVar5 < 0x3fa);
  }
  iVar5 = *(int *)(param_1 + 0x7c);
  if (*(int *)(iVar5 + 0x4b8) < 2) {
    iVar5 = 0x3e9;
  }
  else {
    FUN_00017cb0(iVar5 + 0x30c,*(short *)(iVar5 + 0x4ac),*(int *)(iVar5 + 0x4b8));
    iVar5 = *(ushort *)(*(int *)(param_1 + 0x7c) + 0x3b6) + 1000;
  }
  Ordinal_846(param_1,iVar5,1);
  return 1;
}


// ==== FUN_0001131c @ 0001131c  size=124  callers=[]

void FUN_0001131c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1000;
  do {
    iVar1 = Ordinal_1691(param_1,iVar2);
    if (iVar1 != 0) {
      *(short *)(*(int *)(param_1 + 0x7c) + 0x3b6) = (short)iVar2 + -1000;
      *(undefined2 *)(*(int *)(param_1 + 0x7c) + 0x3b8) =
           *(undefined2 *)(*(int *)(param_1 + 0x7c) + 0x3b6);
      break;
    }
    iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
  } while (iVar2 < 0x3fa);
                    /* WARNING: Could not recover jumptable at 0x0001c188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c18c)(param_1);
  return;
}


// ==== FUN_00011398 @ 00011398  size=36  callers=[]

undefined4 FUN_00011398(undefined4 param_1,uint param_2)

{
  Ordinal_231();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_000113e0 @ 000113e0  size=196  callers=[00015890, 000159d8, 00015c4c, 00015d64]

undefined1 *
FUN_000113e0(undefined1 *param_1,uint param_2,undefined2 *param_3,char *param_4,undefined4 param_5,
            undefined4 param_6,char *param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  
  Ordinal_77(param_1,0xee,param_13);
  uVar2 = DAT_000114a4;
  uVar3 = 4;
  *param_1 = (char)DAT_000114a4;
  param_1[1] = (char)((uint)uVar2 >> 8);
  param_1[2] = (char)((uint)uVar2 >> 0x10);
  param_1[3] = (char)((uint)uVar2 >> 0x18);
  *(uint *)(param_1 + 0x7c) = param_2 & 0xffff;
  cVar1 = *param_7;
  *(char **)(param_1 + 0xa0) = param_7;
  if (cVar1 == '\0') {
    uVar3 = 3;
  }
  *(undefined2 **)(param_1 + 0x8c) = param_3;
  *(undefined4 *)(param_1 + 0x94) = param_5;
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  *(undefined4 *)(param_1 + 0x9c) = param_6;
  *(char **)(param_1 + 0x90) = param_4;
  *(undefined4 *)(param_1 + 0x98) = param_8;
  *(undefined4 *)(param_1 + 0xa4) = param_9;
  *(undefined4 *)(param_1 + 0xa8) = param_10;
  *(undefined4 *)(param_1 + 0xac) = param_11;
  *(undefined4 *)(param_1 + 0xb0) = param_12;
  uVar4 = 5;
  if (*param_4 == '\0') {
    uVar4 = *param_3;
  }
  *(undefined2 *)(param_1 + 0x88) = uVar4;
  return param_1;
}


// ==== FUN_000114c8 @ 000114c8  size=176  callers=[]

undefined4 FUN_000114c8(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  Ordinal_1939();
  uVar2 = Ordinal_1273(param_1,0x3ee);
  puVar1 = PTR_u_Display_00011580;
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  Ordinal_1673(uVar2,1,0,puVar1,0,0);
  Ordinal_1673(*(undefined4 *)(param_1 + 0x84),1,1,PTR_u_Rules_0001157c,0,0);
  Ordinal_1673(*(undefined4 *)(param_1 + 0x84),1,2,PTR_u_Bidding_00011578,0,0);
  Ordinal_868(*(undefined4 *)(*(int *)(param_1 + 0x84) + 0x20),0x130c,
              *(undefined4 *)(param_1 + 0x7c),0);
  FUN_00011584(param_1);
  FUN_0001173c(param_1);
  return 1;
}


// ==== FUN_00011584 @ 00011584  size=332  callers=[000114c8, 000116f8]

void FUN_00011584(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_000116dc;
  uVar3 = 0;
  do {
    uVar4 = Ordinal_1273(param_1,*(undefined4 *)(iVar2 + (short)uVar3 * 4));
    Ordinal_2446(uVar4,*(int *)(param_1 + 0x7c) == 0);
    iVar1 = DAT_000116d8;
    uVar3 = ((short)uVar3 + 1) * 0x10000 >> 0x10;
  } while ((uVar3 & 0xffff) < 6);
  uVar3 = 0;
  do {
    uVar4 = Ordinal_1273(param_1,*(undefined4 *)(iVar1 + (short)uVar3 * 4));
    Ordinal_2446(uVar4,*(int *)(param_1 + 0x7c) == 1);
    iVar2 = DAT_000116d4;
    uVar3 = ((short)uVar3 + 1) * 0x10000 >> 0x10;
  } while ((uVar3 & 0xffff) < 0xb);
  uVar3 = 0;
  do {
    uVar4 = Ordinal_1273(param_1,*(undefined4 *)(iVar2 + (short)uVar3 * 4));
    if ((*(int *)(param_1 + 0x7c) != 1) || (uVar5 = 1, *(int *)(param_1 + 0x80) != 3)) {
      uVar5 = 0;
    }
    Ordinal_2446(uVar4,uVar5);
    iVar1 = DAT_000116d0;
    uVar3 = ((short)uVar3 + 1) * 0x10000 >> 0x10;
  } while ((uVar3 & 0xffff) < 6);
  uVar3 = 0;
  do {
    uVar4 = Ordinal_1273(param_1,*(undefined4 *)(iVar1 + (short)uVar3 * 4));
    Ordinal_2446(uVar4,*(int *)(param_1 + 0x7c) == 2);
    uVar3 = ((short)uVar3 + 1) * 0x10000 >> 0x10;
  } while ((uVar3 & 0xffff) < 6);
  return;
}


// ==== FUN_000116f8 @ 000116f8  size=68  callers=[]

void FUN_000116f8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = Ordinal_868(*(undefined4 *)(*(int *)(param_1 + 0x84) + 0x20),0x130b,0,0);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  FUN_00011584(param_1);
  Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,1);
  return;
}


// ==== FUN_0001173c @ 0001173c  size=776  callers=[000114c8]

void FUN_0001173c(int param_1)

{
  Ordinal_846(param_1,0x3ea,**(int **)(param_1 + 0x9c) == 0);
  Ordinal_846(param_1,0x3eb,**(int **)(param_1 + 0x9c) == 1);
  Ordinal_846(param_1,0x3ec,**(int **)(param_1 + 0x9c) == 2);
  Ordinal_846(param_1,0x3ed,**(char **)(param_1 + 0x94) == '\x01');
  Ordinal_846(param_1,1000,**(char **)(param_1 + 0x98) == '\0');
  Ordinal_846(param_1,0x3e9,**(char **)(param_1 + 0x98) == '\x01');
  Ordinal_846(param_1,0x3fd,**(short **)(param_1 + 0xa8) == 300);
  Ordinal_846(param_1,0x3fe,**(short **)(param_1 + 0xa8) == 500);
  Ordinal_846(param_1,0x3ff,**(short **)(param_1 + 0xa8) == 1000);
  Ordinal_846(param_1,0x401,**(short **)(param_1 + 0xac) == -200);
  Ordinal_846(param_1,0x402,**(short **)(param_1 + 0xac) == -100);
  Ordinal_846(param_1,0x403,**(short **)(param_1 + 0xac) == 0);
  Ordinal_846(param_1,0x405,**(char **)(param_1 + 0xa0) == '\0');
  Ordinal_846(param_1,0x406,**(char **)(param_1 + 0xa0) == '\x01');
  Ordinal_846(param_1,0x408,**(short **)(param_1 + 0xa4) == 2);
  Ordinal_846(param_1,0x409,**(short **)(param_1 + 0xa4) == 3);
  Ordinal_846(param_1,0x40c,**(int **)(param_1 + 0xb0) == 0);
  Ordinal_846(param_1,0x40d,**(int **)(param_1 + 0xb0) == 1);
  Ordinal_846(param_1,0x40e,**(int **)(param_1 + 0xb0) == 2);
  Ordinal_846(param_1,0x40f,**(int **)(param_1 + 0xb0) == 3);
  Ordinal_846(param_1,0x410,**(int **)(param_1 + 0xb0) == 4);
  return;
}


// ==== FUN_00011a44 @ 00011a44  size=580  callers=[00011c88]

void FUN_00011a44(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  
  if (*(short *)(param_1 + 0x88) == 5) {
    **(undefined1 **)(param_1 + 0x90) = 1;
  }
  else {
    **(undefined1 **)(param_1 + 0x90) = 0;
    **(undefined2 **)(param_1 + 0x8c) = *(undefined2 *)(param_1 + 0x88);
  }
  iVar1 = Ordinal_1691(param_1,0x3ea);
  if (iVar1 == 0) {
    iVar1 = Ordinal_1691(param_1,0x3eb);
    if (iVar1 == 0) {
      iVar1 = Ordinal_1691(param_1,0x3ec);
      if (iVar1 != 0) {
        **(undefined4 **)(param_1 + 0x9c) = 2;
      }
    }
    else {
      **(undefined4 **)(param_1 + 0x9c) = 1;
    }
  }
  else {
    **(undefined4 **)(param_1 + 0x9c) = 0;
  }
  iVar1 = Ordinal_1691(param_1,0x3ed);
  *(bool *)*(undefined4 *)(param_1 + 0x94) = iVar1 != 0;
  iVar1 = Ordinal_1691(param_1,0x3e9);
  *(bool *)*(undefined4 *)(param_1 + 0x98) = iVar1 != 0;
  iVar1 = Ordinal_1691(param_1,0x3fd);
  if (iVar1 == 0) {
    iVar1 = Ordinal_1691(param_1,0x3fe);
    uVar2 = 500;
    if (iVar1 == 0) {
      uVar2 = 1000;
    }
  }
  else {
    uVar2 = 300;
  }
  **(undefined2 **)(param_1 + 0xa8) = uVar2;
  iVar1 = Ordinal_1691(param_1,0x401);
  if (iVar1 == 0) {
    iVar1 = Ordinal_1691(param_1,0x402);
    puVar3 = *(undefined2 **)(param_1 + 0xac);
    if (iVar1 == 0) {
      *puVar3 = 0;
      goto LAB_00011ba4;
    }
    uVar2 = 0xff9c;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0xac);
    uVar2 = 0xff38;
  }
  *puVar3 = uVar2;
LAB_00011ba4:
  iVar1 = Ordinal_1691(param_1,0x405);
  if (iVar1 == 0) {
    **(undefined1 **)(param_1 + 0xa0) = 1;
  }
  else {
    **(undefined1 **)(param_1 + 0xa0) = 0;
  }
  iVar1 = Ordinal_1691(param_1,0x408);
  if (iVar1 == 0) {
    **(undefined2 **)(param_1 + 0xa4) = 3;
  }
  else {
    **(undefined2 **)(param_1 + 0xa4) = 2;
  }
  iVar1 = Ordinal_1691(param_1,0x40c);
  if (iVar1 == 0) {
    iVar1 = Ordinal_1691(param_1,0x40d);
    if (iVar1 == 0) {
      iVar1 = Ordinal_1691(param_1,0x40e);
      if (iVar1 == 0) {
        iVar1 = Ordinal_1691(param_1,0x40f);
        if (iVar1 == 0) {
          iVar1 = Ordinal_1691(param_1,0x410);
          if (iVar1 != 0) {
            **(undefined4 **)(param_1 + 0xb0) = 4;
          }
        }
        else {
          **(undefined4 **)(param_1 + 0xb0) = 3;
        }
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
  return;
}


// ==== FUN_00011c88 @ 00011c88  size=32  callers=[]

void FUN_00011c88(int param_1)

{
  FUN_00011a44(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001c188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c18c)(param_1);
  return;
}


// ==== FUN_00011ca8 @ 00011ca8  size=260  callers=[]

void FUN_00011ca8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  func_0x0001c7f0(*(undefined4 *)(param_1 + 0x20),aiStack_40);
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
    iVar3 = func_0x0001c7e4(auStack_30,param_3,param_4);
    if (iVar3 != 0) break;
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 1;
    if (5 < iVar9 * 0x10000 >> 0x10) {
      return;
    }
  }
  if ((uint)*(ushort *)(param_1 + 0x88) == (int)(short)iVar9) {
    return;
  }
  *(short *)(param_1 + 0x88) = (short)iVar9;
  Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,1);
  return;
}


// ==== FUN_00011db4 @ 00011db4  size=1008  callers=[]

void FUN_00011db4(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  short sVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  int iStack00000000;
  short sStack_13c;
  undefined *puStack_134;
  undefined4 uStack_130;
  undefined1 auStack_12c [8];
  int iStack_124;
  int iStack_120;
  undefined1 auStack_11c [8];
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  int iStack_d8;
  int aiStack_d4 [2];
  int iStack_cc;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [52];
  
  iStack00000000 = param_1;
  Ordinal_136(&iStack_c4,param_1);
  sStack_13c = 0;
  sVar13 = 0x3c;
  func_0x0001c7f0(*(undefined4 *)(param_1 + 0x20),aiStack_d4);
  puVar4 = PTR_DAT_00012078;
  puVar3 = PTR_DAT_00012074;
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar12 = 0;
    do {
      iVar5 = sStack_13c * 0x23 + 0xb;
      sVar8 = (short)iVar5;
      if (iStack_cc - aiStack_d4[0] < (iVar5 * 0x10000 >> 0x10) + 0x23) {
        sVar8 = 3;
        sStack_13c = 0;
        sVar13 = sVar13 + 0x2d;
      }
      iVar5 = (int)sVar8;
      iStack_104 = iVar5;
      iVar2 = (int)sVar13;
      iStack_100 = iVar2;
      iStack_fc = iVar5 + 0x1e;
      iStack_f8 = iVar2 + 0x2a;
      iVar11 = 0x10;
      puVar10 = &uStack_114;
      piVar7 = &iStack_104;
      do {
        iVar9 = iVar11 + -1;
        *(char *)puVar10 = (char)*piVar7;
        bVar1 = 0 < iVar11;
        iVar11 = iVar9;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        piVar7 = (int *)((int)piVar7 + 1);
      } while (iVar9 != 0 && bVar1);
      if (*(ushort *)(param_1 + 0x88) == uVar12) {
        uStack_130 = 0;
        puStack_134 = PTR_PTR_00012070;
        uVar6 = func_0x0001c220(0,3,0);
        Ordinal_800(&puStack_134,uVar6);
        uVar6 = func_0x0001c208(&iStack_c4,&puStack_134);
        func_0x0001c808(&uStack_114,2,2);
        func_0x0001c7fc(uStack_c0,uStack_114,uStack_110,uStack_10c,uStack_108);
        func_0x0001c208(&iStack_c4,uVar6);
        puStack_134 = PTR_PTR_0001206c;
        Ordinal_1040(&puStack_134);
        puStack_134 = PTR_PTR_00012068;
        param_1 = iStack00000000;
      }
      sVar8 = (short)uVar12 + 0xfa;
      if (4 < (int)uVar12) {
        sVar8 = 0x82;
      }
      FUN_0001a22c((int)&iStack_c4,sVar8,iVar5,iVar2,0x1e,0x2a,0xff00);
      if (uVar12 == 5) {
        piVar7 = (int *)Ordinal_177(auStack_11c,puVar3);
        piVar7 = (int *)FUN_00012390((int)&iStack_c4,auStack_64,piVar7);
        iStack_124 = *piVar7;
        iStack_120 = piVar7[1];
        Ordinal_297(auStack_11c);
        iVar11 = iStack_124;
        if (iStack_124 < 0) {
          iVar11 = iStack_124 + 1;
        }
        iStack_f4 = (iVar5 - (iVar11 >> 1)) + 0xf;
        iVar9 = iStack_120;
        if (iStack_120 < 0) {
          iVar9 = iStack_120 + 1;
        }
        iStack_f0 = (iVar2 - (iVar9 >> 1)) + 0x15;
        iStack_ec = (iVar11 >> 1) + iVar5 + 0xf;
        iStack_e8 = (iVar9 >> 1) + iVar2 + 0x15;
        piVar7 = (int *)Ordinal_177(auStack_12c,puVar4);
        (**(code **)(iStack_c4 + 0x48))
                  (&iStack_c4,*piVar7,*(undefined4 *)(*piVar7 + -8),&iStack_f4,0x100);
        Ordinal_297(auStack_12c);
      }
      uVar12 = (int)((uVar12 + 1) * 0x10000) >> 0x10;
      sStack_13c = sStack_13c + 1;
    } while ((int)uVar12 < 6);
  }
  else {
    Ordinal_2316(&iStack_c4,1);
    puStack_134 = PTR_PTR_000121c0;
    uStack_130 = 0;
    Ordinal_982(&puStack_134,100,PTR_u_Arial_000121bc,&iStack_c4);
    uVar6 = func_0x0001c1d8(&iStack_c4,&puStack_134);
    Ordinal_719(auStack_5c,PTR_s_Select_how_you_would_like_to_pla_000121b8);
    piVar7 = (int *)Ordinal_177(auStack_12c,auStack_5c);
    piVar7 = (int *)FUN_00012390((int)&iStack_c4,auStack_6c,piVar7);
    iStack_124 = *piVar7;
    iStack_120 = piVar7[1];
    Ordinal_297(auStack_12c);
    uStack_e4 = 0x14;
    uStack_e0 = 0;
    iStack_dc = iStack_124;
    iStack_d8 = iStack_120;
    piVar7 = (int *)Ordinal_177(auStack_12c,auStack_5c);
    (**(code **)(iStack_c4 + 0x48))
              (&iStack_c4,*piVar7,*(undefined4 *)(*piVar7 + -8),&uStack_e4,0x100);
    Ordinal_297(auStack_12c);
    func_0x0001c1d8(&iStack_c4,uVar6);
    Ordinal_1040(&puStack_134);
    puStack_134 = PTR_PTR_0001206c;
    Ordinal_1040(&puStack_134);
  }
  Ordinal_271(&iStack_c4);
  return;
}


// ==== FUN_000121c4 @ 000121c4  size=36  callers=[]

undefined4 FUN_000121c4(undefined4 param_1,uint param_2)

{
  Ordinal_231();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00012200 @ 00012200  size=60  callers=[]

undefined1 * FUN_00012200(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001223c;
  *param_1 = (char)DAT_0001223c;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00012240 @ 00012240  size=104  callers=[]

undefined1 * FUN_00012240(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_000122ac;
  *param_1 = (char)DAT_000122ac;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_000122a8;
  *param_1 = (char)DAT_000122a8;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_000122b0 @ 000122b0  size=104  callers=[]

undefined1 * FUN_000122b0(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001231c;
  *param_1 = (char)DAT_0001231c;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_00012318;
  *param_1 = (char)DAT_00012318;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00012320 @ 00012320  size=104  callers=[]

undefined1 * FUN_00012320(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001238c;
  *param_1 = (char)DAT_0001238c;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_00012388;
  *param_1 = (char)DAT_00012388;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00012390 @ 00012390  size=136  callers=[00011db4, 00012744, 0001a660, 0001bab0]

undefined1 * FUN_00012390(int param_1,undefined1 *param_2,int *param_3)

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


// ==== FUN_00012418 @ 00012418  size=36  callers=[]

undefined1 * FUN_00012418(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)Ordinal_315(0x1e8);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_00012474(puVar1);
  }
  return puVar1;
}


// ==== FUN_00012474 @ 00012474  size=60  callers=[00012418]

undefined1 * FUN_00012474(undefined1 *param_1)

{
  undefined4 uVar1;
  
  Ordinal_103();
  Ordinal_48(param_1 + 0xe8);
  uVar1 = DAT_000124b0;
  *param_1 = (char)DAT_000124b0;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_000124b4 @ 000124b4  size=68  callers=[000126b4]

void FUN_000124b4(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_000124f0;
  *param_1 = (char)DAT_000124f0;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_219(param_1 + 0xe8);
                    /* WARNING: Could not recover jumptable at 0x0001c35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c360)(param_1);
  return;
}


// ==== FUN_000124f4 @ 000124f4  size=344  callers=[]

undefined4 FUN_000124f4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = Ordinal_1850();
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    uVar2 = FUN_00012664(param_1,65000);
    *(undefined4 *)(param_1 + 0x1c8) = uVar2;
    uVar2 = FUN_00012664(param_1,0xfde9);
    *(undefined4 *)(param_1 + 0x1cc) = uVar2;
    uVar2 = FUN_00012664(param_1,0xfdea);
    *(undefined4 *)(param_1 + 0x1d0) = uVar2;
    uVar2 = FUN_00012664(param_1,0xfdec);
    *(undefined4 *)(param_1 + 0x1d4) = uVar2;
    uVar2 = FUN_00012664(param_1,0x68);
    *(undefined4 *)(param_1 + 0x1d8) = uVar2;
    uVar2 = FUN_00012664(param_1,0x69);
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


// ==== FUN_0001264c @ 0001264c  size=24  callers=[]

bool FUN_0001264c(void)

{
  int iVar1;
  
  iVar1 = Ordinal_2093();
  return iVar1 != 0;
}


// ==== FUN_00012664 @ 00012664  size=80  callers=[000124f4]

undefined4 FUN_00012664(undefined4 param_1,undefined4 param_2)

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


// ==== FUN_000126b4 @ 000126b4  size=36  callers=[]

undefined1 * FUN_000126b4(undefined1 *param_1,uint param_2)

{
  FUN_000124b4(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_000126dc @ 000126dc  size=64  callers=[00014db4, 00015bd8]

undefined1 * FUN_000126dc(undefined1 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  Ordinal_77(param_1,0x82);
  uVar1 = DAT_0001271c;
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_00012744 @ 00012744  size=7164  callers=[]

void FUN_00012744(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  undefined4 extraout_r1_00;
  int iVar6;
  int iVar7;
  int local_3bc [2];
  int local_3b4;
  int local_3b0;
  short local_3ac;
  short local_3aa;
  short local_3a8;
  short local_3a6;
  short local_3a4 [4];
  undefined1 auStack_39c [104];
  int local_334 [22];
  undefined1 auStack_2dc [4];
  undefined1 auStack_2d8 [4];
  undefined1 auStack_2d4 [4];
  undefined1 auStack_2d0 [4];
  undefined1 auStack_2cc [4];
  undefined1 auStack_2c8 [4];
  undefined1 auStack_2c4 [4];
  undefined1 auStack_2c0 [4];
  undefined1 auStack_2bc [4];
  undefined1 auStack_2b8 [4];
  undefined1 auStack_2b4 [4];
  undefined1 auStack_2b0 [4];
  undefined4 local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  undefined4 local_29c;
  int local_298;
  int local_294;
  int local_290;
  undefined4 local_28c;
  int local_288;
  int local_284;
  int local_280;
  undefined4 local_27c;
  undefined4 local_278;
  int local_274;
  int local_270;
  undefined4 local_26c;
  int local_268;
  int local_264;
  int local_260;
  undefined4 local_25c;
  int local_258;
  int local_254;
  int local_250;
  undefined4 local_24c;
  int local_248;
  int local_244;
  int local_240;
  undefined4 local_23c;
  int local_238;
  int local_234;
  int local_230;
  undefined4 local_22c;
  int local_228;
  int local_224;
  int local_220;
  undefined4 local_21c;
  int local_218;
  int local_214;
  int local_210;
  undefined4 local_20c;
  int local_208;
  int local_204;
  int local_200;
  undefined4 local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  undefined4 local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  undefined4 local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  undefined4 local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  undefined4 local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  undefined4 local_19c;
  int local_198;
  int local_194;
  int local_190;
  undefined4 local_18c;
  int local_188;
  int local_184;
  int local_180;
  undefined4 local_17c;
  int local_178;
  int local_174;
  int local_170;
  undefined4 local_16c;
  int local_168;
  int local_164;
  int local_160;
  undefined4 local_15c;
  int local_158;
  int local_154;
  int local_150;
  undefined4 local_14c;
  int local_148;
  int local_144;
  int local_140;
  undefined4 local_13c;
  int local_138;
  int local_134;
  int local_130;
  undefined4 local_12c;
  int local_128;
  int local_124;
  int local_120;
  undefined4 local_11c;
  int local_118;
  int local_114;
  int local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  int local_100;
  undefined1 auStack_fc [8];
  undefined1 auStack_f4 [8];
  undefined1 auStack_ec [8];
  undefined1 auStack_e4 [8];
  undefined1 auStack_dc [8];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [8];
  undefined1 auStack_c4 [8];
  undefined1 auStack_bc [8];
  undefined1 auStack_b4 [8];
  undefined1 auStack_ac [8];
  undefined1 auStack_a4 [8];
  undefined1 auStack_9c [8];
  undefined1 auStack_94 [8];
  undefined1 auStack_8c [8];
  undefined1 auStack_84 [8];
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  
  Ordinal_136(local_334,param_1);
  Ordinal_719(auStack_39c,DAT_00012be8,*(undefined2 *)(*(int *)(param_1 + 0x7c) + 0x49a));
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_dc,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  iVar6 = local_3b0;
  local_278 = 0xf;
  local_27c = 5;
  local_274 = local_3b4 + 5;
  local_270 = local_3b0 + 0xf;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_27c,0x100);
  Ordinal_297(local_3bc);
  iVar3 = *(int *)(param_1 + 0x7c);
  local_3a6 = 0;
  iVar6 = iVar6 + 0x11;
  local_3a4[0] = 0;
  local_3aa = 0;
  local_3ac = 0;
  local_3a8 = 0;
  if (*(char *)(iVar3 + 0x4b0) == '\0') {
    if (*(short *)(iVar3 + 0x4ac) != 0) {
      local_3bc[0] = 0;
      do {
        iVar4 = local_3bc[0];
        local_3a6 = 0;
        local_3a4[0] = 0;
        local_3aa = 0;
        local_3ac = 0;
        local_3a8 = 0;
        FUN_00019d4c(iVar3,(short)local_3bc[0],&local_3a6,local_3a4,&local_3aa,&local_3ac,&local_3a8
                    );
        iVar3 = DAT_00013ea4;
        if (iVar4 != 2) {
          iVar3 = iVar4 * 0xb0 + *(int *)(param_1 + 0x7c) + 0x1b0;
        }
        Ordinal_719(auStack_39c,DAT_00013ea8,iVar3);
        piVar2 = (int *)Ordinal_177(auStack_2d4,auStack_39c);
        piVar2 = (int *)FUN_00012390((int)local_334,auStack_ac,piVar2);
        local_3b4 = *piVar2;
        local_3b0 = piVar2[1];
        Ordinal_297(auStack_2d4);
        local_1cc = 5;
        local_1c4 = local_3b4 + 5;
        local_1c0 = local_3b0 + iVar6;
        local_1c8 = iVar6;
        piVar2 = (int *)Ordinal_177(auStack_2c0,auStack_39c);
        (**(code **)(local_334[0] + 0x48))
                  (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_1cc,0x100);
        Ordinal_297(auStack_2c0);
        iVar3 = local_3bc[0];
        iVar7 = local_3bc[0] * 0xb0;
        iVar4 = *(int *)(param_1 + 0x7c) + iVar7;
        Ordinal_719(auStack_39c,DAT_00013ea0,*(undefined2 *)(iVar4 + 0x256),
                    *(undefined2 *)(iVar4 + 0x25a));
        piVar2 = *(int **)(param_1 + 0x7c);
        sVar1 = *(short *)((int)piVar2 + iVar7 + 0x256);
        if ((sVar1 == 0) && (*(short *)((int)piVar2 + iVar7 + 0x25a) != 0)) {
          uVar5 = DAT_00013e98;
          if ((*(char *)((int)piVar2 + 0x4b5) != '\0') && (local_3bc[0] == 2)) {
            uVar5 = DAT_00013e9c;
          }
LAB_00013ef4:
          Ordinal_1063(auStack_39c,uVar5);
        }
        else if ((sVar1 == 0) && ((*(short *)((int)piVar2 + iVar7 + 0x25a) == 0 && (*piVar2 == 6))))
        {
          uVar5 = DAT_000142d4;
          if ((*(char *)((int)piVar2 + 0x4b5) != '\0') && (local_3bc[0] == 2)) {
            uVar5 = DAT_000142d8;
          }
          goto LAB_00013ef4;
        }
        piVar2 = (int *)Ordinal_177(auStack_2b8,auStack_39c);
        piVar2 = (int *)FUN_00012390((int)local_334,auStack_9c,piVar2);
        local_3b4 = *piVar2;
        local_3b0 = piVar2[1];
        Ordinal_297(auStack_2b8);
        local_1a4 = local_3b4 + 0x32;
        local_1ac = 0x32;
        iVar4 = local_3b0 + iVar6;
        local_1a8 = iVar6;
        local_1a0 = iVar4;
        piVar2 = (int *)Ordinal_177(auStack_2b0,auStack_39c);
        (**(code **)(local_334[0] + 0x48))
                  (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_1ac,0x100);
        Ordinal_297(auStack_2b0);
        Ordinal_719(auStack_39c,DAT_000142d0);
        piVar2 = (int *)Ordinal_177(auStack_2dc,auStack_39c);
        piVar2 = (int *)FUN_00012390((int)local_334,auStack_8c,piVar2);
        local_3b4 = *piVar2;
        local_3b0 = piVar2[1];
        Ordinal_297(auStack_2dc);
        local_18c = 5;
        local_184 = local_3b4 + 5;
        local_180 = local_3b0 + iVar4;
        local_188 = iVar4;
        piVar2 = (int *)Ordinal_177(auStack_2b4,auStack_39c);
        (**(code **)(local_334[0] + 0x48))
                  (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_18c,0x100);
        Ordinal_297(auStack_2b4);
        uVar5 = extraout_r1_00;
        if (0 < local_3a8) {
          uVar5 = DAT_000142cc;
        }
        if (local_3a8 < 1) {
          uVar5 = DAT_000142c8;
        }
        Ordinal_719(auStack_39c,uVar5,(int)local_3ac,
                    (int)local_3ac + (uint)*(ushort *)(*(int *)(param_1 + 0x7c) + iVar7 + 0x254));
        piVar2 = (int *)Ordinal_177(auStack_2cc,auStack_39c);
        piVar2 = (int *)FUN_00012390((int)local_334,auStack_7c,piVar2);
        local_3b4 = *piVar2;
        local_3b0 = piVar2[1];
        Ordinal_297(auStack_2cc);
        local_164 = local_3b4 + 0x32;
        local_16c = 0x32;
        iVar7 = local_3b0 + iVar4;
        local_168 = iVar4;
        local_160 = iVar7;
        piVar2 = (int *)Ordinal_177(auStack_2bc,auStack_39c);
        (**(code **)(local_334[0] + 0x48))
                  (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_16c,0x100);
        Ordinal_297(auStack_2bc);
        Ordinal_719(auStack_39c,DAT_000142c4);
        piVar2 = (int *)Ordinal_177(auStack_2c4,auStack_39c);
        piVar2 = (int *)FUN_00012390((int)local_334,auStack_6c,piVar2);
        local_3b4 = *piVar2;
        local_3b0 = piVar2[1];
        Ordinal_297(auStack_2c4);
        local_14c = 5;
        local_144 = local_3b4 + 5;
        local_140 = local_3b0 + iVar7;
        local_148 = iVar7;
        piVar2 = (int *)Ordinal_177(auStack_2d8,auStack_39c);
        (**(code **)(local_334[0] + 0x48))
                  (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_14c,0x100);
        Ordinal_297(auStack_2d8);
        piVar2 = *(int **)(param_1 + 0x7c);
        if (*piVar2 == 6) {
          Ordinal_719(auStack_39c,DAT_000142c0,(int)local_3aa,
                      (int)local_3aa + (int)(short)piVar2[iVar3 * 0x2c + 0x94]);
        }
        else {
          Ordinal_719(auStack_39c,DAT_000143fc,(int)(short)piVar2[iVar3 * 0x2c + 0x94]);
        }
        piVar2 = (int *)Ordinal_177(auStack_2d0,auStack_39c);
        piVar2 = (int *)FUN_00012390((int)local_334,auStack_5c,piVar2);
        local_3b4 = *piVar2;
        local_3b0 = piVar2[1];
        Ordinal_297(auStack_2d0);
        local_124 = local_3b4 + 0x32;
        local_12c = 0x32;
        iVar6 = local_3b0 + iVar7;
        local_128 = iVar7;
        local_120 = iVar6;
        piVar2 = (int *)Ordinal_177(auStack_2c8,auStack_39c);
        (**(code **)(local_334[0] + 0x48))
                  (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_12c,0x100);
        Ordinal_297(auStack_2c8);
        iVar6 = iVar6 + 2;
        iVar3 = *(int *)(param_1 + 0x7c);
        local_3bc[0] = (local_3bc[0] + 1) * 0x10000 >> 0x10;
      } while (local_3bc[0] < (int)(uint)*(ushort *)(iVar3 + 0x4ac));
    }
    goto LAB_000143ec;
  }
  Ordinal_719(auStack_39c,DAT_00012be4,iVar3 + 0x1b0);
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_4c,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_10c = 5;
  local_104 = local_3b4 + 5;
  local_100 = local_3b0 + iVar6;
  local_108 = iVar6;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_10c,0x100);
  Ordinal_297(local_3bc);
  Ordinal_719(auStack_39c,DAT_00012be0,*(undefined2 *)(*(int *)(param_1 + 0x7c) + 0x256),
              *(undefined2 *)(*(int *)(param_1 + 0x7c) + 0x25a));
  piVar2 = *(int **)(param_1 + 0x7c);
  if (((*(short *)((int)piVar2 + 0x256) == 0) &&
      (uVar5 = DAT_00012bdc, *(short *)((int)piVar2 + 0x25a) != 0)) ||
     ((*(short *)((int)piVar2 + 0x256) == 0 &&
      ((*(short *)((int)piVar2 + 0x25a) == 0 && (uVar5 = DAT_00012bd8, *piVar2 == 6)))))) {
    Ordinal_1063(auStack_39c,uVar5);
  }
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_3c,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_134 = local_3b4 + 0x32;
  local_13c = 0x32;
  iVar3 = local_3b0 + iVar6;
  local_138 = iVar6;
  local_130 = iVar3;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_13c,0x100);
  Ordinal_297(local_3bc);
  Ordinal_719(auStack_39c,DAT_00012bd4);
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_2c,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_2ac = 5;
  local_2a4 = local_3b4 + 5;
  local_2a0 = local_3b0 + iVar3;
  local_2a8 = iVar3;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_2ac,0x100);
  Ordinal_297(local_3bc);
  Ordinal_719(auStack_39c,DAT_00012bd0,*(undefined2 *)(*(int *)(param_1 + 0x7c) + 0x3b6),
              *(undefined2 *)(*(int *)(param_1 + 0x7c) + 0x3ba));
  piVar2 = *(int **)(param_1 + 0x7c);
  if ((*(short *)((int)piVar2 + 0x3b6) == 0) && (*(short *)((int)piVar2 + 0x3ba) != 0)) {
    uVar5 = DAT_00012bcc;
    if (*(char *)((int)piVar2 + 0x4b5) == '\0') {
      uVar5 = DAT_00012bc8;
    }
LAB_00012c24:
    Ordinal_1063(auStack_39c,uVar5);
  }
  else if ((*(short *)((int)piVar2 + 0x3b6) == 0) &&
          ((*(short *)((int)piVar2 + 0x3ba) == 0 && (*piVar2 == 6)))) {
    uVar5 = DAT_000131bc;
    if (*(char *)((int)piVar2 + 0x4b5) == '\0') {
      uVar5 = DAT_000131b8;
    }
    goto LAB_00012c24;
  }
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_44,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_1b4 = local_3b4 + 0x32;
  local_1bc = 0x32;
  iVar6 = local_3b0 + iVar3;
  local_1b8 = iVar3;
  local_1b0 = iVar6;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_1bc,0x100);
  Ordinal_297(local_3bc);
  FUN_00019d4c(*(int *)(param_1 + 0x7c),2,&local_3a6,local_3a4,&local_3aa,&local_3ac,&local_3a8);
  Ordinal_719(auStack_39c,DAT_000131b4);
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_e4,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_25c = 5;
  local_254 = local_3b4 + 5;
  local_250 = local_3b0 + iVar6;
  local_258 = iVar6;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_25c,0x100);
  Ordinal_297(local_3bc);
  Ordinal_719(auStack_39c,DAT_000131b0,(int)local_3a6,(int)local_3a4[0]);
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_84,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_154 = local_3b4 + 0x32;
  local_15c = 0x32;
  iVar3 = local_3b0 + iVar6;
  local_158 = iVar6;
  local_150 = iVar3;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_15c,0x100);
  Ordinal_297(local_3bc);
  Ordinal_719(auStack_39c,DAT_000131ac);
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_d4,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_23c = 5;
  local_234 = local_3b4 + 5;
  local_230 = local_3b0 + iVar3;
  local_238 = iVar3;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_23c,0x100);
  Ordinal_297(local_3bc);
  uVar5 = extraout_r1;
  if (0 < local_3a8) {
    uVar5 = DAT_000131a8;
  }
  if (local_3a8 < 1) {
    uVar5 = DAT_000131a4;
  }
  Ordinal_719(auStack_39c,uVar5,(int)local_3ac,
              (int)local_3ac + (uint)*(ushort *)(*(int *)(param_1 + 0x7c) + 0x3b4));
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_54,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_194 = local_3b4 + 0x32;
  local_19c = 0x32;
  iVar6 = local_3b0 + iVar3;
  local_198 = iVar3;
  local_190 = iVar6;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_19c,0x100);
  Ordinal_297(local_3bc);
  Ordinal_719(auStack_39c,DAT_000131a0);
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_c4,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_21c = 5;
  local_214 = local_3b4 + 5;
  local_210 = local_3b0 + iVar6;
  local_218 = iVar6;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_21c,0x100);
  Ordinal_297(local_3bc);
  piVar2 = *(int **)(param_1 + 0x7c);
  if (*piVar2 == 6) {
    Ordinal_719(auStack_39c,DAT_0001319c,(int)local_3aa,(int)local_3aa + (int)(short)piVar2[0xec]);
  }
  else {
    Ordinal_719(auStack_39c,DAT_00013bcc,(int)(short)piVar2[0xec]);
  }
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_74,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_114 = local_3b4 + 0x32;
  local_11c = 0x32;
  iVar3 = local_3b0 + iVar6;
  local_118 = iVar6;
  local_110 = iVar3;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_11c,0x100);
  Ordinal_297(local_3bc);
  iVar3 = iVar3 + 3;
  Ordinal_719(auStack_39c,DAT_00013bc8,*(int *)(param_1 + 0x7c) + 0x260);
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_b4,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_1fc = 5;
  local_1f4 = local_3b4 + 5;
  local_1f0 = local_3b0 + iVar3;
  local_1f8 = iVar3;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_1fc,0x100);
  Ordinal_297(local_3bc);
  Ordinal_719(auStack_39c,DAT_00013bc4,*(undefined2 *)(*(int *)(param_1 + 0x7c) + 0x306),
              *(undefined2 *)(*(int *)(param_1 + 0x7c) + 0x30a));
  piVar2 = *(int **)(param_1 + 0x7c);
  if (((*(short *)((int)piVar2 + 0x306) == 0) &&
      (uVar5 = DAT_00013bc0, *(short *)((int)piVar2 + 0x30a) != 0)) ||
     ((*(short *)((int)piVar2 + 0x306) == 0 &&
      ((*(short *)((int)piVar2 + 0x30a) == 0 && (uVar5 = DAT_00013bbc, *piVar2 == 6)))))) {
    Ordinal_1063(auStack_39c,uVar5);
  }
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_34,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_174 = local_3b4 + 0x32;
  local_17c = 0x32;
  iVar6 = local_3b0 + iVar3;
  local_178 = iVar3;
  local_170 = iVar6;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_17c,0x100);
  Ordinal_297(local_3bc);
  Ordinal_719(auStack_39c,DAT_00013bb8,*(int *)(param_1 + 0x7c) + 0x3c0);
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_a4,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_1dc = 5;
  local_1d4 = local_3b4 + 5;
  local_1d0 = local_3b0 + iVar6;
  local_1d8 = iVar6;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_1dc,0x100);
  Ordinal_297(local_3bc);
  Ordinal_719(auStack_39c,DAT_00013bb4,*(undefined2 *)(*(int *)(param_1 + 0x7c) + 0x466),
              *(undefined2 *)(*(int *)(param_1 + 0x7c) + 0x46a));
  piVar2 = *(int **)(param_1 + 0x7c);
  if (((*(short *)((int)piVar2 + 0x466) == 0) &&
      (uVar5 = DAT_00013bb0, *(short *)((int)piVar2 + 0x46a) != 0)) ||
     ((*(short *)((int)piVar2 + 0x466) == 0 &&
      ((*(short *)((int)piVar2 + 0x46a) == 0 && (uVar5 = DAT_00013bac, *piVar2 == 6)))))) {
    Ordinal_1063(auStack_39c,uVar5);
  }
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_64,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_294 = local_3b4 + 0x32;
  local_29c = 0x32;
  iVar3 = local_3b0 + iVar6;
  local_298 = iVar6;
  local_290 = iVar3;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_29c,0x100);
  Ordinal_297(local_3bc);
  local_3a6 = 0;
  local_3a4[0] = 0;
  local_3aa = 0;
  local_3ac = 0;
  local_3a8 = 0;
  FUN_00019d4c(*(int *)(param_1 + 0x7c),3,&local_3a6,local_3a4,&local_3aa,&local_3ac,&local_3a8);
  Ordinal_719(auStack_39c,DAT_00013ba8);
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_94,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_28c = 5;
  local_284 = local_3b4 + 5;
  local_280 = local_3b0 + iVar3;
  local_288 = iVar3;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_28c,0x100);
  Ordinal_297(local_3bc);
  Ordinal_719(auStack_39c,DAT_00013ba4,(int)local_3a6,(int)local_3a4[0]);
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_f4,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_264 = local_3b4 + 0x32;
  local_26c = 0x32;
  iVar6 = local_3b0 + iVar3;
  local_268 = iVar3;
  local_260 = iVar6;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_26c,0x100);
  Ordinal_297(local_3bc);
  Ordinal_719(auStack_39c,DAT_00013ba0);
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_ec,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_24c = 5;
  local_244 = local_3b4 + 5;
  local_240 = local_3b0 + iVar6;
  local_248 = iVar6;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_24c,0x100);
  Ordinal_297(local_3bc);
  uVar5 = DAT_00013b9c;
  if (local_3a8 < 1) {
    uVar5 = DAT_00013b98;
  }
  Ordinal_719(auStack_39c,uVar5,(int)local_3ac,
              (int)local_3ac + (uint)*(ushort *)(*(int *)(param_1 + 0x7c) + 0x464));
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_fc,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_224 = local_3b4 + 0x32;
  local_22c = 0x32;
  iVar3 = local_3b0 + iVar6;
  local_228 = iVar6;
  local_220 = iVar3;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_22c,0x100);
  Ordinal_297(local_3bc);
  Ordinal_719(auStack_39c,DAT_00013b94);
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_cc,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_20c = 5;
  local_204 = local_3b4 + 5;
  local_200 = local_3b0 + iVar3;
  local_208 = iVar3;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_20c,0x100);
  Ordinal_297(local_3bc);
  piVar2 = *(int **)(param_1 + 0x7c);
  if (*piVar2 == 6) {
    Ordinal_719(auStack_39c,DAT_00013b90,(int)local_3aa,(int)local_3aa + (int)(short)piVar2[0x118]);
  }
  else {
    Ordinal_719(auStack_39c,DAT_00013cb0,(int)(short)piVar2[0x118]);
  }
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  piVar2 = (int *)FUN_00012390((int)local_334,auStack_bc,piVar2);
  local_3b4 = *piVar2;
  local_3b0 = piVar2[1];
  Ordinal_297(local_3bc);
  local_1ec = 0x32;
  local_1e4 = local_3b4 + 0x32;
  local_1e0 = local_3b0 + iVar3;
  local_1e8 = iVar3;
  piVar2 = (int *)Ordinal_177(local_3bc,auStack_39c);
  (**(code **)(local_334[0] + 0x48))
            (local_334,*piVar2,*(undefined4 *)(*piVar2 + -8),&local_1ec,0x100);
  Ordinal_297(local_3bc);
LAB_000143ec:
  Ordinal_271(local_334);
  return;
}


// ==== FUN_00014400 @ 00014400  size=36  callers=[]

undefined4 FUN_00014400(undefined4 param_1,uint param_2)

{
  Ordinal_231();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_0001447c @ 0001447c  size=24  callers=[]

void FUN_0001447c(void)

{
  FUN_0001448c();
  FUN_0001ca28(DAT_000144a0);
  return;
}


// ==== FUN_0001448c @ 0001448c  size=64  callers=[0001447c]

undefined1 * FUN_0001448c(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  puVar2 = DAT_00014494;
  Ordinal_201(DAT_00014494,0);
  uVar1 = DAT_00014478;
  *puVar2 = (char)DAT_00014478;
  puVar2[1] = (char)((uint)uVar1 >> 8);
  puVar2[2] = (char)((uint)uVar1 >> 0x10);
  puVar2[3] = (char)((uint)uVar1 >> 0x18);
  return puVar2;
}


// ==== FUN_000144b0 @ 000144b0  size=172  callers=[]

bool FUN_000144b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [24];
  
  Ordinal_2400(param_1,PTR_u_Spades_PPC___Don_Turner_000144fc);
  iVar1 = Ordinal_315(0x6c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = Ordinal_162(iVar1,0x80,PTR_DAT_000144f0,PTR_DAT_000144f4,PTR_DAT_000144f8);
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


// ==== FUN_0001456c @ 0001456c  size=60  callers=[000145cc]

undefined1 * FUN_0001456c(undefined1 *param_1)

{
  undefined4 uVar1;
  
  Ordinal_77(param_1,100,0);
  uVar1 = DAT_000145a8;
  *param_1 = (char)DAT_000145a8;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_000145cc @ 000145cc  size=40  callers=[]

void FUN_000145cc(void)

{
  undefined1 auStack_80 [124];
  
  FUN_0001456c(auStack_80);
  Ordinal_1079(auStack_80);
  Ordinal_231(auStack_80);
  return;
}


// ==== FUN_000145f4 @ 000145f4  size=32  callers=[]

undefined4 FUN_000145f4(undefined4 param_1)

{
  Ordinal_1939();
  Ordinal_840(param_1,0);
  return 1;
}


// ==== FUN_00014614 @ 00014614  size=36  callers=[]

undefined4 FUN_00014614(undefined4 param_1,uint param_2)

{
  Ordinal_310();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00014638 @ 00014638  size=36  callers=[]

undefined4 FUN_00014638(undefined4 param_1,uint param_2)

{
  Ordinal_231();
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_0001465c @ 0001465c  size=36  callers=[]

undefined1 * FUN_0001465c(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)Ordinal_315(0x58);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_000146b8(puVar1);
  }
  return puVar1;
}


// ==== FUN_000146b8 @ 000146b8  size=52  callers=[0001465c]

undefined1 * FUN_000146b8(undefined1 *param_1)

{
  undefined4 uVar1;
  
  Ordinal_85();
  uVar1 = DAT_000146ec;
  *param_1 = (char)DAT_000146ec;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  return param_1;
}


// ==== FUN_000146f0 @ 000146f0  size=44  callers=[00014734]

void FUN_000146f0(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00014714;
  *param_1 = (char)DAT_00014714;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001c65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c660)();
  return;
}


// ==== FUN_00014718 @ 00014718  size=24  callers=[]

bool FUN_00014718(void)

{
  int iVar1;
  
  iVar1 = Ordinal_1961();
  return iVar1 != 0;
}


// ==== FUN_00014734 @ 00014734  size=36  callers=[]

undefined1 * FUN_00014734(undefined1 *param_1,uint param_2)

{
  FUN_000146f0(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_00014828 @ 00014828  size=36  callers=[00014db4, 00015258]

void FUN_00014828(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Ordinal_535();
  do {
    iVar2 = Ordinal_535();
  } while ((uint)(iVar2 - iVar1) < param_1);
  return;
}


// ==== FUN_0001484c @ 0001484c  size=36  callers=[]

undefined1 * FUN_0001484c(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)Ordinal_315(0x560);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_00014998(puVar1);
  }
  return puVar1;
}


// ==== FUN_000148a8 @ 000148a8  size=132  callers=[00015c4c]

bool FUN_000148a8(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_24 [20];
  
  bVar3 = false;
  iVar1 = Ordinal_1113(DAT_00014930,DAT_00014934);
  local_24[0] = 0;
  if (iVar1 != 0) {
    Ordinal_1120(local_24,0x13,1,iVar1);
    iVar2 = Ordinal_1065(local_24,DAT_0001492c);
    bVar3 = iVar2 == 0;
    if (bVar3) {
      Ordinal_1120(param_1 + 0x4c,0x4bc,1,iVar1);
    }
    Ordinal_1118(iVar1);
  }
  return bVar3;
}


// ==== FUN_00014938 @ 00014938  size=84  callers=[00014a70]

void FUN_00014938(int param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_1113(DAT_00014990,DAT_00014994);
  if (iVar1 != 0) {
    Ordinal_1121(DAT_0001498c,0x13,1,iVar1);
    Ordinal_1121(param_1 + 0x4c,0x4bc,1,iVar1);
  }
  Ordinal_1118(iVar1);
  return;
}


// ==== FUN_00014998 @ 00014998  size=204  callers=[0001484c]

undefined1 * FUN_00014998(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  Ordinal_200();
  FUN_00015eac((undefined4 *)(param_1 + 0x4c));
  FUN_000160b0(param_1 + 0x510);
  uVar3 = DAT_00014a20;
  param_1[0x520] = 0;
  *param_1 = (char)uVar3;
  param_1[1] = (char)((uint)uVar3 >> 8);
  puVar1 = DAT_00014a1c;
  param_1[2] = (char)((uint)uVar3 >> 0x10);
  param_1[3] = (char)((uint)uVar3 >> 0x18);
  param_1[0x55c] = 0;
  *puVar1 = param_1;
  *DAT_00014a18 = 1;
  iVar2 = Ordinal_315(0x14);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = Ordinal_76();
  }
  *(undefined4 *)(param_1 + 0x508) = uVar3;
  puVar4 = (undefined1 *)Ordinal_315(0x10);
  if (puVar4 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_000160b0(puVar4);
  }
  *(undefined4 *)(param_1 + 0x50c) = uVar3;
  FUN_000161a4(param_1 + 0x510,200);
  return param_1;
}


// ==== FUN_00014a70 @ 00014a70  size=216  callers=[0001608c]

void FUN_00014a70(undefined1 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  
  uVar1 = DAT_00014b48;
  *param_1 = (char)DAT_00014b48;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  FUN_00014938((int)param_1);
  piVar2 = *(int **)(param_1 + 0x508);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
  piVar2 = *(int **)(param_1 + 0x50c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,1);
  }
  uVar1 = DAT_00014b44;
  puVar3 = param_1 + 0x510;
  *puVar3 = (char)DAT_00014b44;
  param_1[0x511] = (char)((uint)uVar1 >> 8);
  param_1[0x512] = (char)((uint)uVar1 >> 0x10);
  param_1[0x513] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(puVar3);
  uVar1 = DAT_00014b40;
  *puVar3 = (char)DAT_00014b40;
  param_1[0x511] = (char)((uint)uVar1 >> 8);
  param_1[0x512] = (char)((uint)uVar1 >> 0x10);
  param_1[0x513] = (char)((uint)uVar1 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001c71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c720)(param_1);
  return;
}


// ==== FUN_00014b54 @ 00014b54  size=488  callers=[]

void FUN_00014b54(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_74 [4];
  undefined4 local_70;
  
  Ordinal_136(auStack_74,param_1);
  if (*(char *)(param_1 + 0x55c) == '\0') {
    FUN_00014d3c(param_1);
  }
  if (*(char *)(param_1 + 0x520) == '\0') {
    iVar2 = *(int *)(param_1 + 0x508);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == 0)) {
      uVar1 = Ordinal_910(local_70);
      Ordinal_799(iVar2,uVar1);
      if (param_1 == -0x510) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x514);
      }
      iVar2 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar1);
      uVar3 = *(undefined4 *)(param_1 + 0x50c);
      uVar1 = Ordinal_902(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),0xf0,0x140);
      Ordinal_800(uVar3,uVar1);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = *(undefined4 *)(iVar2 + 4);
      }
      Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar1);
    }
    uVar1 = 0;
    if (*(int *)(param_1 + 0x50c) != 0) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x50c) + 4);
    }
    iVar2 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar1);
    FUN_0001a2bc(*(int *)(param_1 + 0x508),param_1 + 0x510,0,0,0xf0,0x140,0xff00);
    FUN_0001a560((int *)(param_1 + 0x4c),*(int **)(param_1 + 0x508));
    if (*(int *)(param_1 + 0x508) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x508) + 4);
    }
    Ordinal_903(local_70,0,0,0xf0,0x140,uVar1,0,0,0xcc0020);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(iVar2 + 4);
    }
    Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar1);
  }
  else {
    if (*(int *)(param_1 + 0x508) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x508) + 4);
    }
    Ordinal_903(local_70,0,0,0xf0,0x140,uVar1,0,0,0xcc0020);
    *(undefined1 *)(param_1 + 0x520) = 0;
  }
  Ordinal_271(auStack_74);
  return;
}


// ==== FUN_00014d3c @ 00014d3c  size=60  callers=[00014b54]

void FUN_00014d3c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = Ordinal_875(*(undefined4 *)(param_1 + 0x20),1,100,0);
  *(undefined4 *)(param_1 + 0x558) = uVar1;
  *(undefined1 *)(param_1 + 0x55c) = 1;
  return;
}


// ==== FUN_00014d78 @ 00014d78  size=60  callers=[00015c34]

void FUN_00014d78(int param_1)

{
  if (*(char *)(param_1 + 0x55c) != '\0') {
    Ordinal_876(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x558));
    *(undefined1 *)(param_1 + 0x55c) = 0;
  }
  return;
}


// ==== FUN_00014db4 @ 00014db4  size=1168  callers=[]

void FUN_00014db4(int param_1)

{
  short sVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 auStack_124 [128];
  undefined1 auStack_a4 [128];
  
  Ordinal_1021();
  if (*DAT_00014f28 != '\0') {
    return;
  }
  *DAT_00014f28 = '\x01';
  iVar5 = *(int *)(param_1 + 0x4c);
  if (iVar5 == 1) {
    if (*(char *)(param_1 + 0x500) != '\0') {
      iVar5 = Ordinal_1760(param_1,DAT_00014f20,DAT_00014f24,4);
      if (iVar5 == 6) {
        *(undefined1 *)(param_1 + 0x501) = 1;
        *(undefined2 *)(param_1 + 0x402) = 0;
        *(undefined4 *)(param_1 + 0x4c) = 5;
      }
      else {
        *(undefined1 *)(param_1 + 0x501) = 0;
        *(undefined1 *)(param_1 + 0x500) = 0;
        uVar6 = 0;
        if (*(int *)(param_1 + 0x50c) != 0) {
          uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x50c) + 4);
        }
        iVar5 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar6);
        FUN_0001adb8((int *)(param_1 + 0x4c),*(int *)(param_1 + 0x508),2);
        *(undefined1 *)(param_1 + 0x520) = 1;
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
        Ordinal_267(*(undefined4 *)(param_1 + 0x20));
        uVar6 = 0;
        if (iVar5 != 0) {
          uVar6 = *(undefined4 *)(iVar5 + 4);
        }
        Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar6);
      }
    }
    if (*(char *)(param_1 + 0x501) == '\0') {
      piVar3 = (int *)FUN_00011000(auStack_a4,param_1 + 0x4c);
      iVar5 = (**(code **)(*piVar3 + 0xb8))();
      Ordinal_231(auStack_a4);
      if (iVar5 == 1) {
        *(undefined4 *)(param_1 + 0x4c) = 5;
      }
      else {
        *(undefined4 *)(param_1 + 0x4c) = 2;
      }
    }
    Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
    goto LAB_0001523c;
  }
  if ((iVar5 == 5) && ((int)*(short *)(param_1 + 0x4e0) == (uint)*(ushort *)(param_1 + 0x4f8))) {
LAB_00014f90:
    bVar2 = true;
  }
  else {
    if (((int)(uint)*(ushort *)(param_1 + 0x4f8) <= (int)*(short *)(param_1 + 0x4e0)) ||
       ((iVar5 != 5 || (*(short *)(param_1 + 0x4e4) == 2)))) {
      puVar7 = (undefined4 *)(param_1 + 0x4c);
      if (iVar5 == 6) {
        FUN_000126dc(auStack_124,puVar7);
        Ordinal_1079(auStack_124);
        FUN_00019fdc((int)puVar7);
        uVar4 = FUN_0001bd80((int)puVar7);
        if ((uVar4 & 0xff) == 0) {
          FUN_00018958(puVar7);
        }
        else {
          FUN_0001bcd0(puVar7);
        }
        Ordinal_231(auStack_124);
      }
      else {
        iVar5 = Ordinal_535();
        if (((4000 < (uint)(iVar5 - *(int *)(param_1 + 0x554))) &&
            (*(short *)(param_1 + 0x4e4) == 2)) && (*(int *)(param_1 + 0x4c) == 5)) {
          *(int *)(param_1 + 0x4c) = 8;
          uVar6 = 0;
          if (*(int *)(param_1 + 0x50c) != 0) {
            uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x50c) + 4);
          }
          iVar5 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar6);
          FUN_0001bab0((int *)(param_1 + 0x4c),*(int **)(param_1 + 0x508));
          *(undefined1 *)(param_1 + 0x520) = 1;
          Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
          Ordinal_267(*(undefined4 *)(param_1 + 0x20));
          uVar6 = 0;
          if (iVar5 != 0) {
            uVar6 = *(undefined4 *)(iVar5 + 4);
          }
          Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar6);
        }
      }
      goto LAB_0001523c;
    }
    if ((int)*(short *)(param_1 + 0x4e0) == (uint)*(ushort *)(param_1 + 0x4f8)) goto LAB_00014f90;
    bVar2 = false;
  }
  piVar3 = (int *)(param_1 + 0x4c);
  sVar1 = *(short *)(param_1 + 0x4e4);
  FUN_00018524(piVar3);
  uVar6 = Ordinal_535();
  *(undefined4 *)(param_1 + 0x554) = uVar6;
  if (!bVar2) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x50c) != 0) {
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x50c) + 4);
    }
    iVar5 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar6);
    FUN_00015630(param_1);
    FUN_0001adb8(piVar3,*(int *)(param_1 + 0x508),sVar1);
    *(undefined1 *)(param_1 + 0x520) = 1;
    Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
    Ordinal_267(*(undefined4 *)(param_1 + 0x20));
    uVar6 = 0;
    if (iVar5 != 0) {
      uVar6 = *(undefined4 *)(iVar5 + 4);
    }
    Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar6);
  }
  uVar6 = FUN_00018a08((int)piVar3);
  FUN_00014828((int)(short)uVar6);
  uVar6 = 0;
  if (*(int *)(param_1 + 0x50c) != 0) {
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x50c) + 4);
  }
  iVar5 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar6);
  if (bVar2) {
    FUN_000157a0(param_1);
    FUN_0001a5dc(piVar3,*(int **)(param_1 + 0x508));
    if (*(char *)(param_1 + 0x4f3) == '\0') {
      uVar6 = FUN_00018a08((int)piVar3);
      FUN_00014828((int)(short)uVar6);
      FUN_00015708(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = 7;
    }
  }
  else {
    FUN_0001b63c(piVar3,*(int *)(param_1 + 0x508));
  }
  *(undefined1 *)(param_1 + 0x520) = 1;
  Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
  Ordinal_267(*(undefined4 *)(param_1 + 0x20));
  uVar6 = 0;
  if (iVar5 != 0) {
    uVar6 = *(undefined4 *)(iVar5 + 4);
  }
  Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar6);
  uVar6 = FUN_00018a08(param_1 + 0x4c);
  FUN_00014828((int)(short)uVar6);
LAB_0001523c:
  *DAT_00014f28 = '\0';
  return;
}


// ==== FUN_00015258 @ 00015258  size=872  callers=[]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00015258(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  int *piVar5;
  ushort auStack_54 [4];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [28];
  
  if (*_UNK_00015358 == '\0') {
    if (*(int *)(param_1 + 0x4c) == 7) {
      piVar5 = (int *)(param_1 + 0x4c);
      *piVar5 = 5;
      if ((int)*(short *)(param_1 + 0x4e0) == (uint)*(ushort *)(param_1 + 0x4f8)) {
        FUN_0001b3f4(piVar5);
        uVar1 = FUN_00018a08((int)piVar5);
        FUN_00014828((int)(short)uVar1);
        uVar1 = 0;
        if (*(int *)(param_1 + 0x50c) != 0) {
          uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x50c) + 4);
        }
        iVar2 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar1);
        FUN_00015708(param_1);
        uVar1 = FUN_00018a08((int)piVar5);
        FUN_00014828((int)(short)uVar1);
        FUN_000157a0(param_1);
        FUN_0001a5dc(piVar5,*(int **)(param_1 + 0x508));
        uVar1 = 0;
        if (iVar2 != 0) {
          uVar1 = *(undefined4 *)(iVar2 + 4);
        }
        Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar1);
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
        Ordinal_267(*(undefined4 *)(param_1 + 0x20));
      }
    }
    else {
      if (*(int *)(param_1 + 0x4c) == 8) {
        *(undefined4 *)(param_1 + 0x4c) = 5;
        uVar1 = 0;
        if (*(int *)(param_1 + 0x50c) != 0) {
          uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x50c) + 4);
        }
        iVar2 = Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar1);
        FUN_00015754(param_1);
        *(undefined1 *)(param_1 + 0x520) = 1;
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
        Ordinal_267(*(undefined4 *)(param_1 + 0x20));
        uVar1 = 0;
        if (iVar2 != 0) {
          uVar1 = *(undefined4 *)(iVar2 + 4);
        }
        Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar1);
      }
      uVar3 = FUN_0001b08c((int *)(param_1 + 0x4c),(int *)&stack0x00000008,auStack_54,auStack_4c);
      if (((uVar3 & 0xff) != 0) && (piVar5 = (int *)(param_1 + 0x4c), *piVar5 == 5)) {
        uVar1 = Ordinal_535();
        *(undefined4 *)(param_1 + 0x554) = uVar1;
        uVar1 = 0;
        if (*(int *)(param_1 + 0x50c) != 0) {
          uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x50c) + 4);
        }
        Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar1);
        FUN_0001b63c(piVar5,*(int *)(param_1 + 0x508));
        FUN_00015630(param_1);
        FUN_0001adb8(piVar5,*(int *)(param_1 + 0x508),2);
        *(undefined1 *)(param_1 + 0x520) = 1;
        Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
        Ordinal_267(*(undefined4 *)(param_1 + 0x20));
        if ((int)*(short *)(param_1 + 0x4e0) == (uint)*(ushort *)(param_1 + 0x4f8)) {
          if (*(char *)(param_1 + 0x4f3) == '\0') {
            uVar1 = 0;
            if (*(int *)(param_1 + 0x50c) != 0) {
              uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x50c) + 4);
            }
            Ordinal_2264(*(undefined4 *)(*(int *)(param_1 + 0x508) + 4),uVar1);
            FUN_0001b3f4(piVar5);
            uVar1 = FUN_00018a08((int)piVar5);
            FUN_00014828((int)(short)uVar1);
            FUN_00015708(param_1);
            uVar1 = FUN_00018a08((int)piVar5);
            FUN_00014828((int)(short)uVar1);
            FUN_000157a0(param_1);
            FUN_0001a5dc(piVar5,*(int **)(param_1 + 0x508));
            *(undefined1 *)(param_1 + 0x520) = 1;
            Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
            Ordinal_267(*(undefined4 *)(param_1 + 0x20));
          }
          else {
            *(undefined4 *)(param_1 + 0x4c) = 7;
          }
        }
        else {
          uVar4 = *(short *)(param_1 + 0x4e4) + 1;
          *(ushort *)(param_1 + 0x4e4) = uVar4;
          if ((uint)*(ushort *)(param_1 + 0x4f8) <= (uint)uVar4) {
            *(undefined2 *)(param_1 + 0x4e4) = 0;
          }
        }
      }
      do {
        iVar2 = func_0x0001c8e0(auStack_3c,*(undefined4 *)(param_1 + 0x20),0x201,0x201,1);
      } while (iVar2 != 0);
      do {
        iVar2 = func_0x0001c8e0(auStack_3c,*(undefined4 *)(param_1 + 0x20),0x202,0x202,1);
      } while (iVar2 != 0);
    }
  }
  return;
}


// ==== FUN_000155c4 @ 000155c4  size=108  callers=[00015630, 00015708, 00015754, 000157a0]

void FUN_000155c4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x508) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x508) + 4);
  }
  Ordinal_906(uVar1);
  return;
}


// ==== FUN_00015630 @ 00015630  size=216  callers=[00014db4, 00015258]

void FUN_00015630(int param_1)

{
  FUN_000155c4(param_1);
  return;
}


// ==== FUN_00015708 @ 00015708  size=72  callers=[00014db4, 00015258]

void FUN_00015708(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *DAT_00015750;
  FUN_000155c4(param_1);
  return;
}


// ==== FUN_00015754 @ 00015754  size=72  callers=[00015258]

void FUN_00015754(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *DAT_0001579c;
  FUN_000155c4(param_1);
  return;
}


// ==== FUN_000157a0 @ 000157a0  size=160  callers=[00014db4, 00015258]

void FUN_000157a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *DAT_00015844;
  FUN_000155c4(param_1);
  if (*(char *)(param_1 + 0x4fc) != '\0') {
    uVar1 = *DAT_00015840;
    FUN_000155c4(param_1);
  }
  return;
}


// ==== FUN_00015848 @ 00015848  size=64  callers=[]

void FUN_00015848(void)

{
  Ordinal_493(DAT_00015888,DAT_0001588c,0,0,0,0,0,0,0,0);
  return;
}


// ==== FUN_00015890 @ 00015890  size=312  callers=[]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00015890(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined1 auStack_cc [180];
  
  cVar1 = *(char *)(param_1 + 0x4fc);
  sVar2 = *(short *)(param_1 + 0x4fa);
  FUN_000113e0(auStack_cc,1,(undefined2 *)(param_1 + 0x4f0),(char *)(param_1 + 0x4f2),
               param_1 + 0x4f3,param_1 + 0x4ec,(char *)(param_1 + 0x4fc),param_1 + 0x4f6,
               (short *)(param_1 + 0x4fa),param_1 + 0x502,param_1 + 0x4fe,param_1 + 0x504,0);
  Ordinal_1079(auStack_cc);
  if ((cVar1 != *(char *)(param_1 + 0x4fc)) ||
     ((*(char *)(param_1 + 0x4fc) == '\0' && (sVar2 != *(short *)(param_1 + 0x4fa))))) {
    iVar3 = Ordinal_1760(param_1,_UNK_0001599c,_UNK_000159a0,4);
    if (iVar3 == 6) {
      FUN_0001bcd0((undefined4 *)(param_1 + 0x4c));
    }
    else {
      Ordinal_1760(param_1,_UNK_000159d0,_UNK_000159d4,0);
      *(char *)(param_1 + 0x4fc) = cVar1;
      *(short *)(param_1 + 0x4fa) = sVar2;
    }
  }
  Ordinal_231(auStack_cc);
  return;
}


// ==== FUN_000159d8 @ 000159d8  size=312  callers=[]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000159d8(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined1 auStack_cc [180];
  
  cVar1 = *(char *)(param_1 + 0x4fc);
  sVar2 = *(short *)(param_1 + 0x4fa);
  FUN_000113e0(auStack_cc,0,(undefined2 *)(param_1 + 0x4f0),(char *)(param_1 + 0x4f2),
               param_1 + 0x4f3,param_1 + 0x4ec,(char *)(param_1 + 0x4fc),param_1 + 0x4f6,
               (short *)(param_1 + 0x4fa),param_1 + 0x502,param_1 + 0x4fe,param_1 + 0x504,0);
  Ordinal_1079(auStack_cc);
  if ((cVar1 != *(char *)(param_1 + 0x4fc)) ||
     ((*(char *)(param_1 + 0x4fc) == '\0' && (sVar2 != *(short *)(param_1 + 0x4fa))))) {
    iVar3 = Ordinal_1760(param_1,_UNK_00015ae4,_UNK_00015ae8,4);
    if (iVar3 == 6) {
      FUN_0001bcd0((undefined4 *)(param_1 + 0x4c));
    }
    else {
      Ordinal_1760(param_1,_UNK_00015b18,_UNK_00015b1c,0);
      *(char *)(param_1 + 0x4fc) = cVar1;
      *(short *)(param_1 + 0x4fa) = sVar2;
    }
  }
  Ordinal_231(auStack_cc);
  return;
}


// ==== FUN_00015b20 @ 00015b20  size=80  callers=[]

void FUN_00015b20(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = Ordinal_1760(param_1,PTR_u_Start_new_game___00015b74,PTR_u_Spades_00015b78,4);
  puVar1 = PTR_DAT_00015b70;
  if (iVar2 == 6) {
    *PTR_DAT_00015b70 = 1;
    FUN_0001bcd0((undefined4 *)(param_1 + 0x4c));
    Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
    *puVar1 = 0;
  }
  return;
}


// ==== FUN_00015b7c @ 00015b7c  size=80  callers=[]

void FUN_00015b7c(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = Ordinal_1760(param_1,PTR_u_Redeal_this_hand___00015bd0,PTR_u_Spades_00015bd4,4);
  puVar1 = PTR_DAT_00015bcc;
  if (iVar2 == 6) {
    *PTR_DAT_00015bcc = 1;
    FUN_00018958((undefined4 *)(param_1 + 0x4c));
    Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
    *puVar1 = 0;
  }
  return;
}


// ==== FUN_00015bd8 @ 00015bd8  size=48  callers=[]

void FUN_00015bd8(int param_1)

{
  undefined1 auStack_84 [128];
  
  FUN_000126dc(auStack_84,param_1 + 0x4c);
  Ordinal_1079(auStack_84);
  Ordinal_231(auStack_84);
  return;
}


// ==== FUN_00015c34 @ 00015c34  size=32  callers=[]

void FUN_00015c34(int param_1)

{
  FUN_00014d78(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001c764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c768)(param_1);
  return;
}


// ==== FUN_00015c4c @ 00015c4c  size=276  callers=[]

void FUN_00015c4c(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_bc [180];
  
  Ordinal_1946();
  bVar1 = FUN_000148a8(param_1);
  if (!bVar1) {
    FUN_000113e0(auStack_bc,1,(undefined2 *)(param_1 + 0x4f0),(char *)(param_1 + 0x4f2),
                 param_1 + 0x4f3,param_1 + 0x4ec,(char *)(param_1 + 0x4fc),param_1 + 0x4f6,
                 param_1 + 0x4fa,param_1 + 0x502,param_1 + 0x4fe,param_1 + 0x504,0);
    iVar2 = Ordinal_1079(auStack_bc);
    if (iVar2 == 1) {
      FUN_0001bcd0((undefined4 *)(param_1 + 0x4c));
      Ordinal_250(*(undefined4 *)(param_1 + 0x20),0,0);
    }
    Ordinal_231(auStack_bc);
  }
  Ordinal_703(*(undefined4 *)(param_1 + 0x20));
  Ordinal_1207();
  *DAT_00015d60 = 0;
  return;
}


// ==== FUN_00015d64 @ 00015d64  size=312  callers=[]

void FUN_00015d64(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined1 auStack_cc [180];
  
  cVar1 = *(char *)(param_1 + 0x4fc);
  sVar2 = *(short *)(param_1 + 0x4fa);
  FUN_000113e0(auStack_cc,2,(undefined2 *)(param_1 + 0x4f0),(char *)(param_1 + 0x4f2),
               param_1 + 0x4f3,param_1 + 0x4ec,(char *)(param_1 + 0x4fc),param_1 + 0x4f6,
               (short *)(param_1 + 0x4fa),param_1 + 0x502,param_1 + 0x4fe,param_1 + 0x504,0);
  Ordinal_1079(auStack_cc);
  if ((cVar1 != *(char *)(param_1 + 0x4fc)) ||
     ((*(char *)(param_1 + 0x4fc) == '\0' && (sVar2 != *(short *)(param_1 + 0x4fa))))) {
    iVar3 = Ordinal_1760(param_1,DAT_00015e70,DAT_00015e74,4);
    if (iVar3 == 6) {
      FUN_0001bcd0((undefined4 *)(param_1 + 0x4c));
    }
    else {
      Ordinal_1760(param_1,DAT_00015ea4,DAT_00015ea8,0);
      *(char *)(param_1 + 0x4fc) = cVar1;
      *(short *)(param_1 + 0x4fa) = sVar2;
    }
  }
  Ordinal_231(auStack_cc);
  return;
}


// ==== FUN_00015eac @ 00015eac  size=464  callers=[00014998]

undefined4 * FUN_00015eac(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined2 extraout_r1;
  undefined4 *puVar4;
  int iVar5;
  
  FUN_000161ec((undefined1 *)(param_1 + 1));
  puVar4 = param_1 + 0x6b;
  iVar5 = 4;
  do {
    FUN_00017c3c((int)puVar4);
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + 0x2c;
  } while (iVar5 != 0);
  FUN_00016840(param_1 + 0x11b);
  *(undefined2 *)((int)param_1 + 0x4b6) = 500;
  *(undefined2 *)((int)param_1 + 0x4b2) = 0xff9c;
  *(undefined1 *)((int)param_1 + 0x4b5) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x12d) = 0;
  *(undefined2 *)(param_1 + 299) = 4;
  *(undefined1 *)((int)param_1 + 0x4aa) = 1;
  *(undefined1 *)(param_1 + 300) = 1;
  *(undefined2 *)((int)param_1 + 0x4ae) = 3;
  *(undefined1 *)((int)param_1 + 0x4a9) = 0;
  *(undefined2 *)((int)param_1 + 0x49a) = 0;
  *(undefined2 *)(param_1 + 0x127) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined1 *)((int)param_1 + 0x49e) = 0;
  *(undefined1 *)(param_1 + 0x12a) = 1;
  uVar2 = Ordinal_1053();
  (*(code *)*DAT_00016088)(5,uVar2);
  pcVar3 = DAT_00016084;
  param_1[0x128] = 1;
  *(undefined2 *)(param_1 + 0x129) = extraout_r1;
  *(undefined1 *)((int)param_1 + 0x4a6) = 1;
  *(undefined1 *)((int)param_1 + 0x4a7) = 1;
  param_1[0x12e] = 0;
  iVar5 = 0x1b0 - (int)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)param_1 + iVar5] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0x260 - (int)DAT_00016080;
  pcVar3 = DAT_00016080;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)param_1 + iVar5] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0x3c0 - (int)DAT_0001607c;
  pcVar3 = DAT_0001607c;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)param_1 + iVar5] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_0001a410((int)(param_1 + 1));
  FUN_00018084(param_1);
  return param_1;
}


// ==== FUN_0001608c @ 0001608c  size=36  callers=[]

undefined1 * FUN_0001608c(undefined1 *param_1,uint param_2)

{
  FUN_00014a70(param_1);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_000160b0 @ 000160b0  size=128  callers=[00014998, 0001a22c, 0001a320]

void FUN_000160b0(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00016130;
  param_1[1] = (char)((uint)DAT_00016130 >> 8);
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


// ==== FUN_00016134 @ 00016134  size=104  callers=[]

undefined1 * FUN_00016134(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_000161a0;
  *param_1 = (char)DAT_000161a0;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  Ordinal_1040(param_1);
  uVar1 = DAT_0001619c;
  *param_1 = (char)DAT_0001619c;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = (char)((uint)uVar1 >> 0x18);
  if ((param_2 & 1) != 0) {
    Ordinal_317(param_1);
  }
  return param_1;
}


// ==== FUN_000161a4 @ 000161a4  size=52  callers=[00014998, 0001a22c, 0001a320]

void FUN_000161a4(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = Ordinal_628(param_2,2);
  uVar1 = Ordinal_873(uVar1,param_2);
  Ordinal_800(param_1,uVar1);
  return;
}


// ==== FUN_000161d8 @ 000161d8  size=20  callers=[000161ec, 000162a4, 0001638c, 0001651c, 00016840, 000168f8, 00016dbc, 000170f4, 000172ec, 00018394, 0001a410]

void FUN_000161d8(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  return;
}


// ==== FUN_000161ec @ 000161ec  size=184  callers=[00015eac, 00018958]

undefined1 * FUN_000161ec(undefined1 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = (undefined4 *)(param_1 + 4);
  iVar5 = 0x34;
  do {
    FUN_000161d8(puVar4);
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


// ==== FUN_000162a4 @ 000162a4  size=232  callers=[]

undefined1 * FUN_000162a4(int param_1,undefined1 *param_2)

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
    puVar2 = (undefined1 *)FUN_000161d8(auStack_10);
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


// ==== FUN_0001638c @ 0001638c  size=400  callers=[00018084]

undefined1 * FUN_0001638c(int param_1,undefined1 *param_2)

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
    puVar9 = (undefined1 *)FUN_000161d8(auStack_18);
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
    puVar9 = (undefined1 *)FUN_000161d8(auStack_18);
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


// ==== FUN_0001651c @ 0001651c  size=376  callers=[]

undefined1 * FUN_0001651c(int param_1,undefined1 *param_2)

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
    puVar10 = (undefined1 *)FUN_000161d8(auStack_18);
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
    puVar10 = (undefined1 *)FUN_000161d8(auStack_18);
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


// ==== FUN_00016694 @ 00016694  size=120  callers=[0001b3f4]

void FUN_00016694(int param_1,undefined4 param_2,undefined4 param_3)

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


// ==== FUN_00016710 @ 00016710  size=96  callers=[00018270, 00018ca4, 000195fc]

undefined4 FUN_00016710(int param_1,int param_2,short param_3)

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


// ==== FUN_00016770 @ 00016770  size=76  callers=[00018b8c, 00018d78]

int FUN_00016770(int param_1,int param_2)

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


// ==== FUN_000167bc @ 000167bc  size=132  callers=[00018d78]

bool FUN_000167bc(int param_1,int param_2,ushort param_3)

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


// ==== FUN_00016840 @ 00016840  size=56  callers=[00015eac]

undefined4 * FUN_00016840(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 4;
  puVar1 = param_1;
  do {
    FUN_000161d8(puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  *(undefined2 *)(param_1 + 10) = 0;
  return param_1;
}


// ==== FUN_00016878 @ 00016878  size=128  callers=[00018524, 0001b08c]

void FUN_00016878(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

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


// ==== FUN_000168f8 @ 000168f8  size=412  callers=[00018958, 0001b3f4]

undefined1 * FUN_000168f8(int param_1,undefined1 *param_2,short param_3)

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
      puVar10 = (undefined1 *)FUN_000161d8(auStack_1c);
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
  puVar10 = (undefined1 *)FUN_000161d8(auStack_1c);
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


// ==== FUN_00016a94 @ 00016a94  size=108  callers=[00016d6c, 000195fc, 0001989c, 00019c24]

int FUN_00016a94(int *param_1)

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


// ==== FUN_00016b00 @ 00016b00  size=84  callers=[]

undefined4 FUN_00016b00(int param_1)

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


// ==== FUN_00016b54 @ 00016b54  size=64  callers=[]

int FUN_00016b54(int param_1,int param_2)

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


// ==== FUN_00016b94 @ 00016b94  size=108  callers=[]

int FUN_00016b94(int *param_1)

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


// ==== FUN_00016c00 @ 00016c00  size=88  callers=[]

undefined4 FUN_00016c00(int param_1,int param_2,short param_3)

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


// ==== FUN_00016c58 @ 00016c58  size=80  callers=[00018b8c, 000194a8, 000195fc, 000197e4]

undefined4 FUN_00016c58(int param_1,short param_2)

{
  int iVar1;
  
  if (0 < *(short *)(param_1 + 0x28)) {
    iVar1 = 0;
    do {
      if ((uint)*(ushort *)(param_1 + iVar1 * 2 + 0x20) == (int)param_2) {
        return 1;
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < *(short *)(param_1 + 0x28));
  }
  return 0;
}


// ==== FUN_00016ca8 @ 00016ca8  size=76  callers=[00018524, 000194a8, 000195fc, 0001989c]

undefined4 FUN_00016ca8(int *param_1)

{
  int iVar1;
  
  if (1 < (short)param_1[10]) {
    iVar1 = 1;
    do {
      if ((param_1[iVar1 * 2] == 3) && (*param_1 != 3)) {
        return 1;
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < (short)param_1[10]);
  }
  return 0;
}


// ==== FUN_00016cf4 @ 00016cf4  size=120  callers=[00016d6c, 00018524, 000194a8]

int FUN_00016cf4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  if (0 < *(short *)(param_1 + 0x28)) {
    iVar2 = 0;
    do {
      piVar1 = (int *)(param_1 + iVar2 * 8);
      if ((*piVar1 == 3) &&
         (((short)iVar3 == -1 ||
          (*(ushort *)(param_1 + (short)iVar3 * 8 + 4) < *(ushort *)(piVar1 + 1))))) {
        iVar3 = iVar2;
      }
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < *(short *)(param_1 + 0x28));
  }
  return iVar3;
}


// ==== FUN_00016d6c @ 00016d6c  size=80  callers=[0001989c, 0001a1bc]

int FUN_00016d6c(int *param_1)

{
  int iVar1;
  
  if ((short)param_1[10] == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_00016cf4((int)param_1);
    iVar1 = (int)(short)iVar1;
    if (iVar1 < 0) {
      iVar1 = FUN_00016a94(param_1);
      iVar1 = (int)(short)iVar1;
    }
    iVar1 = (int)*(short *)((int)param_1 + (iVar1 + 0x10) * 2);
  }
  return iVar1;
}


// ==== FUN_00016dbc @ 00016dbc  size=56  callers=[00016f60, 00017c3c]

undefined4 * FUN_00016dbc(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x12;
  puVar1 = param_1;
  do {
    FUN_000161d8(puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  *(undefined2 *)(param_1 + 0x24) = 0;
  return param_1;
}


// ==== FUN_00016df4 @ 00016df4  size=72  callers=[00017720, 000178cc, 00017978, 00017a3c, 00017cb0, 00018524, 00018b8c, 00018d78, 00018e04, 00018f50, 0001b08c]

int FUN_00016df4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x90)) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 8;
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
      if (*(uint *)(param_1 + iVar1) == (param_2 & 0xffff)) {
        iVar3 = iVar3 + 1;
      }
    } while (iVar2 < *(short *)(param_1 + 0x90));
  }
  return iVar3;
}


// ==== FUN_00016e3c @ 00016e3c  size=64  callers=[00016e7c, 00016ef4, 00018f50, 0001989c]

void FUN_00016e3c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)*(short *)(param_1 + 0x90);
  do {
    iVar1 = (iVar1 + -1) * 0x10000 >> 0x10;
    if (iVar1 < 0) {
      return;
    }
  } while (*(int *)(param_1 + iVar1 * 8) != param_2);
  return;
}


// ==== FUN_00016e7c @ 00016e7c  size=120  callers=[00018524, 00018f50]

undefined4 FUN_00016e7c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  iVar2 = 0;
  do {
    if (iVar2 != param_2) {
      uVar1 = FUN_00016e3c(param_1,iVar2);
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


// ==== FUN_00016ef4 @ 00016ef4  size=108  callers=[00018524, 00018f50, 0001989c]

undefined4 FUN_00016ef4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0xffffffff;
  iVar3 = 0;
  do {
    uVar1 = FUN_00016e3c(param_1,iVar3);
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


// ==== FUN_00016f60 @ 00016f60  size=404  callers=[00018084]

void FUN_00016f60(int param_1)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_400b4 [262136];
  short local_bc;
  undefined4 local_b4;
  undefined1 local_b0 [144];
  
  FUN_00016dbc(&local_b4);
  iVar8 = 0;
  iVar6 = 0;
  do {
    if (iVar8 == 0) {
      local_bc = 0;
    }
    else if (iVar8 == 1) {
      local_bc = 2;
    }
    else if (iVar8 == 2) {
      local_bc = 3;
    }
    else if (iVar8 == 3) {
      local_bc = 1;
    }
    sVar2 = *(short *)(param_1 + 0x90);
    iVar7 = iVar6;
    if (0 < sVar2) {
      iVar4 = 0;
      do {
        piVar3 = (int *)(param_1 + iVar4 * 8);
        if (*piVar3 == (int)local_bc) {
          iVar7 = (int)(short)iVar7;
          iVar1 = iVar7 * 8;
          *(char *)(&local_b4 + iVar7 * 2) = (char)*piVar3;
          iVar7 = (iVar7 + 1) * 0x10000 >> 0x10;
          *(undefined1 *)((int)&local_b4 + iVar1 + 1) = *(undefined1 *)((int)piVar3 + 1);
          *(undefined1 *)((int)&local_b4 + iVar1 + 2) = *(undefined1 *)((int)piVar3 + 2);
          *(undefined1 *)((int)&local_b4 + iVar1 + 3) = *(undefined1 *)((int)piVar3 + 3);
          local_b0[iVar1] = (char)piVar3[1];
          local_b0[iVar1 + 1] = *(undefined1 *)((int)piVar3 + 5);
          local_b0[iVar1 + 2] = *(undefined1 *)((int)piVar3 + 6);
          local_b0[iVar1 + 3] = *(undefined1 *)((int)piVar3 + 7);
        }
        iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
      } while (iVar4 < sVar2);
    }
    FUN_000170f4((int)&local_b4,iVar6,(short)iVar7);
    iVar8 = (iVar8 + 1) * 0x10000 >> 0x10;
    iVar6 = iVar7;
  } while (iVar8 < 4);
  if (0 < *(short *)(param_1 + 0x90)) {
    iVar8 = 0;
    do {
      iVar6 = iVar8 * 8;
      puVar5 = (undefined1 *)(param_1 + iVar8 * 8);
      *puVar5 = *(undefined1 *)(&local_b4 + iVar8 * 2);
      puVar5[1] = *(undefined1 *)((int)&local_b4 + iVar6 + 1);
      puVar5[2] = *(undefined1 *)((int)&local_b4 + iVar6 + 2);
      puVar5[3] = *(undefined1 *)((int)&local_b4 + iVar6 + 3);
      puVar5[4] = local_b0[iVar6];
      puVar5[5] = local_b0[iVar6 + 1];
      puVar5[6] = local_b0[iVar6 + 2];
      puVar5[7] = local_b0[iVar6 + 3];
      iVar8 = (iVar8 + 1) * 0x10000 >> 0x10;
    } while (iVar8 < *(short *)(param_1 + 0x90));
  }
  return;
}


// ==== FUN_000170f4 @ 000170f4  size=392  callers=[00016f60]

void FUN_000170f4(int param_1,int param_2,short param_3)

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
    FUN_000161d8(local_20);
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


// ==== FUN_0001727c @ 0001727c  size=112  callers=[00018084, 00018394]

void FUN_0001727c(int param_1,undefined4 param_2,undefined4 param_3)

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
  
  if (*(short *)(param_1 + 0x90) < 0x12) {
    puVar1 = (undefined1 *)(param_1 + *(short *)(param_1 + 0x90) * 8);
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
    *(short *)(param_1 + 0x90) = *(short *)(param_1 + 0x90) + 1;
  }
  return;
}


// ==== FUN_000172ec @ 000172ec  size=412  callers=[00018084, 00018394, 00018468, 00018524, 0001b08c]

undefined1 * FUN_000172ec(int param_1,undefined1 *param_2,short param_3)

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
  
  iVar13 = (int)*(short *)(param_1 + 0x90);
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
      *(short *)(param_1 + 0x90) = *(short *)(param_1 + 0x90) + -1;
      puVar10 = (undefined1 *)FUN_000161d8(auStack_1c);
      puVar14 = (undefined1 *)(param_1 + *(short *)(param_1 + 0x90) * 8);
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
  puVar10 = (undefined1 *)FUN_000161d8(auStack_1c);
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


// ==== FUN_00017488 @ 00017488  size=68  callers=[]

int FUN_00017488(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x90)) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 8;
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
      if (*(char *)(param_1 + iVar1 + 6) != '\0') {
        iVar3 = iVar3 + 1;
      }
    } while (iVar2 < *(short *)(param_1 + 0x90));
  }
  return iVar3;
}


// ==== FUN_000174cc @ 000174cc  size=92  callers=[00017cb0, 000194a8]

int FUN_000174cc(int param_1,uint param_2,ushort param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x90)) {
    iVar1 = 0;
    do {
      puVar2 = (uint *)(param_1 + iVar1 * 8);
      if ((*puVar2 == (param_2 & 0xffff)) && (param_3 <= (ushort)puVar2[1])) {
        iVar3 = iVar3 + 1;
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < *(short *)(param_1 + 0x90));
  }
  return iVar3;
}


// ==== FUN_00017528 @ 00017528  size=252  callers=[]

void FUN_00017528(int param_1,uint param_2,ushort param_3,char param_4,ushort param_5,short *param_6
                 )

{
  uint *puVar1;
  int iVar2;
  
  if (param_4 == '\0') {
    iVar2 = 0;
    if (0 < *(short *)(param_1 + 0x90)) {
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
      } while (iVar2 < *(short *)(param_1 + 0x90));
    }
  }
  else {
    iVar2 = (*(short *)(param_1 + 0x90) + -1) * 0x10000 >> 0x10;
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


// ==== FUN_00017624 @ 00017624  size=112  callers=[00017cb0, 00018270, 00018524, 00018ca4, 000195fc]

undefined4 FUN_00017624(int param_1,uint param_2,short param_3,short *param_4)

{
  int iVar1;
  uint *puVar2;
  
  *param_4 = 0;
  if (0 < *(short *)(param_1 + 0x90)) {
    do {
      puVar2 = (uint *)(param_1 + *param_4 * 8);
      if (((short)puVar2[1] == param_3) && (*puVar2 == (param_2 & 0xffff))) {
        return 1;
      }
      iVar1 = (*param_4 + 1) * 0x10000;
      *param_4 = (short)((uint)iVar1 >> 0x10);
    } while (iVar1 >> 0x10 < (int)*(short *)(param_1 + 0x90));
  }
  return 0;
}


// ==== FUN_000176cc @ 000176cc  size=76  callers=[000178cc, 00017a3c, 0001989c]

int FUN_000176cc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0x90)) {
    do {
      if (*(int *)(param_1 + iVar1 * 8) == param_2) {
        return iVar1;
      }
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < *(short *)(param_1 + 0x90));
  }
  return -1;
}


// ==== FUN_00017720 @ 00017720  size=208  callers=[]

int FUN_00017720(int param_1,int param_2,ushort param_3,ushort param_4)

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
  ushort uStack00000000;
  
  iVar9 = -1;
  iVar8 = 0;
  uStack00000000 = param_4;
  do {
    iVar3 = FUN_00017858(param_1,iVar8,param_2,param_3,uStack00000000);
    if ((short)iVar3 < 0) goto LAB_000177d0;
    if ((short)iVar9 == -1) {
LAB_000177cc:
      iVar9 = iVar3;
    }
    else {
      puVar6 = (ushort *)(param_1 + (short)iVar3 * 8);
      puVar7 = (ushort *)(param_1 + (short)iVar9 * 8);
      uVar1 = puVar6[2];
      uVar2 = puVar7[2];
      if (uVar2 < uVar1) goto LAB_000177cc;
      if (uVar1 == uVar2) {
        iVar4 = FUN_00016df4(param_1,(uint)*puVar6);
        iVar5 = FUN_00016df4(param_1,(uint)*puVar7);
        if ((short)iVar4 < (short)iVar5) goto LAB_000177cc;
      }
    }
LAB_000177d0:
    iVar8 = (iVar8 + 1) * 0x10000 >> 0x10;
    if (3 < iVar8) {
      return iVar9;
    }
  } while( true );
}


// ==== FUN_000177f0 @ 000177f0  size=104  callers=[00017978]

int FUN_000177f0(int param_1,int param_2,int param_3,short param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x90)) {
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
    } while (iVar3 < *(short *)(param_1 + 0x90));
  }
  return -1;
}


// ==== FUN_00017858 @ 00017858  size=116  callers=[00017720]

int FUN_00017858(int param_1,int param_2,int param_3,ushort param_4,ushort param_5)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(short *)(param_1 + 0x90)) {
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
    } while (iVar4 < *(short *)(param_1 + 0x90));
  }
  return -1;
}


// ==== FUN_000178cc @ 000178cc  size=172  callers=[00018524]

int FUN_000178cc(int param_1)

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
    iVar3 = FUN_000176cc(param_1,iVar9);
    if ((short)iVar3 < 0) goto LAB_0001795c;
    if ((short)iVar8 == -1) {
LAB_00017958:
      iVar8 = iVar3;
    }
    else {
      puVar6 = (ushort *)(param_1 + (short)iVar3 * 8);
      puVar7 = (ushort *)(param_1 + (short)iVar8 * 8);
      uVar1 = puVar6[2];
      uVar2 = puVar7[2];
      if (uVar2 < uVar1) goto LAB_00017958;
      if (uVar1 == uVar2) {
        iVar4 = FUN_00016df4(param_1,(uint)*puVar6);
        iVar5 = FUN_00016df4(param_1,(uint)*puVar7);
        if ((short)iVar4 < (short)iVar5) goto LAB_00017958;
      }
    }
LAB_0001795c:
    iVar9 = (iVar9 + 1) * 0x10000 >> 0x10;
    if (3 < iVar9) {
      return iVar8;
    }
  } while( true );
}


// ==== FUN_00017978 @ 00017978  size=196  callers=[]

int FUN_00017978(int param_1,int param_2,short param_3)

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
    iVar3 = FUN_000177f0(param_1,iVar8,param_2,param_3);
    if ((short)iVar3 < 0) goto LAB_00017a1c;
    if ((short)iVar9 == -1) {
LAB_00017a18:
      iVar9 = iVar3;
    }
    else {
      puVar6 = (ushort *)(param_1 + (short)iVar3 * 8);
      puVar7 = (ushort *)(param_1 + (short)iVar9 * 8);
      uVar1 = puVar6[2];
      uVar2 = puVar7[2];
      if (uVar2 < uVar1) goto LAB_00017a18;
      if (uVar1 == uVar2) {
        iVar4 = FUN_00016df4(param_1,(uint)*puVar6);
        iVar5 = FUN_00016df4(param_1,(uint)*puVar7);
        if ((short)iVar4 < (short)iVar5) goto LAB_00017a18;
      }
    }
LAB_00017a1c:
    iVar8 = (iVar8 + 1) * 0x10000 >> 0x10;
    if (3 < iVar8) {
      return iVar9;
    }
  } while( true );
}


// ==== FUN_00017a3c @ 00017a3c  size=184  callers=[00018524]

int FUN_00017a3c(int param_1,int param_2)

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
      iVar3 = FUN_000176cc(param_1,iVar8);
      if (-1 < (short)iVar3) {
        if ((short)iVar9 != -1) {
          puVar6 = (ushort *)(param_1 + (short)iVar3 * 8);
          puVar7 = (ushort *)(param_1 + (short)iVar9 * 8);
          uVar1 = puVar6[2];
          uVar2 = puVar7[2];
          if (uVar1 <= uVar2) {
            if (uVar1 == uVar2) {
              iVar4 = FUN_00016df4(param_1,(uint)*puVar6);
              iVar5 = FUN_00016df4(param_1,(uint)*puVar7);
              if ((short)iVar4 < (short)iVar5) goto LAB_00017ad4;
            }
            goto LAB_00017ad8;
          }
        }
LAB_00017ad4:
        iVar9 = iVar3;
      }
    }
LAB_00017ad8:
    iVar8 = (iVar8 + 1) * 0x10000 >> 0x10;
    if (3 < iVar8) {
      return iVar9;
    }
  } while( true );
}


// ==== FUN_00017af4 @ 00017af4  size=96  callers=[00018524, 0001989c]

int FUN_00017af4(int param_1,int param_2,ushort param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0x90)) {
    do {
      piVar1 = (int *)(param_1 + iVar2 * 8);
      if ((*piVar1 == param_2) && (*(ushort *)(piVar1 + 1) < param_3)) {
        return iVar2;
      }
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < *(short *)(param_1 + 0x90));
  }
  return -1;
}


// ==== FUN_00017b54 @ 00017b54  size=88  callers=[00018524, 0001989c]

void FUN_00017b54(int param_1,int param_2,ushort param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)(param_1 + 0x90);
  do {
    iVar2 = (iVar2 + -1) * 0x10000 >> 0x10;
    if (iVar2 < 0) {
      return;
    }
    piVar1 = (int *)(param_1 + iVar2 * 8);
  } while ((*(ushort *)(piVar1 + 1) <= param_3) || (*piVar1 != param_2));
  return;
}


// ==== FUN_00017bac @ 00017bac  size=68  callers=[]

int FUN_00017bac(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x90)) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 8;
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
      if (*(short *)(param_1 + iVar1 + 4) == 0xe) {
        iVar3 = iVar3 + 1;
      }
    } while (iVar2 < *(short *)(param_1 + 0x90));
  }
  return iVar3;
}


// ==== FUN_00017bf0 @ 00017bf0  size=76  callers=[00017cb0]

int FUN_00017bf0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x90)) {
    iVar2 = 0;
    do {
      uVar1 = *(ushort *)(param_1 + iVar2 * 8 + 4);
      if ((10 < uVar1) && (uVar1 < 0xe)) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < *(short *)(param_1 + 0x90));
  }
  return iVar3;
}


// ==== FUN_00017c3c @ 00017c3c  size=112  callers=[00015eac]

int FUN_00017c3c(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  FUN_00016dbc((undefined4 *)(param_1 + 0x10));
  iVar3 = (param_1 + 4) - (int)DAT_00017cac;
  pcVar2 = DAT_00017cac;
  do {
    cVar1 = *pcVar2;
    pcVar2[iVar3] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = 0;
  *(undefined2 *)(param_1 + 0xae) = 0;
  *(undefined2 *)(param_1 + 0xac) = 0;
  *(undefined2 *)(param_1 + 0xaa) = 0;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xa6) = 0;
  *(undefined2 *)(param_1 + 0xa4) = 0;
  do {
    *(undefined1 *)(iVar3 + param_1) = 1;
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
  } while (iVar3 < 4);
  return param_1;
}


// ==== FUN_00017cb0 @ 00017cb0  size=980  callers=[0001109c, 00018084]

void FUN_00017cb0(int param_1,short param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  short sStack_36;
  short local_34;
  short local_32;
  
  iVar9 = param_1 + 0x10;
  *(undefined2 *)(param_1 + 0xaa) = 0;
  iVar2 = FUN_00016df4(iVar9,2);
  iVar3 = FUN_00016df4(iVar9,3);
  local_32 = (short)iVar3;
  iVar4 = FUN_00016df4(iVar9,0);
  local_34 = (short)iVar4;
  iVar5 = FUN_00016df4(iVar9,1);
  iVar3 = (int)(short)iVar3;
  sVar1 = (short)iVar5;
  if (1 < iVar3) {
    uVar6 = FUN_000174cc(iVar9,3,0xd);
    *(short *)(param_1 + 0xaa) = (short)uVar6;
    if ((uVar6 & 0xffff) != 0) {
      iVar5 = FUN_000174cc(iVar9,3,0xb);
      *(short *)(param_1 + 0xaa) = (short)iVar5;
    }
    if ((2 < *(ushort *)(param_1 + 0xaa)) || (4 < iVar3)) {
      iVar5 = FUN_000174cc(iVar9,3,9);
      *(short *)(param_1 + 0xaa) = (short)iVar5;
    }
    if (2 < (int)(iVar3 - (uint)*(ushort *)(param_1 + 0xaa))) {
      *(ushort *)(param_1 + 0xaa) = *(ushort *)(param_1 + 0xaa) + 1;
    }
    if (((((short)iVar2 < 3) || ((short)iVar4 < 3)) || (sVar1 < 3)) &&
       (2 < (int)(iVar3 - (uint)*(ushort *)(param_1 + 0xaa)))) {
      uVar8 = *(ushort *)(param_1 + 0xaa);
      do {
        uVar8 = uVar8 + 1;
      } while (2 < (int)(iVar3 - (uint)uVar8));
      *(ushort *)(param_1 + 0xaa) = uVar8;
    }
  }
  uVar6 = 0;
  do {
    if (uVar6 != 3) {
      iVar4 = 0xe;
      while( true ) {
        uVar7 = FUN_00017624(iVar9,uVar6,(short)iVar4,&sStack_36);
        if (((uVar7 & 0xff) == 0) || (iVar4 = (int)(short)iVar4, iVar4 < 2)) break;
        *(short *)(param_1 + 0xaa) = *(short *)(param_1 + 0xaa) + 1;
        iVar5 = FUN_00016df4(iVar9,uVar6);
        if (((6 < (short)iVar5) && (iVar4 < 0xd)) ||
           ((iVar5 = FUN_00016df4(iVar9,uVar6), 4 < (short)iVar5 && (iVar4 < 0xb)))) break;
        iVar4 = (iVar4 + -1) * 0x10000 >> 0x10;
      }
      iVar4 = (int)local_34;
    }
    uVar6 = (int)((uVar6 + 1) * 0x10000) >> 0x10;
  } while ((int)uVar6 < 4);
  if ((*(short *)(param_1 + 0xaa) == 0) &&
     ((((2 < iVar3 || (iVar5 = FUN_000174cc(iVar9,1,10), 1 < (short)iVar5)) ||
       (iVar5 = FUN_000174cc(iVar9,2,10), 1 < (short)iVar5)) ||
      (iVar5 = FUN_000174cc(iVar9,0,10), 1 < (short)iVar5)))) {
    *(short *)(param_1 + 0xaa) = *(short *)(param_1 + 0xaa) + 1;
  }
  else if ((((*(short *)(param_1 + 0xaa) == 1) && (iVar3 < 3)) &&
           ((iVar3 = FUN_000174cc(iVar9,1,0xb), (short)iVar3 == 0 || (sVar1 == 1)))) &&
          (((iVar3 = FUN_000174cc(iVar9,2,0xb), (short)iVar3 == 0 || ((short)iVar2 == 1)) &&
           ((iVar3 = FUN_000174cc(iVar9,0,0xb), (short)iVar3 == 0 || ((short)iVar4 == 1)))))) {
    *(undefined2 *)(param_1 + 0xaa) = 0;
  }
  if (((param_2 == 3) && (uVar8 = *(ushort *)(param_1 + 0xaa), uVar8 != 0)) && (uVar8 < 5)) {
    *(ushort *)(param_1 + 0xaa) = uVar8 + 1;
  }
  if (param_3 == 1) {
    if (*(short *)(param_1 + 0xaa) == 0) goto LAB_00018074;
    local_32 = *(short *)(param_1 + 0xaa) + 1;
  }
  else if (param_3 != 2) {
    if (param_3 == 3) {
      iVar3 = FUN_00017bf0(iVar9);
      *(short *)(param_1 + 0xaa) = (short)iVar3;
      goto LAB_00018074;
    }
    local_32 = sVar1;
    if (param_3 != 4) goto LAB_00018074;
  }
  *(short *)(param_1 + 0xaa) = local_32;
LAB_00018074:
  *(undefined2 *)(param_1 + 0xac) = *(undefined2 *)(param_1 + 0xaa);
  return;
}


// ==== FUN_00018084 @ 00018084  size=488  callers=[00015eac, 00018958]

void FUN_00018084(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint extraout_r1;
  ushort uVar3;
  uint uVar4;
  undefined1 auStack_24 [8];
  
  if (*(char *)(param_1 + 300) == '\0') {
    uVar4 = *(ushort *)((int)param_1 + 0x4ae) + 1;
  }
  else {
    uVar4 = 4;
  }
  *(short *)(param_1 + 299) = (short)uVar4;
  uVar2 = (uint)*(ushort *)((int)param_1 + 0x49a);
  if (uVar4 <= uVar2) {
    (*(code *)*DAT_0001826c)();
    uVar2 = extraout_r1;
  }
  uVar4 = (uVar2 & 0xffff) + 1;
  uVar3 = 0;
  do {
    if ((uint)*(ushort *)(param_1 + 299) <= (uVar4 & 0xffff)) {
      uVar4 = 0;
    }
    puVar1 = (undefined4 *)FUN_0001638c((int)(param_1 + 1),auStack_24);
    FUN_0001727c((int)(param_1 + (uVar4 & 0xffff) * 0x2c + 0x6f),*puVar1,puVar1[1]);
    uVar3 = uVar3 + 1;
    uVar4 = (uVar4 & 0xffff) + 1 & 0xffff;
  } while (uVar3 < 0x34);
  if (*(short *)(param_1 + 299) == 3) {
    if (*(short *)(param_1 + 0x93) == 0x12) {
      FUN_000172ec((int)(param_1 + 0x6f),auStack_24,0x11);
    }
    if (*(short *)(param_1 + 0xbf) == 0x12) {
      FUN_000172ec((int)(param_1 + 0x9b),auStack_24,0x11);
    }
    if (*(short *)(param_1 + 0xeb) == 0x12) {
      FUN_000172ec((int)(param_1 + 199),auStack_24,0x11);
    }
  }
  if (*(short *)(param_1 + 299) != 0) {
    uVar4 = 0;
    do {
      FUN_00016f60((int)(param_1 + uVar4 * 0x2c + 0x6f));
      if (uVar4 != 2) {
        FUN_00017cb0((int)(param_1 + uVar4 * 0x2c + 0x6b),*(short *)(param_1 + 299),param_1[0x12e]);
      }
      uVar4 = uVar4 + 1 & 0xffff;
    } while (uVar4 < *(ushort *)(param_1 + 299));
  }
  FUN_00018270((int)param_1);
  *(undefined1 *)((int)param_1 + 0x49e) = 0;
  *param_1 = 1;
  if (*(short *)(param_1 + 0xec) <= *(short *)((int)param_1 + 0x4b2)) {
    *(undefined1 *)(param_1 + 0x12d) = 1;
  }
  return;
}


// ==== FUN_00018270 @ 00018270  size=288  callers=[00018084]

void FUN_00018270(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint extraout_r1;
  undefined2 uVar3;
  int iVar4;
  short sVar5;
  bool bVar6;
  short asStack_1c [2];
  
  if ((*(char *)(param_1 + 0x4b0) == '\0') && (*(char *)(param_1 + 0x4aa) != '\0')) {
    sVar5 = 2;
    uVar2 = FUN_00016710(param_1 + 4,0,2);
    if ((uVar2 & 0xff) != 0) {
      sVar5 = 3;
    }
    iVar4 = 0;
    if (*(short *)(param_1 + 0x4ac) != 0) {
      do {
        uVar2 = FUN_00017624(iVar4 * 0xb0 + param_1 + 0x1bc,0,sVar5,asStack_1c);
        if ((uVar2 & 0xff) != 0) {
          *(short *)(param_1 + 0x498) = (short)iVar4;
          return;
        }
        iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
      } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x4ac));
    }
  }
  else {
    uVar2 = (uint)*(ushort *)(param_1 + 0x49a);
    if (*(ushort *)(param_1 + 0x4ac) <= uVar2) {
      (*(code *)*DAT_00018390)();
      uVar2 = extraout_r1;
    }
    uVar2 = (uVar2 & 0xffff) + 1;
    uVar1 = (undefined2)uVar2;
    bVar6 = 3 < (uVar2 & 0xffff);
    uVar3 = uVar1;
    if (bVar6) {
      uVar3 = 0;
    }
    *(undefined2 *)(param_1 + 0x498) = uVar1;
    if (bVar6) {
      *(undefined2 *)(param_1 + 0x498) = uVar3;
    }
  }
  return;
}


// ==== FUN_00018394 @ 00018394  size=212  callers=[]

void FUN_00018394(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_20;
  uint3 local_1c;
  undefined1 uStack_19;
  undefined1 auStack_18 [8];
  
  FUN_000161d8(&local_20);
  iVar3 = 0;
  if (0 < *(short *)(param_2 + 0xa0)) {
    do {
      sVar1 = (short)iVar3;
      if (*(char *)(param_2 + sVar1 * 8 + 0x16) != '\0') {
        puVar2 = (undefined4 *)FUN_000172ec(param_2 + 0x10,auStack_18,sVar1);
        local_20 = *puVar2;
        _local_1c = CONCAT13(*(undefined1 *)((int)puVar2 + 7),(uint3)*(ushort *)(puVar2 + 1));
        FUN_0001727c(param_3 + 0x10,local_20,_local_1c);
        iVar3 = (sVar1 + -1) * 0x10000 >> 0x10;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 * 0x10000 >> 0x10 < (int)*(short *)(param_2 + 0xa0));
  }
  return;
}


// ==== FUN_00018468 @ 00018468  size=188  callers=[00018958]

void FUN_00018468(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [8];
  
  iVar3 = 0;
  do {
    iVar2 = iVar3 * 0xb0 + param_1;
    *(undefined2 *)(iVar2 + 600) = 0;
    *(undefined2 *)(iVar2 + 0x256) = 0;
    *(undefined2 *)(iVar2 + 0x25a) = 0;
    iVar1 = 0;
    do {
      *(undefined1 *)(iVar1 + iVar3 * 0xb0 + param_1 + 0x1ac) = 1;
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < 4);
    if (0 < *(short *)(iVar2 + 0x24c)) {
      do {
        FUN_000172ec(iVar2 + 0x1bc,auStack_20,0);
      } while (0 < *(short *)(iVar2 + 0x24c));
    }
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
  } while (iVar3 < 4);
  return;
}


// ==== FUN_00018524 @ 00018524  size=1076  callers=[00014db4]

void FUN_00018524(undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  ushort uVar8;
  short local_e4 [4];
  undefined1 auStack_dc [8];
  undefined1 auStack_d4 [176];
  
  local_e4[0] = -1;
  if ((int)*(short *)(param_1 + 0x125) == (uint)*(ushort *)(param_1 + 299)) {
    if (*(char *)((int)param_1 + 0x4a7) != '\0') {
      return;
    }
    FUN_0001b3f4(param_1);
    return;
  }
  if ((int)*(short *)(param_1 + 0x125) == 0) {
    if ((((*(short *)(param_1 + 0x127) != 0) || (*(char *)(param_1 + 300) != '\0')) ||
        (*(char *)((int)param_1 + 0x4aa) == '\0')) ||
       (uVar3 = FUN_00017624((int)(param_1 + (uint)*(ushort *)(param_1 + 0x126) * 0x2c + 0x6f),0,2,
                             local_e4), (uVar3 & 0xff) == 0)) {
      local_e4[0] = FUN_00018f50((int)param_1);
    }
    goto LAB_000188ec;
  }
  iVar4 = FUN_00016df4((int)(param_1 + (uint)*(ushort *)(param_1 + 0x126) * 0x2c + 0x6f),
                       (uint)*(ushort *)(param_1 + 0x11b));
  if (0 < (short)iVar4) {
    iVar4 = FUN_0001989c((int)param_1);
    local_e4[0] = (short)iVar4;
    goto LAB_000188ec;
  }
  piVar7 = param_1 + 0x11b;
  if (*piVar7 == 3) {
    uVar3 = FUN_00019410((int)param_1,*(short *)(param_1 + 0x126));
    puVar6 = param_1 + (uint)*(ushort *)(param_1 + 0x126) * 0x2c + 0x6f;
    if ((uVar3 & 0xff) != 0) goto LAB_000188e0;
  }
  else {
    uVar3 = FUN_00019410((int)param_1,*(short *)(param_1 + 0x126));
    if (((uVar3 & 0xff) != 0) ||
       ((((uVar3 = FUN_0001a1bc((int)param_1), (uVar3 & 0xff) != 0 &&
          (iVar4 = FUN_00018e7c((int)param_1,auStack_d4,*(short *)(param_1 + 0x126)),
          *(short *)(iVar4 + 0xaa) == 0)) &&
         (iVar4 = FUN_00018e7c((int)param_1,auStack_d4,*(short *)(param_1 + 0x126)),
         *(short *)(iVar4 + 0xae) == 0)) &&
        ((*(short *)((int)param_1 + (uint)*(ushort *)(param_1 + 0x126) * 0xb0 + 0x256) != 0 ||
         (*(short *)((int)param_1 + (uint)*(ushort *)(param_1 + 0x126) * 0xb0 + 0x25a) != 0)))))) {
      uVar3 = FUN_0001a1bc((int)param_1);
      if (((uVar3 & 0xff) != 0) &&
         (((uVar3 = FUN_0001a1bc((int)param_1), (uVar3 & 0xff) == 0 ||
           (iVar4 = FUN_00018e7c((int)param_1,auStack_d4,*(short *)(param_1 + 0x126)),
           *(short *)(iVar4 + 0xaa) != 0)) ||
          (iVar4 = FUN_00018e7c((int)param_1,auStack_d4,*(short *)(param_1 + 0x126)),
          *(short *)(iVar4 + 0xae) != 0)))) {
        uVar5 = FUN_00016e7c((int)(param_1 + (uint)*(ushort *)(param_1 + 0x126) * 0x2c + 0x6f),3);
        local_e4[0] = (short)uVar5;
        goto LAB_000188ec;
      }
      iVar4 = FUN_00016df4((int)(param_1 + (uint)*(ushort *)(param_1 + 0x126) * 0x2c + 0x6f),3);
      if (0 < (short)iVar4) {
        uVar8 = 1;
        do {
          sVar2 = FUN_00017b54((int)(param_1 + (uint)*(ushort *)(param_1 + 0x126) * 0x2c + 0x6f),3,
                               uVar8);
          sVar1 = local_e4[0];
          if ((sVar2 < 0) ||
             (uVar3 = FUN_000194a8((int)param_1,*(short *)(param_1 + 0x126),sVar2), sVar1 = sVar2,
             (uVar3 & 0xff) != 0)) break;
          uVar8 = uVar8 + 1;
          sVar1 = local_e4[0];
        } while ((short)uVar8 < 0xe);
        local_e4[0] = sVar1;
        if (local_e4[0] != -1) goto LAB_000188ec;
      }
      uVar5 = FUN_00016e7c((int)(param_1 + (uint)*(ushort *)(param_1 + 0x126) * 0x2c + 0x6f),3);
      local_e4[0] = (short)uVar5;
      if (local_e4[0] != -1) goto LAB_000188ec;
      puVar6 = param_1 + (uint)*(ushort *)(param_1 + 0x126) * 0x2c + 0x6f;
      local_e4[0] = -1;
LAB_000188e0:
      uVar5 = FUN_00016ef4((int)puVar6);
      local_e4[0] = (short)uVar5;
      goto LAB_000188ec;
    }
    uVar3 = FUN_00016ca8(piVar7);
    if ((uVar3 & 0xff) == 0) {
LAB_00018724:
      iVar4 = FUN_00017a3c((int)(param_1 + (uint)*(ushort *)(param_1 + 0x126) * 0x2c + 0x6f),3);
      local_e4[0] = (short)iVar4;
    }
    else {
      iVar4 = FUN_00016cf4((int)piVar7);
      iVar4 = FUN_00017af4((int)(param_1 + (uint)*(ushort *)(param_1 + 0x126) * 0x2c + 0x6f),3,
                           *(ushort *)(param_1 + (short)iVar4 * 2 + 0x11c));
      local_e4[0] = (short)iVar4;
      if (local_e4[0] == -1) goto LAB_00018724;
    }
    if (local_e4[0] != -1) goto LAB_000188ec;
    puVar6 = param_1 + (uint)*(ushort *)(param_1 + 0x126) * 0x2c + 0x6f;
    local_e4[0] = -1;
  }
  iVar4 = FUN_000178cc((int)puVar6);
  local_e4[0] = (short)iVar4;
LAB_000188ec:
  if (local_e4[0] < 0) {
    local_e4[0] = 0;
  }
  puVar6 = (undefined4 *)
           FUN_000172ec((int)(param_1 + (uint)*(ushort *)(param_1 + 0x126) * 0x2c + 0x6f),auStack_dc
                        ,local_e4[0]);
  FUN_00016878((int)(param_1 + 0x11b),*puVar6,puVar6[1],*(undefined2 *)(param_1 + 0x126));
  sVar1 = *(short *)(param_1 + 0x126);
  *(ushort *)(param_1 + 0x126) = sVar1 + 1U;
  if (*(ushort *)(param_1 + 299) <= (ushort)(sVar1 + 1U)) {
    *(undefined2 *)(param_1 + 0x126) = 0;
  }
  return;
}


// ==== FUN_00018958 @ 00018958  size=176  callers=[00014db4, 00015b7c, 0001bcd0]

void FUN_00018958(undefined4 *param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_1c4 [8];
  undefined1 auStack_1bc [424];
  
  FUN_00018468((int)param_1);
  *(undefined1 *)((int)param_1 + 0x4b5) = 0;
  *(undefined1 *)(param_1 + 0x12d) = 0;
  if (0 < *(short *)(param_1 + 0x125)) {
    do {
      FUN_000168f8((int)(param_1 + 0x11b),auStack_1c4,0);
    } while (0 < *(short *)(param_1 + 0x125));
  }
  puVar2 = FUN_000161ec(auStack_1bc);
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
  FUN_0001a410((int)(param_1 + 1));
  FUN_00018084(param_1);
  *(undefined2 *)(param_1 + 0x127) = 0;
  return;
}


// ==== FUN_00018a08 @ 00018a08  size=32  callers=[00014db4, 00015258]

undefined4 FUN_00018a08(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 1) {
    uVar1 = 0x96;
  }
  else {
    uVar1 = 400;
    if (*(int *)(param_1 + 0x4a0) != 2) {
      uVar1 = 0;
    }
  }
  return uVar1;
}


// ==== FUN_00018a28 @ 00018a28  size=356  callers=[00018f50]

bool FUN_00018a28(int param_1,short *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x498);
  iVar5 = -1;
  sVar4 = -1;
  iVar3 = 0;
  if (0 < *(short *)(uVar1 * 0xb0 + param_1 + 0x24c)) {
    do {
      if (((((*(short *)(param_1 + 0x494) != 0) || (*(char *)(param_1 + 0x49e) != '\0')) ||
           (*(char *)(param_1 + 0x4a8) == '\0')) ||
          (*(int *)(param_1 + (uVar1 * 0x16 + iVar3) * 8 + 0x1bc) != 3)) &&
         ((iVar2 = param_1 + (uVar1 * 0x16 + iVar3) * 8,
          uVar1 = FUN_00018ca4(param_1,*(uint *)(iVar2 + 0x1bc),*(uint *)(iVar2 + 0x1c0)),
          (uVar1 & 0xff) != 0 &&
          (((short)iVar5 == -1 ||
           (iVar2 = (uint)*(ushort *)(param_1 + 0x498) * 0x16,
           *(ushort *)(param_1 + (iVar2 + iVar3) * 8 + 0x1c0) <
           *(ushort *)(param_1 + ((short)iVar5 + iVar2) * 8 + 0x1c0))))))) {
        iVar5 = iVar3;
      }
      sVar4 = (short)iVar5;
      uVar1 = (uint)*(ushort *)(param_1 + 0x498);
      iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
    } while (iVar3 < *(short *)(uVar1 * 0xb0 + param_1 + 0x24c));
  }
  if (sVar4 != -1) {
    *param_2 = sVar4;
  }
  return sVar4 != -1;
}


// ==== FUN_00018b8c @ 00018b8c  size=280  callers=[00018ca4]

undefined4 FUN_00018b8c(int param_1,uint param_2,undefined4 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = FUN_00016df4((uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x1bc,param_2 & 0xffff)
  ;
  iVar2 = FUN_00016770(param_1 + 4,param_2);
  if (((int)(short)iVar2 + (int)(short)iVar1 == 0xd) && (param_2 != 3)) {
LAB_00018c9c:
    uVar4 = 1;
  }
  else {
    uVar5 = 0;
    if (*(short *)(param_1 + 0x4ac) != 0) {
      do {
        if (uVar5 != *(ushort *)(param_1 + 0x498)) {
          uVar3 = FUN_00016c58(param_1 + 0x46c,(short)uVar5);
          if ((((uVar3 & 0xff) == 0) &&
              (*(char *)(uVar5 * 0xb0 + param_2 + param_1 + 0x1ac) == '\0')) &&
             (*(char *)(uVar5 * 0xb0 + param_1 + 0x1af) != '\0')) {
            *param_4 = (short)uVar5;
            goto LAB_00018c9c;
          }
        }
        uVar5 = (int)((uVar5 + 1) * 0x10000) >> 0x10;
      } while ((int)uVar5 < (int)(uint)*(ushort *)(param_1 + 0x4ac));
    }
    uVar4 = 0;
  }
  return uVar4;
}


// ==== FUN_00018ca4 @ 00018ca4  size=212  callers=[00018a28]

undefined4 FUN_00018ca4(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  short asStack_30 [2];
  
  uVar1 = FUN_00018b8c(param_1,param_2,param_3,asStack_30);
  if ((uVar1 & 0xff) == 0) {
    if ((param_3 & 0xffff) != 0xe) {
      iVar3 = (param_3 & 0xffff) + 1;
      iVar4 = iVar3 * 0x10000 >> 0x10;
      if (iVar4 < 0xf) {
        do {
          uVar1 = FUN_00016710(param_1 + 4,param_2,(short)iVar3);
          if (((uVar1 & 0xff) == 0) &&
             (uVar1 = FUN_00017624((uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x1bc,
                                   param_2 & 0xffff,(short)iVar3,asStack_30), (uVar1 & 0xff) == 0))
          goto LAB_00018d70;
          iVar3 = (iVar4 + 1) * 0x10000 >> 0x10;
          iVar4 = iVar3;
        } while (iVar3 < 0xf);
      }
    }
    uVar2 = 1;
  }
  else {
LAB_00018d70:
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_00018d78 @ 00018d78  size=140  callers=[00018f50]

undefined4 FUN_00018d78(int param_1,uint param_2,ushort param_3,short param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00016df4(param_4 * 0xb0 + param_1 + 0x1bc,param_2 & 0xffff);
  iVar3 = FUN_00016770(param_1 + 4,param_2);
  if (((int)(short)iVar3 + (int)(short)iVar2 != 0xd) &&
     (bVar1 = FUN_000167bc(param_1 + 4,param_2,param_3), bVar1)) {
    return 1;
  }
  return 0;
}


// ==== FUN_00018e04 @ 00018e04  size=120  callers=[00018f50]

undefined4 FUN_00018e04(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x4ac) != 0) {
    iVar2 = 0;
    do {
      iVar1 = FUN_00016df4(iVar2 * 0xb0 + param_1 + 0x1bc,param_2 & 0xffff);
      if ((short)iVar1 == 0) {
        return 0;
      }
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x4ac));
  }
  return 1;
}


// ==== FUN_00018e7c @ 00018e7c  size=212  callers=[00018524, 00018f50, 00019410, 0001989c]

void FUN_00018e7c(int param_1,undefined1 *param_2,short param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar3 = (int)param_3;
  if (*(char *)(param_1 + 0x4b0) == '\0') {
    iVar2 = 0xb0;
    puVar4 = (undefined1 *)(iVar3 * 0xb0 + param_1 + 0x1ac);
    do {
      iVar3 = iVar2 + -1;
      *param_2 = *puVar4;
      bVar1 = 0 < iVar2;
      iVar2 = iVar3;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 != 0 && bVar1);
  }
  else if (iVar3 == 0) {
    iVar3 = 0xb0;
    puVar4 = (undefined1 *)(param_1 + 0x30c);
    do {
      iVar2 = iVar3 + -1;
      *param_2 = *puVar4;
      bVar1 = 0 < iVar3;
      iVar3 = iVar2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar2 != 0 && bVar1);
  }
  else if (iVar3 == 1) {
    iVar3 = 0xb0;
    puVar4 = (undefined1 *)(param_1 + 0x3bc);
    do {
      iVar2 = iVar3 + -1;
      *param_2 = *puVar4;
      bVar1 = 0 < iVar3;
      iVar3 = iVar2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar2 != 0 && bVar1);
  }
  else if (iVar3 == 2) {
    iVar3 = 0xb0;
    puVar4 = (undefined1 *)(param_1 + 0x1ac);
    do {
      iVar2 = iVar3 + -1;
      *param_2 = *puVar4;
      bVar1 = 0 < iVar3;
      iVar3 = iVar2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar2 != 0 && bVar1);
  }
  else {
    iVar3 = 0xb0;
    puVar4 = (undefined1 *)(param_1 + 0x25c);
    do {
      iVar2 = iVar3 + -1;
      *param_2 = *puVar4;
      bVar1 = 0 < iVar3;
      iVar3 = iVar2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar2 != 0 && bVar1);
  }
  return;
}


// ==== FUN_00018f50 @ 00018f50  size=1172  callers=[00018524]

void FUN_00018f50(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  short sVar8;
  short local_18c [4];
  undefined1 auStack_184 [176];
  undefined1 auStack_d4 [176];
  
  local_18c[0] = -1;
  uVar2 = FUN_00019410(param_1,*(short *)(param_1 + 0x498));
  if ((uVar2 & 0xff) == 0) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x498);
    iVar4 = -1;
    sVar8 = -1;
    iVar3 = 0;
    if (0 < *(short *)(uVar2 * 0xb0 + param_1 + 0x24c)) {
      do {
        iVar7 = param_1 + (uVar2 * 0x16 + iVar3) * 8;
        uVar2 = FUN_00018d78(param_1,*(uint *)(iVar7 + 0x1bc),(ushort)*(undefined4 *)(iVar7 + 0x1c0)
                             ,(short)uVar2);
        if (((uVar2 & 0xff) != 0) &&
           (((short)iVar4 == -1 ||
            (iVar7 = (uint)*(ushort *)(param_1 + 0x498) * 0x16,
            *(ushort *)(param_1 + ((short)iVar4 + iVar7) * 8 + 0x1c0) <
            *(ushort *)(param_1 + (iVar7 + iVar3) * 8 + 0x1c0))))) {
          iVar4 = iVar3;
        }
        sVar8 = (short)iVar4;
        uVar2 = (uint)*(ushort *)(param_1 + 0x498);
        iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
      } while (iVar3 < *(short *)(uVar2 * 0xb0 + param_1 + 0x24c));
    }
    if (sVar8 != -1) goto LAB_0001929c;
  }
  else {
    bVar1 = FUN_00018a28(param_1,local_18c);
    sVar8 = local_18c[0];
    if (bVar1) goto LAB_0001929c;
    if (*(char *)(param_1 + 0x4b0) != '\0') {
      iVar3 = FUN_00018e7c(param_1,auStack_184,*(short *)(param_1 + 0x498));
      iVar4 = FUN_00018e7c(param_1,auStack_d4,*(short *)(param_1 + 0x498));
      if (*(ushort *)(iVar3 + 0xae) < *(ushort *)(iVar4 + 0xaa)) {
        uVar2 = 0;
        do {
          iVar3 = FUN_00018e7c(param_1,auStack_d4,*(short *)(param_1 + 0x498));
          if (((*(char *)(uVar2 + iVar3) == '\0') &&
              (iVar3 = FUN_00018e7c(param_1,auStack_184,*(short *)(param_1 + 0x498)),
              *(char *)(iVar3 + 3) != '\0')) &&
             (iVar3 = FUN_00016df4((uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x1bc,uVar2
                                  ), 0 < (short)iVar3)) goto LAB_00019108;
          uVar2 = (int)((uVar2 + 1) * 0x10000) >> 0x10;
        } while ((int)uVar2 < 4);
      }
    }
    uVar2 = 0;
    do {
      if ((((uVar2 != 3) || (*(char *)(param_1 + 0x49e) != '\0')) ||
          ((*(char *)(param_1 + 0x4a8) == '\0' ||
           (iVar3 = FUN_00016df4((uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x1bc,3),
           (short)iVar3 == *(short *)((uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x24c)))
          )) && (uVar5 = FUN_00018e04(param_1,uVar2), (uVar5 & 0xff) != 0)) {
LAB_00019108:
        FUN_00016e3c((uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x1bc,(int)(short)uVar2);
        return;
      }
      uVar2 = (int)((uVar2 + 1) * 0x10000) >> 0x10;
    } while ((int)uVar2 < 4);
    if ((*(char *)(param_1 + 0x49e) == '\0') && (*(char *)(param_1 + 0x4a8) != '\0')) {
      iVar3 = FUN_00016df4((uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x1bc,3);
      iVar4 = (uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1;
      if ((short)iVar3 != *(short *)(iVar4 + 0x24c)) {
        uVar6 = FUN_00016e7c(iVar4 + 0x1bc,3);
        sVar8 = (short)uVar6;
        goto LAB_0001929c;
      }
    }
  }
  uVar6 = FUN_00016ef4((uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x1bc);
  sVar8 = (short)uVar6;
LAB_0001929c:
  local_18c[0] = sVar8;
  if ((((-1 < local_18c[0]) &&
       (*(int *)(param_1 + ((uint)*(ushort *)(param_1 + 0x498) * 0x16 + (int)local_18c[0]) * 8 +
                0x1bc) == 3)) && (*(char *)(param_1 + 0x49e) == '\0')) &&
     (*(char *)(param_1 + 0x4a8) != '\0')) {
    iVar3 = FUN_00016df4((uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x1bc,3);
    iVar4 = (uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1;
    if ((short)iVar3 != *(short *)(iVar4 + 0x24c)) {
      uVar6 = FUN_00016e7c(iVar4 + 0x1bc,3);
      local_18c[0] = (short)uVar6;
    }
  }
  if (local_18c[0] < 0) {
    if ((*(char *)(param_1 + 0x49e) == '\0') && (*(char *)(param_1 + 0x4a8) != '\0')) {
      iVar3 = FUN_00016df4((uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x1bc,3);
      iVar4 = (uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1;
      if ((short)iVar3 != *(short *)(iVar4 + 0x24c)) {
        FUN_00016e7c(iVar4 + 0x1bc,3);
        return;
      }
    }
    FUN_00016ef4((uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x1bc);
  }
  return;
}


// ==== FUN_000193e4 @ 000193e4  size=44  callers=[0001989c, 0001a1bc]

undefined4 FUN_000193e4(undefined4 param_1,short param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 2;
  }
  else if (param_2 == 1) {
    uVar1 = 3;
  }
  else {
    uVar1 = 0;
    if (param_2 != 2) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ==== FUN_00019410 @ 00019410  size=152  callers=[00018524, 00018f50, 000195fc, 0001989c]

undefined4 FUN_00019410(int param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_178 [176];
  undefined1 auStack_c8 [176];
  
  iVar4 = param_2 * 0xb0 + param_1;
  if (*(ushort *)(iVar4 + 0x25a) < *(ushort *)(iVar4 + 0x256)) {
    uVar1 = 1;
  }
  else {
    iVar2 = FUN_00018e7c(param_1,auStack_178,param_2);
    iVar3 = FUN_00018e7c(param_1,auStack_c8,param_2);
    if ((*(ushort *)(iVar3 + 0xaa) <= *(ushort *)(iVar2 + 0xae)) ||
       (uVar1 = 1, *(short *)(iVar4 + 0x256) == 0)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}


// ==== FUN_000194a8 @ 000194a8  size=340  callers=[00018524]

undefined4 FUN_000194a8(int param_1,short param_2,short param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1 + (param_2 * 0x16 + (int)param_3) * 8;
  uVar1 = *(ushort *)(iVar4 + 0x1c0);
  uVar2 = FUN_00016ca8((int *)(param_1 + 0x46c));
  if ((uVar2 & 0xff) != 0) {
    iVar3 = FUN_00016cf4(param_1 + 0x46c);
    if ((short)iVar3 < 0) {
      return 1;
    }
    if (*(ushort *)(iVar4 + 0x1c0) < *(ushort *)(param_1 + (short)iVar3 * 8 + 0x470)) {
      return 0;
    }
  }
  if (*(short *)(param_1 + 0x4ac) != 0) {
    iVar4 = 0;
    do {
      if (((iVar4 != param_2) &&
          (uVar2 = FUN_00016c58(param_1 + 0x46c,(short)iVar4), (uVar2 & 0xff) == 0)) &&
         (*(char *)(iVar4 * 0xb0 + *(int *)(param_1 + 0x46c) + param_1 + 0x1ac) == '\0')) {
        iVar5 = iVar4 * 0xb0 + param_1;
        iVar3 = FUN_000174cc(iVar5 + 0x1bc,3,uVar1);
        if (0 < (short)iVar3) {
          if (*(short *)(iVar5 + 0x256) != 0) {
            return 0;
          }
          if (*(short *)(iVar5 + 0x25a) != 0) {
            return 0;
          }
        }
      }
      iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
    } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x4ac));
  }
  return 1;
}


// ==== FUN_000195fc @ 000195fc  size=488  callers=[0001989c]

undefined4 FUN_000195fc(int param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  short asStack_28 [2];
  
  iVar1 = (int)param_2;
  iVar5 = param_1 + (iVar1 * 0x16 + (int)param_3) * 8;
  sVar3 = *(short *)(iVar5 + 0x1c0);
  uVar4 = *(ushort *)(iVar5 + 0x1bc);
  iVar5 = FUN_00016a94((int *)(param_1 + 0x46c));
  uVar6 = FUN_00016ca8((int *)(param_1 + 0x46c));
  if (((uVar6 & 0xff) == 0) || ((int)(short)uVar4 != *(int *)(param_1 + 0x46c))) {
    iVar2 = (int)(short)uVar4;
    if (((iVar2 == *(int *)(param_1 + 0x46c)) || (iVar2 == 3)) &&
       (((short)iVar5 < 0 ||
        ((int)(uint)*(ushort *)(param_1 + (short)iVar5 * 8 + 0x470) <= (int)sVar3)))) {
      iVar5 = 0;
      if (*(short *)(param_1 + 0x4ac) != 0) {
        do {
          if (iVar5 != iVar1) {
            uVar6 = FUN_00016c58(param_1 + 0x46c,(short)iVar5);
            if (((((uVar6 & 0xff) == 0) &&
                 (*(char *)(iVar5 * 0xb0 + iVar2 + param_1 + 0x1ac) == '\0')) &&
                (*(char *)(iVar5 * 0xb0 + param_1 + 0x1af) != '\0')) &&
               (uVar6 = FUN_00019410(param_1,(short)iVar5), (uVar6 & 0xff) != 0)) {
              return 0;
            }
          }
          iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
        } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 0x4ac));
      }
      iVar7 = sVar3 + 1;
      iVar5 = iVar7 * 0x10000 >> 0x10;
      if (iVar5 < 0xf) {
        do {
          uVar6 = FUN_00017624(iVar1 * 0xb0 + param_1 + 0x1bc,(uint)uVar4,(short)iVar7,asStack_28);
          if (((uVar6 & 0xff) == 0) &&
             (uVar6 = FUN_00016710(param_1 + 4,iVar2,(short)iVar7), (uVar6 & 0xff) == 0)) {
            return 0;
          }
          iVar7 = (iVar5 + 1) * 0x10000 >> 0x10;
          iVar5 = iVar7;
        } while (iVar7 < 0xf);
      }
      return 1;
    }
  }
  return 0;
}


// ==== FUN_000197e4 @ 000197e4  size=184  callers=[0001989c]

undefined4 FUN_000197e4(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(short *)(param_1 + 0x4ac) != 0) {
    uVar2 = 0;
    do {
      if ((((uVar2 != *(ushort *)(param_1 + 0x498)) &&
           (uVar1 = FUN_00016c58(param_1 + 0x46c,(short)uVar2), (uVar1 & 0xff) == 0)) &&
          (*(char *)(*(int *)(param_1 + 0x46c) + uVar2 * 0xb0 + param_1 + 0x1ac) == '\0')) &&
         (*(char *)(uVar2 * 0xb0 + param_1 + 0x1af) != '\0')) {
        return 1;
      }
      uVar2 = (int)((uVar2 + 1) * 0x10000) >> 0x10;
    } while ((int)uVar2 < (int)(uint)*(ushort *)(param_1 + 0x4ac));
  }
  return 0;
}


// ==== FUN_0001989c @ 0001989c  size=904  callers=[00018524]

int FUN_0001989c(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_d4 [176];
  
  piVar7 = (int *)(param_1 + 0x46c);
  iVar3 = FUN_00016a94(piVar7);
  sVar1 = (short)iVar3;
  if ((int)*(short *)(param_1 + 0x494) == *(ushort *)(param_1 + 0x4ac) - 1) {
    uVar4 = FUN_00016ca8(piVar7);
    if ((uVar4 & 0xff) == 0) {
      uVar4 = FUN_00019410(param_1,*(short *)(param_1 + 0x498));
      if ((uVar4 & 0xff) == 0) {
LAB_00019b68:
        iVar3 = FUN_00017af4((uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x1bc,
                             *(int *)(param_1 + 0x46c),*(ushort *)(param_1 + sVar1 * 8 + 0x470));
        goto LAB_00019b98;
      }
      if (*(char *)(param_1 + 0x4b0) != '\0') {
        iVar3 = FUN_00016d6c(piVar7);
        uVar5 = FUN_000193e4(param_1,*(short *)(param_1 + 0x498));
        if (((short)iVar3 == (short)uVar5) &&
           ((iVar3 = FUN_00018e7c(param_1,auStack_d4,*(short *)(param_1 + 0x498)),
            *(short *)(iVar3 + 0xaa) != 0 ||
            (iVar3 = FUN_00018e7c(param_1,auStack_d4,*(short *)(param_1 + 0x498)),
            *(short *)(iVar3 + 0xae) != 0)))) goto LAB_00019bac;
      }
      iVar3 = FUN_00017b54((uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x1bc,
                           *(int *)(param_1 + 0x46c),*(ushort *)(param_1 + sVar1 * 8 + 0x470));
      if ((-1 < (short)iVar3) && (uVar4 = FUN_000197e4(param_1), (uVar4 & 0xff) == 0))
      goto LAB_00019bc8;
LAB_00019bac:
      uVar4 = (uint)*(ushort *)(param_1 + 0x498);
      goto LAB_00019bb8;
    }
    uVar4 = FUN_00019410(param_1,*(short *)(param_1 + 0x498));
    iVar6 = *(int *)(param_1 + 0x46c);
    iVar3 = (uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x1bc;
    if ((uVar4 & 0xff) == 0) {
      iVar3 = FUN_000176cc(iVar3,iVar6);
      goto LAB_00019bc8;
    }
  }
  else {
    uVar4 = FUN_00019410(param_1,*(short *)(param_1 + 0x498));
    if ((uVar4 & 0xff) == 0) {
      uVar4 = FUN_00016ca8(piVar7);
      if (((uVar4 & 0xff) == 0) || (*(int *)(param_1 + 0x46c) == 3)) goto LAB_00019b68;
      iVar3 = FUN_000176cc((uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x1bc,
                           *(int *)(param_1 + 0x46c));
LAB_00019b98:
      if ((short)iVar3 != -1) goto LAB_00019bc8;
      goto LAB_00019bac;
    }
    if ((1 < *(short *)(param_1 + 0x494)) && (*(char *)(param_1 + 0x4b0) != '\0')) {
      iVar3 = FUN_00016d6c(piVar7);
      uVar5 = FUN_000193e4(param_1,*(short *)(param_1 + 0x498));
      if (((short)iVar3 == (short)uVar5) &&
         ((iVar3 = FUN_00018e7c(param_1,auStack_d4,*(short *)(param_1 + 0x498)),
          *(short *)(iVar3 + 0xaa) != 0 ||
          (iVar3 = FUN_00018e7c(param_1,auStack_d4,*(short *)(param_1 + 0x498)),
          *(short *)(iVar3 + 0xae) != 0)))) goto LAB_00019bac;
    }
    iVar3 = FUN_000176cc((uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x1bc,
                         *(int *)(param_1 + 0x46c));
    uVar4 = FUN_000195fc(param_1,*(short *)(param_1 + 0x498),(short)iVar3);
    if ((uVar4 & 0xff) != 0) {
      return iVar3;
    }
    uVar4 = (uint)*(ushort *)(param_1 + 0x498);
    uVar2 = *(ushort *)(param_1 + (uVar4 * 0x16 + (int)(short)iVar3) * 8 + 0x1c0);
    if ((uVar2 < 0xb) && (*(ushort *)(param_1 + sVar1 * 8 + 0x470) < uVar2)) {
      return iVar3;
    }
LAB_00019bb8:
    iVar6 = *(int *)(param_1 + 0x46c);
    iVar3 = uVar4 * 0xb0 + param_1 + 0x1bc;
  }
  iVar3 = FUN_00016e3c(iVar3,iVar6);
LAB_00019bc8:
  if (((short)iVar3 < 0) &&
     (iVar3 = FUN_00016e3c((uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x1bc,
                           *(int *)(param_1 + 0x46c)), (short)iVar3 == -1)) {
    iVar3 = FUN_00016ef4((uint)*(ushort *)(param_1 + 0x498) * 0xb0 + param_1 + 0x1bc);
  }
  return iVar3;
}


// ==== FUN_00019c24 @ 00019c24  size=100  callers=[]

bool FUN_00019c24(int param_1,short param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*(short *)(param_1 + 0x494) < 1) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_00016a94((int *)(param_1 + 0x46c));
    bVar2 = (uint)*(ushort *)(param_1 + (short)iVar1 * 2 + 0x48c) != (int)param_2;
  }
  return bVar2;
}


// ==== FUN_00019c88 @ 00019c88  size=196  callers=[00019d4c]

void FUN_00019c88(int param_1,short param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  iVar1 = (int)param_2;
  iVar2 = iVar1 * 0xb0 + param_1;
  if ((*(short *)(iVar2 + 0x256) == 0) && (*(short *)(iVar2 + 0x25a) == 0)) {
    if ((iVar1 != 2) || (sVar3 = 100, *(char *)(param_1 + 0x4b5) == '\0')) {
      sVar3 = 0x32;
    }
    sVar3 = *param_3 + sVar3;
  }
  else {
    if (*(short *)(iVar2 + 0x256) != 0) {
      return;
    }
    if (*(short *)(iVar2 + 0x25a) == 0) {
      return;
    }
    if ((iVar1 != 2) || (sVar3 = 100, *(char *)(param_1 + 0x4b5) == '\0')) {
      sVar3 = 0x32;
    }
    sVar3 = *param_3 - sVar3;
  }
  *param_3 = sVar3;
  return;
}


// ==== FUN_00019d4c @ 00019d4c  size=652  callers=[00012744, 00019fdc, 0001a660]

void FUN_00019d4c(int param_1,short param_2,short *param_3,short *param_4,short *param_5,
                 short *param_6,short *param_7)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  
  iVar3 = (int)param_2;
  iVar5 = iVar3 * 0xb0 + param_1;
  *param_3 = *(short *)(iVar5 + 0x256);
  sVar4 = 0;
  if (*(short *)(iVar5 + 0x256) == 0) {
    sVar2 = 0;
  }
  else {
    sVar2 = *(short *)(iVar5 + 0x25a);
  }
  *param_4 = sVar2;
  *param_5 = 0;
  *param_6 = 0;
  if (*(short *)(iVar5 + 0x256) == 0) {
    FUN_00019c88(param_1,param_2,param_5);
    sVar4 = *(short *)(iVar5 + 0x25a);
  }
  if (*(char *)(param_1 + 0x4b0) == '\0') {
    if (*(short *)(iVar5 + 0x256) == 0) goto LAB_00019ee0;
    sVar2 = *(short *)(iVar5 + 0x25a);
LAB_00019edc:
    *param_4 = sVar2;
  }
  else {
    if (iVar3 == 2) {
      *param_3 = *param_3 + *(short *)(param_1 + 0x256);
      if (*(short *)(param_1 + 0x256) != 0) {
        sVar2 = *(short *)(param_1 + 0x25a);
LAB_00019e80:
        sVar2 = *param_4 + sVar2;
        goto LAB_00019edc;
      }
      FUN_00019c88(param_1,0,param_5);
      sVar2 = *(short *)(param_1 + 0x25a);
    }
    else {
      if (iVar3 != 3) {
        return;
      }
      *param_3 = *param_3 + *(short *)(param_1 + 0x306);
      if (*(short *)(param_1 + 0x306) != 0) {
        sVar2 = *(short *)(param_1 + 0x30a);
        goto LAB_00019e80;
      }
      FUN_00019c88(param_1,1,param_5);
      sVar2 = *(short *)(param_1 + 0x30a);
    }
    sVar4 = sVar2 + sVar4;
  }
LAB_00019ee0:
  sVar2 = *param_6;
  *param_6 = sVar2 + sVar4;
  if (0 < (int)*param_4 - (int)*param_3) {
    *param_6 = sVar2 + sVar4 + (short)((uint)(((int)*param_4 - (int)*param_3) * 0x10000) >> 0x10);
  }
  sVar4 = *param_3;
  if (*param_4 < sVar4) {
    sVar4 = *param_5 + sVar4 * -10;
  }
  else {
    sVar4 = sVar4 * 9 + *param_4 + *param_5;
  }
  *param_5 = sVar4;
  sVar4 = *param_6;
  if (0 < sVar4) {
    uVar1 = *(ushort *)(iVar5 + 0x254);
    sVar2 = (*(code *)*DAT_00019fd8)(10,(uint)uVar1);
    for (iVar3 = (uint)uVar1 + (int)sVar4; (sVar2 + 1) * 10 <= iVar3 * 0x10000 >> 0x10;
        iVar3 = iVar3 + -10) {
      *param_5 = *param_5 + -100;
      *param_7 = *param_7 + 1;
    }
  }
  return;
}


// ==== FUN_00019fdc @ 00019fdc  size=480  callers=[00014db4]

void FUN_00019fdc(int param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  short local_20;
  short local_1e [5];
  
  local_1e[3] = 0;
  local_1e[2] = 0;
  local_20 = 0;
  local_1e[0] = 0;
  local_1e[1] = 0;
  if (*(char *)(param_1 + 0x4b0) == '\0') {
    if (*(short *)(param_1 + 0x4ac) != 0) {
      iVar3 = 0;
      do {
        local_1e[3] = 0;
        local_1e[2] = 0;
        local_20 = 0;
        local_1e[1] = 0;
        FUN_00019d4c(param_1,(short)iVar3,local_1e + 3,local_1e + 2,&local_20,local_1e,local_1e + 1)
        ;
        iVar1 = iVar3 * 0xb0 + param_1;
        *(short *)(iVar1 + 0x250) = *(short *)(iVar1 + 0x250) + local_20;
        *(short *)(iVar1 + 0x254) = *(short *)(iVar1 + 0x254) + local_1e[0];
        iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
      } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 0x4ac));
    }
  }
  else {
    FUN_00019d4c(param_1,2,local_1e + 3,local_1e + 2,&local_20,local_1e,local_1e + 1);
    local_1e[3] = 0;
    local_1e[2] = 0;
    sVar2 = *(short *)(param_1 + 0x3b0) + local_20;
    local_20 = 0;
    local_1e[1] = 0;
    *(short *)(param_1 + 0x3b0) = sVar2;
    *(short *)(param_1 + 0x3b4) = *(short *)(param_1 + 0x3b4) + local_1e[0];
    FUN_00019d4c(param_1,3,local_1e + 3,local_1e + 2,&local_20,local_1e,local_1e + 1);
    *(short *)(param_1 + 0x460) = *(short *)(param_1 + 0x460) + local_20;
    *(short *)(param_1 + 0x464) = *(short *)(param_1 + 0x464) + local_1e[0];
  }
  return;
}


// ==== FUN_0001a1bc @ 0001a1bc  size=112  callers=[00018524]

undefined4 FUN_0001a1bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x4b0) != '\0') && (1 < *(short *)(param_1 + 0x494))) {
    iVar1 = FUN_00016d6c((int *)(param_1 + 0x46c));
    uVar2 = FUN_000193e4(param_1,*(short *)(param_1 + 0x498));
    if ((short)iVar1 == (short)uVar2) {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_0001a22c @ 0001a22c  size=140  callers=[00011db4, 0001aee4]

void FUN_0001a22c(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_000160b0((undefined1 *)&local_24);
  FUN_000161a4(&local_24,param_2);
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  Ordinal_906(uVar1,param_3,param_4,param_5,param_6,local_20,0,0,param_5,param_6,param_7);
  local_24 = DAT_0001a2b8;
  Ordinal_1040(&local_24);
  return;
}


// ==== FUN_0001a2bc @ 0001a2bc  size=100  callers=[00014b54]

void FUN_0001a2bc(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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


// ==== FUN_0001a320 @ 0001a320  size=232  callers=[]

void FUN_0001a320(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_2c [4];
  undefined4 local_28;
  
  Ordinal_76(auStack_2c);
  FUN_000160b0((undefined1 *)&local_3c);
  FUN_000161a4(&local_3c,param_2);
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
  local_3c = DAT_0001a40c;
  Ordinal_1040(&local_3c);
  local_3c = DAT_0001a408;
  Ordinal_230(auStack_2c);
  return;
}


// ==== FUN_0001a410 @ 0001a410  size=332  callers=[00015eac, 00018958]

void FUN_0001a410(int param_1)

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
    FUN_000161d8(puVar4);
    iVar6 = iVar6 + -1;
    puVar4 = puVar4 + 2;
  } while (iVar6 != 0);
  Ordinal_535();
  Ordinal_1061();
  uVar5 = 0;
  do {
    do {
      uVar1 = Ordinal_1053();
      (*(code *)*DAT_0001a55c)(0x34,uVar1);
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


// ==== FUN_0001a560 @ 0001a560  size=124  callers=[00014b54]

void FUN_0001a560(int *param_1,int *param_2)

{
  ushort uVar1;
  
  if ((short)param_1[299] != 0) {
    uVar1 = 0;
    do {
      FUN_0001adb8(param_1,(int)param_2,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(param_1 + 299));
  }
  FUN_0001b804(param_1,(int)param_2);
  FUN_0001a5dc(param_1,param_2);
  FUN_0001bab0(param_1,param_2);
  return;
}


// ==== FUN_0001a5dc @ 0001a5dc  size=132  callers=[00014db4, 00015258, 0001a560]

void FUN_0001a5dc(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((short)param_1[299] != 0) {
    iVar2 = 0;
    do {
      if (((*param_1 != 1) || (uVar1 = FUN_0001aae0((int)param_1,(short)iVar2), (uVar1 & 0xff) != 0)
          ) || (*param_1 != 1)) {
        FUN_0001a660((int)param_1,param_2,(short)iVar2);
      }
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 299));
  }
  return;
}


// ==== FUN_0001a660 @ 0001a660  size=1104  callers=[0001a5dc]

void FUN_0001a660(int param_1,int *param_2,short param_3)

{
  int iVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  short local_94;
  short local_92 [5];
  undefined1 auStack_88 [4];
  char local_84 [8];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [16];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  Ordinal_2316(param_2,1);
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,0xffffff);
  local_74 = DAT_0001a744;
  local_70 = 0;
  Ordinal_982(&local_74,0x50,DAT_0001a748,param_2);
  uVar5 = (**(code **)(*param_2 + 0x30))(param_2,&local_74);
  iVar1 = (int)param_3;
  iVar6 = iVar1 * 0xb0 + param_1;
  if ((*(short *)(iVar6 + 0x256) == 0) && (*(short *)(iVar6 + 0x25a) == 0)) {
    iVar6 = 0;
    do {
      cVar2 = *(char *)(iVar6 + DAT_0001a740);
      local_84[iVar6] = cVar2;
      iVar6 = iVar6 + 1;
    } while (cVar2 != '\0');
  }
  else {
    Ordinal_719(local_84,DAT_0001aadc,(int)*(short *)(iVar6 + 600));
  }
  piVar7 = (int *)Ordinal_177(local_92 + 3,local_84);
  piVar7 = (int *)FUN_00012390((int)param_2,auStack_64,piVar7);
  local_6c = *piVar7;
  local_68 = piVar7[1];
  Ordinal_297(local_92 + 3);
  piVar7 = DAT_0001aad8;
  local_44 = *DAT_0001aad8;
  local_40 = iVar1 * 10 + DAT_0001aad8[1];
  local_3c = local_44 + local_6c;
  local_38 = local_40 + local_68;
  piVar8 = (int *)Ordinal_177(local_92 + 3,local_84);
  (**(code **)(*param_2 + 0x48))(param_2,*piVar8,*(undefined4 *)(*piVar8 + -8),&local_44,0x100);
  Ordinal_297(local_92 + 3);
  (**(code **)(*param_2 + 0x38))(param_2,uVar4);
  (**(code **)(*param_2 + 0x30))(param_2,uVar5);
  Ordinal_1040(&local_74);
  if (*(char *)(param_1 + 0x4b0) != '\0') {
    if ((iVar1 == 0) || (iVar6 = 0, iVar1 == 2)) {
      iVar6 = 1;
    }
    uVar4 = DAT_0001aad4;
    if (iVar6 == 0) {
      uVar4 = DAT_0001aad0;
    }
    uVar4 = (**(code **)(*param_2 + 0x38))(param_2,uVar4);
    local_7c = DAT_0001a744;
    local_78 = 0;
    Ordinal_982(&local_7c,0x50,DAT_0001aacc,param_2);
    uVar5 = (**(code **)(*param_2 + 0x30))(param_2,&local_7c);
    local_92[0] = 0;
    local_94 = 0;
    local_92[3] = 0;
    local_92[2] = 0;
    local_92[1] = 0;
    if ((iVar1 == 0) || (sVar3 = 3, iVar1 == 2)) {
      sVar3 = 2;
    }
    FUN_00019d4c(param_1,sVar3,local_92,&local_94,local_92 + 3,local_92 + 2,local_92 + 1);
    uVar9 = DAT_0001aac8;
    if (iVar6 == 0) {
      uVar9 = DAT_0001aac4;
    }
    Ordinal_719(auStack_54,DAT_0001aac0,uVar9,(int)local_92[0] - (int)local_94);
    piVar8 = (int *)Ordinal_177(auStack_88,local_84);
    piVar8 = (int *)FUN_00012390((int)param_2,auStack_5c,piVar8);
    local_6c = *piVar8;
    local_68 = piVar8[1];
    Ordinal_297(auStack_88);
    if (iVar6 + piVar7[1] == 0) {
      local_28 = local_68 + 0x15;
    }
    else {
      local_28 = 0;
    }
    local_34 = 0xd2;
    local_30 = 3;
    if (iVar6 + piVar7[1] == 0) {
      local_30 = 0x15;
    }
    local_2c = local_6c + 0xd2;
    piVar7 = (int *)Ordinal_177(auStack_88,auStack_54);
    (**(code **)(*param_2 + 0x48))(param_2,*piVar7,*(undefined4 *)(*piVar7 + -8),&local_34,0x100);
    Ordinal_297(auStack_88);
    (**(code **)(*param_2 + 0x38))(param_2,uVar4);
    (**(code **)(*param_2 + 0x30))(param_2,uVar5);
    Ordinal_1040(&local_7c);
    local_7c = DAT_0001aabc;
    Ordinal_1040(&local_7c);
  }
  local_74 = DAT_0001aabc;
  Ordinal_1040(&local_74);
  return;
}


// ==== FUN_0001aae0 @ 0001aae0  size=140  callers=[0001109c, 0001a5dc]

undefined4 FUN_0001aae0(int param_1,short param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_r1;
  
  if (*(char *)(param_1 + 0x4b0) == '\0') {
    uVar1 = FUN_0001ab70(param_1,param_2);
  }
  else {
    uVar2 = (uint)*(ushort *)(param_1 + 0x49a);
    if (*(ushort *)(param_1 + 0x4ac) <= uVar2) {
      (*(code *)*DAT_0001ab64)((uint)*(ushort *)(param_1 + 0x4ac));
      uVar2 = extraout_r1;
    }
    if ((param_2 == 0) || ((((uVar2 & 0xffff) == 0 || ((uVar2 & 0xffff) == 2)) && (param_2 != 2))))
    {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


// ==== FUN_0001ab70 @ 0001ab70  size=132  callers=[0001aae0]

undefined4 FUN_0001ab70(int param_1,short param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint extraout_r1;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x49a);
  if (*(ushort *)(param_1 + 0x4ac) <= uVar3) {
    (*(code *)*DAT_0001abec)((uint)*(ushort *)(param_1 + 0x4ac));
    uVar3 = extraout_r1;
  }
  iVar1 = (int)param_2;
  if (((iVar1 < 2) && ((int)(uVar3 & 0xffff) < iVar1)) || (((uVar3 & 0xffff) == 2 && (iVar1 != 2))))
  {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_0001abf8 @ 0001abf8  size=444  callers=[0001adb8, 0001b08c, 0001ba00]

void FUN_0001abf8(int param_1,short param_2,short *param_3,short *param_4,undefined2 *param_5,
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
    iVar2 = iVar4 * 0xb0 + param_1;
    if (*(short *)(iVar2 + 0x24c) < 2) {
      *param_3 = 0x1a;
    }
    else {
      iVar5 = 0xf0;
      if (iVar4 != 2) {
        iVar5 = 0xb2;
      }
      sVar1 = (*(code *)*DAT_0001ac6c)
                        (*(short *)(iVar2 + 0x24c) + -1,(iVar5 - (uint)(iVar4 != 2)) + -0x1e);
      *param_3 = sVar1;
    }
    if (0x1a < *param_3) {
      *param_3 = 0x1a;
    }
    if (iVar4 == 2) {
      *param_6 = 0xe1;
      iVar4 = 0xd2 - (*(short *)(iVar2 + 0x24c) + -1) * (int)*param_3;
    }
    else {
      *param_6 = 1;
      iVar4 = 0xd1 - (*(short *)(iVar2 + 0x24c) + -1) * (int)*param_3;
    }
    if (iVar4 < 0) {
      iVar4 = iVar4 + 1;
    }
    uVar3 = (undefined2)(iVar4 >> 1);
  }
  else {
    *param_3 = 0;
    iVar5 = iVar4 * 0xb0 + param_1;
    iVar2 = (int)*(short *)(iVar5 + 0x24c);
    if (iVar2 < 2) {
      *param_4 = 0xf;
    }
    else {
      sVar1 = (*(code *)*DAT_0001ac6c)(iVar2 + -1,0x8a);
      *param_4 = sVar1;
    }
    if (0xf < *param_4) {
      *param_4 = 0xf;
    }
    iVar2 = (*(short *)(iVar5 + 0x24c) + -1) * (int)*param_4;
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


// ==== FUN_0001adb8 @ 0001adb8  size=300  callers=[00011064, 00014db4, 00015258, 0001a560]

void FUN_0001adb8(int *param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  
  local_24 = 0;
  local_22 = 0;
  local_28 = 0;
  local_26 = 0;
  FUN_0001abf8((int)param_1,param_3,&local_24,&local_22,&local_28,&local_26);
  iVar1 = (int)param_3;
  if (0 < (short)param_1[iVar1 * 0x2c + 0x93]) {
    iVar2 = (int)local_26;
    iVar4 = 0;
    do {
      iVar3 = iVar1 * 0x16 + iVar4;
      iVar2 = (int)(short)iVar2;
      if (*(char *)((int)param_1 + iVar3 * 8 + 0x1c2) != '\0') {
        iVar2 = iVar2 + -2;
      }
      FUN_0001aee4(param_1,param_2,param_1[iVar3 * 2 + 0x6f],(short)param_1[iVar3 * 2 + 0x70],
                   iVar1 == 2,(int)local_28,iVar2);
      iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
      local_28 = local_28 + local_24;
      iVar3 = ((int)local_26 + (int)local_22) * 0x10000;
      iVar2 = iVar3 >> 0x10;
      local_26 = (short)((uint)iVar3 >> 0x10);
    } while (iVar4 < (short)param_1[iVar1 * 0x2c + 0x93]);
  }
  return;
}


// ==== FUN_0001aee4 @ 0001aee4  size=420  callers=[0001adb8, 0001b63c, 0001b804, 0001ba00]

void FUN_0001aee4(int *param_1,int param_2,int param_3,short param_4,char param_5,int param_6,
                 int param_7)

{
  short sVar1;
  
  if (((param_5 == '\0') || ((*param_1 == 1 && ((char)param_1[0x12d] != '\0')))) &&
     (*(char *)((int)param_1 + 0x4a9) == '\0')) {
    FUN_0001a22c(param_2,(short)param_1[0x129] + 0xfa,param_6,param_7,0x1e,0x2a,0xff00);
  }
  else {
    FUN_0001a22c(param_2,0x82,param_6,param_7,0x1e,0x2a,0xff00);
    if ((param_3 == 2) || (sVar1 = 0x8c, param_3 == 1)) {
      sVar1 = 0x99;
    }
    FUN_0001a22c(param_2,param_4 + sVar1 + -2,param_6 + 2,param_7 + 2,9,9,0xffffff);
    FUN_0001a22c(param_2,(short)param_3 + 0x88,param_6 + 2,param_7 + 0xc,9,9,0xffffff);
    if ((param_3 == 2) || (sVar1 = 0xa6, param_3 == 1)) {
      sVar1 = 0xb3;
    }
    FUN_0001a22c(param_2,param_4 + sVar1 + -2,param_6 + 0x13,param_7 + 0x1f,9,9,0xffffff);
    sVar1 = 0x89;
    if (param_3 != 1) {
      sVar1 = (short)param_3 + 0xc0;
    }
    FUN_0001a22c(param_2,sVar1,param_6 + 0x13,param_7 + 0x15,9,9,0xffffff);
  }
  return;
}


// ==== FUN_0001b08c @ 0001b08c  size=844  callers=[00015258]

undefined4 FUN_0001b08c(int *param_1,int *param_2,ushort *param_3,undefined1 *param_4)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
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
  iVar4 = *param_1;
  if ((iVar4 == 5) && ((short)param_1[0x126] != 2)) {
    return 0;
  }
  if ((short)param_1[0xeb] == 0) {
    return 0;
  }
  if (iVar4 == 1) {
    return 0;
  }
  if (iVar4 == 2) {
    return 0;
  }
  if (iVar4 == 7) {
    return 0;
  }
  local_32 = 0;
  local_30[1] = 0;
  local_34 = 0;
  local_30[0] = 0;
  FUN_0001abf8((int)param_1,2,&local_32,local_30 + 1,&local_34,local_30);
  local_2c = (int)local_34;
  if ((*param_2 < local_2c) && (local_2c < 6)) {
    *param_2 = local_2c;
  }
  iVar4 = *param_2;
  if (iVar4 < local_2c) {
    return 0;
  }
  iVar11 = (int)local_32;
  if ((short)param_1[0xeb] * iVar11 + local_2c + 0x1d < iVar4) {
    return 0;
  }
  uVar3 = (*(code *)*DAT_0001b2b8)(iVar11,iVar4 - local_2c);
  iVar4 = (uint)uVar3 << 0x10;
  iVar2 = iVar4 >> 0x10;
  *param_3 = uVar3;
  iVar8 = 0x1e;
  iVar6 = (int)(short)param_1[0xeb];
  if (iVar6 <= iVar2) {
    iVar4 = iVar6 + -1;
  }
  if (iVar6 <= iVar2) {
    *param_3 = (ushort)iVar4;
  }
  if ((short)*param_3 < 0) {
    *param_3 = 0;
  }
  if ((int)(short)*param_3 != (short)param_1[0xeb] + -1) {
    iVar8 = iVar11 + 1;
  }
  local_2c = (short)*param_3 * iVar11 + local_2c;
  local_28 = local_30[0] + -2;
  local_24 = local_2c + iVar8;
  local_20 = local_30[0] + 0x2a;
  iVar4 = 0x10;
  piVar10 = &local_2c;
  do {
    iVar11 = iVar4 + -1;
    *param_4 = (char)*piVar10;
    bVar1 = 0 < iVar4;
    iVar4 = iVar11;
    piVar10 = (int *)((int)piVar10 + 1);
    param_4 = param_4 + 1;
  } while (iVar11 != 0 && bVar1);
  if (*param_1 != 5) {
    return 1;
  }
  iVar4 = (int)(short)param_1[0x125];
  if ((iVar4 < 1) || ((int)(uint)*(ushort *)(param_1 + 299) <= iVar4)) {
    if (iVar4 != 0) {
      return 0;
    }
    if ((((((short)param_1[0x127] != 0) || ((char)param_1[300] != '\0')) ||
         (*(char *)((int)param_1 + 0x4aa) == '\0')) ||
        ((param_1[(short)*param_3 * 2 + 199] == 0 &&
         ((short)param_1[(short)*param_3 * 2 + 200] == 2)))) &&
       (((*(char *)((int)param_1 + 0x49e) != '\0' ||
         ((param_1[(short)*param_3 * 2 + 199] != 3 || ((char)param_1[0x12a] == '\0')))) ||
        (iVar4 = FUN_00016df4((int)(param_1 + 199),3), (short)iVar4 == (short)param_1[0xeb])))) {
      puVar5 = (undefined4 *)FUN_000172ec((int)(param_1 + 199),(undefined1 *)&local_2c,*param_3);
      uVar7 = *puVar5;
      uVar9 = puVar5[1];
      goto LAB_0001b3dc;
    }
  }
  else {
    iVar4 = FUN_00016df4((int)(param_1 + 199),(uint)*(ushort *)(param_1 + 0x11b));
    if (((short)iVar4 < 1) || (param_1[(short)*param_3 * 2 + 199] == param_1[0x11b])) {
      puVar5 = (undefined4 *)FUN_000172ec((int)(param_1 + 199),(undefined1 *)&local_2c,*param_3);
      uVar7 = *puVar5;
      uVar9 = puVar5[1];
LAB_0001b3dc:
      FUN_00016878((int)(param_1 + 0x11b),uVar7,uVar9,2);
      return 1;
    }
  }
  Ordinal_858(0);
  return 0;
}


// ==== FUN_0001b3f4 @ 0001b3f4  size=584  callers=[00015258, 00018524]

void FUN_0001b3f4(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int local_34;
  int local_30;
  undefined1 auStack_2c [8];
  
  if ((int)*(short *)(param_1 + 0x125) == (uint)*(ushort *)(param_1 + 299)) {
    uVar3 = (uint)*(short *)(param_1 + 0x11c);
    uVar5 = (uint)*(ushort *)(param_1 + 0x11b);
    uVar6 = *(ushort *)(param_1 + 0x123);
    if (1 < *(ushort *)(param_1 + 299)) {
      iVar2 = 1;
      do {
        if (param_1[iVar2 * 2 + 0x11b] != param_1[0x11b]) {
          *(undefined1 *)
           ((int)param_1 +
           (uint)*(ushort *)((int)param_1 + iVar2 * 2 + 0x48c) * 0xb0 + param_1[0x11b] + 0x1ac) = 0;
        }
        if ((uVar5 == 3) || (param_1[iVar2 * 2 + 0x11b] != 3)) {
          if ((param_1[iVar2 * 2 + 0x11b] == uVar5) &&
             (uVar4 = (uint)*(ushort *)(param_1 + iVar2 * 2 + 0x11c), (int)(short)uVar3 < (int)uVar4
             )) goto LAB_0001b4d8;
        }
        else {
          uVar4 = (uint)*(short *)(param_1 + iVar2 * 2 + 0x11c);
          uVar5 = 3;
LAB_0001b4d8:
          uVar6 = *(ushort *)((int)param_1 + iVar2 * 2 + 0x48c);
          uVar3 = uVar4;
        }
        iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
      } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 299));
    }
    if (*(short *)(param_1 + 299) != 0) {
      iVar2 = 0;
      do {
        piVar1 = (int *)FUN_000168f8((int)(param_1 + 0x11b),auStack_2c,0);
        local_34 = *piVar1;
        local_30 = piVar1[1];
        piVar1 = &local_34;
        if (local_34 == 3) {
          piVar1 = (int *)(uint)*(byte *)((int)param_1 + 0x49e);
        }
        if (local_34 == 3 && piVar1 == (int *)0x0) {
          *(undefined1 *)((int)param_1 + 0x49e) = 1;
        }
        FUN_00016694((int)(param_1 + 1),local_34,local_30);
        iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
      } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 299));
    }
    *(short *)(param_1 + 0x127) = *(short *)(param_1 + 0x127) + 1;
    *(short *)((int)param_1 + (uint)uVar6 * 0xb0 + 0x25a) =
         *(short *)((int)param_1 + (uint)uVar6 * 0xb0 + 0x25a) + 1;
    *(short *)(param_1 + (uint)uVar6 * 0x2c + 0x96) =
         *(short *)(param_1 + (uint)uVar6 * 0x2c + 0x96) + -1;
    *(ushort *)(param_1 + 0x126) = uVar6;
    uVar6 = 0xd;
    if (*(short *)(param_1 + 299) != 4) {
      uVar6 = 0x11;
    }
    if (uVar6 <= *(ushort *)(param_1 + 0x127)) {
      *(short *)((int)param_1 + 0x49a) = *(short *)((int)param_1 + 0x49a) + 1;
      *param_1 = 6;
    }
  }
  return;
}


// ==== FUN_0001b63c @ 0001b63c  size=456  callers=[00014db4, 00015258]

void FUN_0001b63c(int *param_1,int param_2)

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
  
  iVar2 = (int)(short)param_1[0x125];
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
    uVar1 = (uint)*(ushort *)((int)param_1 + iVar2 * 2 + 0x48a);
    FUN_0001aee4(param_1,param_2,param_1[iVar2 * 2 + 0x119],(short)param_1[iVar2 * 2 + 0x11a],'\x01'
                 ,*(int *)(&local_34 + uVar1 * 8),*(int *)(&local_30 + uVar1 * 8));
  }
  return;
}


// ==== FUN_0001b804 @ 0001b804  size=508  callers=[0001a560]

void FUN_0001b804(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
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
  if (0 < (short)param_1[0x125]) {
    uVar2 = 0;
    do {
      uVar1 = (uint)*(ushort *)((int)param_1 + uVar2 * 2 + 0x48c);
      FUN_0001aee4(param_1,param_2,param_1[uVar2 * 2 + 0x11b],(short)param_1[uVar2 * 2 + 0x11c],
                   '\x01',*(int *)(&local_34 + uVar1 * 8),*(int *)(&local_30 + uVar1 * 8));
      uVar2 = uVar2 + 1 & 0xffff;
    } while ((int)uVar2 < (int)(short)param_1[0x125]);
  }
  return;
}


// ==== FUN_0001ba00 @ 0001ba00  size=176  callers=[]

void FUN_0001ba00(int *param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  short local_18;
  short local_16;
  short local_14 [2];
  
  local_16 = 0;
  local_14[1] = 0;
  local_14[0] = 0;
  local_18 = 0;
  FUN_0001abf8((int)param_1,2,&local_16,local_14 + 1,local_14,&local_18);
  iVar1 = (int)param_3;
  if (*(char *)((int)param_1 + iVar1 * 8 + 0x322) == '\0') {
    iVar2 = (int)local_18;
  }
  else {
    iVar2 = local_18 + -2;
  }
  FUN_0001aee4(param_1,param_2,param_1[iVar1 * 2 + 199],(short)param_1[iVar1 * 2 + 200],'\x01',
               local_16 * iVar1 + (int)local_14[0],iVar2);
  return;
}


// ==== FUN_0001bab0 @ 0001bab0  size=520  callers=[00014db4, 0001a560]

void FUN_0001bab0(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_64 [8];
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 auStack_4c [8];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  char local_34 [32];
  
  if (*param_1 == 8) {
    Ordinal_719(local_34,DAT_0001bccc,param_1 + 0xc4);
  }
  else {
    iVar2 = 0;
    do {
      cVar1 = *(char *)(iVar2 + DAT_0001baec);
      local_34[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
  }
  local_58 = 0;
  local_5c = DAT_0001bcc8;
  Ordinal_982(&local_5c,0x6e,DAT_0001bcc4,param_2);
  uVar3 = (**(code **)(*param_2 + 0x30))(param_2,&local_5c);
  Ordinal_2316(param_2,1);
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,0xffffff);
  piVar5 = (int *)Ordinal_177(auStack_64,local_34);
  piVar5 = (int *)FUN_00012390((int)param_2,auStack_4c,piVar5);
  local_54 = *piVar5;
  local_50 = (undefined1)piVar5[1];
  local_4f = *(undefined1 *)((int)piVar5 + 5);
  local_4e = *(undefined1 *)((int)piVar5 + 6);
  local_4d = *(undefined1 *)((int)piVar5 + 7);
  Ordinal_297(auStack_64);
  local_3c = *DAT_0001bcc0;
  iVar2 = DAT_0001bcc0[2] - local_3c;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  iVar6 = local_54;
  if (local_54 < 0) {
    iVar6 = local_54 + 1;
  }
  local_44 = ((iVar2 >> 1) - (iVar6 >> 1)) + local_3c;
  local_40 = DAT_0001bcc0[1];
  local_3c = (iVar6 >> 1) + (iVar2 >> 1) + local_3c;
  local_38 = DAT_0001bcc0[3];
  piVar5 = (int *)Ordinal_177(auStack_64,local_34);
  (**(code **)(*param_2 + 0x48))(param_2,*piVar5,*(undefined4 *)(*piVar5 + -8),&local_44,0x100);
  Ordinal_297(auStack_64);
  (**(code **)(*param_2 + 0x38))(param_2,uVar4);
  (**(code **)(*param_2 + 0x30))(param_2,uVar3);
  Ordinal_1040(&local_5c);
  local_5c = DAT_0001bcbc;
  Ordinal_1040(&local_5c);
  return;
}


// ==== FUN_0001bcd0 @ 0001bcd0  size=172  callers=[00014db4, 00015890, 000159d8, 00015b20, 00015c4c, 00015d64]

void FUN_0001bcd0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 extraout_r1;
  
  *(undefined2 *)((int)param_1 + 0x49a) = 0;
  iVar1 = 0;
  do {
    *(undefined2 *)(param_1 + iVar1 * 0x2c + 0x95) = 0;
    *(undefined2 *)(param_1 + iVar1 * 0x2c + 0x94) = 0;
    *(undefined2 *)((int)param_1 + iVar1 * 0xb0 + 0x252) = 0;
    iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
  } while (iVar1 < 4);
  FUN_00018958(param_1);
  if (*(char *)((int)param_1 + 0x4a6) != '\0') {
    uVar2 = Ordinal_1053();
    (*(code *)*DAT_0001bd7c)(5,uVar2);
    *(undefined2 *)(param_1 + 0x129) = extraout_r1;
  }
  return;
}


// ==== FUN_0001bd80 @ 0001bd80  size=360  callers=[00014db4]

undefined4 FUN_0001bd80(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [100];
  
  if (*(char *)(param_1 + 0x4b0) == '\0') {
    iVar2 = 0;
    sVar5 = 0;
    iVar6 = 1;
    if (1 < *(ushort *)(param_1 + 0x4ac)) {
      do {
        if (*(short *)((short)iVar2 * 0xb0 + param_1 + 0x250) <
            *(short *)(iVar6 * 0xb0 + param_1 + 0x250)) {
          iVar2 = iVar6;
        }
        sVar5 = (short)iVar2;
        iVar6 = (iVar6 + 1) * 0x10000 >> 0x10;
      } while (iVar6 < (int)(uint)*(ushort *)(param_1 + 0x4ac));
    }
    iVar6 = sVar5 * 0xb0 + param_1;
    if (*(short *)(iVar6 + 0x250) < *(short *)(param_1 + 0x4b6)) {
      return 0;
    }
    iVar2 = DAT_0001bee8;
    if (sVar5 != 2) {
      iVar2 = iVar6 + 0x1b0;
    }
    Ordinal_719(auStack_78,DAT_0001beec,iVar2);
  }
  else {
    iVar6 = (int)*(short *)(param_1 + 0x3b0);
    if (((iVar6 < *(short *)(param_1 + 0x4b6)) ||
        (uVar4 = DAT_0001bdd0, iVar6 <= *(short *)(param_1 + 0x460))) &&
       ((iVar2 = (int)*(short *)(param_1 + 0x460), iVar2 < *(short *)(param_1 + 0x4b6) ||
        (bVar1 = iVar2 <= iVar6, uVar4 = DAT_0001bdf8, iVar6 = iVar2, bVar1)))) {
      return 0;
    }
    Ordinal_719(auStack_78,uVar4,iVar6);
  }
  puVar3 = (undefined4 *)Ordinal_177(auStack_80,auStack_78);
  Ordinal_858(0,*puVar3,DAT_0001bee4,0);
  Ordinal_297(auStack_80);
  return 1;
}


// ==== Ordinal_1079 @ 0001bf20  size=8  callers=[000145cc, 00014db4, 00015890, 000159d8, 00015bd8, 00015c4c, 00015d64]

void Ordinal_1079(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001bf24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001bf28)();
  return;
}


// ==== Ordinal_77 @ 0001c0f4  size=8  callers=[00011000, 000113e0, 000126dc, 0001456c]

void Ordinal_77(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c0fc)();
  return;
}


// ==== Ordinal_317 @ 0001c100  size=8  callers=[00011398, 000121c4, 00012200, 00012240, 000122b0, 00012320, 000126b4, 00014400, 00014614, 00014638, 00014734, 0001608c, 00016134]

void Ordinal_317(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c108)();
  return;
}


// ==== Ordinal_231 @ 0001c10c  size=8  callers=[00011398, 000121c4, 00014400, 000145cc, 00014638, 00014db4, 00015890, 000159d8, 00015bd8, 00015c4c, 00015d64]

void Ordinal_231(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c114)();
  return;
}


// ==== Ordinal_271 @ 0001c118  size=8  callers=[00011064, 00011db4, 00012744, 00014b54]

void Ordinal_271(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c120)();
  return;
}


// ==== Ordinal_136 @ 0001c124  size=8  callers=[00011064, 00011db4, 00012744, 00014b54]

void Ordinal_136(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c12c)();
  return;
}


// ==== Ordinal_846 @ 0001c130  size=8  callers=[0001109c, 0001173c]

void Ordinal_846(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c138)();
  return;
}


// ==== Ordinal_2446 @ 0001c13c  size=8  callers=[0001109c, 00011584, 000144b0]

void Ordinal_2446(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c144)();
  return;
}


// ==== Ordinal_297 @ 0001c148  size=8  callers=[0001109c, 00011db4, 00012744, 0001a660, 0001bab0, 0001bd80]

void Ordinal_297(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c150)();
  return;
}


// ==== Ordinal_2443 @ 0001c154  size=8  callers=[0001109c]

void Ordinal_2443(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c15c)();
  return;
}


// ==== Ordinal_177 @ 0001c160  size=8  callers=[0001109c, 00011db4, 00012744, 0001a660, 0001bab0, 0001bd80]

void Ordinal_177(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c168)();
  return;
}


// ==== Ordinal_1273 @ 0001c16c  size=8  callers=[0001109c, 000114c8, 00011584]

void Ordinal_1273(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c174)();
  return;
}


// ==== Ordinal_1939 @ 0001c178  size=8  callers=[0001109c, 000114c8, 000145f4]

void Ordinal_1939(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c180)();
  return;
}


// ==== Ordinal_1691 @ 0001c190  size=8  callers=[0001131c, 00011a44]

void Ordinal_1691(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c198)();
  return;
}


// ==== Ordinal_1673 @ 0001c19c  size=8  callers=[000114c8]

void Ordinal_1673(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c1a4)();
  return;
}


// ==== Ordinal_982 @ 0001c1e4  size=8  callers=[00011db4, 0001a660, 0001bab0]

void Ordinal_982(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c1ec)();
  return;
}


// ==== Ordinal_2316 @ 0001c1f0  size=8  callers=[00011db4, 0001a660, 0001bab0]

void Ordinal_2316(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c1f8)();
  return;
}


// ==== Ordinal_1040 @ 0001c1fc  size=8  callers=[00011db4, 00012240, 000122b0, 00012320, 00014a70, 00016134, 0001a22c, 0001a320, 0001a660, 0001bab0]

void Ordinal_1040(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c204)();
  return;
}


// ==== Ordinal_800 @ 0001c214  size=8  callers=[00011db4, 00014b54, 000161a4]

void Ordinal_800(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c21c)();
  return;
}


// ==== Ordinal_315 @ 0001c22c  size=8  callers=[00012418, 00012664, 000144b0, 0001465c, 0001484c, 00014998]

void Ordinal_315(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c234)();
  return;
}


// ==== Ordinal_48 @ 0001c340  size=8  callers=[00012474]

void Ordinal_48(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c348)();
  return;
}


// ==== Ordinal_103 @ 0001c34c  size=8  callers=[00012474]

void Ordinal_103(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c354)();
  return;
}


// ==== Ordinal_219 @ 0001c364  size=8  callers=[000124b4]

void Ordinal_219(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c36c)();
  return;
}


// ==== Ordinal_2313 @ 0001c370  size=8  callers=[000124f4]

void Ordinal_2313(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c378)();
  return;
}


// ==== Ordinal_562 @ 0001c37c  size=8  callers=[000124f4]

void Ordinal_562(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c384)();
  return;
}


// ==== Ordinal_1676 @ 0001c388  size=8  callers=[000124f4]

void Ordinal_1676(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c390)();
  return;
}


// ==== Ordinal_1850 @ 0001c394  size=8  callers=[000124f4]

void Ordinal_1850(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c39c)();
  return;
}


// ==== Ordinal_2093 @ 0001c3a0  size=8  callers=[0001264c]

void Ordinal_2093(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c3a8)();
  return;
}


// ==== Ordinal_644 @ 0001c3ac  size=8  callers=[00012664, 0001cb64]

void Ordinal_644(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c3b4)();
  return;
}


// ==== Ordinal_201 @ 0001c4c0  size=8  callers=[0001448c]

void Ordinal_201(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c4c8)();
  return;
}


// ==== Ordinal_310 @ 0001c4cc  size=8  callers=[00014614]

void Ordinal_310(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c4d4)();
  return;
}


// ==== Ordinal_228 @ 0001c4d8  size=8  callers=[000144b0]

void Ordinal_228(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c4e0)();
  return;
}


// ==== Ordinal_2114 @ 0001c4e4  size=8  callers=[000144b0]

void Ordinal_2114(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c4ec)();
  return;
}


// ==== Ordinal_2075 @ 0001c4f0  size=8  callers=[000144b0]

void Ordinal_2075(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c4f8)();
  return;
}


// ==== Ordinal_72 @ 0001c4fc  size=8  callers=[000144b0]

void Ordinal_72(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c504)();
  return;
}


// ==== Ordinal_572 @ 0001c508  size=8  callers=[000144b0]

void Ordinal_572(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c510)();
  return;
}


// ==== Ordinal_162 @ 0001c514  size=8  callers=[000144b0]

void Ordinal_162(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c51c)();
  return;
}


// ==== Ordinal_2400 @ 0001c520  size=8  callers=[000144b0]

void Ordinal_2400(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c528)();
  return;
}


// ==== Ordinal_840 @ 0001c52c  size=8  callers=[000145f4]

void Ordinal_840(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c534)();
  return;
}


// ==== Ordinal_85 @ 0001c64c  size=8  callers=[000146b8]

void Ordinal_85(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c654)();
  return;
}


// ==== Ordinal_1961 @ 0001c664  size=8  callers=[00014718]

void Ordinal_1961(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c66c)();
  return;
}


// ==== Ordinal_76 @ 0001c700  size=8  callers=[00014998, 0001a320]

void Ordinal_76(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c708)();
  return;
}


// ==== Ordinal_200 @ 0001c70c  size=8  callers=[00014998]

void Ordinal_200(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c714)();
  return;
}


// ==== Ordinal_2264 @ 0001c730  size=8  callers=[00014b54, 00014db4, 00015258, 0001a320]

void Ordinal_2264(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c738)();
  return;
}


// ==== Ordinal_799 @ 0001c73c  size=8  callers=[00014b54, 0001a320]

void Ordinal_799(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c744)();
  return;
}


// ==== Ordinal_1760 @ 0001c748  size=8  callers=[00014db4, 00015890, 000159d8, 00015b20, 00015b7c, 00015d64]

void Ordinal_1760(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c750)();
  return;
}


// ==== Ordinal_1021 @ 0001c754  size=8  callers=[00014db4]

void Ordinal_1021(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c75c)();
  return;
}


// ==== Ordinal_1207 @ 0001c76c  size=8  callers=[00015c4c]

void Ordinal_1207(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c774)();
  return;
}


// ==== Ordinal_1946 @ 0001c778  size=8  callers=[00015c4c]

void Ordinal_1946(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c780)();
  return;
}


// ==== Ordinal_628 @ 0001c790  size=8  callers=[000161a4]

void Ordinal_628(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c798)();
  return;
}


// ==== Ordinal_230 @ 0001c79c  size=8  callers=[0001a320]

void Ordinal_230(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c7a4)();
  return;
}


// ==== Ordinal_719 @ 0001c7a8  size=8  callers=[0001109c, 00011db4, 00012744, 0001a660, 0001bab0, 0001bd80]

void Ordinal_719(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c7b0)();
  return;
}


// ==== Ordinal_1063 @ 0001c7b4  size=8  callers=[0001109c, 00012744]

void Ordinal_1063(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c7bc)();
  return;
}


// ==== Ordinal_868 @ 0001c7cc  size=8  callers=[000114c8, 000116f8, 000124f4]

void Ordinal_868(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c7d4)();
  return;
}


// ==== Ordinal_250 @ 0001c7d8  size=8  callers=[000116f8, 00011ca8, 00014db4, 00015258, 00015b20, 00015b7c, 00015c4c]

void Ordinal_250(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c7e0)();
  return;
}


// ==== Ordinal_897 @ 0001c814  size=8  callers=[00012390]

void Ordinal_897(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c81c)();
  return;
}


// ==== Ordinal_61 @ 0001c820  size=8  callers=[00012664]

void Ordinal_61(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c828)();
  return;
}


// ==== Ordinal_63 @ 0001c82c  size=8  callers=[00012664]

void Ordinal_63(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c834)();
  return;
}


// ==== Ordinal_874 @ 0001c838  size=8  callers=[00012664]

void Ordinal_874(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c840)();
  return;
}


// ==== Ordinal_267 @ 0001c844  size=8  callers=[000144b0, 00014db4, 00015258]

void Ordinal_267(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c84c)();
  return;
}


// ==== Ordinal_535 @ 0001c850  size=8  callers=[00014828, 00014db4, 00015258, 0001a410]

void Ordinal_535(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c858)();
  return;
}


// ==== Ordinal_1118 @ 0001c85c  size=8  callers=[000148a8, 00014938]

void Ordinal_1118(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c864)();
  return;
}


// ==== Ordinal_1120 @ 0001c868  size=8  callers=[000148a8]

void Ordinal_1120(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c870)();
  return;
}


// ==== Ordinal_1113 @ 0001c874  size=8  callers=[000148a8, 00014938]

void Ordinal_1113(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c87c)();
  return;
}


// ==== Ordinal_1065 @ 0001c880  size=8  callers=[000148a8]

void Ordinal_1065(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c888)();
  return;
}


// ==== Ordinal_1121 @ 0001c88c  size=8  callers=[00014938]

void Ordinal_1121(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c894)();
  return;
}


// ==== Ordinal_1053 @ 0001c898  size=8  callers=[00015eac, 0001a410, 0001bcd0]

void Ordinal_1053(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c8a0)();
  return;
}


// ==== Ordinal_902 @ 0001c8a4  size=8  callers=[00014b54]

void Ordinal_902(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c8ac)();
  return;
}


// ==== Ordinal_910 @ 0001c8b0  size=8  callers=[00014b54, 0001a320]

void Ordinal_910(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c8b8)();
  return;
}


// ==== Ordinal_903 @ 0001c8bc  size=8  callers=[00014b54]

void Ordinal_903(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c8c4)();
  return;
}


// ==== Ordinal_875 @ 0001c8c8  size=8  callers=[00014d3c]

void Ordinal_875(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c8d0)();
  return;
}


// ==== Ordinal_876 @ 0001c8d4  size=8  callers=[00014d78]

void Ordinal_876(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c8dc)();
  return;
}


// ==== Ordinal_906 @ 0001c8ec  size=8  callers=[000155c4, 0001a22c, 0001a2bc]

void Ordinal_906(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c8f4)();
  return;
}


// ==== Ordinal_493 @ 0001c8f8  size=8  callers=[00015848]

void Ordinal_493(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c900)();
  return;
}


// ==== Ordinal_703 @ 0001c904  size=8  callers=[00015c4c]

void Ordinal_703(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c90c)();
  return;
}


// ==== Ordinal_873 @ 0001c910  size=8  callers=[000161a4]

void Ordinal_873(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c918)();
  return;
}


// ==== Ordinal_1046 @ 0001c91c  size=8  callers=[0001638c, 000168f8, 000172ec]

void Ordinal_1046(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c924)();
  return;
}


// ==== Ordinal_905 @ 0001c928  size=8  callers=[0001a320]

void Ordinal_905(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c930)();
  return;
}


// ==== Ordinal_1061 @ 0001c934  size=8  callers=[0001a410]

void Ordinal_1061(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c93c)();
  return;
}


// ==== Ordinal_858 @ 0001c940  size=8  callers=[0001b08c, 0001bd80]

void Ordinal_858(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001c948)();
  return;
}


// ==== entry @ 0001c94c  size=212  callers=[]

void entry(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_0001ca40();
  uVar2 = Ordinal_775(param_1,param_2,param_3,param_4);
  *DAT_0001caf0 = 0;
  puVar1 = DAT_0001caec;
  puVar3 = (undefined4 *)*DAT_0001caec;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*DAT_0001cae8;
    while (puVar4 = puVar4 + -1, puVar3 <= puVar4) {
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)();
        puVar3 = (undefined4 *)*puVar1;
      }
    }
  }
  FUN_0001ca70(DAT_0001cb58,DAT_0001cb5c);
  FUN_0001ca70(DAT_0001cb50,DAT_0001cb54);
  (*DAT_0001cb4c)(0x42,uVar2);
  return;
}


// ==== FUN_0001c980 @ 0001c980  size=160  callers=[0001ca28]

undefined4 FUN_0001c980(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = DAT_0001c9d0;
  uVar3 = Ordinal_35(*DAT_0001c9d0);
  piVar1 = DAT_0001c9cc;
  puVar5 = (undefined4 *)*DAT_0001c9cc;
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


// ==== FUN_0001ca28 @ 0001ca28  size=24  callers=[0001447c]

undefined4 FUN_0001ca28(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001c980(param_1);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ==== FUN_0001ca40 @ 0001ca40  size=32  callers=[0001c94c]

void FUN_0001ca40(void)

{
  FUN_0001ca70(DAT_0001ca68,DAT_0001ca6c);
  FUN_0001ca70(DAT_0001ca60,DAT_0001ca64);
  return;
}


// ==== FUN_0001ca70 @ 0001ca70  size=48  callers=[0001c94c, 0001ca40]

void FUN_0001ca70(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


// ==== Ordinal_775 @ 0001cb60  size=4  callers=[0001c94c]

void Ordinal_775(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001cbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001cbb8)();
  return;
}


// ==== FUN_0001cb64 @ 0001cb64  size=36  callers=[0001cb8c]

undefined4 FUN_0001cb64(undefined1 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Ordinal_644();
  *(undefined1 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x2040) = param_2;
  return 1;
}


// ==== FUN_0001cb8c @ 0001cb8c  size=32  callers=[]

void FUN_0001cb8c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001cb64(0,0x600);
  *DAT_0001cbac = (char)uVar1;
  return;
}


// ==== Ordinal_775 @ 0001cbb0  size=8  callers=[]

void Ordinal_775(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001cbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001cbb8)();
  return;
}


// ==== Ordinal_34 @ 0001cbbc  size=8  callers=[0001c980]

void Ordinal_34(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001cbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001cbc4)();
  return;
}


// ==== Ordinal_33 @ 0001cbc8  size=8  callers=[0001c980]

void Ordinal_33(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001cbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001cbd0)();
  return;
}


// ==== Ordinal_35 @ 0001cbd4  size=8  callers=[0001c980]

void Ordinal_35(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001cbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0001cbdc)();
  return;
}


