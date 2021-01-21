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
    printf("var_ttt = \%u\n",var_ttt);
    printf("var_copyQ = \%u\n",var_copyQ);
    printf("var_copyP = \%u\n",var_copyP);
    printf("var_x = \%u\n",var_x);
    printf("var_ys = \%u\n",var_ys);
    printf("var_xs = \%u\n",var_xs);
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

printf("max refs = %d\n",A);
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 35\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_37_7;

Label_dump1:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 37\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_38_10;

Label_join_37_7:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 37\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_38_10;

Label_split_38_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_40_7;

Label_used1:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 40\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_42_10;

Label_join_40_7:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 40\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_42_10;

Label_split_42_10:
fprintf(stderr,"%d,", var_y);
  goto *stack[--stackPointer];

Label_initialise:
count(1, 0);
  var_consA = (var_consA + (2 + 0));
count(1, 0);
  var_consD = (var_consD + (2 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_50_4;
  goto Label_cons;
  Return_50_4:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  goto *stack[--stackPointer];

Label_build:
count(1, 0);
  var_consD = (var_consD + (2 + 0));
count(1, 0);
  var_consA = (var_consA + (7 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_58_5;
  goto Label_cons;
  Return_58_5:
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
  if (count(1,0), var_A != 0) goto Label_reverse_entry_2; else goto Label_join_78_21;

Label_C2__ys_rev_xs_C2__1:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 78\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_C2_3; else goto Label_split_80_7;

Label_join_78_21:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 78\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_C2_3; else goto Label_split_80_7;

Label_split_80_7:
  if (count(1,0), var_A == 0) goto Label_inv_xs_C2_5; else goto Label_split_81_8;

Label_split_81_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_83_6;
  goto Label__cons;
  Return_83_6:
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
  if (count(1,0), var_A != 0) goto Label_inv_xs_C2_4; else goto Label_split_89_8;

Label_split_89_8:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_92_13;

Label_inv_xs_C2_5:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 92\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_inv_5reverse6; else goto Label_split_93_8;

Label_join_92_13:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 92\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_inv_5reverse6; else goto Label_split_93_8;

Label_split_93_8:
count(1, 0);
  var_A = (var_A + (2 + 0));
  goto Label_join_95_15;

Label_inv_5reverse6:
  if (count(1,0), !(var_A != 2)){
    fprintf(stderr,"\nJoin failure at line 95\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_97_13;

Label_join_95_15:
  if (count(1,0), var_A != 2){
    fprintf(stderr,"\nJoin failure at line 95\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_97_13;

Label_inv_xs_C2_4:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_100_7;
  goto Label_cons;
  Return_100_7:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_102_13;

Label_join_97_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_100_8;
  goto Label_cons;
  Return_100_8:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_102_13;

Label_inv_xs_C2_3:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 102\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_C2__ys7; else goto Label_split_105_7;

Label_join_102_13:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 102\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_C2__ys7; else goto Label_split_105_7;

Label_split_105_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_107_9;
  goto Label__cons;
  Return_107_9:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  if (count(1,0), var_A != 2) goto Label_reverse10; else goto Label_split_111_8;

Label_split_111_8:
count(1, 0);
  var_A = (var_A - (2 + 0));
  goto Label_join_113_11;

Label_reverse10:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 113\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_C2__ys8; else goto Label_split_114_8;

Label_join_113_11:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 113\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_C2__ys8; else goto Label_split_114_8;

Label_split_114_8:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A == 0) goto Label_C2__ys9; else goto Label_split_118_8;

Label_split_118_8:
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_120_9;

Label_C2__ys8:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 120\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_inv_5reverse11; else goto Label_split_121_8;

Label_join_120_9:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 120\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_inv_5reverse11; else goto Label_split_121_8;

Label_split_121_8:
count(1, 0);
  var_A = (var_A + (2 + 0));
  goto Label_join_123_16;

Label_inv_5reverse11:
  if (count(1,0), !(var_A != 2)){
    fprintf(stderr,"\nJoin failure at line 123\n");
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
   stack[stackPointer++] = &&Return_127_10;
  goto Label_cons;
  Return_127_10:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_129_9;

Label_join_123_16:
  if (count(1,0), var_A != 2){
    fprintf(stderr,"\nJoin failure at line 123\n");
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
   stack[stackPointer++] = &&Return_127_11;
  goto Label_cons;
  Return_127_11:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_129_9;

Label_C2__ys9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 129\n");
  writeVars(); goto programEnd;
}
  goto Label_join_130_9;

Label_join_129_9:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 129\n");
  writeVars(); goto programEnd;
}
  goto Label_join_130_9;

Label_C2__ys7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 130\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label_C2__ys_rev_xs_C2__2; else goto Label_split_131_8;

Label_join_130_9:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 130\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label_C2__ys_rev_xs_C2__2; else goto Label_split_131_8;

Label_split_131_8:
  count(2,0);
   stack[stackPointer++] = &&Return_133_12;
  goto Label_rev;
  Return_133_12:
  goto Label_C2__ys_rev_xs_C2__1;

Label_C2__ys_rev_xs_C2__2:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 136\n");
  writeVars(); goto programEnd;
}
  goto Label_join_137_16;

Label_reverse_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 137\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label_reverse_exit_1;

Label_join_137_16:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 137\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label_reverse_exit_1;

Label_reverse_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 146\n");
  writeVars(); goto programEnd;
}
  goto Label_reverse_exit_2;

Label_rev:
  goto Label_rev_entry_1;

Label_rev_exit_1:
  goto *stack[--stackPointer];

Label_rev_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_x_xs_ys7; else goto Label_split_159_7;

Label_split_159_7:
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_162_13;
  goto Label__cons;
  Return_162_13:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  if (count(1,0), (var_A & 3)) goto Label_x_xs10; else goto Label_split_168_7;

Label_split_168_7:
  tmp = var_consD;
  var_consD = (var_x);
  var_x = (tmp);
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_172_14;
  goto Label__cons;
  Return_172_14:
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
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
  if (count(1,0), var_A != 0) goto Label_x_xs11; else goto Label_split_178_8;

Label_split_178_8:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A == 0) goto Label_x_xs12; else goto Label_split_182_8;

Label_split_182_8:
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_184_8;

Label_x_xs11:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 184\n");
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
   stack[stackPointer++] = &&Return_189_15;
  goto Label_cons;
  Return_189_15:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_191_8;

Label_join_184_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 184\n");
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
   stack[stackPointer++] = &&Return_189_16;
  goto Label_cons;
  Return_189_16:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_191_8;

Label_x_xs12:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 191\n");
  writeVars(); goto programEnd;
}
  goto Label_join_192_8;

Label_join_191_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 191\n");
  writeVars(); goto programEnd;
}
  goto Label_join_192_8;

Label_x_xs10:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 192\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_x_xs_ys8; else goto Label_split_194_8;

Label_join_192_8:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 192\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_x_xs_ys8; else goto Label_split_194_8;

Label_split_194_8:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A == 0) goto Label_x_xs_ys9; else goto Label_split_198_8;

Label_split_198_8:
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_200_10;

Label_x_xs_ys8:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 200\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_xs13; else goto Label_split_201_7;

Label_join_200_10:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 200\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_xs13; else goto Label_split_201_7;

Label_split_201_7:
  if (count(1,0), var_A == 0) goto Label_inv_x_xs15; else goto Label_split_202_8;

Label_split_202_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_204_17;
  goto Label__cons;
  Return_204_17:
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
  if (count(1,0), var_A != 0) goto Label_inv_x_xs14; else goto Label_split_209_8;

Label_split_209_8:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_212_12;

Label_inv_x_xs15:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 212\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_215_12;

Label_join_212_12:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 212\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_215_12;

Label_inv_x_xs14:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 215\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_218_18;
  goto Label_cons;
  Return_218_18:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_220_12;

Label_join_215_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 215\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_218_19;
  goto Label_cons;
  Return_218_19:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_220_12;

Label_inv_x_xs13:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 220\n");
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
   stack[stackPointer++] = &&Return_224_20;
  goto Label_cons;
  Return_224_20:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_227_10;

Label_join_220_12:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 220\n");
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
   stack[stackPointer++] = &&Return_224_21;
  goto Label_cons;
  Return_224_21:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_227_10;

Label_x_xs_ys9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 227\n");
  writeVars(); goto programEnd;
}
  goto Label_join_228_10;

