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
  goto Label__reverse;
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
  if (count(1,0), var_A != 0) goto Label_reverse_entry_2; else goto Label_join_78_28;

Label_C2__ys_rev_xs_C2__reverse3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 78\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_C2_reverse5; else goto Label_split_79_7;

Label_join_78_28:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 78\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_C2_reverse5; else goto Label_split_79_7;

Label_split_79_7:
  if (count(1,0), var_A == 0) goto Label_inv_xs_C2_reverse7; else goto Label_split_80_8;

Label_split_80_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_82_6;
  goto Label__cons;
  Return_82_6:
  tmp = var_inv_t_reverse5xs_C2_;
  var_inv_t_reverse5xs_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_reverse6xs_C2_;
  var_inv_t_reverse6xs_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_xs;
  var_xs = (var_inv_t_reverse5xs_C2_);
  var_inv_t_reverse5xs_C2_ = (tmp);
  if (count(1,0), var_inv_t_reverse5xs_C2_ != 0) goto Label_inv_xs_C2_reverse6; else goto Label_join_87_20;

Label_inv_xs_C2_reverse7:
  if (count(1,0), !(var_inv_t_reverse6xs_C2_ == 0)){
    fprintf(stderr,"\nJoin failure at line 87\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_reverse6xs_C2_ != 0) goto Label_inv_5reverse10; else goto Label_split_88_27;

Label_join_87_20:
  if (count(1,0), var_inv_t_reverse6xs_C2_ == 0){
    fprintf(stderr,"\nJoin failure at line 87\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_reverse6xs_C2_ != 0) goto Label_inv_5reverse10; else goto Label_split_88_27;

Label_split_88_27:
count(1, 0);
  var_inv_t_reverse6xs_C2_ = (var_inv_t_reverse6xs_C2_ + (2 + 0));
  goto Label_join_90_16;

Label_inv_5reverse10:
  if (count(1,0), !(var_inv_t_reverse6xs_C2_ != 2)){
    fprintf(stderr,"\nJoin failure at line 90\n");
  writeVars(); goto programEnd;
}
  goto Label_join_91_20;

Label_join_90_16:
  if (count(1,0), var_inv_t_reverse6xs_C2_ != 2){
    fprintf(stderr,"\nJoin failure at line 90\n");
  writeVars(); goto programEnd;
}
  goto Label_join_91_20;

Label_inv_xs_C2_reverse6:
  if (count(1,0), !(var_inv_t_reverse5xs_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 91\n");
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
   stack[stackPointer++] = &&Return_95_7;
  goto Label_cons;
  Return_95_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_97_20;

Label_join_91_20:
  if (count(1,0), var_inv_t_reverse5xs_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 91\n");
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
   stack[stackPointer++] = &&Return_95_8;
  goto Label_cons;
  Return_95_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_97_20;

Label_inv_xs_C2_reverse5:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_reverse11; else goto Label_split_98_7;

Label_join_97_20:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_reverse11; else goto Label_split_98_7;

Label_split_98_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_100_9;
  goto Label__cons;
  Return_100_9:
  tmp = var_t11C2__ys;
  var_t11C2__ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t12C2__ys;
  var_t12C2__ys = (var_consD);
  var_consD = (tmp);
  if (count(1,0), var_t11C2__ys != 2) goto Label_reverse14; else goto Label_split_103_16;

Label_split_103_16:
count(1, 0);
  var_t11C2__ys = (var_t11C2__ys - (2 + 0));
  goto Label_join_105_11;

Label_reverse14:
  if (count(1,0), !(var_t11C2__ys != 0)){
    fprintf(stderr,"\nJoin failure at line 105\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t11C2__ys != 0) goto Label_reverse12; else goto Label_split_106_16;

Label_join_105_11:
  if (count(1,0), var_t11C2__ys != 0){
    fprintf(stderr,"\nJoin failure at line 105\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t11C2__ys != 0) goto Label_reverse12; else goto Label_split_106_16;

Label_split_106_16:
  tmp = var_ys;
  var_ys = (var_t12C2__ys);
  var_t12C2__ys = (tmp);
  if (count(1,0), var_t12C2__ys == 0) goto Label_reverse13; else goto Label_join_109_11;

Label_reverse12:
  if (count(1,0), !(var_t11C2__ys != 0)){
    fprintf(stderr,"\nJoin failure at line 109\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t11C2__ys != 0) goto Label_inv_5reverse16; else goto Label_split_110_16;

Label_join_109_11:
  if (count(1,0), var_t11C2__ys != 0){
    fprintf(stderr,"\nJoin failure at line 109\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t11C2__ys != 0) goto Label_inv_5reverse16; else goto Label_split_110_16;

Label_split_110_16:
count(1, 0);
  var_t11C2__ys = (var_t11C2__ys + (2 + 0));
  goto Label_join_112_16;

Label_inv_5reverse16:
  if (count(1,0), !(var_t11C2__ys != 2)){
    fprintf(stderr,"\nJoin failure at line 112\n");
  writeVars(); goto programEnd;
}
  tmp = var_t11C2__ys;
  var_t11C2__ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t12C2__ys;
  var_t12C2__ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_115_10;
  goto Label_cons;
  Return_115_10:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_117_11;

Label_join_112_16:
  if (count(1,0), var_t11C2__ys != 2){
    fprintf(stderr,"\nJoin failure at line 112\n");
  writeVars(); goto programEnd;
}
  tmp = var_t11C2__ys;
  var_t11C2__ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t12C2__ys;
  var_t12C2__ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_115_11;
  goto Label_cons;
  Return_115_11:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_117_11;

Label_reverse13:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  goto Label_join_118_11;

Label_join_117_11:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  goto Label_join_118_11;

Label_reverse11:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 118\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label_C2__ys_rev_xs_C2__reverse4; else goto Label_split_119_8;

Label_join_118_11:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 118\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label_C2__ys_rev_xs_C2__reverse4; else goto Label_split_119_8;

Label_split_119_8:
  count(2,0);
   stack[stackPointer++] = &&Return_120_12;
  goto Label_rev;
  Return_120_12:
  goto Label_C2__ys_rev_xs_C2__reverse3;

Label_C2__ys_rev_xs_C2__reverse4:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 123\n");
  writeVars(); goto programEnd;
}
  goto Label_join_124_16;

Label_reverse_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label_reverse_exit_1;

Label_join_124_16:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label_reverse_exit_1;

Label_reverse_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 133\n");
  writeVars(); goto programEnd;
}
  goto Label_reverse_exit_2;

Label_rev:
  goto Label_rev_entry_1;

Label_rev_exit_1:
  goto *stack[--stackPointer];

Label_rev_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_rev12; else goto Label_split_144_7;

Label_split_144_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_146_13;
  goto Label__cons;
  Return_146_13:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t13x_xs_ys;
  var_t13x_xs_ys = (var_consD);
  var_consD = (tmp);
  if (count(1,0), (var_t12x_xs_ys & 3)) goto Label_rev15; else goto Label_split_149_16;

Label_split_149_16:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_151_14;
  goto Label__cons;
  Return_151_14:
  tmp = var_t15x_xs;
  var_t15x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_t16x_xs;
  var_t16x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_t15x_xs);
  var_t15x_xs = (tmp);
  if (count(1,0), var_t15x_xs != 0) goto Label_rev16; else goto Label_split_155_14;

Label_split_155_14:
  tmp = var_xs;
  var_xs = (var_t16x_xs);
  var_t16x_xs = (tmp);
  if (count(1,0), var_t16x_xs == 0) goto Label_rev17; else goto Label_join_158_7;

Label_rev16:
  if (count(1,0), !(var_t15x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 158\n");
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
   stack[stackPointer++] = &&Return_162_15;
  goto Label_cons;
  Return_162_15:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_164_7;

Label_join_158_7:
  if (count(1,0), var_t15x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 158\n");
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
   stack[stackPointer++] = &&Return_162_16;
  goto Label_cons;
  Return_162_16:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_164_7;

Label_rev17:
  if (count(1,0), !(var_t12x_xs_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 164\n");
  writeVars(); goto programEnd;
}
  goto Label_join_165_7;

Label_join_164_7:
  if (count(1,0), var_t12x_xs_ys == 0){
    fprintf(stderr,"\nJoin failure at line 164\n");
  writeVars(); goto programEnd;
}
  goto Label_join_165_7;

Label_rev15:
  if (count(1,0), !((var_t12x_xs_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 165\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t12x_xs_ys != 0) goto Label_rev13; else goto Label_split_166_17;

Label_join_165_7:
  if (count(1,0), (var_t12x_xs_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 165\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t12x_xs_ys != 0) goto Label_rev13; else goto Label_split_166_17;

Label_split_166_17:
  tmp = var_ys;
  var_ys = (var_t13x_xs_ys);
  var_t13x_xs_ys = (tmp);
  if (count(1,0), var_t13x_xs_ys == 0) goto Label_rev14; else goto Label_join_169_7;

Label_rev13:
  if (count(1,0), !(var_t12x_xs_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 169\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t12x_xs_ys & 3)) goto Label_inv_x_xsrev22; else goto Label_split_170_16;

Label_join_169_7:
  if (count(1,0), var_t12x_xs_ys != 0){
    fprintf(stderr,"\nJoin failure at line 169\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t12x_xs_ys & 3)) goto Label_inv_x_xsrev22; else goto Label_split_170_16;

Label_split_170_16:
  if (count(1,0), var_t12x_xs_ys == 0) goto Label_inv_x_xsrev24; else goto Label_split_171_17;

Label_split_171_17:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_173_17;
  goto Label__cons;
  Return_173_17:
  tmp = var_inv_t_rev22x_xs;
  var_inv_t_rev22x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_rev23x_xs;
  var_inv_t_rev23x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_rev22x_xs);
  var_inv_t_rev22x_xs = (tmp);
  if (count(1,0), var_inv_t_rev22x_xs != 0) goto Label_inv_x_xsrev23; else goto Label_join_178_15;

Label_inv_x_xsrev24:
  if (count(1,0), !(var_inv_t_rev23x_xs == 0)){
    fprintf(stderr,"\nJoin failure at line 178\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t_rev23x_xs);
  var_inv_t_rev23x_xs = (tmp);
  goto Label_join_180_15;

Label_join_178_15:
  if (count(1,0), var_inv_t_rev23x_xs == 0){
    fprintf(stderr,"\nJoin failure at line 178\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t_rev23x_xs);
  var_inv_t_rev23x_xs = (tmp);
  goto Label_join_180_15;

Label_inv_x_xsrev23:
  if (count(1,0), !(var_inv_t_rev22x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 180\n");
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
   stack[stackPointer++] = &&Return_184_18;
  goto Label_cons;
  Return_184_18:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_186_15;

Label_join_180_15:
  if (count(1,0), var_inv_t_rev22x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 180\n");
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
   stack[stackPointer++] = &&Return_184_19;
  goto Label_cons;
  Return_184_19:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_186_15;

Label_inv_x_xsrev22:
  if (count(1,0), !((var_t12x_xs_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 186\n");
  writeVars(); goto programEnd;
}
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t13x_xs_ys;
  var_t13x_xs_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_189_20;
  goto Label_cons;
  Return_189_20:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_191_7;

Label_join_186_15:
  if (count(1,0), (var_t12x_xs_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 186\n");
  writeVars(); goto programEnd;
}
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_t13x_xs_ys;
  var_t13x_xs_ys = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_189_21;
  goto Label_cons;
  Return_189_21:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_191_7;

Label_rev14:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 191\n");
  writeVars(); goto programEnd;
}
  goto Label_join_192_7;

Label_join_191_7:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 191\n");
  writeVars(); goto programEnd;
}
  goto Label_join_192_7;

Label_rev12:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 192\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_rev_entry_2; else goto Label_join_198_12;

Label_join_192_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 192\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_rev_entry_2; else goto Label_join_198_12;

Label_rev_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_x_ysrev1; else goto Label_split_202_7;

Label_join_198_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_x_ysrev1; else goto Label_split_202_7;

Label_split_202_7:
  if (count(1,0), var_A == 0) goto Label_inv_xs_x_ysrev3; else goto Label_split_203_8;

Label_split_203_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_205_22;
  goto Label__cons;
  Return_205_22:
  tmp = var_inv_t_rev1xs_x_ys;
  var_inv_t_rev1xs_x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_xs;
  var_xs = (var_inv_t_rev1xs_x_ys);
  var_inv_t_rev1xs_x_ys = (tmp);
  if (count(1,0), var_inv_t_rev1xs_x_ys != 0) goto Label_inv_xs_x_ysrev2; else goto Label_join_210_17;

Label_inv_xs_x_ysrev3:
  if (count(1,0), !(var_inv_t_rev2xs_x_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 210\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_rev2xs_x_ys & 3)) goto Label_inv_x_ysrev6; else goto Label_split_211_23;

Label_join_210_17:
  if (count(1,0), var_inv_t_rev2xs_x_ys == 0){
    fprintf(stderr,"\nJoin failure at line 210\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_rev2xs_x_ys & 3)) goto Label_inv_x_ysrev6; else goto Label_split_211_23;

Label_split_211_23:
  if (count(1,0), var_inv_t_rev2xs_x_ys == 0) goto Label_inv_x_ysrev8; else goto Label_split_212_24;

Label_split_212_24:
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_214_23;
  goto Label__cons;
  Return_214_23:
  tmp = var_inv_t_rev6x_ys;
  var_inv_t_rev6x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_rev7x_ys;
  var_inv_t_rev7x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_rev6x_ys);
  var_inv_t_rev6x_ys = (tmp);
  if (count(1,0), var_inv_t_rev6x_ys != 0) goto Label_inv_x_ysrev7; else goto Label_join_219_14;

Label_inv_x_ysrev8:
  if (count(1,0), !(var_inv_t_rev7x_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_inv_t_rev7x_ys);
  var_inv_t_rev7x_ys = (tmp);
  goto Label_join_221_14;

Label_join_219_14:
  if (count(1,0), var_inv_t_rev7x_ys == 0){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_inv_t_rev7x_ys);
  var_inv_t_rev7x_ys = (tmp);
  goto Label_join_221_14;

Label_inv_x_ysrev7:
  if (count(1,0), !(var_inv_t_rev6x_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 221\n");
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
   stack[stackPointer++] = &&Return_225_24;
  goto Label_cons;
  Return_225_24:
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_227_14;

Label_join_221_14:
  if (count(1,0), var_inv_t_rev6x_ys != 0){
    fprintf(stderr,"\nJoin failure at line 221\n");
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
   stack[stackPointer++] = &&Return_225_25;
  goto Label_cons;
  Return_225_25:
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consP);
  var_consP = (tmp);
  goto Label_join_227_14;

Label_inv_x_ysrev6:
  if (count(1,0), !((var_inv_t_rev2xs_x_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 227\n");
  writeVars(); goto programEnd;
}
  goto Label_join_228_17;

Label_join_227_14:
  if (count(1,0), (var_inv_t_rev2xs_x_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 227\n");
  writeVars(); goto programEnd;
}
  goto Label_join_228_17;

Label_inv_xs_x_ysrev2:
  if (count(1,0), !(var_inv_t_rev1xs_x_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 228\n");
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
   stack[stackPointer++] = &&Return_232_26;
  goto Label_cons;
  Return_232_26:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_234_17;

Label_join_228_17:
  if (count(1,0), var_inv_t_rev1xs_x_ys != 0){
    fprintf(stderr,"\nJoin failure at line 228\n");
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
   stack[stackPointer++] = &&Return_232_27;
  goto Label_cons;
  Return_232_27:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_234_17;

Label_inv_xs_x_ysrev1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 234\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_1;

Label_join_234_17:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 234\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_1;

Label_rev_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 239\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_2;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 242\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_copyP < var_H) goto Label_copySymbol; else goto Label_split_243_11;

Label_split_243_11:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_248_12;

Label_copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 248\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 250\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_248_12:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 248\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 250\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 254\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 255\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 256\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 257\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 258\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_259_28;
  goto Label_hash;
  Return_259_28:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_262_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 262\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_263_15;

Label_join_262_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 262\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_263_15;

Label_split_263_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_265_19;

Label_split_265_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_267_19;

Label_split_267_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_269_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 269\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_271_10;

Label_join_269_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 269\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_271_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 271\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_274_17;

Label_join_271_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 271\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_274_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 274\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_276_15;

Label_join_274_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 274\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_276_15;

Label_split_276_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_277_15;

Label_split_277_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_279_29;
  goto Label__hash;
  Return_279_29:
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
  goto Label_join_286_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 286\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 287\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 288\n");
  writeVars(); goto programEnd;
}
  goto Label_join_289_12;

Label_join_286_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 286\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 287\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 288\n");
  writeVars(); goto programEnd;
}
  goto Label_join_289_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 289\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_289_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 289\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_294_30;
  goto Label__hash;
  Return_294_30:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_295_11;

Label_split_295_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_297_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 297\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_300_11;

Label_join_297_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 297\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_300_11;

Label_split_300_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_302_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 302\n");
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

Label_join_302_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 302\n");
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
    fprintf(stderr,"\nAssertion failure at line 312\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_314_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 314\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_315_10;

Label_join_314_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 314\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_315_10;

Label_split_315_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_317_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 317\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_319_10;

Label_join_317_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 317\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_319_10;

Label_split_319_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 324\n");
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
  goto Label_reverse;
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

Label__join_78_28:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 74\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  goto Label__reverse_entry_1;

Label__inv_xs_C2_reverse5:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 79\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__C2__ys_rev_xs_C2__reverse3; else goto Label__join_78_28;

Label__split_79_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 79\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__C2__ys_rev_xs_C2__reverse3; else goto Label__join_78_28;

Label__inv_xs_C2_reverse7:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 80\n");
  writeVars(); goto programEnd;
}
  goto Label__split_79_7;

Label__split_80_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 80\n");
  writeVars(); goto programEnd;
}
  goto Label__split_79_7;

Label__inv_xs_C2_reverse6:
  if (count(1,0), !(var_inv_t_reverse5xs_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 86\n");
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
   stack[stackPointer++] = &&Return_82_36;
  goto Label_cons;
  Return_82_36:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_80_8;

Label__join_87_20:
  if (count(1,0), var_inv_t_reverse5xs_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 86\n");
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
   stack[stackPointer++] = &&Return_82_37;
  goto Label_cons;
  Return_82_37:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_80_8;

Label__inv_5reverse10:
  if (count(1,0), !(var_inv_t_reverse6xs_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 88\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_reverse6xs_C2_ == 0) goto Label__inv_xs_C2_reverse7; else goto Label__join_87_20;

Label__split_88_27:
  if (count(1,0), var_inv_t_reverse6xs_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 88\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_reverse6xs_C2_ == 0) goto Label__inv_xs_C2_reverse7; else goto Label__join_87_20;

Label__join_90_16:
count(1, 0);
  var_inv_t_reverse6xs_C2_ = (var_inv_t_reverse6xs_C2_ - (2 + 0));
  goto Label__split_88_27;

Label__join_91_20:
  if (count(1,0), var_inv_t_reverse6xs_C2_ != 2) goto Label__inv_5reverse10; else goto Label__join_90_16;

Label__join_97_20:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_95_38;
  goto Label__cons;
  Return_95_38:
  tmp = var_inv_t_reverse6xs_C2_;
  var_inv_t_reverse6xs_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_reverse5xs_C2_;
  var_inv_t_reverse5xs_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_xs;
  var_xs = (var_inv_t_reverse5xs_C2_);
  var_inv_t_reverse5xs_C2_ = (tmp);
  if (count(1,0), var_inv_t_reverse5xs_C2_ != 0) goto Label__inv_xs_C2_reverse6; else goto Label__join_91_20;

Label__reverse11:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 98\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_C2_reverse5; else goto Label__join_97_20;

Label__split_98_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 98\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_C2_reverse5; else goto Label__join_97_20;

Label__reverse14:
  if (count(1,0), !(var_t11C2__ys != 2)){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  tmp = var_t12C2__ys;
  var_t12C2__ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t11C2__ys;
  var_t11C2__ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_100_39;
  goto Label_cons;
  Return_100_39:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_98_7;

Label__split_103_16:
  if (count(1,0), var_t11C2__ys != 2){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  tmp = var_t12C2__ys;
  var_t12C2__ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t11C2__ys;
  var_t11C2__ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_100_40;
  goto Label_cons;
  Return_100_40:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_98_7;

Label__join_105_11:
count(1, 0);
  var_t11C2__ys = (var_t11C2__ys + (2 + 0));
  goto Label__split_103_16;

Label__reverse12:
  if (count(1,0), !(var_t11C2__ys != 0)){
    fprintf(stderr,"\nJoin failure at line 106\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t11C2__ys != 0) goto Label__reverse14; else goto Label__join_105_11;

Label__split_106_16:
  if (count(1,0), var_t11C2__ys != 0){
    fprintf(stderr,"\nJoin failure at line 106\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t11C2__ys != 0) goto Label__reverse14; else goto Label__join_105_11;

Label__reverse13:
  if (count(1,0), !(var_t12C2__ys == 0)){
    fprintf(stderr,"\nJoin failure at line 108\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_t12C2__ys);
  var_t12C2__ys = (tmp);
  goto Label__split_106_16;

Label__join_109_11:
  if (count(1,0), var_t12C2__ys == 0){
    fprintf(stderr,"\nJoin failure at line 108\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_t12C2__ys);
  var_t12C2__ys = (tmp);
  goto Label__split_106_16;

Label__inv_5reverse16:
  if (count(1,0), !(var_t11C2__ys != 0)){
    fprintf(stderr,"\nJoin failure at line 110\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t11C2__ys != 0) goto Label__reverse12; else goto Label__join_109_11;

Label__split_110_16:
  if (count(1,0), var_t11C2__ys != 0){
    fprintf(stderr,"\nJoin failure at line 110\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t11C2__ys != 0) goto Label__reverse12; else goto Label__join_109_11;

Label__join_112_16:
count(1, 0);
  var_t11C2__ys = (var_t11C2__ys - (2 + 0));
  goto Label__split_110_16;

Label__join_117_11:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_115_41;
  goto Label__cons;
  Return_115_41:
  tmp = var_t12C2__ys;
  var_t12C2__ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t11C2__ys;
  var_t11C2__ys = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_t11C2__ys != 2) goto Label__inv_5reverse16; else goto Label__join_112_16;

Label__join_118_11:
  if (count(1,0), var_A == 0) goto Label__reverse13; else goto Label__join_117_11;

Label__C2__ys_rev_xs_C2__reverse4:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 119\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__reverse11; else goto Label__join_118_11;

Label__split_119_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 119\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__reverse11; else goto Label__join_118_11;

Label__C2__ys_rev_xs_C2__reverse3:
  count(2,0);
   stack[stackPointer++] = &&Return_120_42;
  goto Label__rev;
  Return_120_42:
  goto Label__split_119_8;

Label__join_124_16:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~123\n");
  writeVars(); goto programEnd;
}
  goto Label__C2__ys_rev_xs_C2__reverse4;

Label__reverse_exit_1:
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__reverse_exit_2; else goto Label__join_124_16;

Label__reverse_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~133\n");
  writeVars(); goto programEnd;
}
  goto Label__reverse_entry_2;

Label__rev_entry_1:
  goto *stack[--stackPointer];

Label__rev:
  goto Label__rev_exit_1;

Label__rev12:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 144\n");
  writeVars(); goto programEnd;
}
  goto Label__rev_entry_1;

Label__split_144_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 144\n");
  writeVars(); goto programEnd;
}
  goto Label__rev_entry_1;

Label__rev15:
  if (count(1,0), !((var_t12x_xs_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 149\n");
  writeVars(); goto programEnd;
}
  tmp = var_t13x_xs_ys;
  var_t13x_xs_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_146_43;
  goto Label_cons;
  Return_146_43:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_144_7;

Label__split_149_16:
  if (count(1,0), (var_t12x_xs_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 149\n");
  writeVars(); goto programEnd;
}
  tmp = var_t13x_xs_ys;
  var_t13x_xs_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_146_44;
  goto Label_cons;
  Return_146_44:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_144_7;

Label__rev16:
  if (count(1,0), !(var_t15x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 155\n");
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
   stack[stackPointer++] = &&Return_151_45;
  goto Label_cons;
  Return_151_45:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label__split_149_16;

Label__split_155_14:
  if (count(1,0), var_t15x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 155\n");
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
   stack[stackPointer++] = &&Return_151_46;
  goto Label_cons;
  Return_151_46:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label__split_149_16;

Label__rev17:
  if (count(1,0), !(var_t16x_xs == 0)){
    fprintf(stderr,"\nJoin failure at line 157\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_t16x_xs);
  var_t16x_xs = (tmp);
  goto Label__split_155_14;

Label__join_158_7:
  if (count(1,0), var_t16x_xs == 0){
    fprintf(stderr,"\nJoin failure at line 157\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_t16x_xs);
  var_t16x_xs = (tmp);
  goto Label__split_155_14;

Label__join_164_7:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_162_47;
  goto Label__cons;
  Return_162_47:
  tmp = var_t16x_xs;
  var_t16x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_t15x_xs;
  var_t15x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_t15x_xs);
  var_t15x_xs = (tmp);
  if (count(1,0), var_t15x_xs != 0) goto Label__rev16; else goto Label__join_158_7;

Label__join_165_7:
  if (count(1,0), var_t12x_xs_ys == 0) goto Label__rev17; else goto Label__join_164_7;

Label__rev13:
  if (count(1,0), !(var_t12x_xs_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 166\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t12x_xs_ys & 3)) goto Label__rev15; else goto Label__join_165_7;

Label__split_166_17:
  if (count(1,0), var_t12x_xs_ys != 0){
    fprintf(stderr,"\nJoin failure at line 166\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t12x_xs_ys & 3)) goto Label__rev15; else goto Label__join_165_7;

Label__rev14:
  if (count(1,0), !(var_t13x_xs_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 168\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_t13x_xs_ys);
  var_t13x_xs_ys = (tmp);
  goto Label__split_166_17;

Label__join_169_7:
  if (count(1,0), var_t13x_xs_ys == 0){
    fprintf(stderr,"\nJoin failure at line 168\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_t13x_xs_ys);
  var_t13x_xs_ys = (tmp);
  goto Label__split_166_17;

Label__inv_x_xsrev22:
  if (count(1,0), !((var_t12x_xs_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 170\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t12x_xs_ys != 0) goto Label__rev13; else goto Label__join_169_7;

Label__split_170_16:
  if (count(1,0), (var_t12x_xs_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 170\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t12x_xs_ys != 0) goto Label__rev13; else goto Label__join_169_7;

Label__inv_x_xsrev24:
  if (count(1,0), !(var_t12x_xs_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 171\n");
  writeVars(); goto programEnd;
}
  goto Label__split_170_16;

Label__split_171_17:
  if (count(1,0), var_t12x_xs_ys == 0){
    fprintf(stderr,"\nJoin failure at line 171\n");
  writeVars(); goto programEnd;
}
  goto Label__split_170_16;

Label__inv_x_xsrev23:
  if (count(1,0), !(var_inv_t_rev22x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 177\n");
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
   stack[stackPointer++] = &&Return_173_48;
  goto Label_cons;
  Return_173_48:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label__split_171_17;

Label__join_178_15:
  if (count(1,0), var_inv_t_rev22x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 177\n");
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
   stack[stackPointer++] = &&Return_173_49;
  goto Label_cons;
  Return_173_49:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  goto Label__split_171_17;

Label__join_180_15:
  tmp = var_xs;
  var_xs = (var_inv_t_rev23x_xs);
  var_inv_t_rev23x_xs = (tmp);
  if (count(1,0), var_inv_t_rev23x_xs == 0) goto Label__inv_x_xsrev24; else goto Label__join_178_15;

Label__join_186_15:
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_184_50;
  goto Label__cons;
  Return_184_50:
  tmp = var_inv_t_rev23x_xs;
  var_inv_t_rev23x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_rev22x_xs;
  var_inv_t_rev22x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_rev22x_xs);
  var_inv_t_rev22x_xs = (tmp);
  if (count(1,0), var_inv_t_rev22x_xs != 0) goto Label__inv_x_xsrev23; else goto Label__join_180_15;

Label__join_191_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_189_51;
  goto Label__cons;
  Return_189_51:
  tmp = var_t13x_xs_ys;
  var_t13x_xs_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_t12x_xs_ys;
  var_t12x_xs_ys = (var_consA);
  var_consA = (tmp);
  if (count(1,0), (var_t12x_xs_ys & 3)) goto Label__inv_x_xsrev22; else goto Label__join_186_15;

Label__join_192_7:
  if (count(1,0), var_A == 0) goto Label__rev14; else goto Label__join_191_7;

Label__rev_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 193\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__rev12; else goto Label__join_192_7;

Label__join_198_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 193\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__rev12; else goto Label__join_192_7;

Label__inv_xs_x_ysrev1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 202\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__rev_exit_2; else goto Label__join_198_12;

Label__split_202_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 202\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__rev_exit_2; else goto Label__join_198_12;

Label__inv_xs_x_ysrev3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 203\n");
  writeVars(); goto programEnd;
}
  goto Label__split_202_7;

Label__split_203_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 203\n");
  writeVars(); goto programEnd;
}
  goto Label__split_202_7;

Label__inv_xs_x_ysrev2:
  if (count(1,0), !(var_inv_t_rev1xs_x_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 209\n");
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
   stack[stackPointer++] = &&Return_205_52;
  goto Label_cons;
  Return_205_52:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_203_8;

Label__join_210_17:
  if (count(1,0), var_inv_t_rev1xs_x_ys != 0){
    fprintf(stderr,"\nJoin failure at line 209\n");
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
   stack[stackPointer++] = &&Return_205_53;
  goto Label_cons;
  Return_205_53:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_203_8;

Label__inv_x_ysrev6:
  if (count(1,0), !((var_inv_t_rev2xs_x_ys & 3))){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_rev2xs_x_ys == 0) goto Label__inv_xs_x_ysrev3; else goto Label__join_210_17;

Label__split_211_23:
  if (count(1,0), (var_inv_t_rev2xs_x_ys & 3)){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_rev2xs_x_ys == 0) goto Label__inv_xs_x_ysrev3; else goto Label__join_210_17;

Label__inv_x_ysrev8:
  if (count(1,0), !(var_inv_t_rev2xs_x_ys == 0)){
    fprintf(stderr,"\nJoin failure at line 212\n");
  writeVars(); goto programEnd;
}
  goto Label__split_211_23;

Label__split_212_24:
  if (count(1,0), var_inv_t_rev2xs_x_ys == 0){
    fprintf(stderr,"\nJoin failure at line 212\n");
  writeVars(); goto programEnd;
}
  goto Label__split_211_23;

Label__inv_x_ysrev7:
  if (count(1,0), !(var_inv_t_rev6x_ys != 0)){
    fprintf(stderr,"\nJoin failure at line 218\n");
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
   stack[stackPointer++] = &&Return_214_54;
  goto Label_cons;
  Return_214_54:
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consP);
  var_consP = (tmp);
  goto Label__split_212_24;

Label__join_219_14:
  if (count(1,0), var_inv_t_rev6x_ys != 0){
    fprintf(stderr,"\nJoin failure at line 218\n");
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
   stack[stackPointer++] = &&Return_214_55;
  goto Label_cons;
  Return_214_55:
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consP);
  var_consP = (tmp);
  goto Label__split_212_24;

Label__join_221_14:
  tmp = var_ys;
  var_ys = (var_inv_t_rev7x_ys);
  var_inv_t_rev7x_ys = (tmp);
  if (count(1,0), var_inv_t_rev7x_ys == 0) goto Label__inv_x_ysrev8; else goto Label__join_219_14;

Label__join_227_14:
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_225_56;
  goto Label__cons;
  Return_225_56:
  tmp = var_inv_t_rev7x_ys;
  var_inv_t_rev7x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_rev6x_ys;
  var_inv_t_rev6x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_rev6x_ys);
  var_inv_t_rev6x_ys = (tmp);
  if (count(1,0), var_inv_t_rev6x_ys != 0) goto Label__inv_x_ysrev7; else goto Label__join_221_14;

Label__join_228_17:
  if (count(1,0), (var_inv_t_rev2xs_x_ys & 3)) goto Label__inv_x_ysrev6; else goto Label__join_227_14;

Label__join_234_17:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_232_57;
  goto Label__cons;
  Return_232_57:
  tmp = var_inv_t_rev2xs_x_ys;
  var_inv_t_rev2xs_x_ys = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_rev1xs_x_ys;
  var_inv_t_rev1xs_x_ys = (var_consA);
  var_consA = (tmp);
  tmp = var_xs;
  var_xs = (var_inv_t_rev1xs_x_ys);
  var_inv_t_rev1xs_x_ys = (tmp);
  if (count(1,0), var_inv_t_rev1xs_x_ys != 0) goto Label__inv_xs_x_ysrev2; else goto Label__join_228_17;

Label__rev_exit_1:
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_x_ysrev1; else goto Label__join_234_17;

Label__rev_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~239\n");
  writeVars(); goto programEnd;
}
  goto Label__rev_entry_2;

Label__copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 243\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~242\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_243_11:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 243\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~242\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_248_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_243_11;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~250\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), var_copyP < var_H) goto Label__copySymbol; else goto Label__join_248_12;

Label__join_262_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_259_58;
  goto Label__hash;
  Return_259_58:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~258\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~257\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~256\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~255\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~254\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 263\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_262_16;

Label__split_263_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 263\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_262_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 265\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_263_15;

Label__split_265_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 265\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_263_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 267\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_265_19;

Label__split_267_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 267\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_265_19;

Label__join_269_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_267_19;

Label__join_271_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_269_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 273\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_271_10;

Label__join_274_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 273\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_271_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 276\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_274_17;

Label__split_276_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 276\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_274_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 277\n");
  writeVars(); goto programEnd;
}
  goto Label__split_276_15;

Label__split_277_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 277\n");
  writeVars(); goto programEnd;
}
  goto Label__split_276_15;

Label__join_286_9:
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
   stack[stackPointer++] = &&Return_279_59;
  goto Label_hash;
  Return_279_59:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_277_15;

Label__join_289_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~288\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~287\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_286_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_289_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 295\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_294_60;
  goto Label_hash;
  Return_294_60:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_295_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 295\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_294_61;
  goto Label_hash;
  Return_294_61:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_297_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_295_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 300\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_297_13;

Label__split_300_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 300\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_297_13;

Label__join_302_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_300_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_302_13;

Label__join_314_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~312\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 315\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_314_6;

Label__split_315_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 315\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_314_6;

Label__join_317_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_315_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 319\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_317_6;

Label__split_319_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 319\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_317_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_319_10;

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
    fprintf(stderr,"\nAssertion failure at line ~324\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}