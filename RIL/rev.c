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
  uint var_ttt = 0;
  uint var_copyQ = 0;
  uint var_copyP = 0;
  uint var_x = 0;
  uint var_ys = 0;
  uint var_xs = 0;
  uint var_nilnil = 0;
  uint var_y = 0;
  uint var_z = 0;
  uint var_consD = 0;
  uint var_consA = 0;
  uint var_consP = 0;
  uint var_A = 0;
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
    printf("var_ttt = \%u\n",var_ttt);
    printf("var_copyQ = \%u\n",var_copyQ);
    printf("var_copyP = \%u\n",var_copyP);
    printf("var_x = \%u\n",var_x);
    printf("var_ys = \%u\n",var_ys);
    printf("var_xs = \%u\n",var_xs);
    printf("var_nilnil = \%u\n",var_nilnil);
    printf("var_y = \%u\n",var_y);
    printf("var_z = \%u\n",var_z);
    printf("var_consD = \%u\n",var_consD);
    printf("var_consA = \%u\n",var_consA);
    printf("var_consP = \%u\n",var_consP);
    printf("var_A = \%u\n",var_A);
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
   stack[stackPointer++] = &&Return_27_1;
  goto Label_initialise;
  Return_27_1:
  count(2,0);
   stack[stackPointer++] = &&Return_28_2;
  goto Label_build;
  Return_28_2:
  count(2,0);
   stack[stackPointer++] = &&Return_31_3;
  goto Label_reverse;
  Return_31_3:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_33_4;
  goto Label__cons;
  Return_33_4:
fprintf(stderr,"res: A: %d D: %d\n", var_consA, var_consD);
  tmp = var_consA;
  var_consA = (var_A);
  var_A = (tmp);
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_37_5;
  goto Label__cons;
  Return_37_5:
fprintf(stderr,"res: A: %d D: %d\n", var_consA, var_consD);

printf("max refs = %d\n",A);
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 41\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_43_7;

Label_dump1:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 43\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_44_10;

Label_join_43_7:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 43\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_44_10;

Label_split_44_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_46_7;

Label_used1:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 46\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_48_10;

Label_join_46_7:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 46\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_48_10;

Label_split_48_10:
fprintf(stderr,"%d,", var_y);
  goto *stack[--stackPointer];

Label_initialise:
count(1, 0);
  var_consA = (var_consA + (2 + 0));