Label_join_227_10:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 227\n");
  writeVars(); goto programEnd;
}
  goto Label_join_228_10;

Label_x_xs_ys7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 228\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_rev_entry_2; else goto Label_join_234_12;

Label_join_228_10:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 228\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_rev_entry_2; else goto Label_join_234_12;

Label_rev_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 234\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_x_ys1; else goto Label_split_238_7;

Label_join_234_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 234\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_x_ys1; else goto Label_split_238_7;

Label_split_238_7:
  if (count(1,0), var_A == 0) goto Label_inv_xs_x_ys3; else goto Label_split_239_8;

Label_split_239_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_241_22;
  goto Label__cons;
  Return_241_22:
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
  if (count(1,0), var_A != 0) goto Label_inv_xs_x_ys2; else goto Label_split_246_8;

Label_split_246_8:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_249_14;

Label_inv_xs_x_ys3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 249\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_ys4; else goto Label_split_250_7;

Label_join_249_14:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 249\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_ys4; else goto Label_split_250_7;

Label_split_250_7:
  if (count(1,0), var_A == 0) goto Label_inv_x_ys6; else goto Label_split_251_8;

Label_split_251_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_253_23;
  goto Label__cons;
  Return_253_23:
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
  if (count(1,0), var_A != 0) goto Label_inv_x_ys5; else goto Label_split_258_8;

