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
  uint var_inv_t_rev7x_ys = 0;
  uint var_inv_t_rev6x_ys = 0;
  uint var_inv_t_rev2xs_x_ys = 0;
  uint var_inv_t_rev1xs_x_ys = 0;
  uint var_inv_t_rev23x_xs = 0;
  uint var_inv_t_rev22x_xs = 0;
  uint var_x = 0;
  uint var_t16x_xs = 0;
  uint var_t15x_xs = 0;
  uint var_t13x_xs_ys = 0;
  uint var_t12x_xs_ys = 0;
  uint var_ys = 0;
  uint var_t12C2__ys = 0;
  uint var_t11C2__ys = 0;
  uint var_inv_t_reverse6xs_C2_ = 0;
  uint var_inv_t_reverse5xs_C2_ = 0;
  uint var_xs = 0;
  uint var_nilnil = 0;
  uint var_y = 0;
  uint var_z = 0;
  uint var_A0 = 0;
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
    printf("var_inv_t_rev7x_ys = \%u\n",var_inv_t_rev7x_ys);
    printf("var_inv_t_rev6x_ys = \%u\n",var_inv_t_rev6x_ys);
    printf("var_inv_t_rev2xs_x_ys = \%u\n",var_inv_t_rev2xs_x_ys);
    printf("var_inv_t_rev1xs_x_ys = \%u\n",var_inv_t_rev1xs_x_ys);
    printf("var_inv_t_rev23x_xs = \%u\n",var_inv_t_rev23x_xs);
    printf("var_inv_t_rev22x_xs = \%u\n",var_inv_t_rev22x_xs);
    printf("var_x = \%u\n",var_x);
    printf("var_t16x_xs = \%u\n",var_t16x_xs);
    printf("var_t15x_xs = \%u\n",var_t15x_xs);
    printf("var_t13x_xs_ys = \%u\n",var_t13x_xs_ys);
    printf("var_t12x_xs_ys = \%u\n",var_t12x_xs_ys);
    printf("var_ys = \%u\n",var_ys);
    printf("var_t12C2__ys = \%u\n",var_t12C2__ys);
    printf("var_t11C2__ys = \%u\n",var_t11C2__ys);
    printf("var_inv_t_reverse6xs_C2_ = \%u\n",var_inv_t_reverse6xs_C2_);
    printf("var_inv_t_reverse5xs_C2_ = \%u\n",var_inv_t_reverse5xs_C2_);
    printf("var_xs = \%u\n",var_xs);
    printf("var_nilnil = \%u\n",var_nilnil);
    printf("var_y = \%u\n",var_y);
    printf("var_z = \%u\n",var_z);
    printf("var_A0 = \%u\n",var_A0);
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
fprintf(stderr,"%d %d\n", var_consA, var_consD);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_37_5;
  goto Label__cons;
  Return_37_5:
fprintf(stderr,"%d %d\n", var_consA, var_consD);
  tmp = var_A0;
  var_A0 = (var_consA);
  var_consA = (tmp);
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_41_6;
  goto Label__cons;
  Return_41_6:
fprintf(stderr,"%d %d\n", var_consA, var_consD);

printf("max refs = %d\n",A);
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 45\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_47_7;

Label_dump1:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 47\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_48_10;

Label_join_47_7:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 47\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_48_10;

Label_split_48_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_50_7;

Label_used1:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 50\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_52_10;

Label_join_50_7:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 50\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_52_10;

Label_split_52_10:
fprintf(stderr,"%d,", var_y);
  goto *stack[--stackPointer];

Label_initialise:
count(1, 0);
  var_consA = (var_consA + (2 + 0));