count(1, 0);
  var_consD = (var_consD + (2 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_56_6;
  goto Label_cons;
  Return_56_6:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  goto *stack[--stackPointer];

Label_build:
count(1, 0);
  var_consD = (var_consD + (2 + 0));
count(1, 0);
  var_consA = (var_consA + (9 + 0));
fprintf(stderr,"%d\n", var_consA);
  count(2,0);
   stack[stackPointer++] = &&Return_65_7;
  goto Label_cons;
  Return_65_7:
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
count(1, 0);
  var_consA = (var_consA + (7 + 0));
fprintf(stderr,"%d\n", var_consA);
  count(2,0);
   stack[stackPointer++] = &&Return_69_8;
  goto Label_cons;
  Return_69_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto *stack[--stackPointer];

Label_reverse:
  goto Label_reverse_entry_1;

Label_reverse_exit_1:
  goto *stack[--stackPointer];

Label_reverse_entry_1:
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label_reverse_entry_2; else goto Label_join_89_21;

Label_C2__ys_rev_xs_C2__1:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 89\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_C2_3; else goto Label_split_90_7;

Label_join_89_21:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 89\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_C2_3; else goto Label_split_90_7;

Label_split_90_7:
  if (count(1,0), var_A == 0) goto Label_inv_xs_C2_5; else goto Label_split_91_8;

Label_split_91_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_93_9;
  goto Label__cons;
  Return_93_9:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label_inv_xs_C2_4; else goto Label_split_100_8;

Label_split_100_8:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_103_13;

Label_inv_xs_C2_5:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_inv_5reverse6; else goto Label_split_104_8;

Label_join_103_13:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_inv_5reverse6; else goto Label_split_104_8;

Label_split_104_8:
count(1, 0);
  var_A = (var_A + (2 + 0));
  goto Label_join_106_15;

Label_inv_5reverse6:
  if (count(1,0), !(var_A != 2)){
    fprintf(stderr,"\nJoin failure at line 106\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_108_13;

Label_join_106_15:
  if (count(1,0), var_A != 2){
    fprintf(stderr,"\nJoin failure at line 106\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_108_13;

Label_inv_xs_C2_4:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 108\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_111_10;
  goto Label_cons;
  Return_111_10:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_113_13;

Label_join_108_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 108\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_111_11;
  goto Label_cons;
  Return_111_11:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_113_13;

Label_inv_xs_C2_3:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 113\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_C2__ys7; else goto Label_split_116_7;

Label_join_113_13:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 113\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_C2__ys7; else goto Label_split_116_7;

Label_split_116_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_118_12;
  goto Label__cons;
  Return_118_12:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  if (count(1,0), var_A != 2) goto Label_reverse10; else goto Label_split_122_8;

Label_split_122_8:
count(1, 0);
  var_A = (var_A - (2 + 0));
  goto Label_join_124_11;

Label_reverse10:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_C2__ys8; else goto Label_split_125_8;

Label_join_124_11:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_C2__ys8; else goto Label_split_125_8;

Label_split_125_8:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A == 0) goto Label_C2__ys9; else goto Label_split_129_8;

Label_split_129_8:
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_131_9;

Label_C2__ys8:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 131\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_inv_5reverse11; else goto Label_split_133_8;

Label_join_131_9:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 131\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_inv_5reverse11; else goto Label_split_133_8;

Label_split_133_8:
count(1, 0);
  var_A = (var_A + (2 + 0));
  goto Label_join_135_16;

Label_inv_5reverse11:
  if (count(1,0), !(var_A != 2)){
    fprintf(stderr,"\nJoin failure at line 135\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_141_13;
  goto Label_cons;
  Return_141_13:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_143_9;

Label_join_135_16:
  if (count(1,0), var_A != 2){
    fprintf(stderr,"\nJoin failure at line 135\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_141_14;
  goto Label_cons;
  Return_141_14:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_143_9;

Label_C2__ys9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 143\n");
  writeVars(); goto programEnd;
}
  goto Label_join_144_9;

Label_join_143_9:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 143\n");
  writeVars(); goto programEnd;
}
  goto Label_join_144_9;

Label_C2__ys7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 144\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label_C2__ys_rev_xs_C2__2; else goto Label_split_145_8;

Label_join_144_9:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 144\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label_C2__ys_rev_xs_C2__2; else goto Label_split_145_8;

Label_split_145_8:
  count(2,0);
   stack[stackPointer++] = &&Return_146_15;
  goto Label_rev;
  Return_146_15:
fprintf(stderr,"A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  goto Label_C2__ys_rev_xs_C2__1;

Label_C2__ys_rev_xs_C2__2:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 151\n");
  writeVars(); goto programEnd;
}
  goto Label_join_152_16;

Label_reverse_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 152\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label_reverse_exit_1;

Label_join_152_16:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 152\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label_reverse_exit_1;

Label_reverse_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 161\n");
  writeVars(); goto programEnd;
}
  goto Label_reverse_exit_2;

Label_rev:
  goto Label_rev_entry_1;

Label_rev_exit_1:
  goto *stack[--stackPointer];

Label_rev_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_x_xs_ys7; else goto Label_split_174_7;

Label_split_174_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_176_16;
  goto Label__cons;
  Return_176_16:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  if (count(1,0), (var_A & 3)) goto Label_x_xs10; else goto Label_split_182_7;

Label_split_182_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_184_17;
  goto Label__cons;
  Return_184_17:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label_x_xs11; else goto Label_split_189_8;

Label_split_189_8:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A == 0) goto Label_x_xs12; else goto Label_split_193_8;

Label_split_193_8:
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_195_8;

Label_x_xs11:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 195\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_198_18;
  goto Label_cons;
  Return_198_18:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_200_8;

Label_join_195_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 195\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_198_19;
  goto Label_cons;
  Return_198_19:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_200_8;

Label_x_xs12:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 200\n");
  writeVars(); goto programEnd;
}
  goto Label_join_201_8;

Label_join_200_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 200\n");
  writeVars(); goto programEnd;
}
  goto Label_join_201_8;

Label_x_xs10:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 201\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  if (count(1,0), var_A != 0) goto Label_x_xs_ys8; else goto Label_split_203_8;

Label_join_201_8:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 201\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  if (count(1,0), var_A != 0) goto Label_x_xs_ys8; else goto Label_split_203_8;

Label_split_203_8:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A == 0) goto Label_x_xs_ys9; else goto Label_split_207_8;

Label_split_207_8:
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_209_10;

Label_x_xs_ys8:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_xs13; else goto Label_split_210_7;

Label_join_209_10:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_xs13; else goto Label_split_210_7;

Label_split_210_7:
  if (count(1,0), var_A == 0) goto Label_inv_x_xs15; else goto Label_split_211_8;

Label_split_211_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_213_20;
  goto Label__cons;
  Return_213_20:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label_inv_x_xs14; else goto Label_join_217_12;

Label_inv_x_xs15:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 217\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_220_12;

Label_join_217_12:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 217\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_220_12;

Label_inv_x_xs14:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 220\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_223_21;
  goto Label_cons;
  Return_223_21:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_225_12;

Label_join_220_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 220\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_223_22;
  goto Label_cons;
  Return_223_22:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_225_12;

Label_inv_x_xs13:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 225\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_227_23;
  goto Label_cons;
  Return_227_23:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_229_10;

Label_join_225_12:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 225\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_227_24;
  goto Label_cons;
  Return_227_24:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_229_10;

Label_x_xs_ys9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 229\n");
  writeVars(); goto programEnd;
}
  goto Label_join_230_10;

Label_join_229_10:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 229\n");
  writeVars(); goto programEnd;
}
  goto Label_join_230_10;