Label_split_258_8:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_261_11;

Label_inv_x_ys6:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 261\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_264_11;

Label_join_261_11:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 261\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_264_11;

Label_inv_x_ys5:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 264\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_267_24;
  goto Label_cons;
  Return_267_24:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_269_11;

Label_join_264_11:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 264\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_267_25;
  goto Label_cons;
  Return_267_25:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_269_11;

Label_inv_x_ys4:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 269\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_271_14;

Label_join_269_11:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 269\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_271_14;

Label_inv_xs_x_ys2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 271\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_274_26;
  goto Label_cons;
  Return_274_26:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_276_14;

Label_join_271_14:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 271\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_274_27;
  goto Label_cons;
  Return_274_27:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_276_14;

Label_inv_xs_x_ys1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 276\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"c A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  goto Label_rev_exit_1;

Label_join_276_14:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 276\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"c A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  goto Label_rev_exit_1;

Label_rev_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 282\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_2;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 285\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_copyP < var_H) goto Label_copySymbol; else goto Label_split_286_11;

Label_split_286_11:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_291_12;

Label_copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 291\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 293\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_291_12:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 291\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 293\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 297\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 298\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 299\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 300\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 301\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_302_28;
  goto Label_hash;
  Return_302_28:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_305_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 305\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_306_15;

Label_join_305_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 305\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_306_15;

Label_split_306_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_308_19;

Label_split_308_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_310_19;

Label_split_310_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_312_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 312\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_314_10;

Label_join_312_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 312\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_314_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 314\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_317_17;

Label_join_314_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 314\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_317_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 317\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_319_15;

Label_join_317_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 317\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_319_15;

Label_split_319_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_320_15;

Label_split_320_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_322_29;
  goto Label__hash;
  Return_322_29:
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
  goto Label_join_329_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 329\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 330\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 331\n");
  writeVars(); goto programEnd;
}
  goto Label_join_332_12;

Label_join_329_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 329\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 330\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 331\n");
  writeVars(); goto programEnd;
}
  goto Label_join_332_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 332\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_332_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 332\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_337_30;
  goto Label__hash;
  Return_337_30:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_338_11;

Label_split_338_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_340_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 340\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_343_11;

Label_join_340_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 340\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_343_11;

Label_split_343_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_345_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 345\n");
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

Label_join_345_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 345\n");
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
    fprintf(stderr,"\nAssertion failure at line 355\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_357_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 357\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_358_10;

Label_join_357_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 357\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_358_10;

Label_split_358_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_360_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 360\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_362_10;

Label_join_360_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 360\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_362_10;

Label_split_362_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 367\n");
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

Label__join_37_7:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~35\n");
  writeVars(); goto programEnd;
}

