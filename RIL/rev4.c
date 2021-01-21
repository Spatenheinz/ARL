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
  uint var_inv_t5x_ys = 0;
  uint var_inv_t4x_ys = 0;
  uint var_inv_t2xs_x_ys = 0;
  uint var_inv_t1xs_x_ys = 0;
  uint var_inv_t14x_xs = 0;
  uint var_inv_t13x_xs = 0;
  uint var_x = 0;
  uint var_t11x_xs = 0;
  uint var_t10x_xs = 0;
  uint var_t8x_xs_ys = 0;
  uint var_t7x_xs_ys = 0;
  uint var_ys = 0;
  uint var_t8C2__ys = 0;
  uint var_t7C2__ys = 0;
  uint var_inv_t4xs_C2_ = 0;
  uint var_inv_t3xs_C2_ = 0;
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
    printf("var_inv_t5x_ys = \%u\n",var_inv_t5x_ys);
    printf("var_inv_t4x_ys = \%u\n",var_inv_t4x_ys);
    printf("var_inv_t2xs_x_ys = \%u\n",var_inv_t2xs_x_ys);
    printf("var_inv_t1xs_x_ys = \%u\n",var_inv_t1xs_x_ys);
    printf("var_inv_t14x_xs = \%u\n",var_inv_t14x_xs);
    printf("var_inv_t13x_xs = \%u\n",var_inv_t13x_xs);
    printf("var_x = \%u\n",var_x);
    printf("var_t11x_xs = \%u\n",var_t11x_xs);
    printf("var_t10x_xs = \%u\n",var_t10x_xs);
    printf("var_t8x_xs_ys = \%u\n",var_t8x_xs_ys);
    printf("var_t7x_xs_ys = \%u\n",var_t7x_xs_ys);
    printf("var_ys = \%u\n",var_ys);
    printf("var_t8C2__ys = \%u\n",var_t8C2__ys);
    printf("var_t7C2__ys = \%u\n",var_t7C2__ys);
    printf("var_inv_t4xs_C2_ = \%u\n",var_inv_t4xs_C2_);
    printf("var_inv_t3xs_C2_ = \%u\n",var_inv_t3xs_C2_);
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
  tmp = var_inv_t3xs_C2_;
  var_inv_t3xs_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t4xs_C2_;
  var_inv_t4xs_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_xs;
  var_xs = (var_inv_t3xs_C2_);
  var_inv_t3xs_C2_ = (tmp);
  if (count(1,0), var_inv_t3xs_C2_ != 0) goto Label_inv_xs_C2_4; else goto Label_join_98_13;