Label_x_xs_ys7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 230\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_rev_entry_2; else goto Label_join_236_12;

Label_join_230_10:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 230\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_rev_entry_2; else goto Label_join_236_12;

Label_rev_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 236\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_x_ys1; else goto Label_split_240_7;

Label_join_236_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 236\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_x_ys1; else goto Label_split_240_7;

Label_split_240_7:
  if (count(1,0), var_A == 0) goto Label_inv_xs_x_ys3; else goto Label_split_241_8;

Label_split_241_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_243_25;
  goto Label__cons;
  Return_243_25:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label_inv_xs_x_ys2; else goto Label_join_247_14;

Label_inv_xs_x_ys3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 247\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_ys4; else goto Label_split_248_7;

Label_join_247_14:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 247\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_ys4; else goto Label_split_248_7;

Label_split_248_7:
  if (count(1,0), var_A == 0) goto Label_inv_x_ys6; else goto Label_split_249_8;

Label_split_249_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_251_26;
  goto Label__cons;
  Return_251_26:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label_inv_x_ys5; else goto Label_join_255_11;

Label_inv_x_ys6:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 255\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_258_11;

Label_join_255_11:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 255\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_258_11;

Label_inv_x_ys5:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 258\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_261_27;
  goto Label_cons;
  Return_261_27:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_263_11;

Label_join_258_11:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 258\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_261_28;
  goto Label_cons;
  Return_261_28:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_263_11;

Label_inv_x_ys4:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 263\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_265_14;

Label_join_263_11:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 263\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_265_14;

Label_inv_xs_x_ys2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 265\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_268_29;
  goto Label_cons;
  Return_268_29:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_270_14;

Label_join_265_14:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 265\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_268_30;
  goto Label_cons;
  Return_268_30:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_270_14;

Label_inv_xs_x_ys1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 270\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_1;

Label_join_270_14:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 270\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_1;

Label_rev_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 275\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_2;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 278\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_copyP < var_H) goto Label_copySymbol; else goto Label_split_279_11;

Label_split_279_11:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_284_12;

Label_copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 284\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 286\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_284_12:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 284\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 286\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 290\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 291\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 292\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 293\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 294\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_295_31;
  goto Label_hash;
  Return_295_31:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_298_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 298\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_299_15;

Label_join_298_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 298\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_299_15;

Label_split_299_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_301_19;

Label_split_301_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_303_19;

Label_split_303_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_305_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 305\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_307_10;

Label_join_305_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 305\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_307_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 307\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_310_17;

Label_join_307_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 307\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_310_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 310\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_312_15;

Label_join_310_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 310\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_312_15;

Label_split_312_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_313_15;

Label_split_313_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_315_32;
  goto Label__hash;
  Return_315_32:
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
  goto Label_join_322_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 322\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 323\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 324\n");
  writeVars(); goto programEnd;
}
  goto Label_join_325_12;

Label_join_322_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 322\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 323\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 324\n");
  writeVars(); goto programEnd;
}
  goto Label_join_325_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 325\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_325_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 325\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_330_33;
  goto Label__hash;
  Return_330_33:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_331_11;