printf("max refs = %d\n",A);
  count(2,0);
   stack[stackPointer++] = &&Return_31_31;
  goto Label__reverse;
  Return_31_31:
  count(2,0);
   stack[stackPointer++] = &&Return_28_32;
  goto Label__build;
  Return_28_32:
  count(2,0);
   stack[stackPointer++] = &&Return_27_33;
  goto Label__initialise;
  Return_27_33:
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
    fprintf(stderr,"\nJoin failure at line 38\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_37_7;

Label__split_38_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 38\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_37_7;

Label__join_40_7:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_38_10;

Label__dump1:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 42\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_40_7;

Label__split_42_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 42\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_40_7;

Label__main:
fprintf(stderr,"%d,", var_y);
  goto Label__split_42_10;

Label__initialise:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_50_34;
  goto Label__cons;
  Return_50_34:
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
   stack[stackPointer++] = &&Return_58_35;
  goto Label__cons;
  Return_58_35:
count(1, 0);
  var_consA = (var_consA - (7 + 0));
count(1, 0);
  var_consD = (var_consD - (2 + 0));
  goto *stack[--stackPointer];

Label__reverse_entry_1:
  goto *stack[--stackPointer];

Label__reverse:
  goto Label__reverse_exit_1;

Label__reverse_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 74\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  goto Label__reverse_entry_1;

Label__join_78_21:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 74\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  goto Label__reverse_entry_1;

Label__inv_xs_C2_3:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 80\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__C2__ys_rev_xs_C2__1; else goto Label__join_78_21;

Label__split_80_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 80\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__C2__ys_rev_xs_C2__1; else goto Label__join_78_21;

Label__inv_xs_C2_5:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 81\n");
  writeVars(); goto programEnd;
}
  goto Label__split_80_7;

Label__split_81_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 81\n");
  writeVars(); goto programEnd;
}
  goto Label__split_80_7;

Label__inv_xs_C2_4:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 89\n");
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
   stack[stackPointer++] = &&Return_83_36;
  goto Label_cons;
  Return_83_36:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_81_8;

Label__split_89_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 89\n");
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
   stack[stackPointer++] = &&Return_83_37;
  goto Label_cons;
  Return_83_37:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_81_8;

Label__join_92_13:
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  goto Label__split_89_8;

Label__inv_5reverse6:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 93\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label__inv_xs_C2_5; else goto Label__join_92_13;

Label__split_93_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 93\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label__inv_xs_C2_5; else goto Label__join_92_13;

Label__join_95_15:
count(1, 0);
  var_A = (var_A - (2 + 0));
  goto Label__split_93_8;

Label__join_97_13:
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  if (count(1,0), var_A != 2) goto Label__inv_5reverse6; else goto Label__join_95_15;

Label__join_102_13:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_100_38;
  goto Label__cons;
  Return_100_38:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__inv_xs_C2_4; else goto Label__join_97_13;

Label__C2__ys7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 105\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_C2_3; else goto Label__join_102_13;

Label__split_105_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 105\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_C2_3; else goto Label__join_102_13;

Label__reverse10:
  if (count(1,0), !(var_A != 2)){
    fprintf(stderr,"\nJoin failure at line 111\n");
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
   stack[stackPointer++] = &&Return_107_39;
  goto Label_cons;
  Return_107_39:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_105_7;

Label__split_111_8:
  if (count(1,0), var_A != 2){
    fprintf(stderr,"\nJoin failure at line 111\n");
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
   stack[stackPointer++] = &&Return_107_40;
  goto Label_cons;
  Return_107_40:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_105_7;

Label__join_113_11:
count(1, 0);
  var_A = (var_A + (2 + 0));
  goto Label__split_111_8;

Label__C2__ys8:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 114\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__reverse10; else goto Label__join_113_11;

Label__split_114_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 114\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__reverse10; else goto Label__join_113_11;

Label__C2__ys9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 118\n");
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
  goto Label__split_114_8;

Label__split_118_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 118\n");
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
  goto Label__split_114_8;

Label__join_120_9:
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_118_8;

Label__inv_5reverse11:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 121\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__C2__ys8; else goto Label__join_120_9;

Label__split_121_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 121\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__C2__ys8; else goto Label__join_120_9;

Label__join_123_16:
count(1, 0);
  var_A = (var_A - (2 + 0));
  goto Label__split_121_8;

Label__join_129_9:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_127_41;
  goto Label__cons;
  Return_127_41:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  if (count(1,0), var_A != 2) goto Label__inv_5reverse11; else goto Label__join_123_16;

Label__join_130_9:
  if (count(1,0), var_A == 0) goto Label__C2__ys9; else goto Label__join_129_9;

Label__C2__ys_rev_xs_C2__2:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 131\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__C2__ys7; else goto Label__join_130_9;

Label__split_131_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 131\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__C2__ys7; else goto Label__join_130_9;

Label__C2__ys_rev_xs_C2__1:
  count(2,0);
   stack[stackPointer++] = &&Return_133_42;
  goto Label__rev;
  Return_133_42:
  goto Label__split_131_8;

Label__join_137_16:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~136\n");
  writeVars(); goto programEnd;
}
  goto Label__C2__ys_rev_xs_C2__2;

Label__reverse_exit_1:
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__reverse_exit_2; else goto Label__join_137_16;

Label__reverse_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~146\n");
  writeVars(); goto programEnd;
}
  goto Label__reverse_entry_2;