Label_inv_xs_C2_5:
  if (count(1,0), !(var_inv_t4xs_C2_ == 0)){
    fprintf(stderr,"\nJoin failure at line 98\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t4xs_C2_ != 0) goto Label_inv_5reverse6; else goto Label_split_99_19;

Label_join_98_13:
  if (count(1,0), var_inv_t4xs_C2_ == 0){
    fprintf(stderr,"\nJoin failure at line 98\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t4xs_C2_ != 0) goto Label_inv_5reverse6; else goto Label_split_99_19;

Label_split_99_19:
count(1, 0);
  var_inv_t4xs_C2_ = (var_inv_t4xs_C2_ + (2 + 0));
  goto Label_join_101_15;

Label_inv_5reverse6:
  if (count(1,0), !(var_inv_t4xs_C2_ != 2)){
    fprintf(stderr,"\nJoin failure at line 101\n");
  writeVars(); goto programEnd;
}
  goto Label_join_102_13;

Label_join_101_15:
  if (count(1,0), var_inv_t4xs_C2_ != 2){
    fprintf(stderr,"\nJoin failure at line 101\n");
  writeVars(); goto programEnd;
}
  goto Label_join_102_13;

Label_inv_xs_C2_4:
  if (count(1,0), !(var_inv_t3xs_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 102\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t3xs_C2_);
  var_inv_t3xs_C2_ = (tmp);
  tmp = var_inv_t3xs_C2_;
  var_inv_t3xs_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t4xs_C2_;
  var_inv_t4xs_C2_ = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_106_10;
  goto Label_cons;
  Return_106_10:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_108_13;

Label_join_102_13:
  if (count(1,0), var_inv_t3xs_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 102\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t3xs_C2_);
  var_inv_t3xs_C2_ = (tmp);
  tmp = var_inv_t3xs_C2_;
  var_inv_t3xs_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t4xs_C2_;
  var_inv_t4xs_C2_ = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_106_11;
  goto Label_cons;
  Return_106_11:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_108_13;

Label_inv_xs_C2_3:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 108\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_C2__ys7; else goto Label_split_111_7;

Label_join_108_13:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 108\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_C2__ys7; else goto Label_split_111_7;

Label_split_111_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_113_12;
  goto Label__cons;
  Return_113_12:
  tmp = var_t7C2__ys;
  var_t7C2__ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t8C2__ys;
  var_t8C2__ys = (var_consD);
  var_consD = (tmp);
  if (count(1,0), var_t7C2__ys != 2) goto Label_reverse10; else goto Label_split_116_15;

Label_split_116_15:
count(1, 0);
  var_t7C2__ys = (var_t7C2__ys - (2 + 0));
  goto Label_join_118_11;

Label_reverse10:
  if (count(1,0), !(var_t7C2__ys != 0)){
    fprintf(stderr,"\nJoin failure at line 118\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7C2__ys != 0) goto Label_C2__ys8; else goto Label_split_119_15;

Label_join_118_11:
  if (count(1,0), var_t7C2__ys != 0){
    fprintf(stderr,"\nJoin failure at line 118\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7C2__ys != 0) goto Label_C2__ys8; else goto Label_split_119_15;

Label_split_119_15:
  tmp = var_ys;
  var_ys = (var_t8C2__ys);
  var_t8C2__ys = (tmp);
  if (count(1,0), var_t8C2__ys == 0) goto Label_C2__ys9; else goto Label_join_122_9;

Label_C2__ys8:
  if (count(1,0), !(var_t7C2__ys != 0)){
    fprintf(stderr,"\nJoin failure at line 122\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7C2__ys != 0) goto Label_inv_5reverse11; else goto Label_split_123_15;

Label_join_122_9:
  if (count(1,0), var_t7C2__ys != 0){
    fprintf(stderr,"\nJoin failure at line 122\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7C2__ys != 0) goto Label_inv_5reverse11; else goto Label_split_123_15;

Label_split_123_15:
count(1, 0);
  var_t7C2__ys = (var_t7C2__ys + (2 + 0));
  goto Label_join_125_16;

Label_inv_5reverse11:
  if (count(1,0), !(var_t7C2__ys != 2)){
    fprintf(stderr,"\nJoin failure at line 125\n");
  writeVars(); goto programEnd;
}
  tmp = var_t7C2__ys;
  var_t7C2__ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t8C2__ys;
  var_t8C2__ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_128_13;
  goto Label_cons;
  Return_128_13:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_130_9;

Label_join_125_16:
  if (count(1,0), var_t7C2__ys != 2){
    fprintf(stderr,"\nJoin failure at line 125\n");
  writeVars(); goto programEnd;
}
  tmp = var_t7C2__ys;
  var_t7C2__ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t8C2__ys;
  var_t8C2__ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_128_14;
  goto Label_cons;
  Return_128_14:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_130_9;

Label_C2__ys9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 130\n");
  writeVars(); goto programEnd;
}
  goto Label_join_131_9;

Label_join_130_9:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 130\n");
  writeVars(); goto programEnd;
}
  goto Label_join_131_9;

Label_C2__ys7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 131\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label_C2__ys_rev_xs_C2__2; else goto Label_split_132_8;

Label_join_131_9:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 131\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label_C2__ys_rev_xs_C2__2; else goto Label_split_132_8;

Label_split_132_8:
  count(2,0);
   stack[stackPointer++] = &&Return_133_15;
  goto Label_rev;
  Return_133_15:
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
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_161_16;
  goto Label__cons;
  Return_161_16:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t8x_xs_ys;
  var_t8x_xs_ys = (var_consD);
  var_consD = (tmp);
  if (count(1,0), (var_t7x_xs_ys & 3)) goto Label_x_xs10; else goto Label_split_166_15;

Label_split_166_15:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_168_17;
  goto Label__cons;
  Return_168_17:
  tmp = var_t10x_xs;
  var_t10x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_t11x_xs;
  var_t11x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_t10x_xs);
  var_t10x_xs = (tmp);
  if (count(1,0), var_t10x_xs != 0) goto Label_x_xs11; else goto Label_split_172_14;

Label_split_172_14:
  tmp = var_xs;
  var_xs = (var_t11x_xs);
  var_t11x_xs = (tmp);
  if (count(1,0), var_t11x_xs == 0) goto Label_x_xs12; else goto Label_join_175_8;

Label_x_xs11:
  if (count(1,0), !(var_t10x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 175\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t10x_xs);
  var_t10x_xs = (tmp);
  tmp = var_t10x_xs;
  var_t10x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_t11x_xs;
  var_t11x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_179_18;
  goto Label_cons;
  Return_179_18:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_181_8;

Label_join_175_8:
  if (count(1,0), var_t10x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 175\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t10x_xs);
  var_t10x_xs = (tmp);
  tmp = var_t10x_xs;
  var_t10x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_t11x_xs;
  var_t11x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_179_19;
  goto Label_cons;
  Return_179_19:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_181_8;

Label_x_xs12:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 181\n");
  writeVars(); goto programEnd;
}
  goto Label_join_182_8;

Label_join_181_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 181\n");
  writeVars(); goto programEnd;
}
  goto Label_join_182_8;

Label_x_xs10:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 182\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7x_xs_ys != 0) goto Label_x_xs_ys8; else goto Label_split_183_16;

Label_join_182_8:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 182\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7x_xs_ys != 0) goto Label_x_xs_ys8; else goto Label_split_183_16;

Label_split_183_16:
  tmp = var_ys;
  var_ys = (var_t8x_xs_ys);
  var_t8x_xs_ys = (tmp);
  if (count(1,0), var_t8x_xs_ys == 0) goto Label_x_xs_ys9; else goto Label_join_186_10;

Label_x_xs_ys8:
  if (count(1,0), !(var_t7x_xs_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 186\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t7x_xs_ys & 3)) goto Label_inv_x_xs13; else goto Label_split_187_15;

Label_join_186_10:
  if (count(1,0), var_t7x_xs_ys != 0){
    fprintf(stderr,"\nJoin failure at line 186\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t7x_xs_ys & 3)) goto Label_inv_x_xs13; else goto Label_split_187_15;

Label_split_187_15:
  if (count(1,0), var_t7x_xs_ys == 0) goto Label_inv_x_xs15; else goto Label_split_188_16;

Label_split_188_16:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_190_20;
  goto Label__cons;
  Return_190_20:
  tmp = var_inv_t13x_xs;
  var_inv_t13x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t14x_xs;
  var_inv_t14x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t13x_xs);
  var_inv_t13x_xs = (tmp);
  if (count(1,0), var_inv_t13x_xs != 0) goto Label_inv_x_xs14; else goto Label_join_195_12;

Label_inv_x_xs15:
  if (count(1,0), !(var_inv_t14x_xs == 0)){
    fprintf(stderr,"\nJoin failure at line 195\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t14x_xs);
  var_inv_t14x_xs = (tmp);
  goto Label_join_197_12;

Label_join_195_12:
  if (count(1,0), var_inv_t14x_xs == 0){
    fprintf(stderr,"\nJoin failure at line 195\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t14x_xs);
  var_inv_t14x_xs = (tmp);
  goto Label_join_197_12;

Label_inv_x_xs14:
  if (count(1,0), !(var_inv_t13x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t13x_xs);
  var_inv_t13x_xs = (tmp);
  tmp = var_inv_t13x_xs;
  var_inv_t13x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t14x_xs;
  var_inv_t14x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_201_21;
  goto Label_cons;
  Return_201_21:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_203_12;

Label_join_197_12:
  if (count(1,0), var_inv_t13x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t13x_xs);
  var_inv_t13x_xs = (tmp);
  tmp = var_inv_t13x_xs;
  var_inv_t13x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t14x_xs;
  var_inv_t14x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_201_22;
  goto Label_cons;
  Return_201_22:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_203_12;

Label_inv_x_xs13:
  if (count(1,0), !((var_t7x_xs_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 203\n");
  writeVars(); goto programEnd;
}
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t8x_xs_ys;
  var_t8x_xs_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_206_23;
  goto Label_cons;
  Return_206_23:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_208_10;

Label_join_203_12:
  if (count(1,0), (var_t7x_xs_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 203\n");
  writeVars(); goto programEnd;
}
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t8x_xs_ys;
  var_t8x_xs_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_206_24;
  goto Label_cons;
  Return_206_24:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_208_10;

Label_x_xs_ys9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
  goto Label_join_209_10;

Label_join_208_10:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
  goto Label_join_209_10;

Label_x_xs_ys7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_rev_entry_2; else goto Label_join_215_12;

Label_join_209_10:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_rev_entry_2; else goto Label_join_215_12;

Label_rev_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 215\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_x_ys1; else goto Label_split_219_7;

Label_join_215_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 215\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_x_ys1; else goto Label_split_219_7;

Label_split_219_7:
  if (count(1,0), var_A == 0) goto Label_inv_xs_x_ys3; else goto Label_split_220_8;

Label_split_220_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_222_25;
  goto Label__cons;
  Return_222_25:
  tmp = var_inv_t1xs_x_ys;
  var_inv_t1xs_x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t2xs_x_ys;
  var_inv_t2xs_x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_xs;
  var_xs = (var_inv_t1xs_x_ys);
  var_inv_t1xs_x_ys = (tmp);
  if (count(1,0), var_inv_t1xs_x_ys != 0) goto Label_inv_xs_x_ys2; else goto Label_join_227_14;

Label_inv_xs_x_ys3:
  if (count(1,0), !(var_inv_t2xs_x_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 227\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t2xs_x_ys & 3)) goto Label_inv_x_ys4; else goto Label_split_228_19;

Label_join_227_14:
  if (count(1,0), var_inv_t2xs_x_ys == 0){
    fprintf(stderr,"\nJoin failure at line 227\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t2xs_x_ys & 3)) goto Label_inv_x_ys4; else goto Label_split_228_19;

Label_split_228_19:
  if (count(1,0), var_inv_t2xs_x_ys == 0) goto Label_inv_x_ys6; else goto Label_split_229_20;

Label_split_229_20:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_231_26;
  goto Label__cons;
  Return_231_26:
  tmp = var_inv_t4x_ys;
  var_inv_t4x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t5x_ys;
  var_inv_t5x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t4x_ys);
  var_inv_t4x_ys = (tmp);
  if (count(1,0), var_inv_t4x_ys != 0) goto Label_inv_x_ys5; else goto Label_join_236_11;

Label_inv_x_ys6:
  if (count(1,0), !(var_inv_t5x_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 236\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_inv_t5x_ys);
  var_inv_t5x_ys = (tmp);
  goto Label_join_238_11;

Label_join_236_11:
  if (count(1,0), var_inv_t5x_ys == 0){
    fprintf(stderr,"\nJoin failure at line 236\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_inv_t5x_ys);
  var_inv_t5x_ys = (tmp);
  goto Label_join_238_11;

Label_inv_x_ys5:
  if (count(1,0), !(var_inv_t4x_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 238\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t4x_ys);
  var_inv_t4x_ys = (tmp);
  tmp = var_inv_t4x_ys;
  var_inv_t4x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t5x_ys;
  var_inv_t5x_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_242_27;
  goto Label_cons;
  Return_242_27:
  tmp = var_inv_t2xs_x_ys;
  var_inv_t2xs_x_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_244_11;

Label_join_238_11:
  if (count(1,0), var_inv_t4x_ys != 0){
    fprintf(stderr,"\nJoin failure at line 238\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t4x_ys);
  var_inv_t4x_ys = (tmp);
  tmp = var_inv_t4x_ys;
  var_inv_t4x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t5x_ys;
  var_inv_t5x_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_242_28;
  goto Label_cons;
  Return_242_28:
  tmp = var_inv_t2xs_x_ys;
  var_inv_t2xs_x_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_244_11;

Label_inv_x_ys4:
  if (count(1,0), !((var_inv_t2xs_x_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 244\n");
  writeVars(); goto programEnd;
}
  goto Label_join_245_14;

Label_join_244_11:
  if (count(1,0), (var_inv_t2xs_x_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 244\n");
  writeVars(); goto programEnd;
}
  goto Label_join_245_14;

Label_inv_xs_x_ys2:
  if (count(1,0), !(var_inv_t1xs_x_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 245\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t1xs_x_ys);
  var_inv_t1xs_x_ys = (tmp);
  tmp = var_inv_t1xs_x_ys;
  var_inv_t1xs_x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t2xs_x_ys;
  var_inv_t2xs_x_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_249_29;
  goto Label_cons;
  Return_249_29:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_251_14;

Label_join_245_14:
  if (count(1,0), var_inv_t1xs_x_ys != 0){
    fprintf(stderr,"\nJoin failure at line 245\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t1xs_x_ys);
  var_inv_t1xs_x_ys = (tmp);
  tmp = var_inv_t1xs_x_ys;
  var_inv_t1xs_x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t2xs_x_ys;
  var_inv_t2xs_x_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_249_30;
  goto Label_cons;
  Return_249_30:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_251_14;

Label_inv_xs_x_ys1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 251\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_1;

Label_join_251_14:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 251\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_1;

Label_rev_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 256\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_2;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 259\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_copyP < var_H) goto Label_copySymbol; else goto Label_split_260_11;

Label_split_260_11:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_265_12;

Label_copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 265\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 267\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_265_12:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 265\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 267\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 271\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 272\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 273\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 274\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 275\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_276_31;
  goto Label_hash;
  Return_276_31:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_279_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 279\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_280_15;

Label_join_279_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 279\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_280_15;

Label_split_280_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_282_19;

Label_split_282_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_284_19;

Label_split_284_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_286_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 286\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_288_10;

Label_join_286_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 286\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_288_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 288\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_291_17;

Label_join_288_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 288\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_291_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 291\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_293_15;

Label_join_291_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 291\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_293_15;

Label_split_293_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_294_15;

Label_split_294_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_296_32;
  goto Label__hash;
  Return_296_32:
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
  goto Label_join_303_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 303\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 304\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 305\n");
  writeVars(); goto programEnd;
}
  goto Label_join_306_12;

Label_join_303_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 303\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 304\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 305\n");
  writeVars(); goto programEnd;
}
  goto Label_join_306_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 306\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_306_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 306\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_311_33;
  goto Label__hash;
  Return_311_33:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_312_11;

Label_split_312_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_314_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 314\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_317_11;

Label_join_314_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 314\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_317_11;

Label_split_317_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_319_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 319\n");
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

Label_join_319_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 319\n");
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
    fprintf(stderr,"\nAssertion failure at line 329\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_331_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 331\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_332_10;

Label_join_331_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 331\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_332_10;

Label_split_332_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_334_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 334\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_336_10;

Label_join_334_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 334\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_336_10;

Label_split_336_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 341\n");
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
  if (count(1,0), !(var_inv_t3xs_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t3xs_C2_);
  var_inv_t3xs_C2_ = (tmp);
  tmp = var_inv_t4xs_C2_;
  var_inv_t4xs_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t3xs_C2_;
  var_inv_t3xs_C2_ = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_93_42;
  goto Label_cons;
  Return_93_42:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_91_8;

Label__join_98_13:
  if (count(1,0), var_inv_t3xs_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t3xs_C2_);
  var_inv_t3xs_C2_ = (tmp);
  tmp = var_inv_t4xs_C2_;
  var_inv_t4xs_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t3xs_C2_;
  var_inv_t3xs_C2_ = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_93_43;
  goto Label_cons;
  Return_93_43:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_91_8;

Label__inv_5reverse6:
  if (count(1,0), !(var_inv_t4xs_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 99\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t4xs_C2_ == 0) goto Label__inv_xs_C2_5; else goto Label__join_98_13;

Label__split_99_19:
  if (count(1,0), var_inv_t4xs_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 99\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t4xs_C2_ == 0) goto Label__inv_xs_C2_5; else goto Label__join_98_13;

Label__join_101_15:
count(1, 0);
  var_inv_t4xs_C2_ = (var_inv_t4xs_C2_ - (2 + 0));
  goto Label__split_99_19;

Label__join_102_13:
  if (count(1,0), var_inv_t4xs_C2_ != 2) goto Label__inv_5reverse6; else goto Label__join_101_15;

Label__join_108_13:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_106_44;
  goto Label__cons;
  Return_106_44:
  tmp = var_inv_t4xs_C2_;
  var_inv_t4xs_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t3xs_C2_;
  var_inv_t3xs_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_xs;
  var_xs = (var_inv_t3xs_C2_);
  var_inv_t3xs_C2_ = (tmp);
  if (count(1,0), var_inv_t3xs_C2_ != 0) goto Label__inv_xs_C2_4; else goto Label__join_102_13;

Label__C2__ys7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 111\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_C2_3; else goto Label__join_108_13;

Label__split_111_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 111\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_C2_3; else goto Label__join_108_13;

Label__reverse10:
  if (count(1,0), !(var_t7C2__ys != 2)){
    fprintf(stderr,"\nJoin failure at line 116\n");
  writeVars(); goto programEnd;
}
  tmp = var_t8C2__ys;
  var_t8C2__ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t7C2__ys;
  var_t7C2__ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_113_45;
  goto Label_cons;
  Return_113_45:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_111_7;

Label__split_116_15:
  if (count(1,0), var_t7C2__ys != 2){
    fprintf(stderr,"\nJoin failure at line 116\n");
  writeVars(); goto programEnd;
}
  tmp = var_t8C2__ys;
  var_t8C2__ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t7C2__ys;
  var_t7C2__ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_113_46;
  goto Label_cons;
  Return_113_46:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_111_7;

Label__join_118_11:
count(1, 0);
  var_t7C2__ys = (var_t7C2__ys + (2 + 0));
  goto Label__split_116_15;

Label__C2__ys8:
  if (count(1,0), !(var_t7C2__ys != 0)){
    fprintf(stderr,"\nJoin failure at line 119\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7C2__ys != 0) goto Label__reverse10; else goto Label__join_118_11;

Label__split_119_15:
  if (count(1,0), var_t7C2__ys != 0){
    fprintf(stderr,"\nJoin failure at line 119\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7C2__ys != 0) goto Label__reverse10; else goto Label__join_118_11;

Label__C2__ys9:
  if (count(1,0), !(var_t8C2__ys == 0)){
    fprintf(stderr,"\nJoin failure at line 121\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_t8C2__ys);
  var_t8C2__ys = (tmp);
  goto Label__split_119_15;

Label__join_122_9:
  if (count(1,0), var_t8C2__ys == 0){
    fprintf(stderr,"\nJoin failure at line 121\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_t8C2__ys);
  var_t8C2__ys = (tmp);
  goto Label__split_119_15;

Label__inv_5reverse11:
  if (count(1,0), !(var_t7C2__ys != 0)){
    fprintf(stderr,"\nJoin failure at line 123\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7C2__ys != 0) goto Label__C2__ys8; else goto Label__join_122_9;

Label__split_123_15:
  if (count(1,0), var_t7C2__ys != 0){
    fprintf(stderr,"\nJoin failure at line 123\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7C2__ys != 0) goto Label__C2__ys8; else goto Label__join_122_9;

Label__join_125_16:
count(1, 0);
  var_t7C2__ys = (var_t7C2__ys - (2 + 0));
  goto Label__split_123_15;

Label__join_130_9:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_128_47;
  goto Label__cons;
  Return_128_47:
  tmp = var_t8C2__ys;
  var_t8C2__ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t7C2__ys;
  var_t7C2__ys = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_t7C2__ys != 2) goto Label__inv_5reverse11; else goto Label__join_125_16;

Label__join_131_9:
  if (count(1,0), var_A == 0) goto Label__C2__ys9; else goto Label__join_130_9;

Label__C2__ys_rev_xs_C2__2:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 132\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__C2__ys7; else goto Label__join_131_9;

Label__split_132_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 132\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__C2__ys7; else goto Label__join_131_9;

Label__C2__ys_rev_xs_C2__1:
  count(2,0);
   stack[stackPointer++] = &&Return_133_48;
  goto Label__rev;
  Return_133_48:
  goto Label__split_132_8;

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
  if (count(1,0), !((var_t7x_xs_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 166\n");
  writeVars(); goto programEnd;
}
  tmp = var_t8x_xs_ys;
  var_t8x_xs_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_161_49;
  goto Label_cons;
  Return_161_49:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_159_7;

Label__split_166_15:
  if (count(1,0), (var_t7x_xs_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 166\n");
  writeVars(); goto programEnd;
}
  tmp = var_t8x_xs_ys;
  var_t8x_xs_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_161_50;
  goto Label_cons;
  Return_161_50:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_159_7;

Label__x_xs11:
  if (count(1,0), !(var_t10x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 172\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t10x_xs);
  var_t10x_xs = (tmp);
  tmp = var_t11x_xs;
  var_t11x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_t10x_xs;
  var_t10x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_168_51;
  goto Label_cons;
  Return_168_51:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label__split_166_15;

Label__split_172_14:
  if (count(1,0), var_t10x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 172\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t10x_xs);
  var_t10x_xs = (tmp);
  tmp = var_t11x_xs;
  var_t11x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_t10x_xs;
  var_t10x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_168_52;
  goto Label_cons;
  Return_168_52:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label__split_166_15;

Label__x_xs12:
  if (count(1,0), !(var_t11x_xs == 0)){
    fprintf(stderr,"\nJoin failure at line 174\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_t11x_xs);
  var_t11x_xs = (tmp);
  goto Label__split_172_14;

Label__join_175_8:
  if (count(1,0), var_t11x_xs == 0){
    fprintf(stderr,"\nJoin failure at line 174\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_t11x_xs);
  var_t11x_xs = (tmp);
  goto Label__split_172_14;

Label__join_181_8:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_179_53;
  goto Label__cons;
  Return_179_53:
  tmp = var_t11x_xs;
  var_t11x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_t10x_xs;
  var_t10x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_t10x_xs);
  var_t10x_xs = (tmp);
  if (count(1,0), var_t10x_xs != 0) goto Label__x_xs11; else goto Label__join_175_8;

Label__join_182_8:
  if (count(1,0), var_A == 0) goto Label__x_xs12; else goto Label__join_181_8;

Label__x_xs_ys8:
  if (count(1,0), !(var_t7x_xs_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 183\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xs10; else goto Label__join_182_8;

Label__split_183_16:
  if (count(1,0), var_t7x_xs_ys != 0){
    fprintf(stderr,"\nJoin failure at line 183\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xs10; else goto Label__join_182_8;

Label__x_xs_ys9:
  if (count(1,0), !(var_t8x_xs_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 185\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_t8x_xs_ys);
  var_t8x_xs_ys = (tmp);
  goto Label__split_183_16;

Label__join_186_10:
  if (count(1,0), var_t8x_xs_ys == 0){
    fprintf(stderr,"\nJoin failure at line 185\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_t8x_xs_ys);
  var_t8x_xs_ys = (tmp);
  goto Label__split_183_16;

Label__inv_x_xs13:
  if (count(1,0), !((var_t7x_xs_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 187\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7x_xs_ys != 0) goto Label__x_xs_ys8; else goto Label__join_186_10;

Label__split_187_15:
  if (count(1,0), (var_t7x_xs_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 187\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7x_xs_ys != 0) goto Label__x_xs_ys8; else goto Label__join_186_10;

Label__inv_x_xs15:
  if (count(1,0), !(var_t7x_xs_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
  goto Label__split_187_15;

Label__split_188_16:
  if (count(1,0), var_t7x_xs_ys == 0){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
  goto Label__split_187_15;

Label__inv_x_xs14:
  if (count(1,0), !(var_inv_t13x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t13x_xs);
  var_inv_t13x_xs = (tmp);
  tmp = var_inv_t14x_xs;
  var_inv_t14x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t13x_xs;
  var_inv_t13x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_190_54;
  goto Label_cons;
  Return_190_54:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_188_16;

Label__join_195_12:
  if (count(1,0), var_inv_t13x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t13x_xs);
  var_inv_t13x_xs = (tmp);
  tmp = var_inv_t14x_xs;
  var_inv_t14x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t13x_xs;
  var_inv_t13x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_190_55;
  goto Label_cons;
  Return_190_55:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_188_16;

Label__join_197_12:
  tmp = var_xs;
  var_xs = (var_inv_t14x_xs);
  var_inv_t14x_xs = (tmp);
  if (count(1,0), var_inv_t14x_xs == 0) goto Label__inv_x_xs15; else goto Label__join_195_12;

Label__join_203_12:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_201_56;
  goto Label__cons;
  Return_201_56:
  tmp = var_inv_t14x_xs;
  var_inv_t14x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t13x_xs;
  var_inv_t13x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_t13x_xs);
  var_inv_t13x_xs = (tmp);
  if (count(1,0), var_inv_t13x_xs != 0) goto Label__inv_x_xs14; else goto Label__join_197_12;

Label__join_208_10:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_206_57;
  goto Label__cons;
  Return_206_57:
  tmp = var_t8x_xs_ys;
  var_t8x_xs_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consA);
  var_consA = (tmp);
  if (count(1,0), (var_t7x_xs_ys & 3)) goto Label__inv_x_xs13; else goto Label__join_203_12;

Label__join_209_10:
  if (count(1,0), var_A == 0) goto Label__x_xs_ys9; else goto Label__join_208_10;

Label__rev_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 210\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xs_ys7; else goto Label__join_209_10;

Label__join_215_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 210\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xs_ys7; else goto Label__join_209_10;

Label__inv_xs_x_ys1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__rev_exit_2; else goto Label__join_215_12;

Label__split_219_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__rev_exit_2; else goto Label__join_215_12;

Label__inv_xs_x_ys3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 220\n");
  writeVars(); goto programEnd;
}
  goto Label__split_219_7;

Label__split_220_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 220\n");
  writeVars(); goto programEnd;
}
  goto Label__split_219_7;

Label__inv_xs_x_ys2:
  if (count(1,0), !(var_inv_t1xs_x_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 226\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t1xs_x_ys);
  var_inv_t1xs_x_ys = (tmp);
  tmp = var_inv_t2xs_x_ys;
  var_inv_t2xs_x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t1xs_x_ys;
  var_inv_t1xs_x_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_222_58;
  goto Label_cons;
  Return_222_58:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_220_8;

Label__join_227_14:
  if (count(1,0), var_inv_t1xs_x_ys != 0){
    fprintf(stderr,"\nJoin failure at line 226\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t1xs_x_ys);
  var_inv_t1xs_x_ys = (tmp);
  tmp = var_inv_t2xs_x_ys;
  var_inv_t2xs_x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t1xs_x_ys;
  var_inv_t1xs_x_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_222_59;
  goto Label_cons;
  Return_222_59:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_220_8;

Label__inv_x_ys4:
  if (count(1,0), !((var_inv_t2xs_x_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 228\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t2xs_x_ys == 0) goto Label__inv_xs_x_ys3; else goto Label__join_227_14;

Label__split_228_19:
  if (count(1,0), (var_inv_t2xs_x_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 228\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t2xs_x_ys == 0) goto Label__inv_xs_x_ys3; else goto Label__join_227_14;

Label__inv_x_ys6:
  if (count(1,0), !(var_inv_t2xs_x_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 229\n");
  writeVars(); goto programEnd;
}
  goto Label__split_228_19;

Label__split_229_20:
  if (count(1,0), var_inv_t2xs_x_ys == 0){
    fprintf(stderr,"\nJoin failure at line 229\n");
  writeVars(); goto programEnd;
}
  goto Label__split_228_19;

Label__inv_x_ys5:
  if (count(1,0), !(var_inv_t4x_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 235\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t4x_ys);
  var_inv_t4x_ys = (tmp);
  tmp = var_inv_t5x_ys;
  var_inv_t5x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t4x_ys;
  var_inv_t4x_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_231_60;
  goto Label_cons;
  Return_231_60:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_229_20;

Label__join_236_11:
  if (count(1,0), var_inv_t4x_ys != 0){
    fprintf(stderr,"\nJoin failure at line 235\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t4x_ys);
  var_inv_t4x_ys = (tmp);
  tmp = var_inv_t5x_ys;
  var_inv_t5x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t4x_ys;
  var_inv_t4x_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_231_61;
  goto Label_cons;
  Return_231_61:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_229_20;

Label__join_238_11:
  tmp = var_ys;
  var_ys = (var_inv_t5x_ys);
  var_inv_t5x_ys = (tmp);
  if (count(1,0), var_inv_t5x_ys == 0) goto Label__inv_x_ys6; else goto Label__join_236_11;

Label__join_244_11:
  tmp = var_inv_t2xs_x_ys;
  var_inv_t2xs_x_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_242_62;
  goto Label__cons;
  Return_242_62:
  tmp = var_inv_t5x_ys;
  var_inv_t5x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t4x_ys;
  var_inv_t4x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_t4x_ys);
  var_inv_t4x_ys = (tmp);
  if (count(1,0), var_inv_t4x_ys != 0) goto Label__inv_x_ys5; else goto Label__join_238_11;

Label__join_245_14:
  if (count(1,0), (var_inv_t2xs_x_ys & 3)) goto Label__inv_x_ys4; else goto Label__join_244_11;

Label__join_251_14:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_249_63;
  goto Label__cons;
  Return_249_63:
  tmp = var_inv_t2xs_x_ys;
  var_inv_t2xs_x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t1xs_x_ys;
  var_inv_t1xs_x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_xs;
  var_xs = (var_inv_t1xs_x_ys);
  var_inv_t1xs_x_ys = (tmp);
  if (count(1,0), var_inv_t1xs_x_ys != 0) goto Label__inv_xs_x_ys2; else goto Label__join_245_14;

Label__rev_exit_1:
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_x_ys1; else goto Label__join_251_14;

Label__rev_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~256\n");
  writeVars(); goto programEnd;
}
  goto Label__rev_entry_2;

Label__copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 260\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~259\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_260_11:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 260\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~259\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_265_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_260_11;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~267\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), var_copyP < var_H) goto Label__copySymbol; else goto Label__join_265_12;

Label__join_279_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_276_64;
  goto Label__hash;
  Return_276_64:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~275\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~274\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~273\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~272\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~271\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 280\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_279_16;

Label__split_280_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 280\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_279_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 282\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_280_15;

Label__split_282_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 282\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_280_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 284\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_282_19;

Label__split_284_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 284\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_282_19;

Label__join_286_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_284_19;

Label__join_288_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_286_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 290\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_288_10;

Label__join_291_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 290\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_288_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 293\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_291_17;

Label__split_293_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 293\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_291_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 294\n");
  writeVars(); goto programEnd;
}
  goto Label__split_293_15;

Label__split_294_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 294\n");
  writeVars(); goto programEnd;
}
  goto Label__split_293_15;

Label__join_303_9:
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
   stack[stackPointer++] = &&Return_296_65;
  goto Label_hash;
  Return_296_65:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_294_15;

Label__join_306_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~305\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~304\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_303_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_306_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 312\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_311_66;
  goto Label_hash;
  Return_311_66:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_312_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 312\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_311_67;
  goto Label_hash;
  Return_311_67:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_314_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_312_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 317\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_314_13;

Label__split_317_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 317\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_314_13;

Label__join_319_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_317_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_319_13;

Label__join_331_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~329\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 332\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_331_6;

Label__split_332_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 332\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_331_6;

Label__join_334_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_332_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 336\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_334_6;

Label__split_336_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 336\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_334_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_336_10;

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
    fprintf(stderr,"\nAssertion failure at line ~341\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}