Label_split_331_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_333_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 333\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_336_11;

Label_join_333_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 333\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_336_11;

Label_split_336_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_338_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 338\n");
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

Label_join_338_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 338\n");
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
    fprintf(stderr,"\nAssertion failure at line 348\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_350_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 350\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_351_10;

Label_join_350_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 350\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_351_10;

Label_split_351_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_353_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 353\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_355_10;

Label_join_353_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 353\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_355_10;

Label_split_355_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 360\n");
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

Label__join_43_7:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~41\n");
  writeVars(); goto programEnd;
}

printf("max refs = %d\n",A);
fprintf(stderr,"res: A: %d D: %d\n", var_consA, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_37_34;
  goto Label_cons;
  Return_37_34:
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
  tmp = var_consA;
  var_consA = (var_A);
  var_A = (tmp);
fprintf(stderr,"res: A: %d D: %d\n", var_consA, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_33_35;
  goto Label_cons;
  Return_33_35:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_31_36;
  goto Label__reverse;
  Return_31_36:
  count(2,0);
   stack[stackPointer++] = &&Return_28_37;
  goto Label__build;
  Return_28_37:
  count(2,0);
   stack[stackPointer++] = &&Return_27_38;
  goto Label__initialise;
  Return_27_38:
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
    fprintf(stderr,"\nJoin failure at line 44\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_43_7;

Label__split_44_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 44\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_43_7;

Label__join_46_7:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_44_10;

Label__dump1:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 48\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_46_7;

Label__split_48_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 48\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_46_7;

Label__main:
fprintf(stderr,"%d,", var_y);
  goto Label__split_48_10;

Label__initialise:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_56_39;
  goto Label__cons;
  Return_56_39:
count(1, 0);
  var_consD = (var_consD - (2 + 0));
count(1, 0);
  var_consA = (var_consA - (2 + 0));
  goto *stack[--stackPointer];

Label__build:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_69_40;
  goto Label__cons;
  Return_69_40:
fprintf(stderr,"%d\n", var_consA);
count(1, 0);
  var_consA = (var_consA - (7 + 0));
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_65_41;
  goto Label__cons;
  Return_65_41:
fprintf(stderr,"%d\n", var_consA);
count(1, 0);
  var_consA = (var_consA - (9 + 0));
count(1, 0);
  var_consD = (var_consD - (2 + 0));
  goto *stack[--stackPointer];

Label__reverse_entry_1:
  goto *stack[--stackPointer];

Label__reverse:
  goto Label__reverse_exit_1;

Label__reverse_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 85\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  goto Label__reverse_entry_1;

Label__join_89_21:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 85\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  goto Label__reverse_entry_1;

Label__inv_xs_C2_3:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 90\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__C2__ys_rev_xs_C2__1; else goto Label__join_89_21;

Label__split_90_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 90\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__C2__ys_rev_xs_C2__1; else goto Label__join_89_21;

Label__inv_xs_C2_5:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 91\n");
  writeVars(); goto programEnd;
}
  goto Label__split_90_7;

Label__split_91_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 91\n");
  writeVars(); goto programEnd;
}
  goto Label__split_90_7;

Label__inv_xs_C2_4:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 100\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_93_42;
  goto Label_cons;
  Return_93_42:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_91_8;

Label__split_100_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 100\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_93_43;
  goto Label_cons;
  Return_93_43:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_91_8;

Label__join_103_13:
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  goto Label__split_100_8;

Label__inv_5reverse6:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 104\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label__inv_xs_C2_5; else goto Label__join_103_13;

Label__split_104_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 104\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label__inv_xs_C2_5; else goto Label__join_103_13;

Label__join_106_15:
count(1, 0);
  var_A = (var_A - (2 + 0));
  goto Label__split_104_8;

Label__join_108_13:
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  if (count(1,0), var_A != 2) goto Label__inv_5reverse6; else goto Label__join_106_15;

Label__join_113_13:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_111_44;
  goto Label__cons;
  Return_111_44:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__inv_xs_C2_4; else goto Label__join_108_13;

Label__C2__ys7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 116\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_C2_3; else goto Label__join_113_13;

Label__split_116_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 116\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_C2_3; else goto Label__join_113_13;

Label__reverse10:
  if (count(1,0), !(var_A != 2)){
    fprintf(stderr,"\nJoin failure at line 122\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_118_45;
  goto Label_cons;
  Return_118_45:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_116_7;

Label__split_122_8:
  if (count(1,0), var_A != 2){
    fprintf(stderr,"\nJoin failure at line 122\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_118_46;
  goto Label_cons;
  Return_118_46:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_116_7;

Label__join_124_11:
count(1, 0);
  var_A = (var_A + (2 + 0));
  goto Label__split_122_8;

Label__C2__ys8:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 125\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__reverse10; else goto Label__join_124_11;

Label__split_125_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 125\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__reverse10; else goto Label__join_124_11;

Label__C2__ys9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 129\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  goto Label__split_125_8;

Label__split_129_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 129\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  goto Label__split_125_8;

Label__join_131_9:
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_129_8;

Label__inv_5reverse11:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 133\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__C2__ys8; else goto Label__join_131_9;

Label__split_133_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 133\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__C2__ys8; else goto Label__join_131_9;

Label__join_135_16:
count(1, 0);
  var_A = (var_A - (2 + 0));
  goto Label__split_133_8;

Label__join_143_9:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_141_47;
  goto Label__cons;
  Return_141_47:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  if (count(1,0), var_A != 2) goto Label__inv_5reverse11; else goto Label__join_135_16;

Label__join_144_9:
  if (count(1,0), var_A == 0) goto Label__C2__ys9; else goto Label__join_143_9;

Label__C2__ys_rev_xs_C2__2:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 145\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__C2__ys7; else goto Label__join_144_9;

Label__split_145_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 145\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__C2__ys7; else goto Label__join_144_9;

Label__C2__ys_rev_xs_C2__1:
fprintf(stderr,"A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  count(2,0);
   stack[stackPointer++] = &&Return_146_48;
  goto Label__rev;
  Return_146_48:
  goto Label__split_145_8;

Label__join_152_16:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~151\n");
  writeVars(); goto programEnd;
}
  goto Label__C2__ys_rev_xs_C2__2;

Label__reverse_exit_1:
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__reverse_exit_2; else goto Label__join_152_16;

Label__reverse_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~161\n");
  writeVars(); goto programEnd;
}
  goto Label__reverse_entry_2;

Label__rev_entry_1:
  goto *stack[--stackPointer];

Label__rev:
  goto Label__rev_exit_1;

Label__x_xs_ys7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 174\n");
  writeVars(); goto programEnd;
}
  goto Label__rev_entry_1;

Label__split_174_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 174\n");
  writeVars(); goto programEnd;
}
  goto Label__rev_entry_1;

Label__x_xs10:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 182\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_176_49;
  goto Label_cons;
  Return_176_49:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_174_7;

Label__split_182_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 182\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_176_50;
  goto Label_cons;
  Return_176_50:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_174_7;

Label__x_xs11:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 189\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_184_51;
  goto Label_cons;
  Return_184_51:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_182_7;

Label__split_189_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 189\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_184_52;
  goto Label_cons;
  Return_184_52:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_182_7;

Label__x_xs12:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 193\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  goto Label__split_189_8;

Label__split_193_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 193\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  goto Label__split_189_8;

Label__join_195_8:
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_193_8;

Label__join_200_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_198_53;
  goto Label__cons;
  Return_198_53:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__x_xs11; else goto Label__join_195_8;

Label__join_201_8:
  if (count(1,0), var_A == 0) goto Label__x_xs12; else goto Label__join_200_8;

Label__x_xs_ys8:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 203\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  if (count(1,0), (var_A & 3)) goto Label__x_xs10; else goto Label__join_201_8;

Label__split_203_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 203\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  if (count(1,0), (var_A & 3)) goto Label__x_xs10; else goto Label__join_201_8;

Label__x_xs_ys9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 207\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  goto Label__split_203_8;

Label__split_207_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 207\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  goto Label__split_203_8;

Label__join_209_10:
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_207_8;

Label__inv_x_xs13:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 210\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__x_xs_ys8; else goto Label__join_209_10;

Label__split_210_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 210\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__x_xs_ys8; else goto Label__join_209_10;

Label__inv_x_xs15:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
  goto Label__split_210_7;

Label__split_211_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
  goto Label__split_210_7;

Label__inv_x_xs14:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 216\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_213_54;
  goto Label_cons;
  Return_213_54:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_211_8;

Label__join_217_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 216\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_213_55;
  goto Label_cons;
  Return_213_55:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_211_8;

Label__join_220_12:
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A == 0) goto Label__inv_x_xs15; else goto Label__join_217_12;

Label__join_225_12:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_223_56;
  goto Label__cons;
  Return_223_56:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__inv_x_xs14; else goto Label__join_220_12;

Label__join_229_10:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_227_57;
  goto Label__cons;
  Return_227_57:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  if (count(1,0), (var_A & 3)) goto Label__inv_x_xs13; else goto Label__join_225_12;

Label__join_230_10:
  if (count(1,0), var_A == 0) goto Label__x_xs_ys9; else goto Label__join_229_10;

Label__rev_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 231\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xs_ys7; else goto Label__join_230_10;

Label__join_236_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 231\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xs_ys7; else goto Label__join_230_10;

Label__inv_xs_x_ys1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 240\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__rev_exit_2; else goto Label__join_236_12;

Label__split_240_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 240\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__rev_exit_2; else goto Label__join_236_12;

Label__inv_xs_x_ys3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 241\n");
  writeVars(); goto programEnd;
}
  goto Label__split_240_7;

