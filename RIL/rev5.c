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
  uint var_inv_trev5x_ys = 0;
  uint var_inv_trev4x_ys = 0;
  uint var_inv_trev2xs_x_ys = 0;
  uint var_inv_trev1xs_x_ys = 0;
  uint var_inv_trev14x_xs = 0;
  uint var_inv_trev13x_xs = 0;
  uint var_x = 0;
  uint var_t11x_xs = 0;
  uint var_t10x_xs = 0;
  uint var_t8x_xs_ys = 0;
  uint var_t7x_xs_ys = 0;
  uint var_ys = 0;
  uint var_t8C2__ys = 0;
  uint var_t7C2__ys = 0;
  uint var_inv_treverse4xs_C2_ = 0;
  uint var_inv_treverse3xs_C2_ = 0;
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
    printf("var_inv_trev5x_ys = \%u\n",var_inv_trev5x_ys);
    printf("var_inv_trev4x_ys = \%u\n",var_inv_trev4x_ys);
    printf("var_inv_trev2xs_x_ys = \%u\n",var_inv_trev2xs_x_ys);
    printf("var_inv_trev1xs_x_ys = \%u\n",var_inv_trev1xs_x_ys);
    printf("var_inv_trev14x_xs = \%u\n",var_inv_trev14x_xs);
    printf("var_inv_trev13x_xs = \%u\n",var_inv_trev13x_xs);
    printf("var_x = \%u\n",var_x);
    printf("var_t11x_xs = \%u\n",var_t11x_xs);
    printf("var_t10x_xs = \%u\n",var_t10x_xs);
    printf("var_t8x_xs_ys = \%u\n",var_t8x_xs_ys);
    printf("var_t7x_xs_ys = \%u\n",var_t7x_xs_ys);
    printf("var_ys = \%u\n",var_ys);
    printf("var_t8C2__ys = \%u\n",var_t8C2__ys);
    printf("var_t7C2__ys = \%u\n",var_t7C2__ys);
    printf("var_inv_treverse4xs_C2_ = \%u\n",var_inv_treverse4xs_C2_);
    printf("var_inv_treverse3xs_C2_ = \%u\n",var_inv_treverse3xs_C2_);
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
  goto Label__reverse;
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
    fprintf(stderr,"\nAssertion failure at line 42\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_44_7;

Label_dump1:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 44\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_45_10;

Label_join_44_7:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 44\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_45_10;

Label_split_45_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_47_7;

Label_used1:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 47\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_49_10;

Label_join_47_7:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 47\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_49_10;

Label_split_49_10:
fprintf(stderr,"%d,", var_y);
  goto *stack[--stackPointer];

Label_initialise:
count(1, 0);
  var_consA = (var_consA + (2 + 0));
count(1, 0);
  var_consD = (var_consD + (2 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_57_6;
  goto Label_cons;
  Return_57_6:
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
   stack[stackPointer++] = &&Return_66_7;
  goto Label_cons;
  Return_66_7:
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
count(1, 0);
  var_consA = (var_consA + (7 + 0));
fprintf(stderr,"%d\n", var_consA);
  count(2,0);
   stack[stackPointer++] = &&Return_70_8;
  goto Label_cons;
  Return_70_8:
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
  if (count(1,0), var_A != 0) goto Label_reverse_entry_2; else goto Label_join_90_28;

Label_C2__ys_rev_xs_C2__reverse1:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 90\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_C2_reverse3; else goto Label_split_91_7;

Label_join_90_28:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 90\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_C2_reverse3; else goto Label_split_91_7;

Label_split_91_7:
  if (count(1,0), var_A == 0) goto Label_inv_xs_C2_reverse5; else goto Label_split_92_8;

Label_split_92_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_94_9;
  goto Label__cons;
  Return_94_9:
  tmp = var_inv_treverse3xs_C2_;
  var_inv_treverse3xs_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_treverse4xs_C2_;
  var_inv_treverse4xs_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_xs;
  var_xs = (var_inv_treverse3xs_C2_);
  var_inv_treverse3xs_C2_ = (tmp);
  if (count(1,0), var_inv_treverse3xs_C2_ != 0) goto Label_inv_xs_C2_reverse4; else goto Label_join_99_20;

Label_inv_xs_C2_reverse5:
  if (count(1,0), !(var_inv_treverse4xs_C2_ == 0)){
    fprintf(stderr,"\nJoin failure at line 99\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_treverse4xs_C2_ != 0) goto Label_inv_5reverse6; else goto Label_split_100_26;

Label_join_99_20:
  if (count(1,0), var_inv_treverse4xs_C2_ == 0){
    fprintf(stderr,"\nJoin failure at line 99\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_treverse4xs_C2_ != 0) goto Label_inv_5reverse6; else goto Label_split_100_26;

Label_split_100_26:
count(1, 0);
  var_inv_treverse4xs_C2_ = (var_inv_treverse4xs_C2_ + (2 + 0));
  goto Label_join_102_15;

Label_inv_5reverse6:
  if (count(1,0), !(var_inv_treverse4xs_C2_ != 2)){
    fprintf(stderr,"\nJoin failure at line 102\n");
  writeVars(); goto programEnd;
}
  goto Label_join_103_20;

Label_join_102_15:
  if (count(1,0), var_inv_treverse4xs_C2_ != 2){
    fprintf(stderr,"\nJoin failure at line 102\n");
  writeVars(); goto programEnd;
}
  goto Label_join_103_20;

Label_inv_xs_C2_reverse4:
  if (count(1,0), !(var_inv_treverse3xs_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_treverse3xs_C2_);
  var_inv_treverse3xs_C2_ = (tmp);
  tmp = var_inv_treverse3xs_C2_;
  var_inv_treverse3xs_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_treverse4xs_C2_;
  var_inv_treverse4xs_C2_ = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_107_10;
  goto Label_cons;
  Return_107_10:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_109_20;

Label_join_103_20:
  if (count(1,0), var_inv_treverse3xs_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_treverse3xs_C2_);
  var_inv_treverse3xs_C2_ = (tmp);
  tmp = var_inv_treverse3xs_C2_;
  var_inv_treverse3xs_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_treverse4xs_C2_;
  var_inv_treverse4xs_C2_ = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_107_11;
  goto Label_cons;
  Return_107_11:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_109_20;

Label_inv_xs_C2_reverse3:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 109\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_reverse7; else goto Label_split_112_7;

Label_join_109_20:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 109\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_reverse7; else goto Label_split_112_7;

Label_split_112_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_114_12;
  goto Label__cons;
  Return_114_12:
  tmp = var_t7C2__ys;
  var_t7C2__ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t8C2__ys;
  var_t8C2__ys = (var_consD);
  var_consD = (tmp);
  if (count(1,0), var_t7C2__ys != 2) goto Label_reverse10; else goto Label_split_117_15;

Label_split_117_15:
count(1, 0);
  var_t7C2__ys = (var_t7C2__ys - (2 + 0));
  goto Label_join_119_11;

Label_reverse10:
  if (count(1,0), !(var_t7C2__ys != 0)){
    fprintf(stderr,"\nJoin failure at line 119\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7C2__ys != 0) goto Label_reverse8; else goto Label_split_120_15;

Label_join_119_11:
  if (count(1,0), var_t7C2__ys != 0){
    fprintf(stderr,"\nJoin failure at line 119\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7C2__ys != 0) goto Label_reverse8; else goto Label_split_120_15;

Label_split_120_15:
  tmp = var_ys;
  var_ys = (var_t8C2__ys);
  var_t8C2__ys = (tmp);
  if (count(1,0), var_t8C2__ys == 0) goto Label_reverse9; else goto Label_join_123_10;

Label_reverse8:
  if (count(1,0), !(var_t7C2__ys != 0)){
    fprintf(stderr,"\nJoin failure at line 123\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7C2__ys != 0) goto Label_inv_5reverse11; else goto Label_split_124_15;

Label_join_123_10:
  if (count(1,0), var_t7C2__ys != 0){
    fprintf(stderr,"\nJoin failure at line 123\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7C2__ys != 0) goto Label_inv_5reverse11; else goto Label_split_124_15;

Label_split_124_15:
count(1, 0);
  var_t7C2__ys = (var_t7C2__ys + (2 + 0));
  goto Label_join_126_16;

Label_inv_5reverse11:
  if (count(1,0), !(var_t7C2__ys != 2)){
    fprintf(stderr,"\nJoin failure at line 126\n");
  writeVars(); goto programEnd;
}
  tmp = var_t7C2__ys;
  var_t7C2__ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t8C2__ys;
  var_t8C2__ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_129_13;
  goto Label_cons;
  Return_129_13:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_131_10;

Label_join_126_16:
  if (count(1,0), var_t7C2__ys != 2){
    fprintf(stderr,"\nJoin failure at line 126\n");
  writeVars(); goto programEnd;
}
  tmp = var_t7C2__ys;
  var_t7C2__ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t8C2__ys;
  var_t8C2__ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_129_14;
  goto Label_cons;
  Return_129_14:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_131_10;

Label_reverse9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 131\n");
  writeVars(); goto programEnd;
}
  goto Label_join_132_10;

Label_join_131_10:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 131\n");
  writeVars(); goto programEnd;
}
  goto Label_join_132_10;

Label_reverse7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 132\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label_C2__ys_rev_xs_C2__reverse2; else goto Label_split_133_8;

Label_join_132_10:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 132\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label_C2__ys_rev_xs_C2__reverse2; else goto Label_split_133_8;

Label_split_133_8:
  count(2,0);
   stack[stackPointer++] = &&Return_134_15;
  goto Label_rev;
  Return_134_15:
  goto Label_C2__ys_rev_xs_C2__reverse1;

Label_C2__ys_rev_xs_C2__reverse2:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 137\n");
  writeVars(); goto programEnd;
}
  goto Label_join_138_16;

Label_reverse_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 138\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label_reverse_exit_1;

Label_join_138_16:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 138\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label_reverse_exit_1;

Label_reverse_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 147\n");
  writeVars(); goto programEnd;
}
  goto Label_reverse_exit_2;

Label_rev:
  goto Label_rev_entry_1;

Label_rev_exit_1:
  goto *stack[--stackPointer];

Label_rev_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_rev7; else goto Label_split_160_7;

Label_split_160_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_162_16;
  goto Label__cons;
  Return_162_16:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t8x_xs_ys;
  var_t8x_xs_ys = (var_consD);
  var_consD = (tmp);
  if (count(1,0), (var_t7x_xs_ys & 3)) goto Label_rev10; else goto Label_split_167_15;

Label_split_167_15:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_169_17;
  goto Label__cons;
  Return_169_17:
  tmp = var_t10x_xs;
  var_t10x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_t11x_xs;
  var_t11x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_t10x_xs);
  var_t10x_xs = (tmp);
  if (count(1,0), var_t10x_xs != 0) goto Label_rev11; else goto Label_split_173_14;

Label_split_173_14:
  tmp = var_xs;
  var_xs = (var_t11x_xs);
  var_t11x_xs = (tmp);
  if (count(1,0), var_t11x_xs == 0) goto Label_rev12; else goto Label_join_176_7;

Label_rev11:
  if (count(1,0), !(var_t10x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 176\n");
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
   stack[stackPointer++] = &&Return_180_18;
  goto Label_cons;
  Return_180_18:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_182_7;

Label_join_176_7:
  if (count(1,0), var_t10x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 176\n");
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
   stack[stackPointer++] = &&Return_180_19;
  goto Label_cons;
  Return_180_19:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_182_7;

Label_rev12:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 182\n");
  writeVars(); goto programEnd;
}
  goto Label_join_183_7;

Label_join_182_7:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 182\n");
  writeVars(); goto programEnd;
}
  goto Label_join_183_7;

Label_rev10:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 183\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7x_xs_ys != 0) goto Label_rev8; else goto Label_split_184_16;

Label_join_183_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 183\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7x_xs_ys != 0) goto Label_rev8; else goto Label_split_184_16;

Label_split_184_16:
  tmp = var_ys;
  var_ys = (var_t8x_xs_ys);
  var_t8x_xs_ys = (tmp);
  if (count(1,0), var_t8x_xs_ys == 0) goto Label_rev9; else goto Label_join_187_6;

Label_rev8:
  if (count(1,0), !(var_t7x_xs_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 187\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t7x_xs_ys & 3)) goto Label_inv_x_xsrev13; else goto Label_split_188_15;

Label_join_187_6:
  if (count(1,0), var_t7x_xs_ys != 0){
    fprintf(stderr,"\nJoin failure at line 187\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t7x_xs_ys & 3)) goto Label_inv_x_xsrev13; else goto Label_split_188_15;

Label_split_188_15:
  if (count(1,0), var_t7x_xs_ys == 0) goto Label_inv_x_xsrev15; else goto Label_split_189_16;

Label_split_189_16:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_191_20;
  goto Label__cons;
  Return_191_20:
  tmp = var_inv_trev13x_xs;
  var_inv_trev13x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_trev14x_xs;
  var_inv_trev14x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_trev13x_xs);
  var_inv_trev13x_xs = (tmp);
  if (count(1,0), var_inv_trev13x_xs != 0) goto Label_inv_x_xsrev14; else goto Label_join_196_15;

Label_inv_x_xsrev15:
  if (count(1,0), !(var_inv_trev14x_xs == 0)){
    fprintf(stderr,"\nJoin failure at line 196\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_trev14x_xs);
  var_inv_trev14x_xs = (tmp);
  goto Label_join_198_15;

Label_join_196_15:
  if (count(1,0), var_inv_trev14x_xs == 0){
    fprintf(stderr,"\nJoin failure at line 196\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_trev14x_xs);
  var_inv_trev14x_xs = (tmp);
  goto Label_join_198_15;

Label_inv_x_xsrev14:
  if (count(1,0), !(var_inv_trev13x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_trev13x_xs);
  var_inv_trev13x_xs = (tmp);
  tmp = var_inv_trev13x_xs;
  var_inv_trev13x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_trev14x_xs;
  var_inv_trev14x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_202_21;
  goto Label_cons;
  Return_202_21:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_204_15;

Label_join_198_15:
  if (count(1,0), var_inv_trev13x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_trev13x_xs);
  var_inv_trev13x_xs = (tmp);
  tmp = var_inv_trev13x_xs;
  var_inv_trev13x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_trev14x_xs;
  var_inv_trev14x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_202_22;
  goto Label_cons;
  Return_202_22:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_204_15;

Label_inv_x_xsrev13:
  if (count(1,0), !((var_t7x_xs_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 204\n");
  writeVars(); goto programEnd;
}
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t8x_xs_ys;
  var_t8x_xs_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_207_23;
  goto Label_cons;
  Return_207_23:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_209_6;

Label_join_204_15:
  if (count(1,0), (var_t7x_xs_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 204\n");
  writeVars(); goto programEnd;
}
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t8x_xs_ys;
  var_t8x_xs_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_207_24;
  goto Label_cons;
  Return_207_24:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_209_6;

Label_rev9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
  goto Label_join_210_6;

Label_join_209_6:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
  goto Label_join_210_6;

Label_rev7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 210\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_rev_entry_2; else goto Label_join_216_12;

Label_join_210_6:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 210\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_rev_entry_2; else goto Label_join_216_12;

Label_rev_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 216\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_x_ysrev1; else goto Label_split_220_7;

Label_join_216_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 216\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_x_ysrev1; else goto Label_split_220_7;

Label_split_220_7:
  if (count(1,0), var_A == 0) goto Label_inv_xs_x_ysrev3; else goto Label_split_221_8;

Label_split_221_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_223_25;
  goto Label__cons;
  Return_223_25:
  tmp = var_inv_trev1xs_x_ys;
  var_inv_trev1xs_x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_trev2xs_x_ys;
  var_inv_trev2xs_x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_xs;
  var_xs = (var_inv_trev1xs_x_ys);
  var_inv_trev1xs_x_ys = (tmp);
  if (count(1,0), var_inv_trev1xs_x_ys != 0) goto Label_inv_xs_x_ysrev2; else goto Label_join_228_17;

Label_inv_xs_x_ysrev3:
  if (count(1,0), !(var_inv_trev2xs_x_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 228\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_trev2xs_x_ys & 3)) goto Label_inv_x_ysrev4; else goto Label_split_229_22;

Label_join_228_17:
  if (count(1,0), var_inv_trev2xs_x_ys == 0){
    fprintf(stderr,"\nJoin failure at line 228\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_trev2xs_x_ys & 3)) goto Label_inv_x_ysrev4; else goto Label_split_229_22;

Label_split_229_22:
  if (count(1,0), var_inv_trev2xs_x_ys == 0) goto Label_inv_x_ysrev6; else goto Label_split_230_23;

Label_split_230_23:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_232_26;
  goto Label__cons;
  Return_232_26:
  tmp = var_inv_trev4x_ys;
  var_inv_trev4x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_trev5x_ys;
  var_inv_trev5x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_trev4x_ys);
  var_inv_trev4x_ys = (tmp);
  if (count(1,0), var_inv_trev4x_ys != 0) goto Label_inv_x_ysrev5; else goto Label_join_237_14;

Label_inv_x_ysrev6:
  if (count(1,0), !(var_inv_trev5x_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 237\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_inv_trev5x_ys);
  var_inv_trev5x_ys = (tmp);
  goto Label_join_239_14;

Label_join_237_14:
  if (count(1,0), var_inv_trev5x_ys == 0){
    fprintf(stderr,"\nJoin failure at line 237\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_inv_trev5x_ys);
  var_inv_trev5x_ys = (tmp);
  goto Label_join_239_14;

Label_inv_x_ysrev5:
  if (count(1,0), !(var_inv_trev4x_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 239\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_trev4x_ys);
  var_inv_trev4x_ys = (tmp);
  tmp = var_inv_trev4x_ys;
  var_inv_trev4x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_trev5x_ys;
  var_inv_trev5x_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_243_27;
  goto Label_cons;
  Return_243_27:
  tmp = var_inv_trev2xs_x_ys;
  var_inv_trev2xs_x_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_245_14;

Label_join_239_14:
  if (count(1,0), var_inv_trev4x_ys != 0){
    fprintf(stderr,"\nJoin failure at line 239\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_trev4x_ys);
  var_inv_trev4x_ys = (tmp);
  tmp = var_inv_trev4x_ys;
  var_inv_trev4x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_trev5x_ys;
  var_inv_trev5x_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_243_28;
  goto Label_cons;
  Return_243_28:
  tmp = var_inv_trev2xs_x_ys;
  var_inv_trev2xs_x_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_245_14;

Label_inv_x_ysrev4:
  if (count(1,0), !((var_inv_trev2xs_x_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 245\n");
  writeVars(); goto programEnd;
}
  goto Label_join_246_17;

Label_join_245_14:
  if (count(1,0), (var_inv_trev2xs_x_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 245\n");
  writeVars(); goto programEnd;
}
  goto Label_join_246_17;

Label_inv_xs_x_ysrev2:
  if (count(1,0), !(var_inv_trev1xs_x_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 246\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_trev1xs_x_ys);
  var_inv_trev1xs_x_ys = (tmp);
  tmp = var_inv_trev1xs_x_ys;
  var_inv_trev1xs_x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_trev2xs_x_ys;
  var_inv_trev2xs_x_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_250_29;
  goto Label_cons;
  Return_250_29:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_252_17;

Label_join_246_17:
  if (count(1,0), var_inv_trev1xs_x_ys != 0){
    fprintf(stderr,"\nJoin failure at line 246\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_trev1xs_x_ys);
  var_inv_trev1xs_x_ys = (tmp);
  tmp = var_inv_trev1xs_x_ys;
  var_inv_trev1xs_x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_trev2xs_x_ys;
  var_inv_trev2xs_x_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_250_30;
  goto Label_cons;
  Return_250_30:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_252_17;

Label_inv_xs_x_ysrev1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 252\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_1;

Label_join_252_17:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 252\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_1;

Label_rev_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 257\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_2;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 260\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_copyP < var_H) goto Label_copySymbol; else goto Label_split_261_11;

Label_split_261_11:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_266_12;

Label_copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 266\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 268\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_266_12:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 266\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 268\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 272\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 273\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 274\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 275\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 276\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_277_31;
  goto Label_hash;
  Return_277_31:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_280_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 280\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_281_15;

Label_join_280_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 280\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_281_15;

Label_split_281_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_283_19;

Label_split_283_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_285_19;

Label_split_285_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_287_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 287\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_289_10;

Label_join_287_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 287\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_289_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 289\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_292_17;

Label_join_289_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 289\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_292_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 292\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_294_15;

Label_join_292_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 292\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_294_15;

Label_split_294_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_295_15;

Label_split_295_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_297_32;
  goto Label__hash;
  Return_297_32:
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
  goto Label_join_304_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 304\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 305\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 306\n");
  writeVars(); goto programEnd;
}
  goto Label_join_307_12;

Label_join_304_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 304\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 305\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 306\n");
  writeVars(); goto programEnd;
}
  goto Label_join_307_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 307\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_307_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 307\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_312_33;
  goto Label__hash;
  Return_312_33:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_313_11;

Label_split_313_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_315_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 315\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_318_11;

Label_join_315_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 315\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_318_11;

Label_split_318_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_320_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 320\n");
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

Label_join_320_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 320\n");
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
    fprintf(stderr,"\nAssertion failure at line 330\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_332_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 332\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_333_10;

Label_join_332_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 332\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_333_10;

Label_split_333_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_335_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 335\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_337_10;

Label_join_335_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 335\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_337_10;

Label_split_337_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 342\n");
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

Label__join_44_7:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~42\n");
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
  goto Label_reverse;
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
    fprintf(stderr,"\nJoin failure at line 45\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_44_7;

Label__split_45_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 45\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_44_7;

Label__join_47_7:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_45_10;

Label__dump1:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 49\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_47_7;

Label__split_49_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 49\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_47_7;

Label__main:
fprintf(stderr,"%d,", var_y);
  goto Label__split_49_10;

Label__initialise:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_57_39;
  goto Label__cons;
  Return_57_39:
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
   stack[stackPointer++] = &&Return_70_40;
  goto Label__cons;
  Return_70_40:
fprintf(stderr,"%d\n", var_consA);
count(1, 0);
  var_consA = (var_consA - (7 + 0));
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_66_41;
  goto Label__cons;
  Return_66_41:
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
    fprintf(stderr,"\nJoin failure at line 86\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  goto Label__reverse_entry_1;

Label__join_90_28:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 86\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  goto Label__reverse_entry_1;

Label__inv_xs_C2_reverse3:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 91\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__C2__ys_rev_xs_C2__reverse1; else goto Label__join_90_28;

Label__split_91_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 91\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__C2__ys_rev_xs_C2__reverse1; else goto Label__join_90_28;

Label__inv_xs_C2_reverse5:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 92\n");
  writeVars(); goto programEnd;
}
  goto Label__split_91_7;

Label__split_92_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 92\n");
  writeVars(); goto programEnd;
}
  goto Label__split_91_7;

Label__inv_xs_C2_reverse4:
  if (count(1,0), !(var_inv_treverse3xs_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 98\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_treverse3xs_C2_);
  var_inv_treverse3xs_C2_ = (tmp);
  tmp = var_inv_treverse4xs_C2_;
  var_inv_treverse4xs_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_treverse3xs_C2_;
  var_inv_treverse3xs_C2_ = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_94_42;
  goto Label_cons;
  Return_94_42:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_92_8;

Label__join_99_20:
  if (count(1,0), var_inv_treverse3xs_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 98\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_treverse3xs_C2_);
  var_inv_treverse3xs_C2_ = (tmp);
  tmp = var_inv_treverse4xs_C2_;
  var_inv_treverse4xs_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_treverse3xs_C2_;
  var_inv_treverse3xs_C2_ = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_94_43;
  goto Label_cons;
  Return_94_43:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_92_8;

Label__inv_5reverse6:
  if (count(1,0), !(var_inv_treverse4xs_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 100\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_treverse4xs_C2_ == 0) goto Label__inv_xs_C2_reverse5; else goto Label__join_99_20;

Label__split_100_26:
  if (count(1,0), var_inv_treverse4xs_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 100\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_treverse4xs_C2_ == 0) goto Label__inv_xs_C2_reverse5; else goto Label__join_99_20;

Label__join_102_15:
count(1, 0);
  var_inv_treverse4xs_C2_ = (var_inv_treverse4xs_C2_ - (2 + 0));
  goto Label__split_100_26;

Label__join_103_20:
  if (count(1,0), var_inv_treverse4xs_C2_ != 2) goto Label__inv_5reverse6; else goto Label__join_102_15;

Label__join_109_20:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_107_44;
  goto Label__cons;
  Return_107_44:
  tmp = var_inv_treverse4xs_C2_;
  var_inv_treverse4xs_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_treverse3xs_C2_;
  var_inv_treverse3xs_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_xs;
  var_xs = (var_inv_treverse3xs_C2_);
  var_inv_treverse3xs_C2_ = (tmp);
  if (count(1,0), var_inv_treverse3xs_C2_ != 0) goto Label__inv_xs_C2_reverse4; else goto Label__join_103_20;

Label__reverse7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 112\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_C2_reverse3; else goto Label__join_109_20;

Label__split_112_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 112\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_C2_reverse3; else goto Label__join_109_20;

Label__reverse10:
  if (count(1,0), !(var_t7C2__ys != 2)){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  tmp = var_t8C2__ys;
  var_t8C2__ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t7C2__ys;
  var_t7C2__ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_114_45;
  goto Label_cons;
  Return_114_45:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_112_7;

Label__split_117_15:
  if (count(1,0), var_t7C2__ys != 2){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  tmp = var_t8C2__ys;
  var_t8C2__ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t7C2__ys;
  var_t7C2__ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_114_46;
  goto Label_cons;
  Return_114_46:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_112_7;

Label__join_119_11:
count(1, 0);
  var_t7C2__ys = (var_t7C2__ys + (2 + 0));
  goto Label__split_117_15;

Label__reverse8:
  if (count(1,0), !(var_t7C2__ys != 0)){
    fprintf(stderr,"\nJoin failure at line 120\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7C2__ys != 0) goto Label__reverse10; else goto Label__join_119_11;

Label__split_120_15:
  if (count(1,0), var_t7C2__ys != 0){
    fprintf(stderr,"\nJoin failure at line 120\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7C2__ys != 0) goto Label__reverse10; else goto Label__join_119_11;

Label__reverse9:
  if (count(1,0), !(var_t8C2__ys == 0)){
    fprintf(stderr,"\nJoin failure at line 122\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_t8C2__ys);
  var_t8C2__ys = (tmp);
  goto Label__split_120_15;

Label__join_123_10:
  if (count(1,0), var_t8C2__ys == 0){
    fprintf(stderr,"\nJoin failure at line 122\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_t8C2__ys);
  var_t8C2__ys = (tmp);
  goto Label__split_120_15;

Label__inv_5reverse11:
  if (count(1,0), !(var_t7C2__ys != 0)){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7C2__ys != 0) goto Label__reverse8; else goto Label__join_123_10;

Label__split_124_15:
  if (count(1,0), var_t7C2__ys != 0){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7C2__ys != 0) goto Label__reverse8; else goto Label__join_123_10;

Label__join_126_16:
count(1, 0);
  var_t7C2__ys = (var_t7C2__ys - (2 + 0));
  goto Label__split_124_15;

Label__join_131_10:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_129_47;
  goto Label__cons;
  Return_129_47:
  tmp = var_t8C2__ys;
  var_t8C2__ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t7C2__ys;
  var_t7C2__ys = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_t7C2__ys != 2) goto Label__inv_5reverse11; else goto Label__join_126_16;

Label__join_132_10:
  if (count(1,0), var_A == 0) goto Label__reverse9; else goto Label__join_131_10;

Label__C2__ys_rev_xs_C2__reverse2:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 133\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__reverse7; else goto Label__join_132_10;

Label__split_133_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 133\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__reverse7; else goto Label__join_132_10;

Label__C2__ys_rev_xs_C2__reverse1:
  count(2,0);
   stack[stackPointer++] = &&Return_134_48;
  goto Label__rev;
  Return_134_48:
  goto Label__split_133_8;

Label__join_138_16:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~137\n");
  writeVars(); goto programEnd;
}
  goto Label__C2__ys_rev_xs_C2__reverse2;

Label__reverse_exit_1:
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__reverse_exit_2; else goto Label__join_138_16;

Label__reverse_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~147\n");
  writeVars(); goto programEnd;
}
  goto Label__reverse_entry_2;

Label__rev_entry_1:
  goto *stack[--stackPointer];

Label__rev:
  goto Label__rev_exit_1;

Label__rev7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 160\n");
  writeVars(); goto programEnd;
}
  goto Label__rev_entry_1;

Label__split_160_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 160\n");
  writeVars(); goto programEnd;
}
  goto Label__rev_entry_1;

Label__rev10:
  if (count(1,0), !((var_t7x_xs_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 167\n");
  writeVars(); goto programEnd;
}
  tmp = var_t8x_xs_ys;
  var_t8x_xs_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_162_49;
  goto Label_cons;
  Return_162_49:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_160_7;

Label__split_167_15:
  if (count(1,0), (var_t7x_xs_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 167\n");
  writeVars(); goto programEnd;
}
  tmp = var_t8x_xs_ys;
  var_t8x_xs_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_162_50;
  goto Label_cons;
  Return_162_50:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_160_7;

Label__rev11:
  if (count(1,0), !(var_t10x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 173\n");
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
   stack[stackPointer++] = &&Return_169_51;
  goto Label_cons;
  Return_169_51:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label__split_167_15;

Label__split_173_14:
  if (count(1,0), var_t10x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 173\n");
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
   stack[stackPointer++] = &&Return_169_52;
  goto Label_cons;
  Return_169_52:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label__split_167_15;

Label__rev12:
  if (count(1,0), !(var_t11x_xs == 0)){
    fprintf(stderr,"\nJoin failure at line 175\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_t11x_xs);
  var_t11x_xs = (tmp);
  goto Label__split_173_14;

Label__join_176_7:
  if (count(1,0), var_t11x_xs == 0){
    fprintf(stderr,"\nJoin failure at line 175\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_t11x_xs);
  var_t11x_xs = (tmp);
  goto Label__split_173_14;

Label__join_182_7:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_180_53;
  goto Label__cons;
  Return_180_53:
  tmp = var_t11x_xs;
  var_t11x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_t10x_xs;
  var_t10x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_t10x_xs);
  var_t10x_xs = (tmp);
  if (count(1,0), var_t10x_xs != 0) goto Label__rev11; else goto Label__join_176_7;

Label__join_183_7:
  if (count(1,0), var_A == 0) goto Label__rev12; else goto Label__join_182_7;

Label__rev8:
  if (count(1,0), !(var_t7x_xs_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 184\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__rev10; else goto Label__join_183_7;

Label__split_184_16:
  if (count(1,0), var_t7x_xs_ys != 0){
    fprintf(stderr,"\nJoin failure at line 184\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__rev10; else goto Label__join_183_7;

Label__rev9:
  if (count(1,0), !(var_t8x_xs_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 186\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_t8x_xs_ys);
  var_t8x_xs_ys = (tmp);
  goto Label__split_184_16;

Label__join_187_6:
  if (count(1,0), var_t8x_xs_ys == 0){
    fprintf(stderr,"\nJoin failure at line 186\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_t8x_xs_ys);
  var_t8x_xs_ys = (tmp);
  goto Label__split_184_16;

Label__inv_x_xsrev13:
  if (count(1,0), !((var_t7x_xs_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7x_xs_ys != 0) goto Label__rev8; else goto Label__join_187_6;

Label__split_188_15:
  if (count(1,0), (var_t7x_xs_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t7x_xs_ys != 0) goto Label__rev8; else goto Label__join_187_6;

Label__inv_x_xsrev15:
  if (count(1,0), !(var_t7x_xs_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 189\n");
  writeVars(); goto programEnd;
}
  goto Label__split_188_15;

Label__split_189_16:
  if (count(1,0), var_t7x_xs_ys == 0){
    fprintf(stderr,"\nJoin failure at line 189\n");
  writeVars(); goto programEnd;
}
  goto Label__split_188_15;

Label__inv_x_xsrev14:
  if (count(1,0), !(var_inv_trev13x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 195\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_trev13x_xs);
  var_inv_trev13x_xs = (tmp);
  tmp = var_inv_trev14x_xs;
  var_inv_trev14x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_trev13x_xs;
  var_inv_trev13x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_191_54;
  goto Label_cons;
  Return_191_54:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_189_16;

Label__join_196_15:
  if (count(1,0), var_inv_trev13x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 195\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_trev13x_xs);
  var_inv_trev13x_xs = (tmp);
  tmp = var_inv_trev14x_xs;
  var_inv_trev14x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_trev13x_xs;
  var_inv_trev13x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_191_55;
  goto Label_cons;
  Return_191_55:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_189_16;

Label__join_198_15:
  tmp = var_xs;
  var_xs = (var_inv_trev14x_xs);
  var_inv_trev14x_xs = (tmp);
  if (count(1,0), var_inv_trev14x_xs == 0) goto Label__inv_x_xsrev15; else goto Label__join_196_15;

Label__join_204_15:
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_202_56;
  goto Label__cons;
  Return_202_56:
  tmp = var_inv_trev14x_xs;
  var_inv_trev14x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_trev13x_xs;
  var_inv_trev13x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_trev13x_xs);
  var_inv_trev13x_xs = (tmp);
  if (count(1,0), var_inv_trev13x_xs != 0) goto Label__inv_x_xsrev14; else goto Label__join_198_15;

Label__join_209_6:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_207_57;
  goto Label__cons;
  Return_207_57:
  tmp = var_t8x_xs_ys;
  var_t8x_xs_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t7x_xs_ys;
  var_t7x_xs_ys = (var_consA);
  var_consA = (tmp);
  if (count(1,0), (var_t7x_xs_ys & 3)) goto Label__inv_x_xsrev13; else goto Label__join_204_15;

Label__join_210_6:
  if (count(1,0), var_A == 0) goto Label__rev9; else goto Label__join_209_6;

Label__rev_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__rev7; else goto Label__join_210_6;

Label__join_216_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__rev7; else goto Label__join_210_6;

Label__inv_xs_x_ysrev1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 220\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__rev_exit_2; else goto Label__join_216_12;

Label__split_220_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 220\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__rev_exit_2; else goto Label__join_216_12;

Label__inv_xs_x_ysrev3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 221\n");
  writeVars(); goto programEnd;
}
  goto Label__split_220_7;

Label__split_221_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 221\n");
  writeVars(); goto programEnd;
}
  goto Label__split_220_7;

Label__inv_xs_x_ysrev2:
  if (count(1,0), !(var_inv_trev1xs_x_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 227\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_trev1xs_x_ys);
  var_inv_trev1xs_x_ys = (tmp);
  tmp = var_inv_trev2xs_x_ys;
  var_inv_trev2xs_x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_trev1xs_x_ys;
  var_inv_trev1xs_x_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_223_58;
  goto Label_cons;
  Return_223_58:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_221_8;

Label__join_228_17:
  if (count(1,0), var_inv_trev1xs_x_ys != 0){
    fprintf(stderr,"\nJoin failure at line 227\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_trev1xs_x_ys);
  var_inv_trev1xs_x_ys = (tmp);
  tmp = var_inv_trev2xs_x_ys;
  var_inv_trev2xs_x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_trev1xs_x_ys;
  var_inv_trev1xs_x_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_223_59;
  goto Label_cons;
  Return_223_59:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_221_8;

Label__inv_x_ysrev4:
  if (count(1,0), !((var_inv_trev2xs_x_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 229\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_trev2xs_x_ys == 0) goto Label__inv_xs_x_ysrev3; else goto Label__join_228_17;

Label__split_229_22:
  if (count(1,0), (var_inv_trev2xs_x_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 229\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_trev2xs_x_ys == 0) goto Label__inv_xs_x_ysrev3; else goto Label__join_228_17;

Label__inv_x_ysrev6:
  if (count(1,0), !(var_inv_trev2xs_x_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 230\n");
  writeVars(); goto programEnd;
}
  goto Label__split_229_22;

Label__split_230_23:
  if (count(1,0), var_inv_trev2xs_x_ys == 0){
    fprintf(stderr,"\nJoin failure at line 230\n");
  writeVars(); goto programEnd;
}
  goto Label__split_229_22;

Label__inv_x_ysrev5:
  if (count(1,0), !(var_inv_trev4x_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 236\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_trev4x_ys);
  var_inv_trev4x_ys = (tmp);
  tmp = var_inv_trev5x_ys;
  var_inv_trev5x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_trev4x_ys;
  var_inv_trev4x_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_232_60;
  goto Label_cons;
  Return_232_60:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_230_23;

Label__join_237_14:
  if (count(1,0), var_inv_trev4x_ys != 0){
    fprintf(stderr,"\nJoin failure at line 236\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_trev4x_ys);
  var_inv_trev4x_ys = (tmp);
  tmp = var_inv_trev5x_ys;
  var_inv_trev5x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_trev4x_ys;
  var_inv_trev4x_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_232_61;
  goto Label_cons;
  Return_232_61:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_230_23;

Label__join_239_14:
  tmp = var_ys;
  var_ys = (var_inv_trev5x_ys);
  var_inv_trev5x_ys = (tmp);
  if (count(1,0), var_inv_trev5x_ys == 0) goto Label__inv_x_ysrev6; else goto Label__join_237_14;

Label__join_245_14:
  tmp = var_inv_trev2xs_x_ys;
  var_inv_trev2xs_x_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_243_62;
  goto Label__cons;
  Return_243_62:
  tmp = var_inv_trev5x_ys;
  var_inv_trev5x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_trev4x_ys;
  var_inv_trev4x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_trev4x_ys);
  var_inv_trev4x_ys = (tmp);
  if (count(1,0), var_inv_trev4x_ys != 0) goto Label__inv_x_ysrev5; else goto Label__join_239_14;

Label__join_246_17:
  if (count(1,0), (var_inv_trev2xs_x_ys & 3)) goto Label__inv_x_ysrev4; else goto Label__join_245_14;

Label__join_252_17:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_250_63;
  goto Label__cons;
  Return_250_63:
  tmp = var_inv_trev2xs_x_ys;
  var_inv_trev2xs_x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_trev1xs_x_ys;
  var_inv_trev1xs_x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_xs;
  var_xs = (var_inv_trev1xs_x_ys);
  var_inv_trev1xs_x_ys = (tmp);
  if (count(1,0), var_inv_trev1xs_x_ys != 0) goto Label__inv_xs_x_ysrev2; else goto Label__join_246_17;

Label__rev_exit_1:
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_x_ysrev1; else goto Label__join_252_17;

Label__rev_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~257\n");
  writeVars(); goto programEnd;
}
  goto Label__rev_entry_2;

Label__copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 261\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~260\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_261_11:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 261\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~260\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_266_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_261_11;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~268\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), var_copyP < var_H) goto Label__copySymbol; else goto Label__join_266_12;

Label__join_280_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_277_64;
  goto Label__hash;
  Return_277_64:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~276\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~275\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~274\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~273\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~272\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 281\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_280_16;

Label__split_281_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 281\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_280_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 283\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_281_15;

Label__split_283_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 283\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_281_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 285\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_283_19;

Label__split_285_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 285\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_283_19;

Label__join_287_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_285_19;

Label__join_289_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_287_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 291\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_289_10;

Label__join_292_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 291\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_289_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 294\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_292_17;

Label__split_294_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 294\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_292_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 295\n");
  writeVars(); goto programEnd;
}
  goto Label__split_294_15;

Label__split_295_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 295\n");
  writeVars(); goto programEnd;
}
  goto Label__split_294_15;

Label__join_304_9:
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
   stack[stackPointer++] = &&Return_297_65;
  goto Label_hash;
  Return_297_65:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_295_15;

Label__join_307_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~306\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~305\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_304_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_307_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 313\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_312_66;
  goto Label_hash;
  Return_312_66:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_313_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 313\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_312_67;
  goto Label_hash;
  Return_312_67:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_315_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_313_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 318\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_315_13;

Label__split_318_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 318\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_315_13;

Label__join_320_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_318_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_320_13;

Label__join_332_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~330\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 333\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_332_6;

Label__split_333_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 333\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_332_6;

Label__join_335_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_333_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 337\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_335_6;

Label__split_337_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 337\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_335_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_337_10;

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
    fprintf(stderr,"\nAssertion failure at line ~342\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}