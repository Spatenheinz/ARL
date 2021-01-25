#include <stdio.h>
#include <stdlib.h>

  uint Mem[0x10000000];

  uint iCount = 0;
  uint mCount = 0; int timer = 1;

  void count(int i, int m) {if (timer) {iCount += i; mCount += m;}}

  void *stack[10000];
  int stackPointer = 0;


int main(int ac, int* av)
{
  uint tmp;
  int A, B, C, D, E, F, G, H;
  uint var_failed = 0;
  uint var_segEnd = 0;
  uint var_hashV = 0;
  uint var_fieldsD = 0;
  uint var_fieldsA = 0;
  uint var_fieldsP = 0;
  uint var_ttt = 0;
  uint var_inv_t_abb12x_y = 0;
  uint var_inv_t_abb11x_y = 0;
  uint var_copyQ = 0;
  uint var_copyP = 0;
  uint var_inv_t_abb19y_x = 0;
  uint var_inv_t_abb18y_x = 0;
  uint var_t27x_y = 0;
  uint var_t26x_y = 0;
  uint var_inv_t_abb9x_y_y_x = 0;
  uint var_inv_t_abb8x_y_y_x = 0;
  uint var_x = 0;
  uint var_t2x_y = 0;
  uint var_t1x_y = 0;
  uint var_A = 0;
  uint var_consP = 0;
  uint var_nilnil = 0;
  uint var_consD = 0;
  uint var_consA = 0;
  uint var_y = 0;
  uint var_z = 0;
  uint var_stackP = 0;
  uint var_segSize = 0;
  uint var_mask = 0;
  uint var_lastH = 0;
  uint var_endH = 0;
  uint var_H = 0;
  uint var_hsizeB = 0;
  uint var_hsize = 0;
  uint var_b1 = 0;
  uint var_b = 0;
  uint var_hashT = 0;
  uint var_hashC = 0;
  uint var_hashB = 0;
  uint var_hashA = 0;

  void writeVars() {
    printf("var_failed = \%u\n",var_failed);
    printf("var_segEnd = \%u\n",var_segEnd);
    printf("var_hashV = \%u\n",var_hashV);
    printf("var_fieldsD = \%u\n",var_fieldsD);
    printf("var_fieldsA = \%u\n",var_fieldsA);
    printf("var_fieldsP = \%u\n",var_fieldsP);
    printf("var_ttt = \%u\n",var_ttt);
    printf("var_inv_t_abb12x_y = \%u\n",var_inv_t_abb12x_y);
    printf("var_inv_t_abb11x_y = \%u\n",var_inv_t_abb11x_y);
    printf("var_copyQ = \%u\n",var_copyQ);
    printf("var_copyP = \%u\n",var_copyP);
    printf("var_inv_t_abb19y_x = \%u\n",var_inv_t_abb19y_x);
    printf("var_inv_t_abb18y_x = \%u\n",var_inv_t_abb18y_x);
    printf("var_t27x_y = \%u\n",var_t27x_y);
    printf("var_t26x_y = \%u\n",var_t26x_y);
    printf("var_inv_t_abb9x_y_y_x = \%u\n",var_inv_t_abb9x_y_y_x);
    printf("var_inv_t_abb8x_y_y_x = \%u\n",var_inv_t_abb8x_y_y_x);
    printf("var_x = \%u\n",var_x);
    printf("var_t2x_y = \%u\n",var_t2x_y);
    printf("var_t1x_y = \%u\n",var_t1x_y);
    printf("var_A = \%u\n",var_A);
    printf("var_consP = \%u\n",var_consP);
    printf("var_nilnil = \%u\n",var_nilnil);
    printf("var_consD = \%u\n",var_consD);
    printf("var_consA = \%u\n",var_consA);
    printf("var_y = \%u\n",var_y);
    printf("var_z = \%u\n",var_z);
    printf("var_stackP = \%u\n",var_stackP);
    printf("var_segSize = \%u\n",var_segSize);
    printf("var_mask = \%u\n",var_mask);
    printf("var_lastH = \%u\n",var_lastH);
    printf("var_endH = \%u\n",var_endH);
    printf("var_H = \%u\n",var_H);
    printf("var_hsizeB = \%u\n",var_hsizeB);
    printf("var_hsize = \%u\n",var_hsize);
    printf("var_b1 = \%u\n",var_b1);
    printf("var_b = \%u\n",var_b);
    printf("var_hashT = \%u\n",var_hashT);
    printf("var_hashC = \%u\n",var_hashC);
    printf("var_hashB = \%u\n",var_hashB);
    printf("var_hashA = \%u\n",var_hashA);
  }
  stack[stackPointer++] = &&programEnd;
  goto Label_main;

programEnd:
  fprintf(stderr,"\nInstructions: %u\nMemory accesses: %u\n",iCount, mCount);

  exit(0);

/*  blocks */

Label_main:

A = 0;

count(1, 0);
  var_hashA = (var_hashA + (366001 + 0));
count(1, 0);
  var_hashB = (var_hashB + (827927 + 0));
count(1, 0);
  var_hashC = (var_hashC + (593041 + 0));
count(1, 0);
  var_hashT = (var_hashT + (var_hashA + 0));
count(1, 0);
  var_b = (var_b + (8 + 0));
count(1, 0);
  var_b1 = (var_b1 + (var_b - 1));
count(1, 0);
  var_hsize = (var_hsize + (1 << 15));
count(1, 0);
  var_hsize = (var_hsize + (var_b1 + 0));
count(1, 0);
  var_hsizeB = (var_hsizeB + (var_hsize << 2));
count(1, 0);
  var_hsizeB = (var_hsizeB + (var_hsize << 2));
count(1, 0);
  var_hsizeB = (var_hsizeB + (var_hsize << 2));
count(1, 0);
  var_H = (var_H + (4800 + 0));
count(1, 0);
  var_endH = (var_endH + (var_hsizeB + var_H));
count(1, 0);
  var_lastH = (var_lastH + (var_endH - 12));
count(1, 0);
  var_mask = (var_mask + (4 << 15));
count(1, 0);
  var_mask = (var_mask - (4 + 0));
count(1, 0);
  var_segSize = (var_segSize + (var_b1 << 2));
count(1, 0);
  var_segSize = (var_segSize + (var_b1 << 2));
count(1, 0);
  var_segSize = (var_segSize + (var_b1 << 2));
count(1, 0);
  var_stackP = (var_stackP + (var_endH + 0));
count(1, 0);
  var_stackP = (var_stackP + (64 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_26_1;
  goto Label_initialise;
  Return_26_1:
  count(2,0);
   stack[stackPointer++] = &&Return_27_2;
  goto Label_build;
  Return_27_2:
  count(2,0);
   stack[stackPointer++] = &&Return_29_3;
  goto Label_abb;
  Return_29_3:

printf("max refs = %d\n",A);
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 32\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_34_7;

Label_dump1:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 34\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_35_10;

Label_join_34_7:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 34\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_35_10;

Label_split_35_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_37_7;

Label_used1:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 37\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_39_10;

Label_join_37_7:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 37\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_39_10;

Label_split_39_10:
fprintf(stderr,"%d,", var_y);
  goto *stack[--stackPointer];

Label_initialise:
count(1, 0);
  var_consA = (var_consA + (2 + 0));
count(1, 0);
  var_consD = (var_consD + (2 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_47_4;
  goto Label_cons;
  Return_47_4:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  goto *stack[--stackPointer];

Label_build:
count(1, 0);
  var_consD = (var_consD + (2 + 0));
count(1, 0);
  var_consA = (var_consA + (21 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_55_5;
  goto Label_cons;
  Return_55_5:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (19 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_58_6;
  goto Label_cons;
  Return_58_6:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (17 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_61_7;
  goto Label_cons;
  Return_61_7:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (15 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_64_8;
  goto Label_cons;
  Return_64_8:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (13 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_67_9;
  goto Label_cons;
  Return_67_9:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (11 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_70_10;
  goto Label_cons;
  Return_70_10:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (9 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_73_11;
  goto Label_cons;
  Return_73_11:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (7 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_76_12;
  goto Label_cons;
  Return_76_12:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (5 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_79_13;
  goto Label_cons;
  Return_79_13:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (3 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_82_14;
  goto Label_cons;
  Return_82_14:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  tmp = var_consD;
  var_consD = (var_A);
  var_A = (tmp);
  goto *stack[--stackPointer];

Label_abb:
  goto Label_abb_entry_1;

Label_abb_exit_1:
  goto *stack[--stackPointer];

Label_abb_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_x_yabb1; else goto Label_split_97_7;

Label_split_97_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_99_15;
  goto Label__cons;
  Return_99_15:
  tmp = var_t1x_y;
  var_t1x_y = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_y;
  var_t2x_y = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_t1x_y);
  var_t1x_y = (tmp);
  if (count(1,0), var_t1x_y != 0) goto Label_x_yabb2; else goto Label_split_103_12;

Label_split_103_12:
  tmp = var_y;
  var_y = (var_t2x_y);
  var_t2x_y = (tmp);
  if (count(1,0), var_t2x_y == 0) goto Label_x_yabb3; else goto Label_join_106_9;

Label_x_yabb2:
  if (count(1,0), !(var_t1x_y != 0)){
    fprintf(stderr,"\nJoin failure at line 106\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_y);
  var_t1x_y = (tmp);
  tmp = var_t1x_y;
  var_t1x_y = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_y;
  var_t2x_y = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_110_16;
  goto Label_cons;
  Return_110_16:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_112_9;

Label_join_106_9:
  if (count(1,0), var_t1x_y != 0){
    fprintf(stderr,"\nJoin failure at line 106\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_y);
  var_t1x_y = (tmp);
  tmp = var_t1x_y;
  var_t1x_y = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_y;
  var_t2x_y = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_110_17;
  goto Label_cons;
  Return_110_17:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_112_9;

Label_x_yabb3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 112\n");
  writeVars(); goto programEnd;
}
  goto Label_join_113_9;

Label_join_112_9:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 112\n");
  writeVars(); goto programEnd;
}
  goto Label_join_113_9;

Label_x_yabb1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 113\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_abb_entry_2; else goto Label_join_117_12;

Label_join_113_9:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 113\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_abb_entry_2; else goto Label_join_117_12;

Label_abb_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_y_y_xabb8; else goto Label_split_119_7;

Label_join_117_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_y_y_xabb8; else goto Label_split_119_7;

Label_split_119_7:
  if (count(1,0), var_A == 0) goto Label_inv_x_y_y_xabb10; else goto Label_split_120_8;

Label_split_120_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_122_18;
  goto Label__cons;
  Return_122_18:
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_abb9x_y_y_x;
  var_inv_t_abb9x_y_y_x = (var_consD);
  var_consD = (tmp);
  if (count(1,0), (var_inv_t_abb8x_y_y_x & 3)) goto Label_x_yabb26; else goto Label_split_125_23;

Label_split_125_23:
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_127_19;
  goto Label__cons;
  Return_127_19:
  tmp = var_t26x_y;
  var_t26x_y = (var_consA);
  var_consA = (tmp);
  tmp = var_t27x_y;
  var_t27x_y = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_t26x_y);
  var_t26x_y = (tmp);
  if (count(1,0), var_t26x_y != 0) goto Label_x_yabb27; else goto Label_split_131_13;

Label_split_131_13:
  tmp = var_y;
  var_y = (var_t27x_y);
  var_t27x_y = (tmp);
  if (count(1,0), var_t27x_y == 0) goto Label_x_yabb28; else goto Label_join_134_10;

Label_x_yabb27:
  if (count(1,0), !(var_t26x_y != 0)){
    fprintf(stderr,"\nJoin failure at line 134\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t26x_y);
  var_t26x_y = (tmp);
  tmp = var_t26x_y;
  var_t26x_y = (var_consA);
  var_consA = (tmp);
  tmp = var_t27x_y;
  var_t27x_y = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_138_20;
  goto Label_cons;
  Return_138_20:
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consP);
  var_consP = (tmp);
  goto Label_join_140_10;

Label_join_134_10:
  if (count(1,0), var_t26x_y != 0){
    fprintf(stderr,"\nJoin failure at line 134\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t26x_y);
  var_t26x_y = (tmp);
  tmp = var_t26x_y;
  var_t26x_y = (var_consA);
  var_consA = (tmp);
  tmp = var_t27x_y;
  var_t27x_y = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_138_21;
  goto Label_cons;
  Return_138_21:
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consP);
  var_consP = (tmp);
  goto Label_join_140_10;

Label_x_yabb28:
  if (count(1,0), !(var_inv_t_abb8x_y_y_x == 0)){
    fprintf(stderr,"\nJoin failure at line 140\n");
  writeVars(); goto programEnd;
}
  goto Label_join_141_10;

Label_join_140_10:
  if (count(1,0), var_inv_t_abb8x_y_y_x == 0){
    fprintf(stderr,"\nJoin failure at line 140\n");
  writeVars(); goto programEnd;
}
  goto Label_join_141_10;

Label_x_yabb26:
  if (count(1,0), !((var_inv_t_abb8x_y_y_x & 3))){
    fprintf(stderr,"\nJoin failure at line 141\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_abb8x_y_y_x != 0) goto Label_inv_x_y_y_xabb9; else goto Label_join_143_18;

Label_join_141_10:
  if (count(1,0), (var_inv_t_abb8x_y_y_x & 3)){
    fprintf(stderr,"\nJoin failure at line 141\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_abb8x_y_y_x != 0) goto Label_inv_x_y_y_xabb9; else goto Label_join_143_18;

Label_inv_x_y_y_xabb10:
  if (count(1,0), !(var_inv_t_abb9x_y_y_x == 0)){
    fprintf(stderr,"\nJoin failure at line 143\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_abb9x_y_y_x & 3)) goto Label_inv_y_xabb18; else goto Label_split_144_23;

Label_join_143_18:
  if (count(1,0), var_inv_t_abb9x_y_y_x == 0){
    fprintf(stderr,"\nJoin failure at line 143\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_abb9x_y_y_x & 3)) goto Label_inv_y_xabb18; else goto Label_split_144_23;

Label_split_144_23:
  if (count(1,0), var_inv_t_abb9x_y_y_x == 0) goto Label_inv_y_xabb20; else goto Label_split_145_24;

Label_split_145_24:
  tmp = var_inv_t_abb9x_y_y_x;
  var_inv_t_abb9x_y_y_x = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_147_22;
  goto Label__cons;
  Return_147_22:
  tmp = var_inv_t_abb18y_x;
  var_inv_t_abb18y_x = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_abb19y_x;
  var_inv_t_abb19y_x = (var_consD);
  var_consD = (tmp);
  tmp = var_y;
  var_y = (var_inv_t_abb18y_x);
  var_inv_t_abb18y_x = (tmp);
  if (count(1,0), var_inv_t_abb18y_x != 0) goto Label_inv_y_xabb19; else goto Label_join_152_14;

Label_inv_y_xabb20:
  if (count(1,0), !(var_inv_t_abb19y_x == 0)){
    fprintf(stderr,"\nJoin failure at line 152\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_abb19y_x != 0) goto Label_abb22; else goto Label_split_153_21;

Label_join_152_14:
  if (count(1,0), var_inv_t_abb19y_x == 0){
    fprintf(stderr,"\nJoin failure at line 152\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_abb19y_x != 0) goto Label_abb22; else goto Label_split_153_21;

Label_split_153_21:
  tmp = var_x;
  var_x = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_155_23;
  goto Label_copy;
  Return_155_23:
  tmp = var_x;
  var_x = (var_copyP);
  var_copyP = (tmp);
  tmp = var_inv_t_abb19y_x;
  var_inv_t_abb19y_x = (var_copyQ);
  var_copyQ = (tmp);
  goto Label_join_158_7;

Label_abb22:
  if (count(1,0), !(var_inv_t_abb19y_x != var_x)){
    fprintf(stderr,"\nJoin failure at line 158\n");
  writeVars(); goto programEnd;
}
  goto Label_join_159_14;

Label_join_158_7:
  if (count(1,0), var_inv_t_abb19y_x != var_x){
    fprintf(stderr,"\nJoin failure at line 158\n");
  writeVars(); goto programEnd;
}
  goto Label_join_159_14;

Label_inv_y_xabb19:
  if (count(1,0), !(var_inv_t_abb18y_x != 0)){
    fprintf(stderr,"\nJoin failure at line 159\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_abb18y_x != 0) goto Label_abb21; else goto Label_split_160_21;

Label_join_159_14:
  if (count(1,0), var_inv_t_abb18y_x != 0){
    fprintf(stderr,"\nJoin failure at line 159\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_abb18y_x != 0) goto Label_abb21; else goto Label_split_160_21;

Label_split_160_21:
  tmp = var_y;
  var_y = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_162_24;
  goto Label_copy;
  Return_162_24:
  tmp = var_y;
  var_y = (var_copyP);
  var_copyP = (tmp);
  tmp = var_inv_t_abb18y_x;
  var_inv_t_abb18y_x = (var_copyQ);
  var_copyQ = (tmp);
  goto Label_join_165_7;

Label_abb21:
  if (count(1,0), !(var_inv_t_abb18y_x != var_y)){
    fprintf(stderr,"\nJoin failure at line 165\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_abb18y_x;
  var_inv_t_abb18y_x = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_abb19y_x;
  var_inv_t_abb19y_x = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_168_25;
  goto Label_cons;
  Return_168_25:
  tmp = var_inv_t_abb9x_y_y_x;
  var_inv_t_abb9x_y_y_x = (var_consP);
  var_consP = (tmp);
  goto Label_join_170_14;

Label_join_165_7:
  if (count(1,0), var_inv_t_abb18y_x != var_y){
    fprintf(stderr,"\nJoin failure at line 165\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_abb18y_x;
  var_inv_t_abb18y_x = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_abb19y_x;
  var_inv_t_abb19y_x = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_168_26;
  goto Label_cons;
  Return_168_26:
  tmp = var_inv_t_abb9x_y_y_x;
  var_inv_t_abb9x_y_y_x = (var_consP);
  var_consP = (tmp);
  goto Label_join_170_14;

Label_inv_y_xabb18:
  if (count(1,0), !((var_inv_t_abb9x_y_y_x & 3))){
    fprintf(stderr,"\nJoin failure at line 170\n");
  writeVars(); goto programEnd;
}
  goto Label_join_171_17;

Label_join_170_14:
  if (count(1,0), (var_inv_t_abb9x_y_y_x & 3)){
    fprintf(stderr,"\nJoin failure at line 170\n");
  writeVars(); goto programEnd;
}
  goto Label_join_171_17;

Label_inv_x_y_y_xabb9:
  if (count(1,0), !(var_inv_t_abb8x_y_y_x != 0)){
    fprintf(stderr,"\nJoin failure at line 171\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_abb8x_y_y_x & 3)) goto Label_inv_x_yabb11; else goto Label_split_172_23;

Label_join_171_17:
  if (count(1,0), var_inv_t_abb8x_y_y_x != 0){
    fprintf(stderr,"\nJoin failure at line 171\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_abb8x_y_y_x & 3)) goto Label_inv_x_yabb11; else goto Label_split_172_23;

Label_split_172_23:
  if (count(1,0), var_inv_t_abb8x_y_y_x == 0) goto Label_inv_x_yabb13; else goto Label_split_173_24;

Label_split_173_24:
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_175_27;
  goto Label__cons;
  Return_175_27:
  tmp = var_inv_t_abb11x_y;
  var_inv_t_abb11x_y = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_abb12x_y;
  var_inv_t_abb12x_y = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_abb11x_y);
  var_inv_t_abb11x_y = (tmp);
  if (count(1,0), var_inv_t_abb11x_y != 0) goto Label_inv_x_yabb12; else goto Label_join_180_14;

Label_inv_x_yabb13:
  if (count(1,0), !(var_inv_t_abb12x_y == 0)){
    fprintf(stderr,"\nJoin failure at line 180\n");
  writeVars(); goto programEnd;
}
  tmp = var_y;
  var_y = (var_inv_t_abb12x_y);
  var_inv_t_abb12x_y = (tmp);
  goto Label_join_182_14;

Label_join_180_14:
  if (count(1,0), var_inv_t_abb12x_y == 0){
    fprintf(stderr,"\nJoin failure at line 180\n");
  writeVars(); goto programEnd;
}
  tmp = var_y;
  var_y = (var_inv_t_abb12x_y);
  var_inv_t_abb12x_y = (tmp);
  goto Label_join_182_14;

Label_inv_x_yabb12:
  if (count(1,0), !(var_inv_t_abb11x_y != 0)){
    fprintf(stderr,"\nJoin failure at line 182\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_abb11x_y);
  var_inv_t_abb11x_y = (tmp);
  tmp = var_inv_t_abb11x_y;
  var_inv_t_abb11x_y = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_abb12x_y;
  var_inv_t_abb12x_y = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_186_28;
  goto Label_cons;
  Return_186_28:
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consP);
  var_consP = (tmp);
  goto Label_join_188_14;

Label_join_182_14:
  if (count(1,0), var_inv_t_abb11x_y != 0){
    fprintf(stderr,"\nJoin failure at line 182\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_abb11x_y);
  var_inv_t_abb11x_y = (tmp);
  tmp = var_inv_t_abb11x_y;
  var_inv_t_abb11x_y = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_abb12x_y;
  var_inv_t_abb12x_y = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_186_29;
  goto Label_cons;
  Return_186_29:
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consP);
  var_consP = (tmp);
  goto Label_join_188_14;

Label_inv_x_yabb11:
  if (count(1,0), !((var_inv_t_abb8x_y_y_x & 3))){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_abb9x_y_y_x;
  var_inv_t_abb9x_y_y_x = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_191_30;
  goto Label_cons;
  Return_191_30:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_193_17;

Label_join_188_14:
  if (count(1,0), (var_inv_t_abb8x_y_y_x & 3)){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_abb9x_y_y_x;
  var_inv_t_abb9x_y_y_x = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_191_31;
  goto Label_cons;
  Return_191_31:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_193_17;

Label_inv_x_y_y_xabb8:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 193\n");
  writeVars(); goto programEnd;
}
  goto Label_abb_exit_1;

Label_join_193_17:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 193\n");
  writeVars(); goto programEnd;
}
  goto Label_abb_exit_1;

Label_abb_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 198\n");
  writeVars(); goto programEnd;
}
  goto Label_abb_exit_2;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 203\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_copyP & 3) == 0) goto Label_copySymbol; else goto Label_split_204_12;

Label_split_204_12:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_209_12;

Label_copySymbol:
  if (count(1,0), !((var_copyP & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 211\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_209_12:
  if (count(1,0), (var_copyP & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 211\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_fields:
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 216\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsA = (var_fieldsA + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label_fields1; else goto Label_split_219_14;

Label_split_219_14:
count(1, 0);
  Mem[var_fieldsA] = (count(0,1), (count(0,1), Mem[var_fieldsA]) + (1 + 0));
  goto Label_join_221_9;

Label_fields1:
  if (count(1,0), !((var_fieldsA & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 221\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsD = (var_fieldsD + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label_fields2; else goto Label_split_224_14;

Label_join_221_9:
  if (count(1,0), (var_fieldsA & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 221\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsD = (var_fieldsD + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label_fields2; else goto Label_split_224_14;

Label_split_224_14:
count(1, 0);
  Mem[var_fieldsD] = (count(0,1), (count(0,1), Mem[var_fieldsD]) + (1 + 0));
  goto Label_join_226_9;

Label_fields2:
  if (count(1,0), !((var_fieldsD & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 226\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (8 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 228\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_226_9:
  if (count(1,0), (var_fieldsD & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 226\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (8 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 228\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 234\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 235\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 236\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 237\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 238\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_239_32;
  goto Label_hash;
  Return_239_32:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_242_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 242\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_243_15;

Label_join_242_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 242\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_243_15;

Label_split_243_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_245_19;

Label_split_245_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_247_19;

Label_split_247_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_249_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 249\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_251_10;

Label_join_249_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 249\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_251_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 251\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_254_17;

Label_join_251_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 251\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_254_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 254\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_256_15;

Label_join_254_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 254\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_256_15;

Label_split_256_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_257_15;

Label_split_257_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_259_33;
  goto Label__hash;
  Return_259_33:
count(1, 0);
  Mem[var_consP] = (count(0,1), (count(0,1), Mem[var_consP]) + (1 + 0));
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_consP]));
  Mem[var_consP] = (count(0,1), tmp);
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_consP]));
  Mem[var_consP] = (count(0,1), tmp);
count(1, 0);
  var_consP = (var_consP - (8 + 0));
  goto Label_join_266_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 266\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 267\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 268\n");
  writeVars(); goto programEnd;
}
  goto Label_join_269_12;

Label_join_266_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 266\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 267\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 268\n");
  writeVars(); goto programEnd;
}
  goto Label_join_269_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 269\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_269_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 269\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_274_34;
  goto Label__hash;
  Return_274_34:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_275_11;

Label_split_275_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_277_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 277\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_280_11;

Label_join_277_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 277\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_280_11;

Label_split_280_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_282_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 282\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consA = (var_consA - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
count(1, 0);
  Mem[var_consP] = (count(0,1), (count(0,1), Mem[var_consP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_consP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_consP]) + 0));
  goto Label_consEnd;

Label_join_282_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 282\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consA = (var_consA - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
count(1, 0);
  Mem[var_consP] = (count(0,1), (count(0,1), Mem[var_consP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_consP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_consP]) + 0));
  goto Label_consEnd;

Label_consFail:
count(1, 0);
  var_failed = (var_failed + (1 + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 292\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_294_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 294\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_295_10;

Label_join_294_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 294\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_295_10;

Label_split_295_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_297_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 297\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_299_10;

Label_join_297_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 297\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_299_10;

Label_split_299_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 304\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_hashT = (var_hashT ^ (var_consA << 7));
count(1, 0);
  var_hashT = (var_hashT + (var_consA >> 1));
count(1, 0);
  var_hashT = (var_hashT ^ (var_consD << 5));
count(1, 0);
  var_hashT = (var_hashT + (var_consD >> 3));
count(1, 0);
  var_hashV = (var_hashV + (var_hashT & var_mask));
count(1, 0);
  var_hashV = (var_hashV + (var_hashT & var_mask));
count(1, 0);
  var_hashV = (var_hashV + (var_hashT & var_mask));
count(1, 0);
  var_hashV = (var_hashV + (var_H + 0));
  goto *stack[--stackPointer];

/*  inverse blocks */

Label__join_34_7:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~32\n");
  writeVars(); goto programEnd;
}

printf("max refs = %d\n",A);
  count(2,0);
   stack[stackPointer++] = &&Return_29_35;
  goto Label__abb;
  Return_29_35:
  count(2,0);
   stack[stackPointer++] = &&Return_27_36;
  goto Label__build;
  Return_27_36:
  count(2,0);
   stack[stackPointer++] = &&Return_26_37;
  goto Label__initialise;
  Return_26_37:
count(1, 0);
  var_stackP = (var_stackP - (64 + 0));
count(1, 0);
  var_stackP = (var_stackP - (var_endH + 0));
count(1, 0);
  var_segSize = (var_segSize - (var_b1 << 2));
count(1, 0);
  var_segSize = (var_segSize - (var_b1 << 2));
count(1, 0);
  var_segSize = (var_segSize - (var_b1 << 2));
count(1, 0);
  var_mask = (var_mask + (4 + 0));
count(1, 0);
  var_mask = (var_mask - (4 << 15));
count(1, 0);
  var_lastH = (var_lastH - (var_endH - 12));
count(1, 0);
  var_endH = (var_endH - (var_hsizeB + var_H));
count(1, 0);
  var_H = (var_H - (4800 + 0));
count(1, 0);
  var_hsizeB = (var_hsizeB - (var_hsize << 2));
count(1, 0);
  var_hsizeB = (var_hsizeB - (var_hsize << 2));
count(1, 0);
  var_hsizeB = (var_hsizeB - (var_hsize << 2));
count(1, 0);
  var_hsize = (var_hsize - (var_b1 + 0));
count(1, 0);
  var_hsize = (var_hsize - (1 << 15));
count(1, 0);
  var_b1 = (var_b1 - (var_b - 1));
count(1, 0);
  var_b = (var_b - (8 + 0));
count(1, 0);
  var_hashT = (var_hashT - (var_hashA + 0));
count(1, 0);
  var_hashC = (var_hashC - (593041 + 0));
count(1, 0);
  var_hashB = (var_hashB - (827927 + 0));
count(1, 0);
  var_hashA = (var_hashA - (366001 + 0));

A = 0;

  goto *stack[--stackPointer];

Label__used1:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 35\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_34_7;

Label__split_35_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 35\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_34_7;

Label__join_37_7:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_35_10;

Label__dump1:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 39\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_37_7;

Label__split_39_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 39\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_37_7;

Label__main:
fprintf(stderr,"%d,", var_y);
  goto Label__split_39_10;

Label__initialise:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_47_38;
  goto Label__cons;
  Return_47_38:
count(1, 0);
  var_consD = (var_consD - (2 + 0));
count(1, 0);
  var_consA = (var_consA - (2 + 0));
  goto *stack[--stackPointer];

Label__build:
  tmp = var_consD;
  var_consD = (var_A);
  var_A = (tmp);
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_82_39;
  goto Label__cons;
  Return_82_39:
count(1, 0);
  var_consA = (var_consA - (3 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_79_40;
  goto Label__cons;
  Return_79_40:
count(1, 0);
  var_consA = (var_consA - (5 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_76_41;
  goto Label__cons;
  Return_76_41:
count(1, 0);
  var_consA = (var_consA - (7 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_73_42;
  goto Label__cons;
  Return_73_42:
count(1, 0);
  var_consA = (var_consA - (9 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_70_43;
  goto Label__cons;
  Return_70_43:
count(1, 0);
  var_consA = (var_consA - (11 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_67_44;
  goto Label__cons;
  Return_67_44:
count(1, 0);
  var_consA = (var_consA - (13 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_64_45;
  goto Label__cons;
  Return_64_45:
count(1, 0);
  var_consA = (var_consA - (15 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_61_46;
  goto Label__cons;
  Return_61_46:
count(1, 0);
  var_consA = (var_consA - (17 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_58_47;
  goto Label__cons;
  Return_58_47:
count(1, 0);
  var_consA = (var_consA - (19 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_55_48;
  goto Label__cons;
  Return_55_48:
count(1, 0);
  var_consA = (var_consA - (21 + 0));
count(1, 0);
  var_consD = (var_consD - (2 + 0));
  goto *stack[--stackPointer];

Label__abb_entry_1:
  goto *stack[--stackPointer];

Label__abb:
  goto Label__abb_exit_1;

Label__x_yabb1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
  goto Label__abb_entry_1;

Label__split_97_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
  goto Label__abb_entry_1;

Label__x_yabb2:
  if (count(1,0), !(var_t1x_y != 0)){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_y);
  var_t1x_y = (tmp);
  tmp = var_t2x_y;
  var_t2x_y = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_y;
  var_t1x_y = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_99_49;
  goto Label_cons;
  Return_99_49:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_97_7;

Label__split_103_12:
  if (count(1,0), var_t1x_y != 0){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_y);
  var_t1x_y = (tmp);
  tmp = var_t2x_y;
  var_t2x_y = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_y;
  var_t1x_y = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_99_50;
  goto Label_cons;
  Return_99_50:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_97_7;

Label__x_yabb3:
  if (count(1,0), !(var_t2x_y == 0)){
    fprintf(stderr,"\nJoin failure at line 105\n");
  writeVars(); goto programEnd;
}
  tmp = var_y;
  var_y = (var_t2x_y);
  var_t2x_y = (tmp);
  goto Label__split_103_12;

Label__join_106_9:
  if (count(1,0), var_t2x_y == 0){
    fprintf(stderr,"\nJoin failure at line 105\n");
  writeVars(); goto programEnd;
}
  tmp = var_y;
  var_y = (var_t2x_y);
  var_t2x_y = (tmp);
  goto Label__split_103_12;

Label__join_112_9:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_110_51;
  goto Label__cons;
  Return_110_51:
  tmp = var_t2x_y;
  var_t2x_y = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_y;
  var_t1x_y = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_t1x_y);
  var_t1x_y = (tmp);
  if (count(1,0), var_t1x_y != 0) goto Label__x_yabb2; else goto Label__join_106_9;

Label__join_113_9:
  if (count(1,0), var_A == 0) goto Label__x_yabb3; else goto Label__join_112_9;

Label__abb_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 114\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_yabb1; else goto Label__join_113_9;

Label__join_117_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 114\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_yabb1; else goto Label__join_113_9;

Label__inv_x_y_y_xabb8:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 119\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__abb_exit_2; else goto Label__join_117_12;

Label__split_119_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 119\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__abb_exit_2; else goto Label__join_117_12;

Label__inv_x_y_y_xabb10:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 120\n");
  writeVars(); goto programEnd;
}
  goto Label__split_119_7;

Label__split_120_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 120\n");
  writeVars(); goto programEnd;
}
  goto Label__split_119_7;

Label__x_yabb26:
  if (count(1,0), !((var_inv_t_abb8x_y_y_x & 3))){
    fprintf(stderr,"\nJoin failure at line 125\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_abb9x_y_y_x;
  var_inv_t_abb9x_y_y_x = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_122_52;
  goto Label_cons;
  Return_122_52:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_120_8;

Label__split_125_23:
  if (count(1,0), (var_inv_t_abb8x_y_y_x & 3)){
    fprintf(stderr,"\nJoin failure at line 125\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_abb9x_y_y_x;
  var_inv_t_abb9x_y_y_x = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_122_53;
  goto Label_cons;
  Return_122_53:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_120_8;

Label__x_yabb27:
  if (count(1,0), !(var_t26x_y != 0)){
    fprintf(stderr,"\nJoin failure at line 131\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t26x_y);
  var_t26x_y = (tmp);
  tmp = var_t27x_y;
  var_t27x_y = (var_consD);
  var_consD = (tmp);
  tmp = var_t26x_y;
  var_t26x_y = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_127_54;
  goto Label_cons;
  Return_127_54:
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consP);
  var_consP = (tmp);
  goto Label__split_125_23;

Label__split_131_13:
  if (count(1,0), var_t26x_y != 0){
    fprintf(stderr,"\nJoin failure at line 131\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t26x_y);
  var_t26x_y = (tmp);
  tmp = var_t27x_y;
  var_t27x_y = (var_consD);
  var_consD = (tmp);
  tmp = var_t26x_y;
  var_t26x_y = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_127_55;
  goto Label_cons;
  Return_127_55:
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consP);
  var_consP = (tmp);
  goto Label__split_125_23;

Label__x_yabb28:
  if (count(1,0), !(var_t27x_y == 0)){
    fprintf(stderr,"\nJoin failure at line 133\n");
  writeVars(); goto programEnd;
}
  tmp = var_y;
  var_y = (var_t27x_y);
  var_t27x_y = (tmp);
  goto Label__split_131_13;

Label__join_134_10:
  if (count(1,0), var_t27x_y == 0){
    fprintf(stderr,"\nJoin failure at line 133\n");
  writeVars(); goto programEnd;
}
  tmp = var_y;
  var_y = (var_t27x_y);
  var_t27x_y = (tmp);
  goto Label__split_131_13;

Label__join_140_10:
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_138_56;
  goto Label__cons;
  Return_138_56:
  tmp = var_t27x_y;
  var_t27x_y = (var_consD);
  var_consD = (tmp);
  tmp = var_t26x_y;
  var_t26x_y = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_t26x_y);
  var_t26x_y = (tmp);
  if (count(1,0), var_t26x_y != 0) goto Label__x_yabb27; else goto Label__join_134_10;

Label__join_141_10:
  if (count(1,0), var_inv_t_abb8x_y_y_x == 0) goto Label__x_yabb28; else goto Label__join_140_10;

Label__inv_x_y_y_xabb9:
  if (count(1,0), !(var_inv_t_abb8x_y_y_x != 0)){
    fprintf(stderr,"\nJoin failure at line 142\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_abb8x_y_y_x & 3)) goto Label__x_yabb26; else goto Label__join_141_10;

Label__join_143_18:
  if (count(1,0), var_inv_t_abb8x_y_y_x != 0){
    fprintf(stderr,"\nJoin failure at line 142\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_abb8x_y_y_x & 3)) goto Label__x_yabb26; else goto Label__join_141_10;

Label__inv_y_xabb18:
  if (count(1,0), !((var_inv_t_abb9x_y_y_x & 3))){
    fprintf(stderr,"\nJoin failure at line 144\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_abb9x_y_y_x == 0) goto Label__inv_x_y_y_xabb10; else goto Label__join_143_18;

Label__split_144_23:
  if (count(1,0), (var_inv_t_abb9x_y_y_x & 3)){
    fprintf(stderr,"\nJoin failure at line 144\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_abb9x_y_y_x == 0) goto Label__inv_x_y_y_xabb10; else goto Label__join_143_18;

Label__inv_y_xabb20:
  if (count(1,0), !(var_inv_t_abb9x_y_y_x == 0)){
    fprintf(stderr,"\nJoin failure at line 145\n");
  writeVars(); goto programEnd;
}
  goto Label__split_144_23;

Label__split_145_24:
  if (count(1,0), var_inv_t_abb9x_y_y_x == 0){
    fprintf(stderr,"\nJoin failure at line 145\n");
  writeVars(); goto programEnd;
}
  goto Label__split_144_23;

Label__inv_y_xabb19:
  if (count(1,0), !(var_inv_t_abb18y_x != 0)){
    fprintf(stderr,"\nJoin failure at line 151\n");
  writeVars(); goto programEnd;
}
  tmp = var_y;
  var_y = (var_inv_t_abb18y_x);
  var_inv_t_abb18y_x = (tmp);
  tmp = var_inv_t_abb19y_x;
  var_inv_t_abb19y_x = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_abb18y_x;
  var_inv_t_abb18y_x = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_147_57;
  goto Label_cons;
  Return_147_57:
  tmp = var_inv_t_abb9x_y_y_x;
  var_inv_t_abb9x_y_y_x = (var_consP);
  var_consP = (tmp);
  goto Label__split_145_24;

Label__join_152_14:
  if (count(1,0), var_inv_t_abb18y_x != 0){
    fprintf(stderr,"\nJoin failure at line 151\n");
  writeVars(); goto programEnd;
}
  tmp = var_y;
  var_y = (var_inv_t_abb18y_x);
  var_inv_t_abb18y_x = (tmp);
  tmp = var_inv_t_abb19y_x;
  var_inv_t_abb19y_x = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_abb18y_x;
  var_inv_t_abb18y_x = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_147_58;
  goto Label_cons;
  Return_147_58:
  tmp = var_inv_t_abb9x_y_y_x;
  var_inv_t_abb9x_y_y_x = (var_consP);
  var_consP = (tmp);
  goto Label__split_145_24;

Label__abb22:
  if (count(1,0), !(var_inv_t_abb19y_x != 0)){
    fprintf(stderr,"\nJoin failure at line 153\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_abb19y_x == 0) goto Label__inv_y_xabb20; else goto Label__join_152_14;

Label__split_153_21:
  if (count(1,0), var_inv_t_abb19y_x != 0){
    fprintf(stderr,"\nJoin failure at line 153\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_abb19y_x == 0) goto Label__inv_y_xabb20; else goto Label__join_152_14;

Label__join_158_7:
  tmp = var_inv_t_abb19y_x;
  var_inv_t_abb19y_x = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_x;
  var_x = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_155_59;
  goto Label__copy;
  Return_155_59:
  tmp = var_x;
  var_x = (var_copyP);
  var_copyP = (tmp);
  goto Label__split_153_21;

Label__join_159_14:
  if (count(1,0), var_inv_t_abb19y_x != var_x) goto Label__abb22; else goto Label__join_158_7;

Label__abb21:
  if (count(1,0), !(var_inv_t_abb18y_x != 0)){
    fprintf(stderr,"\nJoin failure at line 160\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_abb18y_x != 0) goto Label__inv_y_xabb19; else goto Label__join_159_14;

Label__split_160_21:
  if (count(1,0), var_inv_t_abb18y_x != 0){
    fprintf(stderr,"\nJoin failure at line 160\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_abb18y_x != 0) goto Label__inv_y_xabb19; else goto Label__join_159_14;

Label__join_165_7:
  tmp = var_inv_t_abb18y_x;
  var_inv_t_abb18y_x = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_y;
  var_y = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_162_60;
  goto Label__copy;
  Return_162_60:
  tmp = var_y;
  var_y = (var_copyP);
  var_copyP = (tmp);
  goto Label__split_160_21;

Label__join_170_14:
  tmp = var_inv_t_abb9x_y_y_x;
  var_inv_t_abb9x_y_y_x = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_168_61;
  goto Label__cons;
  Return_168_61:
  tmp = var_inv_t_abb19y_x;
  var_inv_t_abb19y_x = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_abb18y_x;
  var_inv_t_abb18y_x = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_inv_t_abb18y_x != var_y) goto Label__abb21; else goto Label__join_165_7;

Label__join_171_17:
  if (count(1,0), (var_inv_t_abb9x_y_y_x & 3)) goto Label__inv_y_xabb18; else goto Label__join_170_14;

Label__inv_x_yabb11:
  if (count(1,0), !((var_inv_t_abb8x_y_y_x & 3))){
    fprintf(stderr,"\nJoin failure at line 172\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_abb8x_y_y_x != 0) goto Label__inv_x_y_y_xabb9; else goto Label__join_171_17;

Label__split_172_23:
  if (count(1,0), (var_inv_t_abb8x_y_y_x & 3)){
    fprintf(stderr,"\nJoin failure at line 172\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_abb8x_y_y_x != 0) goto Label__inv_x_y_y_xabb9; else goto Label__join_171_17;

Label__inv_x_yabb13:
  if (count(1,0), !(var_inv_t_abb8x_y_y_x == 0)){
    fprintf(stderr,"\nJoin failure at line 173\n");
  writeVars(); goto programEnd;
}
  goto Label__split_172_23;

Label__split_173_24:
  if (count(1,0), var_inv_t_abb8x_y_y_x == 0){
    fprintf(stderr,"\nJoin failure at line 173\n");
  writeVars(); goto programEnd;
}
  goto Label__split_172_23;

Label__inv_x_yabb12:
  if (count(1,0), !(var_inv_t_abb11x_y != 0)){
    fprintf(stderr,"\nJoin failure at line 179\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_abb11x_y);
  var_inv_t_abb11x_y = (tmp);
  tmp = var_inv_t_abb12x_y;
  var_inv_t_abb12x_y = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_abb11x_y;
  var_inv_t_abb11x_y = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_175_62;
  goto Label_cons;
  Return_175_62:
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consP);
  var_consP = (tmp);
  goto Label__split_173_24;

Label__join_180_14:
  if (count(1,0), var_inv_t_abb11x_y != 0){
    fprintf(stderr,"\nJoin failure at line 179\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_abb11x_y);
  var_inv_t_abb11x_y = (tmp);
  tmp = var_inv_t_abb12x_y;
  var_inv_t_abb12x_y = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_abb11x_y;
  var_inv_t_abb11x_y = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_175_63;
  goto Label_cons;
  Return_175_63:
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consP);
  var_consP = (tmp);
  goto Label__split_173_24;

Label__join_182_14:
  tmp = var_y;
  var_y = (var_inv_t_abb12x_y);
  var_inv_t_abb12x_y = (tmp);
  if (count(1,0), var_inv_t_abb12x_y == 0) goto Label__inv_x_yabb13; else goto Label__join_180_14;

Label__join_188_14:
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_186_64;
  goto Label__cons;
  Return_186_64:
  tmp = var_inv_t_abb12x_y;
  var_inv_t_abb12x_y = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_abb11x_y;
  var_inv_t_abb11x_y = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_abb11x_y);
  var_inv_t_abb11x_y = (tmp);
  if (count(1,0), var_inv_t_abb11x_y != 0) goto Label__inv_x_yabb12; else goto Label__join_182_14;

Label__join_193_17:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_191_65;
  goto Label__cons;
  Return_191_65:
  tmp = var_inv_t_abb9x_y_y_x;
  var_inv_t_abb9x_y_y_x = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_abb8x_y_y_x;
  var_inv_t_abb8x_y_y_x = (var_consA);
  var_consA = (tmp);
  if (count(1,0), (var_inv_t_abb8x_y_y_x & 3)) goto Label__inv_x_yabb11; else goto Label__join_188_14;

Label__abb_exit_1:
  if (count(1,0), (var_A & 3)) goto Label__inv_x_y_y_xabb8; else goto Label__join_193_17;

Label__abb_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~198\n");
  writeVars(); goto programEnd;
}
  goto Label__abb_entry_2;

Label__copySymbol:
  if (count(1,0), !((var_copyP & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 204\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~203\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_204_12:
  if (count(1,0), (var_copyP & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 204\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~203\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_209_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_204_12;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~211\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), (var_copyP & 3) == 0) goto Label__copySymbol; else goto Label__join_209_12;

Label__fields1:
  if (count(1,0), !((var_fieldsA & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsA = (var_fieldsA - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~216\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_219_14:
  if (count(1,0), (var_fieldsA & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsA = (var_fieldsA - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~216\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_221_9:
count(1, 0);
  Mem[var_fieldsA] = (count(0,1), (count(0,1), Mem[var_fieldsA]) - (1 + 0));
  goto Label__split_219_14;

Label__fields2:
  if (count(1,0), !((var_fieldsD & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 224\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsD = (var_fieldsD - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label__fields1; else goto Label__join_221_9;

Label__split_224_14:
  if (count(1,0), (var_fieldsD & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 224\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsD = (var_fieldsD - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label__fields1; else goto Label__join_221_9;

Label__join_226_9:
count(1, 0);
  Mem[var_fieldsD] = (count(0,1), (count(0,1), Mem[var_fieldsD]) - (1 + 0));
  goto Label__split_224_14;

Label__fields:
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~228\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (8 + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label__fields2; else goto Label__join_226_9;

Label__join_242_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_239_66;
  goto Label__hash;
  Return_239_66:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~238\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~237\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~236\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~235\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~234\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 243\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_242_16;

Label__split_243_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 243\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_242_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 245\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_243_15;

Label__split_245_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 245\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_243_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 247\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_245_19;

Label__split_247_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 247\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_245_19;

Label__join_249_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_247_19;

Label__join_251_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_249_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 253\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_251_10;

Label__join_254_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 253\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_251_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 256\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_254_17;

Label__split_256_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 256\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_254_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 257\n");
  writeVars(); goto programEnd;
}
  goto Label__split_256_15;

Label__split_257_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 257\n");
  writeVars(); goto programEnd;
}
  goto Label__split_256_15;

Label__join_266_9:
count(1, 0);
  var_consP = (var_consP + (8 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_consP]));
  Mem[var_consP] = (count(0,1), tmp);
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_consP]));
  Mem[var_consP] = (count(0,1), tmp);
count(1, 0);
  var_consP = (var_consP - (4 + 0));
count(1, 0);
  Mem[var_consP] = (count(0,1), (count(0,1), Mem[var_consP]) - (1 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_259_67;
  goto Label_hash;
  Return_259_67:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_257_15;

Label__join_269_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~268\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~267\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_266_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_269_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 275\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_274_68;
  goto Label_hash;
  Return_274_68:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_275_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 275\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_274_69;
  goto Label_hash;
  Return_274_69:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_277_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_275_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 280\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_277_13;

Label__split_280_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 280\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_277_13;

Label__join_282_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_280_11;

Label__consEnd:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_consP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  Mem[var_consP] = (count(0,1), (count(0,1), Mem[var_consP]) - (1 + 0));
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consA = (var_consA + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_282_13;

Label__join_294_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~292\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 295\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_294_6;

Label__split_295_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 295\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_294_6;

Label__join_297_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_295_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 299\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_297_6;

Label__split_299_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 299\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_297_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_299_10;

Label__hash:
count(1, 0);
  var_hashV = (var_hashV - (var_H + 0));
count(1, 0);
  var_hashV = (var_hashV - (var_hashT & var_mask));
count(1, 0);
  var_hashV = (var_hashV - (var_hashT & var_mask));
count(1, 0);
  var_hashV = (var_hashV - (var_hashT & var_mask));
count(1, 0);
  var_hashT = (var_hashT - (var_consD >> 3));
count(1, 0);
  var_hashT = (var_hashT ^ (var_consD << 5));
count(1, 0);
  var_hashT = (var_hashT - (var_consA >> 1));
count(1, 0);
  var_hashT = (var_hashT ^ (var_consA << 7));
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~304\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}