Label__split_241_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 241\n");
  writeVars(); goto programEnd;
}
  goto Label__split_240_7;

Label__inv_xs_x_ys2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 246\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_243_58;
  goto Label_cons;
  Return_243_58:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_241_8;

Label__join_247_14:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 246\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_243_59;
  goto Label_cons;
  Return_243_59:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_241_8;

Label__inv_x_ys4:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 248\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label__inv_xs_x_ys3; else goto Label__join_247_14;

Label__split_248_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 248\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label__inv_xs_x_ys3; else goto Label__join_247_14;

Label__inv_x_ys6:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 249\n");
  writeVars(); goto programEnd;
}
  goto Label__split_248_7;

Label__split_249_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 249\n");
  writeVars(); goto programEnd;
}
  goto Label__split_248_7;

Label__inv_x_ys5:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 254\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_251_60;
  goto Label_cons;
  Return_251_60:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_249_8;

Label__join_255_11:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 254\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_251_61;
  goto Label_cons;
  Return_251_61:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_249_8;

Label__join_258_11:
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A == 0) goto Label__inv_x_ys6; else goto Label__join_255_11;

Label__join_263_11:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_261_62;
  goto Label__cons;
  Return_261_62:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__inv_x_ys5; else goto Label__join_258_11;

Label__join_265_14:
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  if (count(1,0), (var_A & 3)) goto Label__inv_x_ys4; else goto Label__join_263_11;