Label__rev_entry_1:
  goto *stack[--stackPointer];

Label__rev:
  goto Label__rev_exit_1;

Label__x_xs_ys7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 159\n");
  writeVars(); goto programEnd;
}
  goto Label__rev_entry_1;

Label__split_159_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 159\n");
  writeVars(); goto programEnd;
}
  goto Label__rev_entry_1;

Label__x_xs10:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 168\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_162_43;
  goto Label_cons;
  Return_162_43:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  goto Label__split_159_7;

Label__split_168_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 168\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_162_44;
  goto Label_cons;
  Return_162_44:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  goto Label__split_159_7;

Label__x_xs11:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 178\n");
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
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  count(2,0);
   stack[stackPointer++] = &&Return_172_45;
  goto Label_cons;
  Return_172_45:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  tmp = var_consD;
  var_consD = (var_x);
  var_x = (tmp);
  goto Label__split_168_7;

Label__split_178_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 178\n");
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
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  count(2,0);
   stack[stackPointer++] = &&Return_172_46;
  goto Label_cons;
  Return_172_46:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  tmp = var_consD;
  var_consD = (var_x);
  var_x = (tmp);
  goto Label__split_168_7;

Label__x_xs12:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 182\n");
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
  goto Label__split_178_8;

Label__split_182_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 182\n");
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
  goto Label__split_178_8;

Label__join_184_8:
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_182_8;

Label__join_191_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_189_47;
  goto Label__cons;
  Return_189_47:
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
  if (count(1,0), var_A != 0) goto Label__x_xs11; else goto Label__join_184_8;

Label__join_192_8:
  if (count(1,0), var_A == 0) goto Label__x_xs12; else goto Label__join_191_8;

Label__x_xs_ys8:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xs10; else goto Label__join_192_8;

Label__split_194_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xs10; else goto Label__join_192_8;

Label__x_xs_ys9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 198\n");
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
  goto Label__split_194_8;

Label__split_198_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 198\n");
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
  goto Label__split_194_8;

Label__join_200_10:
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_198_8;

Label__inv_x_xs13:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 201\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__x_xs_ys8; else goto Label__join_200_10;

Label__split_201_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 201\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__x_xs_ys8; else goto Label__join_200_10;

Label__inv_x_xs15:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 202\n");
  writeVars(); goto programEnd;
}
  goto Label__split_201_7;

Label__split_202_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 202\n");
  writeVars(); goto programEnd;
}
  goto Label__split_201_7;

Label__inv_x_xs14:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 209\n");
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
   stack[stackPointer++] = &&Return_204_48;
  goto Label_cons;
  Return_204_48:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_202_8;

Label__split_209_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 209\n");
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
   stack[stackPointer++] = &&Return_204_49;
  goto Label_cons;
  Return_204_49:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_202_8;

Label__join_212_12:
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  goto Label__split_209_8;

Label__join_215_12:
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A == 0) goto Label__inv_x_xs15; else goto Label__join_212_12;

Label__join_220_12:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_218_50;
  goto Label__cons;
  Return_218_50:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__inv_x_xs14; else goto Label__join_215_12;

Label__join_227_10:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_224_51;
  goto Label__cons;
  Return_224_51:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consD);
  var_consD = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  if (count(1,0), (var_A & 3)) goto Label__inv_x_xs13; else goto Label__join_220_12;

Label__join_228_10:
  if (count(1,0), var_A == 0) goto Label__x_xs_ys9; else goto Label__join_227_10;