count(1, 0);
  var_consD = (var_consD + (2 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_60_7;
  goto Label_cons;
  Return_60_7:
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
   stack[stackPointer++] = &&Return_68_8;
  goto Label_cons;
  Return_68_8:
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
count(1, 0);
  var_consA = (var_consA + (9 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_71_9;
  goto Label_cons;
  Return_71_9:
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
count(1, 0);
  var_consA = (var_consA + (11 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_74_10;
  goto Label_cons;
  Return_74_10:
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
  if (count(1,0), var_A != 0) goto Label_reverse_entry_2; else goto Label_join_94_28;

Label_C2__ys_rev_xs_C2__reverse3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 94\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_C2_reverse5; else goto Label_split_95_7;

Label_join_94_28:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 94\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_C2_reverse5; else goto Label_split_95_7;

Label_split_95_7:
  if (count(1,0), var_A == 0) goto Label_inv_xs_C2_reverse7; else goto Label_split_96_8;

Label_split_96_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_98_11;
  goto Label__cons;
  Return_98_11:
  tmp = var_inv_t_reverse5xs_C2_;
  var_inv_t_reverse5xs_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_reverse6xs_C2_;
  var_inv_t_reverse6xs_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_xs;
  var_xs = (var_inv_t_reverse5xs_C2_);
  var_inv_t_reverse5xs_C2_ = (tmp);
  if (count(1,0), var_inv_t_reverse5xs_C2_ != 0) goto Label_inv_xs_C2_reverse6; else goto Label_join_103_20;

Label_inv_xs_C2_reverse7:
  if (count(1,0), !(var_inv_t_reverse6xs_C2_ == 0)){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_reverse6xs_C2_ != 0) goto Label_inv_5reverse10; else goto Label_split_104_27;

Label_join_103_20:
  if (count(1,0), var_inv_t_reverse6xs_C2_ == 0){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_reverse6xs_C2_ != 0) goto Label_inv_5reverse10; else goto Label_split_104_27;

Label_split_104_27:
count(1, 0);
  var_inv_t_reverse6xs_C2_ = (var_inv_t_reverse6xs_C2_ + (2 + 0));
  goto Label_join_106_16;

Label_inv_5reverse10:
  if (count(1,0), !(var_inv_t_reverse6xs_C2_ != 2)){
    fprintf(stderr,"\nJoin failure at line 106\n");
  writeVars(); goto programEnd;
}
  goto Label_join_107_20;

Label_join_106_16:
  if (count(1,0), var_inv_t_reverse6xs_C2_ != 2){
    fprintf(stderr,"\nJoin failure at line 106\n");
  writeVars(); goto programEnd;
}
  goto Label_join_107_20;

Label_inv_xs_C2_reverse6:
  if (count(1,0), !(var_inv_t_reverse5xs_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 107\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t_reverse5xs_C2_);
  var_inv_t_reverse5xs_C2_ = (tmp);
  tmp = var_inv_t_reverse5xs_C2_;
  var_inv_t_reverse5xs_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_reverse6xs_C2_;
  var_inv_t_reverse6xs_C2_ = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_111_12;
  goto Label_cons;
  Return_111_12:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_113_20;

Label_join_107_20:
  if (count(1,0), var_inv_t_reverse5xs_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 107\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t_reverse5xs_C2_);
  var_inv_t_reverse5xs_C2_ = (tmp);
  tmp = var_inv_t_reverse5xs_C2_;
  var_inv_t_reverse5xs_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_reverse6xs_C2_;
  var_inv_t_reverse6xs_C2_ = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_111_13;
  goto Label_cons;
  Return_111_13:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_113_20;

Label_inv_xs_C2_reverse5:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 113\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_reverse11; else goto Label_split_114_7;

Label_join_113_20:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 113\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_reverse11; else goto Label_split_114_7;

Label_split_114_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_116_14;
  goto Label__cons;
  Return_116_14:
  tmp = var_t11C2__ys;
  var_t11C2__ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t12C2__ys;
  var_t12C2__ys = (var_consD);
  var_consD = (tmp);
  if (count(1,0), var_t11C2__ys != 2) goto Label_reverse14; else goto Label_split_119_16;

Label_split_119_16:
count(1, 0);
  var_t11C2__ys = (var_t11C2__ys - (2 + 0));
  goto Label_join_121_11;

Label_reverse14:
  if (count(1,0), !(var_t11C2__ys != 0)){
    fprintf(stderr,"\nJoin failure at line 121\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t11C2__ys != 0) goto Label_reverse12; else goto Label_split_122_16;

Label_join_121_11:
  if (count(1,0), var_t11C2__ys != 0){
    fprintf(stderr,"\nJoin failure at line 121\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t11C2__ys != 0) goto Label_reverse12; else goto Label_split_122_16;

Label_split_122_16:
  tmp = var_ys;
  var_ys = (var_t12C2__ys);
  var_t12C2__ys = (tmp);
  if (count(1,0), var_t12C2__ys == 0) goto Label_reverse13; else goto Label_join_125_11;

Label_reverse12:
  if (count(1,0), !(var_t11C2__ys != 0)){
    fprintf(stderr,"\nJoin failure at line 125\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t11C2__ys != 0) goto Label_inv_5reverse16; else goto Label_split_126_16;

Label_join_125_11:
  if (count(1,0), var_t11C2__ys != 0){
    fprintf(stderr,"\nJoin failure at line 125\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t11C2__ys != 0) goto Label_inv_5reverse16; else goto Label_split_126_16;

Label_split_126_16:
count(1, 0);
  var_t11C2__ys = (var_t11C2__ys + (2 + 0));
  goto Label_join_128_16;

Label_inv_5reverse16:
  if (count(1,0), !(var_t11C2__ys != 2)){
    fprintf(stderr,"\nJoin failure at line 128\n");
  writeVars(); goto programEnd;
}
  tmp = var_t11C2__ys;
  var_t11C2__ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t12C2__ys;
  var_t12C2__ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_131_15;
  goto Label_cons;
  Return_131_15:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_133_11;

Label_join_128_16:
  if (count(1,0), var_t11C2__ys != 2){
    fprintf(stderr,"\nJoin failure at line 128\n");
  writeVars(); goto programEnd;
}
  tmp = var_t11C2__ys;
  var_t11C2__ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t12C2__ys;
  var_t12C2__ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_131_16;
  goto Label_cons;
  Return_131_16:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_133_11;

Label_reverse13:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 133\n");
  writeVars(); goto programEnd;
}
  goto Label_join_134_11;

Label_join_133_11:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 133\n");
  writeVars(); goto programEnd;
}
  goto Label_join_134_11;

Label_reverse11:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 134\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label_C2__ys_rev_xs_C2__reverse4; else goto Label_split_135_8;

Label_join_134_11:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 134\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label_C2__ys_rev_xs_C2__reverse4; else goto Label_split_135_8;

Label_split_135_8:
  count(2,0);
   stack[stackPointer++] = &&Return_136_17;
  goto Label_rev;
  Return_136_17:
  goto Label_C2__ys_rev_xs_C2__reverse3;

Label_C2__ys_rev_xs_C2__reverse4:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 139\n");
  writeVars(); goto programEnd;
}
  goto Label_join_140_16;

Label_reverse_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 140\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label_reverse_exit_1;

Label_join_140_16:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 140\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label_reverse_exit_1;

Label_reverse_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 149\n");
  writeVars(); goto programEnd;
}
  goto Label_reverse_exit_2;

Label_rev:
  goto Label_rev_entry_1;

Label_rev_exit_1:
  goto *stack[--stackPointer];

Label_rev_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_rev12; else goto Label_split_160_7;

Label_split_160_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_162_18;
  goto Label__cons;
  Return_162_18:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t13x_xs_ys;
  var_t13x_xs_ys = (var_consD);
  var_consD = (tmp);
  if (count(1,0), (var_t12x_xs_ys & 3)) goto Label_rev15; else goto Label_split_165_16;

Label_split_165_16:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_167_19;
  goto Label__cons;
  Return_167_19:
  tmp = var_t15x_xs;
  var_t15x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_t16x_xs;
  var_t16x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_t15x_xs);
  var_t15x_xs = (tmp);
  if (count(1,0), var_t15x_xs != 0) goto Label_rev16; else goto Label_split_171_14;

Label_split_171_14:
  tmp = var_xs;
  var_xs = (var_t16x_xs);
  var_t16x_xs = (tmp);
  if (count(1,0), var_t16x_xs == 0) goto Label_rev17; else goto Label_join_174_7;

Label_rev16:
  if (count(1,0), !(var_t15x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 174\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t15x_xs);
  var_t15x_xs = (tmp);
  tmp = var_t15x_xs;
  var_t15x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_t16x_xs;
  var_t16x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_178_20;
  goto Label_cons;
  Return_178_20:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_180_7;

Label_join_174_7:
  if (count(1,0), var_t15x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 174\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t15x_xs);
  var_t15x_xs = (tmp);
  tmp = var_t15x_xs;
  var_t15x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_t16x_xs;
  var_t16x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_178_21;
  goto Label_cons;
  Return_178_21:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_180_7;

Label_rev17:
  if (count(1,0), !(var_t12x_xs_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 180\n");
  writeVars(); goto programEnd;
}
  goto Label_join_181_7;

Label_join_180_7:
  if (count(1,0), var_t12x_xs_ys == 0){
    fprintf(stderr,"\nJoin failure at line 180\n");
  writeVars(); goto programEnd;
}
  goto Label_join_181_7;

Label_rev15:
  if (count(1,0), !((var_t12x_xs_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 181\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t12x_xs_ys != 0) goto Label_rev13; else goto Label_split_182_17;

Label_join_181_7:
  if (count(1,0), (var_t12x_xs_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 181\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t12x_xs_ys != 0) goto Label_rev13; else goto Label_split_182_17;

Label_split_182_17:
  tmp = var_ys;
  var_ys = (var_t13x_xs_ys);
  var_t13x_xs_ys = (tmp);
  if (count(1,0), var_t13x_xs_ys == 0) goto Label_rev14; else goto Label_join_185_7;

Label_rev13:
  if (count(1,0), !(var_t12x_xs_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 185\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t12x_xs_ys & 3)) goto Label_inv_x_xsrev22; else goto Label_split_186_16;

Label_join_185_7:
  if (count(1,0), var_t12x_xs_ys != 0){
    fprintf(stderr,"\nJoin failure at line 185\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t12x_xs_ys & 3)) goto Label_inv_x_xsrev22; else goto Label_split_186_16;

Label_split_186_16:
  if (count(1,0), var_t12x_xs_ys == 0) goto Label_inv_x_xsrev24; else goto Label_split_187_17;

Label_split_187_17:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_189_22;
  goto Label__cons;
  Return_189_22:
  tmp = var_inv_t_rev22x_xs;
  var_inv_t_rev22x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_rev23x_xs;
  var_inv_t_rev23x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_rev22x_xs);
  var_inv_t_rev22x_xs = (tmp);
  if (count(1,0), var_inv_t_rev22x_xs != 0) goto Label_inv_x_xsrev23; else goto Label_join_194_15;

Label_inv_x_xsrev24:
  if (count(1,0), !(var_inv_t_rev23x_xs == 0)){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t_rev23x_xs);
  var_inv_t_rev23x_xs = (tmp);
  goto Label_join_196_15;

Label_join_194_15:
  if (count(1,0), var_inv_t_rev23x_xs == 0){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t_rev23x_xs);
  var_inv_t_rev23x_xs = (tmp);
  goto Label_join_196_15;

Label_inv_x_xsrev23:
  if (count(1,0), !(var_inv_t_rev22x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 196\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_rev22x_xs);
  var_inv_t_rev22x_xs = (tmp);
  tmp = var_inv_t_rev22x_xs;
  var_inv_t_rev22x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_rev23x_xs;
  var_inv_t_rev23x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_200_23;
  goto Label_cons;
  Return_200_23:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_202_15;

Label_join_196_15:
  if (count(1,0), var_inv_t_rev22x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 196\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_rev22x_xs);
  var_inv_t_rev22x_xs = (tmp);
  tmp = var_inv_t_rev22x_xs;
  var_inv_t_rev22x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_rev23x_xs;
  var_inv_t_rev23x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_200_24;
  goto Label_cons;
  Return_200_24:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_202_15;

Label_inv_x_xsrev22:
  if (count(1,0), !((var_t12x_xs_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 202\n");
  writeVars(); goto programEnd;
}
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t13x_xs_ys;
  var_t13x_xs_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_205_25;
  goto Label_cons;
  Return_205_25:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_207_7;

Label_join_202_15:
  if (count(1,0), (var_t12x_xs_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 202\n");
  writeVars(); goto programEnd;
}
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t13x_xs_ys;
  var_t13x_xs_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_205_26;
  goto Label_cons;
  Return_205_26:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_207_7;

Label_rev14:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 207\n");
  writeVars(); goto programEnd;
}
  goto Label_join_208_7;

Label_join_207_7:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 207\n");
  writeVars(); goto programEnd;
}
  goto Label_join_208_7;

Label_rev12:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_rev_entry_2; else goto Label_join_214_12;

Label_join_208_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_rev_entry_2; else goto Label_join_214_12;

Label_rev_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 214\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_x_ysrev1; else goto Label_split_218_7;

Label_join_214_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 214\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_x_ysrev1; else goto Label_split_218_7;

Label_split_218_7:
  if (count(1,0), var_A == 0) goto Label_inv_xs_x_ysrev3; else goto Label_split_219_8;

Label_split_219_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_221_27;
  goto Label__cons;
  Return_221_27:
  tmp = var_inv_t_rev1xs_x_ys;
  var_inv_t_rev1xs_x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_xs;
  var_xs = (var_inv_t_rev1xs_x_ys);
  var_inv_t_rev1xs_x_ys = (tmp);
  if (count(1,0), var_inv_t_rev1xs_x_ys != 0) goto Label_inv_xs_x_ysrev2; else goto Label_join_226_17;

Label_inv_xs_x_ysrev3:
  if (count(1,0), !(var_inv_t_rev2xs_x_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 226\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_rev2xs_x_ys & 3)) goto Label_inv_x_ysrev6; else goto Label_split_227_23;

Label_join_226_17:
  if (count(1,0), var_inv_t_rev2xs_x_ys == 0){
    fprintf(stderr,"\nJoin failure at line 226\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_rev2xs_x_ys & 3)) goto Label_inv_x_ysrev6; else goto Label_split_227_23;

Label_split_227_23:
  if (count(1,0), var_inv_t_rev2xs_x_ys == 0) goto Label_inv_x_ysrev8; else goto Label_split_228_24;

Label_split_228_24:
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_230_28;
  goto Label__cons;
  Return_230_28:
  tmp = var_inv_t_rev6x_ys;
  var_inv_t_rev6x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_rev7x_ys;
  var_inv_t_rev7x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_rev6x_ys);
  var_inv_t_rev6x_ys = (tmp);
  if (count(1,0), var_inv_t_rev6x_ys != 0) goto Label_inv_x_ysrev7; else goto Label_join_235_14;

Label_inv_x_ysrev8:
  if (count(1,0), !(var_inv_t_rev7x_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 235\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_inv_t_rev7x_ys);
  var_inv_t_rev7x_ys = (tmp);
  goto Label_join_237_14;

Label_join_235_14:
  if (count(1,0), var_inv_t_rev7x_ys == 0){
    fprintf(stderr,"\nJoin failure at line 235\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_inv_t_rev7x_ys);
  var_inv_t_rev7x_ys = (tmp);
  goto Label_join_237_14;

Label_inv_x_ysrev7:
  if (count(1,0), !(var_inv_t_rev6x_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 237\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_rev6x_ys);
  var_inv_t_rev6x_ys = (tmp);
  tmp = var_inv_t_rev6x_ys;
  var_inv_t_rev6x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_rev7x_ys;
  var_inv_t_rev7x_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_241_29;
  goto Label_cons;
  Return_241_29:
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_243_14;

Label_join_237_14:
  if (count(1,0), var_inv_t_rev6x_ys != 0){
    fprintf(stderr,"\nJoin failure at line 237\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_rev6x_ys);
  var_inv_t_rev6x_ys = (tmp);
  tmp = var_inv_t_rev6x_ys;
  var_inv_t_rev6x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_rev7x_ys;
  var_inv_t_rev7x_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_241_30;
  goto Label_cons;
  Return_241_30:
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_243_14;

Label_inv_x_ysrev6:
  if (count(1,0), !((var_inv_t_rev2xs_x_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 243\n");
  writeVars(); goto programEnd;
}
  goto Label_join_244_17;

Label_join_243_14:
  if (count(1,0), (var_inv_t_rev2xs_x_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 243\n");
  writeVars(); goto programEnd;
}
  goto Label_join_244_17;

Label_inv_xs_x_ysrev2:
  if (count(1,0), !(var_inv_t_rev1xs_x_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 244\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t_rev1xs_x_ys);
  var_inv_t_rev1xs_x_ys = (tmp);
  tmp = var_inv_t_rev1xs_x_ys;
  var_inv_t_rev1xs_x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_248_31;
  goto Label_cons;
  Return_248_31:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_250_17;

Label_join_244_17:
  if (count(1,0), var_inv_t_rev1xs_x_ys != 0){
    fprintf(stderr,"\nJoin failure at line 244\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t_rev1xs_x_ys);
  var_inv_t_rev1xs_x_ys = (tmp);
  tmp = var_inv_t_rev1xs_x_ys;
  var_inv_t_rev1xs_x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_248_32;
  goto Label_cons;
  Return_248_32:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_250_17;

Label_inv_xs_x_ysrev1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 250\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_1;

Label_join_250_17:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 250\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_1;

Label_rev_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 255\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_2;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 258\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_copyP < var_H) goto Label_copySymbol; else goto Label_split_259_11;

Label_split_259_11:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_264_12;

Label_copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 264\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 266\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_264_12:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 264\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 266\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 270\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 271\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 272\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 273\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 274\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_275_33;
  goto Label_hash;
  Return_275_33:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_278_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 278\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_279_15;

Label_join_278_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 278\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_279_15;

Label_split_279_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_281_19;

Label_split_281_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_283_19;

Label_split_283_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_285_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 285\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_287_10;

Label_join_285_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 285\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_287_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 287\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_290_17;

Label_join_287_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 287\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_290_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 290\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_292_15;

Label_join_290_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 290\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_292_15;

Label_split_292_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_293_15;

Label_split_293_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_295_34;
  goto Label__hash;
  Return_295_34:
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
  goto Label_join_302_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 302\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 303\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 304\n");
  writeVars(); goto programEnd;
}
  goto Label_join_305_12;

Label_join_302_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 302\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 303\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 304\n");
  writeVars(); goto programEnd;
}
  goto Label_join_305_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 305\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_305_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 305\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_310_35;
  goto Label__hash;
  Return_310_35:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_311_11;

Label_split_311_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_313_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 313\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_316_11;

Label_join_313_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 313\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_316_11;

Label_split_316_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_318_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 318\n");
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

Label_join_318_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 318\n");
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
    fprintf(stderr,"\nAssertion failure at line 328\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_330_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 330\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_331_10;

Label_join_330_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 330\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_331_10;

Label_split_331_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_333_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 333\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_335_10;

Label_join_333_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 333\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_335_10;

Label_split_335_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 340\n");
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

Label__join_47_7:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~45\n");
  writeVars(); goto programEnd;
}

printf("max refs = %d\n",A);
fprintf(stderr,"%d %d\n", var_consA, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_41_36;
  goto Label_cons;
  Return_41_36:
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
  tmp = var_A0;
  var_A0 = (var_consA);
  var_consA = (tmp);
fprintf(stderr,"%d %d\n", var_consA, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_37_37;
  goto Label_cons;
  Return_37_37:
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
fprintf(stderr,"%d %d\n", var_consA, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_33_38;
  goto Label_cons;
  Return_33_38:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_31_39;
  goto Label__reverse;
  Return_31_39:
  count(2,0);
   stack[stackPointer++] = &&Return_28_40;
  goto Label__build;
  Return_28_40:
  count(2,0);
   stack[stackPointer++] = &&Return_27_41;
  goto Label__initialise;
  Return_27_41:
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
    fprintf(stderr,"\nJoin failure at line 48\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_47_7;

Label__split_48_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 48\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_47_7;

Label__join_50_7:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_48_10;

Label__dump1:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 52\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_50_7;

Label__split_52_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 52\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_50_7;

Label__main:
fprintf(stderr,"%d,", var_y);
  goto Label__split_52_10;

Label__initialise:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_60_42;
  goto Label__cons;
  Return_60_42:
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
   stack[stackPointer++] = &&Return_74_43;
  goto Label__cons;
  Return_74_43:
count(1, 0);
  var_consA = (var_consA - (11 + 0));
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_71_44;
  goto Label__cons;
  Return_71_44:
count(1, 0);
  var_consA = (var_consA - (9 + 0));
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_68_45;
  goto Label__cons;
  Return_68_45:
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
    fprintf(stderr,"\nJoin failure at line 90\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  goto Label__reverse_entry_1;

Label__join_94_28:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 90\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  goto Label__reverse_entry_1;

Label__inv_xs_C2_reverse5:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 95\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__C2__ys_rev_xs_C2__reverse3; else goto Label__join_94_28;

Label__split_95_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 95\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__C2__ys_rev_xs_C2__reverse3; else goto Label__join_94_28;

Label__inv_xs_C2_reverse7:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 96\n");
  writeVars(); goto programEnd;
}
  goto Label__split_95_7;

Label__split_96_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 96\n");
  writeVars(); goto programEnd;
}
  goto Label__split_95_7;

Label__inv_xs_C2_reverse6:
  if (count(1,0), !(var_inv_t_reverse5xs_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 102\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t_reverse5xs_C2_);
  var_inv_t_reverse5xs_C2_ = (tmp);
  tmp = var_inv_t_reverse6xs_C2_;
  var_inv_t_reverse6xs_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_reverse5xs_C2_;
  var_inv_t_reverse5xs_C2_ = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_98_46;
  goto Label_cons;
  Return_98_46:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_96_8;

Label__join_103_20:
  if (count(1,0), var_inv_t_reverse5xs_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 102\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t_reverse5xs_C2_);
  var_inv_t_reverse5xs_C2_ = (tmp);
  tmp = var_inv_t_reverse6xs_C2_;
  var_inv_t_reverse6xs_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_reverse5xs_C2_;
  var_inv_t_reverse5xs_C2_ = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_98_47;
  goto Label_cons;
  Return_98_47:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_96_8;

Label__inv_5reverse10:
  if (count(1,0), !(var_inv_t_reverse6xs_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 104\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_reverse6xs_C2_ == 0) goto Label__inv_xs_C2_reverse7; else goto Label__join_103_20;

Label__split_104_27:
  if (count(1,0), var_inv_t_reverse6xs_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 104\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_reverse6xs_C2_ == 0) goto Label__inv_xs_C2_reverse7; else goto Label__join_103_20;

Label__join_106_16:
count(1, 0);
  var_inv_t_reverse6xs_C2_ = (var_inv_t_reverse6xs_C2_ - (2 + 0));
  goto Label__split_104_27;

Label__join_107_20:
  if (count(1,0), var_inv_t_reverse6xs_C2_ != 2) goto Label__inv_5reverse10; else goto Label__join_106_16;

Label__join_113_20:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_111_48;
  goto Label__cons;
  Return_111_48:
  tmp = var_inv_t_reverse6xs_C2_;
  var_inv_t_reverse6xs_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_reverse5xs_C2_;
  var_inv_t_reverse5xs_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_xs;
  var_xs = (var_inv_t_reverse5xs_C2_);
  var_inv_t_reverse5xs_C2_ = (tmp);
  if (count(1,0), var_inv_t_reverse5xs_C2_ != 0) goto Label__inv_xs_C2_reverse6; else goto Label__join_107_20;

Label__reverse11:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 114\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_C2_reverse5; else goto Label__join_113_20;

Label__split_114_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 114\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_C2_reverse5; else goto Label__join_113_20;

Label__reverse14:
  if (count(1,0), !(var_t11C2__ys != 2)){
    fprintf(stderr,"\nJoin failure at line 119\n");
  writeVars(); goto programEnd;
}
  tmp = var_t12C2__ys;
  var_t12C2__ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t11C2__ys;
  var_t11C2__ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_116_49;
  goto Label_cons;
  Return_116_49:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_114_7;

Label__split_119_16:
  if (count(1,0), var_t11C2__ys != 2){
    fprintf(stderr,"\nJoin failure at line 119\n");
  writeVars(); goto programEnd;
}
  tmp = var_t12C2__ys;
  var_t12C2__ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t11C2__ys;
  var_t11C2__ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_116_50;
  goto Label_cons;
  Return_116_50:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_114_7;

Label__join_121_11:
count(1, 0);
  var_t11C2__ys = (var_t11C2__ys + (2 + 0));
  goto Label__split_119_16;

Label__reverse12:
  if (count(1,0), !(var_t11C2__ys != 0)){
    fprintf(stderr,"\nJoin failure at line 122\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t11C2__ys != 0) goto Label__reverse14; else goto Label__join_121_11;

Label__split_122_16:
  if (count(1,0), var_t11C2__ys != 0){
    fprintf(stderr,"\nJoin failure at line 122\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t11C2__ys != 0) goto Label__reverse14; else goto Label__join_121_11;

Label__reverse13:
  if (count(1,0), !(var_t12C2__ys == 0)){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_t12C2__ys);
  var_t12C2__ys = (tmp);
  goto Label__split_122_16;

Label__join_125_11:
  if (count(1,0), var_t12C2__ys == 0){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_t12C2__ys);
  var_t12C2__ys = (tmp);
  goto Label__split_122_16;

Label__inv_5reverse16:
  if (count(1,0), !(var_t11C2__ys != 0)){
    fprintf(stderr,"\nJoin failure at line 126\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t11C2__ys != 0) goto Label__reverse12; else goto Label__join_125_11;

Label__split_126_16:
  if (count(1,0), var_t11C2__ys != 0){
    fprintf(stderr,"\nJoin failure at line 126\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t11C2__ys != 0) goto Label__reverse12; else goto Label__join_125_11;

Label__join_128_16:
count(1, 0);
  var_t11C2__ys = (var_t11C2__ys - (2 + 0));
  goto Label__split_126_16;

Label__join_133_11:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_131_51;
  goto Label__cons;
  Return_131_51:
  tmp = var_t12C2__ys;
  var_t12C2__ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t11C2__ys;
  var_t11C2__ys = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_t11C2__ys != 2) goto Label__inv_5reverse16; else goto Label__join_128_16;

Label__join_134_11:
  if (count(1,0), var_A == 0) goto Label__reverse13; else goto Label__join_133_11;

Label__C2__ys_rev_xs_C2__reverse4:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 135\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__reverse11; else goto Label__join_134_11;

Label__split_135_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 135\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__reverse11; else goto Label__join_134_11;

Label__C2__ys_rev_xs_C2__reverse3:
  count(2,0);
   stack[stackPointer++] = &&Return_136_52;
  goto Label__rev;
  Return_136_52:
  goto Label__split_135_8;

Label__join_140_16:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~139\n");
  writeVars(); goto programEnd;
}
  goto Label__C2__ys_rev_xs_C2__reverse4;

Label__reverse_exit_1:
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__reverse_exit_2; else goto Label__join_140_16;

Label__reverse_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~149\n");
  writeVars(); goto programEnd;
}
  goto Label__reverse_entry_2;

Label__rev_entry_1:
  goto *stack[--stackPointer];

Label__rev:
  goto Label__rev_exit_1;

Label__rev12:
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

Label__rev15:
  if (count(1,0), !((var_t12x_xs_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 165\n");
  writeVars(); goto programEnd;
}
  tmp = var_t13x_xs_ys;
  var_t13x_xs_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_162_53;
  goto Label_cons;
  Return_162_53:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_160_7;

Label__split_165_16:
  if (count(1,0), (var_t12x_xs_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 165\n");
  writeVars(); goto programEnd;
}
  tmp = var_t13x_xs_ys;
  var_t13x_xs_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_162_54;
  goto Label_cons;
  Return_162_54:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_160_7;

Label__rev16:
  if (count(1,0), !(var_t15x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 171\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t15x_xs);
  var_t15x_xs = (tmp);
  tmp = var_t16x_xs;
  var_t16x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_t15x_xs;
  var_t15x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_167_55;
  goto Label_cons;
  Return_167_55:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label__split_165_16;

Label__split_171_14:
  if (count(1,0), var_t15x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 171\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t15x_xs);
  var_t15x_xs = (tmp);
  tmp = var_t16x_xs;
  var_t16x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_t15x_xs;
  var_t15x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_167_56;
  goto Label_cons;
  Return_167_56:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label__split_165_16;

Label__rev17:
  if (count(1,0), !(var_t16x_xs == 0)){
    fprintf(stderr,"\nJoin failure at line 173\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_t16x_xs);
  var_t16x_xs = (tmp);
  goto Label__split_171_14;

Label__join_174_7:
  if (count(1,0), var_t16x_xs == 0){
    fprintf(stderr,"\nJoin failure at line 173\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_t16x_xs);
  var_t16x_xs = (tmp);
  goto Label__split_171_14;

Label__join_180_7:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_178_57;
  goto Label__cons;
  Return_178_57:
  tmp = var_t16x_xs;
  var_t16x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_t15x_xs;
  var_t15x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_t15x_xs);
  var_t15x_xs = (tmp);
  if (count(1,0), var_t15x_xs != 0) goto Label__rev16; else goto Label__join_174_7;

Label__join_181_7:
  if (count(1,0), var_t12x_xs_ys == 0) goto Label__rev17; else goto Label__join_180_7;

Label__rev13:
  if (count(1,0), !(var_t12x_xs_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 182\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t12x_xs_ys & 3)) goto Label__rev15; else goto Label__join_181_7;

Label__split_182_17:
  if (count(1,0), var_t12x_xs_ys != 0){
    fprintf(stderr,"\nJoin failure at line 182\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t12x_xs_ys & 3)) goto Label__rev15; else goto Label__join_181_7;

Label__rev14:
  if (count(1,0), !(var_t13x_xs_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 184\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_t13x_xs_ys);
  var_t13x_xs_ys = (tmp);
  goto Label__split_182_17;

Label__join_185_7:
  if (count(1,0), var_t13x_xs_ys == 0){
    fprintf(stderr,"\nJoin failure at line 184\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_t13x_xs_ys);
  var_t13x_xs_ys = (tmp);
  goto Label__split_182_17;

Label__inv_x_xsrev22:
  if (count(1,0), !((var_t12x_xs_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 186\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t12x_xs_ys != 0) goto Label__rev13; else goto Label__join_185_7;

Label__split_186_16:
  if (count(1,0), (var_t12x_xs_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 186\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t12x_xs_ys != 0) goto Label__rev13; else goto Label__join_185_7;

Label__inv_x_xsrev24:
  if (count(1,0), !(var_t12x_xs_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 187\n");
  writeVars(); goto programEnd;
}
  goto Label__split_186_16;

Label__split_187_17:
  if (count(1,0), var_t12x_xs_ys == 0){
    fprintf(stderr,"\nJoin failure at line 187\n");
  writeVars(); goto programEnd;
}
  goto Label__split_186_16;

Label__inv_x_xsrev23:
  if (count(1,0), !(var_inv_t_rev22x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 193\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_rev22x_xs);
  var_inv_t_rev22x_xs = (tmp);
  tmp = var_inv_t_rev23x_xs;
  var_inv_t_rev23x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_rev22x_xs;
  var_inv_t_rev22x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_189_58;
  goto Label_cons;
  Return_189_58:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label__split_187_17;

Label__join_194_15:
  if (count(1,0), var_inv_t_rev22x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 193\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_rev22x_xs);
  var_inv_t_rev22x_xs = (tmp);
  tmp = var_inv_t_rev23x_xs;
  var_inv_t_rev23x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_rev22x_xs;
  var_inv_t_rev22x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_189_59;
  goto Label_cons;
  Return_189_59:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label__split_187_17;

Label__join_196_15:
  tmp = var_xs;
  var_xs = (var_inv_t_rev23x_xs);
  var_inv_t_rev23x_xs = (tmp);
  if (count(1,0), var_inv_t_rev23x_xs == 0) goto Label__inv_x_xsrev24; else goto Label__join_194_15;

Label__join_202_15:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_200_60;
  goto Label__cons;
  Return_200_60:
  tmp = var_inv_t_rev23x_xs;
  var_inv_t_rev23x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_rev22x_xs;
  var_inv_t_rev22x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_rev22x_xs);
  var_inv_t_rev22x_xs = (tmp);
  if (count(1,0), var_inv_t_rev22x_xs != 0) goto Label__inv_x_xsrev23; else goto Label__join_196_15;

Label__join_207_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_205_61;
  goto Label__cons;
  Return_205_61:
  tmp = var_t13x_xs_ys;
  var_t13x_xs_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consA);
  var_consA = (tmp);
  if (count(1,0), (var_t12x_xs_ys & 3)) goto Label__inv_x_xsrev22; else goto Label__join_202_15;

Label__join_208_7:
  if (count(1,0), var_A == 0) goto Label__rev14; else goto Label__join_207_7;

Label__rev_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__rev12; else goto Label__join_208_7;

Label__join_214_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__rev12; else goto Label__join_208_7;

Label__inv_xs_x_ysrev1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 218\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__rev_exit_2; else goto Label__join_214_12;

Label__split_218_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 218\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__rev_exit_2; else goto Label__join_214_12;

Label__inv_xs_x_ysrev3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
  goto Label__split_218_7;

Label__split_219_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
  goto Label__split_218_7;

Label__inv_xs_x_ysrev2:
  if (count(1,0), !(var_inv_t_rev1xs_x_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 225\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t_rev1xs_x_ys);
  var_inv_t_rev1xs_x_ys = (tmp);
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_rev1xs_x_ys;
  var_inv_t_rev1xs_x_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_221_62;
  goto Label_cons;
  Return_221_62:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_219_8;

Label__join_226_17:
  if (count(1,0), var_inv_t_rev1xs_x_ys != 0){
    fprintf(stderr,"\nJoin failure at line 225\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t_rev1xs_x_ys);
  var_inv_t_rev1xs_x_ys = (tmp);
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_rev1xs_x_ys;
  var_inv_t_rev1xs_x_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_221_63;
  goto Label_cons;
  Return_221_63:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_219_8;

Label__inv_x_ysrev6:
  if (count(1,0), !((var_inv_t_rev2xs_x_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 227\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_rev2xs_x_ys == 0) goto Label__inv_xs_x_ysrev3; else goto Label__join_226_17;

Label__split_227_23:
  if (count(1,0), (var_inv_t_rev2xs_x_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 227\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_rev2xs_x_ys == 0) goto Label__inv_xs_x_ysrev3; else goto Label__join_226_17;

Label__inv_x_ysrev8:
  if (count(1,0), !(var_inv_t_rev2xs_x_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 228\n");
  writeVars(); goto programEnd;
}
  goto Label__split_227_23;

Label__split_228_24:
  if (count(1,0), var_inv_t_rev2xs_x_ys == 0){
    fprintf(stderr,"\nJoin failure at line 228\n");
  writeVars(); goto programEnd;
}
  goto Label__split_227_23;

Label__inv_x_ysrev7:
  if (count(1,0), !(var_inv_t_rev6x_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 234\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_rev6x_ys);
  var_inv_t_rev6x_ys = (tmp);
  tmp = var_inv_t_rev7x_ys;
  var_inv_t_rev7x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_rev6x_ys;
  var_inv_t_rev6x_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_230_64;
  goto Label_cons;
  Return_230_64:
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consP);
  var_consP = (tmp);
  goto Label__split_228_24;

Label__join_235_14:
  if (count(1,0), var_inv_t_rev6x_ys != 0){
    fprintf(stderr,"\nJoin failure at line 234\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_rev6x_ys);
  var_inv_t_rev6x_ys = (tmp);
  tmp = var_inv_t_rev7x_ys;
  var_inv_t_rev7x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_rev6x_ys;
  var_inv_t_rev6x_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_230_65;
  goto Label_cons;
  Return_230_65:
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consP);
  var_consP = (tmp);
  goto Label__split_228_24;

Label__join_237_14:
  tmp = var_ys;
  var_ys = (var_inv_t_rev7x_ys);
  var_inv_t_rev7x_ys = (tmp);
  if (count(1,0), var_inv_t_rev7x_ys == 0) goto Label__inv_x_ysrev8; else goto Label__join_235_14;

Label__join_243_14:
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_241_66;
  goto Label__cons;
  Return_241_66:
  tmp = var_inv_t_rev7x_ys;
  var_inv_t_rev7x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_rev6x_ys;
  var_inv_t_rev6x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_rev6x_ys);
  var_inv_t_rev6x_ys = (tmp);
  if (count(1,0), var_inv_t_rev6x_ys != 0) goto Label__inv_x_ysrev7; else goto Label__join_237_14;

Label__join_244_17:
  if (count(1,0), (var_inv_t_rev2xs_x_ys & 3)) goto Label__inv_x_ysrev6; else goto Label__join_243_14;

Label__join_250_17:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_248_67;
  goto Label__cons;
  Return_248_67:
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_rev1xs_x_ys;
  var_inv_t_rev1xs_x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_xs;
  var_xs = (var_inv_t_rev1xs_x_ys);
  var_inv_t_rev1xs_x_ys = (tmp);
  if (count(1,0), var_inv_t_rev1xs_x_ys != 0) goto Label__inv_xs_x_ysrev2; else goto Label__join_244_17;

Label__rev_exit_1:
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_x_ysrev1; else goto Label__join_250_17;

Label__rev_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~255\n");
  writeVars(); goto programEnd;
}
  goto Label__rev_entry_2;

Label__copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 259\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~258\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_259_11:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 259\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~258\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_264_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_259_11;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~266\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), var_copyP < var_H) goto Label__copySymbol; else goto Label__join_264_12;

Label__join_278_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_275_68;
  goto Label__hash;
  Return_275_68:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~274\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~273\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~272\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~271\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~270\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 279\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_278_16;

Label__split_279_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 279\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_278_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 281\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_279_15;

Label__split_281_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 281\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_279_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 283\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_281_19;

Label__split_283_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 283\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_281_19;

Label__join_285_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_283_19;

Label__join_287_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_285_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 289\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_287_10;

Label__join_290_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 289\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_287_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 292\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_290_17;

Label__split_292_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 292\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_290_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 293\n");
  writeVars(); goto programEnd;
}
  goto Label__split_292_15;

Label__split_293_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 293\n");
  writeVars(); goto programEnd;
}
  goto Label__split_292_15;

Label__join_302_9:
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
   stack[stackPointer++] = &&Return_295_69;
  goto Label_hash;
  Return_295_69:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_293_15;

Label__join_305_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~304\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~303\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_302_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_305_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 311\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_310_70;
  goto Label_hash;
  Return_310_70:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_311_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 311\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_310_71;
  goto Label_hash;
  Return_310_71:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_313_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_311_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 316\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_313_13;

Label__split_316_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 316\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_313_13;

Label__join_318_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_316_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_318_13;

Label__join_330_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~328\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 331\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_330_6;

Label__split_331_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 331\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_330_6;

Label__join_333_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_331_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 335\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_333_6;

Label__split_335_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 335\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_333_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_335_10;

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
    fprintf(stderr,"\nAssertion failure at line ~340\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}