Label__join_270_14:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_268_63;
  goto Label__cons;
  Return_268_63:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__inv_xs_x_ys2; else goto Label__join_265_14;

Label__rev_exit_1:
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_x_ys1; else goto Label__join_270_14;

Label__rev_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~275\n");
  writeVars(); goto programEnd;
}
  goto Label__rev_entry_2;

Label__copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 279\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~278\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_279_11:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 279\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~278\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_284_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_279_11;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~286\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), var_copyP < var_H) goto Label__copySymbol; else goto Label__join_284_12;

Label__join_298_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_295_64;
  goto Label__hash;
  Return_295_64:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~294\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~293\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~292\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~291\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~290\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 299\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_298_16;

Label__split_299_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 299\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_298_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 301\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_299_15;

Label__split_301_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 301\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_299_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 303\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_301_19;

Label__split_303_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 303\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_301_19;

Label__join_305_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_303_19;

Label__join_307_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_305_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 309\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_307_10;

Label__join_310_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 309\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_307_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 312\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_310_17;

Label__split_312_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 312\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_310_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 313\n");
  writeVars(); goto programEnd;
}
  goto Label__split_312_15;

Label__split_313_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 313\n");
  writeVars(); goto programEnd;
}
  goto Label__split_312_15;

Label__join_322_9:
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
   stack[stackPointer++] = &&Return_315_65;
  goto Label_hash;
  Return_315_65:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_313_15;

Label__join_325_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~324\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~323\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_322_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_325_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 331\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_330_66;
  goto Label_hash;
  Return_330_66:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_331_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 331\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_330_67;
  goto Label_hash;
  Return_330_67:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_333_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_331_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 336\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_333_13;

Label__split_336_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 336\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_333_13;

Label__join_338_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_336_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_338_13;

Label__join_350_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~348\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 351\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_350_6;

Label__split_351_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 351\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_350_6;

Label__join_353_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_351_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 355\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_353_6;

Label__split_355_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 355\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_353_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_355_10;

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
    fprintf(stderr,"\nAssertion failure at line ~360\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}