Label__rev_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 229\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xs_ys7; else goto Label__join_228_10;

Label__join_234_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 229\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xs_ys7; else goto Label__join_228_10;

Label__inv_xs_x_ys1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 238\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__rev_exit_2; else goto Label__join_234_12;

Label__split_238_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 238\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__rev_exit_2; else goto Label__join_234_12;

Label__inv_xs_x_ys3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 239\n");
  writeVars(); goto programEnd;
}
  goto Label__split_238_7;

Label__split_239_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 239\n");
  writeVars(); goto programEnd;
}
  goto Label__split_238_7;

Label__inv_xs_x_ys2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 246\n");
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
   stack[stackPointer++] = &&Return_241_52;
  goto Label_cons;
  Return_241_52:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_239_8;

Label__split_246_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 246\n");
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
   stack[stackPointer++] = &&Return_241_53;
  goto Label_cons;
  Return_241_53:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_239_8;

Label__join_249_14:
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  goto Label__split_246_8;

Label__inv_x_ys4:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 250\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label__inv_xs_x_ys3; else goto Label__join_249_14;

Label__split_250_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 250\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label__inv_xs_x_ys3; else goto Label__join_249_14;

Label__inv_x_ys6:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 251\n");
  writeVars(); goto programEnd;
}
  goto Label__split_250_7;

Label__split_251_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 251\n");
  writeVars(); goto programEnd;
}
  goto Label__split_250_7;

Label__inv_x_ys5:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 258\n");
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
   stack[stackPointer++] = &&Return_253_54;
  goto Label_cons;
  Return_253_54:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_251_8;

Label__split_258_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 258\n");
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
   stack[stackPointer++] = &&Return_253_55;
  goto Label_cons;
  Return_253_55:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_251_8;

Label__join_261_11:
  tmp = var_A;
  var_A = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  goto Label__split_258_8;

Label__join_264_11:
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A == 0) goto Label__inv_x_ys6; else goto Label__join_261_11;

Label__join_269_11:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_267_56;
  goto Label__cons;
  Return_267_56:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__inv_x_ys5; else goto Label__join_264_11;

Label__join_271_14:
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  if (count(1,0), (var_A & 3)) goto Label__inv_x_ys4; else goto Label__join_269_11;

Label__join_276_14:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_274_57;
  goto Label__cons;
  Return_274_57:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__inv_xs_x_ys2; else goto Label__join_271_14;

Label__rev_exit_1:
fprintf(stderr,"c A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_x_ys1; else goto Label__join_276_14;

Label__rev_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~282\n");
  writeVars(); goto programEnd;
}
  goto Label__rev_entry_2;

Label__copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 286\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~285\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_286_11:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 286\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~285\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_291_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_286_11;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~293\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), var_copyP < var_H) goto Label__copySymbol; else goto Label__join_291_12;

Label__join_305_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_302_58;
  goto Label__hash;
  Return_302_58:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~301\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~300\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~299\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~298\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~297\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 306\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_305_16;

Label__split_306_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 306\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_305_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 308\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_306_15;

Label__split_308_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 308\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_306_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 310\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_308_19;

Label__split_310_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 310\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_308_19;

Label__join_312_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_310_19;

Label__join_314_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_312_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 316\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_314_10;

Label__join_317_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 316\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_314_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 319\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_317_17;

Label__split_319_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 319\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_317_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 320\n");
  writeVars(); goto programEnd;
}
  goto Label__split_319_15;

Label__split_320_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 320\n");
  writeVars(); goto programEnd;
}
  goto Label__split_319_15;

Label__join_329_9:
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
   stack[stackPointer++] = &&Return_322_59;
  goto Label_hash;
  Return_322_59:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_320_15;

Label__join_332_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~331\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~330\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_329_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_332_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 338\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_337_60;
  goto Label_hash;
  Return_337_60:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_338_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 338\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_337_61;
  goto Label_hash;
  Return_337_61:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_340_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_338_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 343\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_340_13;

Label__split_343_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 343\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_340_13;

Label__join_345_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_343_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_345_13;

Label__join_357_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~355\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 358\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_357_6;

Label__split_358_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 358\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_357_6;

Label__join_360_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_358_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 362\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_360_6;

Label__split_362_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 362\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_360_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_362_10;

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
    fprintf(stderr,"\nAssertion failure at line ~367\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}