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
  uint var_ys = 0;
  uint var_x = 0;
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
    printf("var_ys = \%u\n",var_ys);
    printf("var_x = \%u\n",var_x);
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
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_C2_3; else goto Label_split_80_7;

Label_join_78_21:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 78\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  if (count(1,0), (var_A & 3)) goto Label_inv_xs_C2_3; else goto Label_split_80_7;

Label_split_80_7:
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  if (count(1,0), var_A == 0) goto Label_inv_xs_C2_5; else goto Label_split_86_8;

Label_split_86_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_88_6;
  goto Label__cons;
  Return_88_6:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label_inv_xs_C2_4; else goto Label_join_92_13;

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
  goto Label_join_96_13;

Label_join_95_15:
  if (count(1,0), var_A != 2){
    fprintf(stderr,"\nJoin failure at line 95\n");
  writeVars(); goto programEnd;
}
  goto Label_join_96_13;

Label_inv_xs_C2_4:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 96\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_99_7;
  goto Label_cons;
  Return_99_7:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_104_13;

Label_join_96_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 96\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_99_8;
  goto Label_cons;
  Return_99_8:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_104_13;

Label_inv_xs_C2_3:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 104\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_C2__ys7; else goto Label_split_107_7;

Label_join_104_13:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 104\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_C2__ys7; else goto Label_split_107_7;

Label_split_107_7:
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_113_9;
  goto Label__cons;
  Return_113_9:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_A != 2) goto Label_reverse10; else goto Label_split_115_8;

Label_split_115_8:
count(1, 0);
  var_A = (var_A - (2 + 0));
  goto Label_join_117_11;

Label_reverse10:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_C2__ys8; else goto Label_split_118_8;

Label_join_117_11:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_C2__ys8; else goto Label_split_118_8;

Label_split_118_8:
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A == 0) goto Label_C2__ys9; else goto Label_join_121_9;

Label_C2__ys8:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 121\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_inv_5reverse11; else goto Label_split_122_8;

Label_join_121_9:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 121\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_inv_5reverse11; else goto Label_split_122_8;

Label_split_122_8:
count(1, 0);
  var_A = (var_A + (2 + 0));
  goto Label_join_124_16;

Label_inv_5reverse11:
  if (count(1,0), !(var_A != 2)){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_126_10;
  goto Label_cons;
  Return_126_10:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_128_9;

Label_join_124_16:
  if (count(1,0), var_A != 2){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_126_11;
  goto Label_cons;
  Return_126_11:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_128_9;

Label_C2__ys9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 128\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_133_9;

Label_join_128_9:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 128\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_133_9;

Label_C2__ys7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 133\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label_C2__ys_rev_xs_C2__2; else goto Label_split_134_8;

Label_join_133_9:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 133\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A == 0) goto Label_C2__ys_rev_xs_C2__2; else goto Label_split_134_8;

Label_split_134_8:
  count(2,0);
   stack[stackPointer++] = &&Return_135_12;
  goto Label_rev;
  Return_135_12:
  goto Label_C2__ys_rev_xs_C2__1;

Label_C2__ys_rev_xs_C2__2:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 138\n");
  writeVars(); goto programEnd;
}
  goto Label_join_139_16;

Label_reverse_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 139\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label_reverse_exit_1;

Label_join_139_16:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 139\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label_reverse_exit_1;

Label_reverse_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 148\n");
  writeVars(); goto programEnd;
}
  goto Label_reverse_exit_2;

Label_rev:
  goto Label_rev_entry_1;

Label_rev_exit_1:
  goto *stack[--stackPointer];

Label_rev_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_x_xs_ys7; else goto Label_split_161_7;

Label_split_161_7:
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_167_13;
  goto Label__cons;
  Return_167_13:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  if (count(1,0), (var_A & 3)) goto Label_x_xs10; else goto Label_split_171_7;

Label_split_171_7:
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_177_14;
  goto Label__cons;
  Return_177_14:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label_x_xs11; else goto Label_split_180_8;

Label_split_180_8:
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A == 0) goto Label_x_xs12; else goto Label_join_183_8;

Label_x_xs11:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 183\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_186_15;
  goto Label_cons;
  Return_186_15:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_188_8;

Label_join_183_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 183\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_186_16;
  goto Label_cons;
  Return_186_16:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_188_8;

Label_x_xs12:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_193_8;

Label_join_188_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_193_8;

Label_x_xs10:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 193\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_x_xs_ys8; else goto Label_split_194_8;

Label_join_193_8:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 193\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_x_xs_ys8; else goto Label_split_194_8;

Label_split_194_8:
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A == 0) goto Label_x_xs_ys9; else goto Label_join_197_10;

Label_x_xs_ys8:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_xs13; else goto Label_split_198_7;

Label_join_197_10:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_xs13; else goto Label_split_198_7;

Label_split_198_7:
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  if (count(1,0), var_A == 0) goto Label_inv_x_xs15; else goto Label_split_203_8;

Label_split_203_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_205_17;
  goto Label__cons;
  Return_205_17:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label_inv_x_xs14; else goto Label_join_209_12;

Label_inv_x_xs15:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  goto Label_join_211_12;

Label_join_209_12:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  goto Label_join_211_12;

Label_inv_x_xs14:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_214_18;
  goto Label_cons;
  Return_214_18:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_219_12;

Label_join_211_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_214_19;
  goto Label_cons;
  Return_214_19:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_219_12;

Label_inv_x_xs13:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_221_20;
  goto Label_cons;
  Return_221_20:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_223_10;

Label_join_219_12:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_221_21;
  goto Label_cons;
  Return_221_21:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_223_10;

Label_x_xs_ys9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 223\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_228_10;

Label_join_223_10:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 223\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
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
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  if (count(1,0), var_A == 0) goto Label_inv_xs_x_ys3; else goto Label_split_243_8;

Label_split_243_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_245_22;
  goto Label__cons;
  Return_245_22:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label_inv_xs_x_ys2; else goto Label_join_249_14;

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
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  if (count(1,0), var_A == 0) goto Label_inv_x_ys6; else goto Label_split_255_8;

Label_split_255_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_257_23;
  goto Label__cons;
  Return_257_23:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label_inv_x_ys5; else goto Label_join_261_11;

Label_inv_x_ys6:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 261\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label_join_263_11;

Label_join_261_11:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 261\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label_join_263_11;

Label_inv_x_ys5:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 263\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_266_24;
  goto Label_cons;
  Return_266_24:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_271_11;

Label_join_263_11:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 263\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_266_25;
  goto Label_cons;
  Return_266_25:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_271_11;

Label_inv_x_ys4:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 271\n");
  writeVars(); goto programEnd;
}
  goto Label_join_272_14;

Label_join_271_11:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 271\n");
  writeVars(); goto programEnd;
}
  goto Label_join_272_14;

Label_inv_xs_x_ys2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 272\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_275_26;
  goto Label_cons;
  Return_275_26:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_280_14;

Label_join_272_14:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 272\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_275_27;
  goto Label_cons;
  Return_275_27:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label_join_280_14;

Label_inv_xs_x_ys1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 280\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_1;

Label_join_280_14:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 280\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_1;

Label_rev_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 285\n");
  writeVars(); goto programEnd;
}
  goto Label_rev_exit_2;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 288\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_copyP < var_H) goto Label_copySymbol; else goto Label_split_289_11;

Label_split_289_11:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_294_12;

Label_copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 294\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 296\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_294_12:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 294\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 296\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 300\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 301\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 302\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 303\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 304\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_305_28;
  goto Label_hash;
  Return_305_28:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_308_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 308\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_309_15;

Label_join_308_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 308\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_309_15;

Label_split_309_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_311_19;

Label_split_311_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_313_19;

Label_split_313_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_315_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 315\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_317_10;

Label_join_315_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 315\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_317_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 317\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_320_17;

Label_join_317_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 317\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_320_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 320\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_322_15;

Label_join_320_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 320\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_322_15;

Label_split_322_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_323_15;

Label_split_323_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_325_29;
  goto Label__hash;
  Return_325_29:
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
  goto Label_join_332_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 332\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 333\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 334\n");
  writeVars(); goto programEnd;
}
  goto Label_join_335_12;

Label_join_332_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 332\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 333\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 334\n");
  writeVars(); goto programEnd;
}
  goto Label_join_335_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 335\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_335_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 335\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_340_30;
  goto Label__hash;
  Return_340_30:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_341_11;

Label_split_341_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_343_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 343\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_346_11;

Label_join_343_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 343\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_346_11;

Label_split_346_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_348_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 348\n");
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

Label_join_348_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 348\n");
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
    fprintf(stderr,"\nAssertion failure at line 358\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_360_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 360\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_361_10;

Label_join_360_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 360\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_361_10;

Label_split_361_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_363_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 363\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_365_10;

Label_join_363_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 363\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_365_10;

Label_split_365_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 370\n");
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
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  if (count(1,0), var_A != 0) goto Label__C2__ys_rev_xs_C2__1; else goto Label__join_78_21;

Label__split_80_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 80\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
  if (count(1,0), var_A != 0) goto Label__C2__ys_rev_xs_C2__1; else goto Label__join_78_21;

Label__inv_xs_C2_5:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 86\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_80_7;

Label__split_86_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 86\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"i A: %d P: %d a: %d d: %d xs: %d x: %d ys:%d\n", var_A, var_consP, var_consA, var_consD, var_xs, var_x, var_ys);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_80_7;

Label__inv_xs_C2_4:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 91\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_88_36;
  goto Label_cons;
  Return_88_36:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_86_8;

Label__join_92_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 91\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_88_37;
  goto Label_cons;
  Return_88_37:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_86_8;

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

Label__join_96_13:
  if (count(1,0), var_A != 2) goto Label__inv_5reverse6; else goto Label__join_95_15;

Label__join_104_13:
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_99_38;
  goto Label__cons;
  Return_99_38:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__inv_xs_C2_4; else goto Label__join_96_13;

Label__C2__ys7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 107\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_C2_3; else goto Label__join_104_13;

Label__split_107_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 107\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_C2_3; else goto Label__join_104_13;

Label__reverse10:
  if (count(1,0), !(var_A != 2)){
    fprintf(stderr,"\nJoin failure at line 115\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_113_39;
  goto Label_cons;
  Return_113_39:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_107_7;

Label__split_115_8:
  if (count(1,0), var_A != 2){
    fprintf(stderr,"\nJoin failure at line 115\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_113_40;
  goto Label_cons;
  Return_113_40:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_107_7;

Label__join_117_11:
count(1, 0);
  var_A = (var_A + (2 + 0));
  goto Label__split_115_8;

Label__C2__ys8:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 118\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__reverse10; else goto Label__join_117_11;

Label__split_118_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 118\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__reverse10; else goto Label__join_117_11;

Label__C2__ys9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 120\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label__split_118_8;

Label__join_121_9:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 120\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label__split_118_8;

Label__inv_5reverse11:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 122\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__C2__ys8; else goto Label__join_121_9;

Label__split_122_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 122\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__C2__ys8; else goto Label__join_121_9;

Label__join_124_16:
count(1, 0);
  var_A = (var_A - (2 + 0));
  goto Label__split_122_8;

Label__join_128_9:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_126_41;
  goto Label__cons;
  Return_126_41:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_A != 2) goto Label__inv_5reverse11; else goto Label__join_124_16;

Label__join_133_9:
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  if (count(1,0), var_A == 0) goto Label__C2__ys9; else goto Label__join_128_9;

Label__C2__ys_rev_xs_C2__2:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 134\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__C2__ys7; else goto Label__join_133_9;

Label__split_134_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 134\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__C2__ys7; else goto Label__join_133_9;

Label__C2__ys_rev_xs_C2__1:
  count(2,0);
   stack[stackPointer++] = &&Return_135_42;
  goto Label__rev;
  Return_135_42:
  goto Label__split_134_8;

Label__join_139_16:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~138\n");
  writeVars(); goto programEnd;
}
  goto Label__C2__ys_rev_xs_C2__2;

Label__reverse_exit_1:
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__reverse_exit_2; else goto Label__join_139_16;

Label__reverse_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~148\n");
  writeVars(); goto programEnd;
}
  goto Label__reverse_entry_2;

Label__rev_entry_1:
  goto *stack[--stackPointer];

Label__rev:
  goto Label__rev_exit_1;

Label__x_xs_ys7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 161\n");
  writeVars(); goto programEnd;
}
  goto Label__rev_entry_1;

Label__split_161_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 161\n");
  writeVars(); goto programEnd;
}
  goto Label__rev_entry_1;

Label__x_xs10:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 171\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_167_43;
  goto Label_cons;
  Return_167_43:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_161_7;

Label__split_171_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 171\n");
  writeVars(); goto programEnd;
}
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_167_44;
  goto Label_cons;
  Return_167_44:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_161_7;

Label__x_xs11:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 180\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_177_45;
  goto Label_cons;
  Return_177_45:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_171_7;

Label__split_180_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 180\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_177_46;
  goto Label_cons;
  Return_177_46:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_171_7;

Label__x_xs12:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 182\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  goto Label__split_180_8;

Label__join_183_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 182\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  goto Label__split_180_8;

Label__join_188_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_186_47;
  goto Label__cons;
  Return_186_47:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__x_xs11; else goto Label__join_183_8;

Label__join_193_8:
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  if (count(1,0), var_A == 0) goto Label__x_xs12; else goto Label__join_188_8;

Label__x_xs_ys8:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xs10; else goto Label__join_193_8;

Label__split_194_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xs10; else goto Label__join_193_8;

Label__x_xs_ys9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 196\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label__split_194_8;

Label__join_197_10:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 196\n");
  writeVars(); goto programEnd;
}
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  goto Label__split_194_8;

Label__inv_x_xs13:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__x_xs_ys8; else goto Label__join_197_10;

Label__split_198_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__x_xs_ys8; else goto Label__join_197_10;

Label__inv_x_xs15:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 203\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_198_7;

Label__split_203_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 203\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_198_7;

Label__inv_x_xs14:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_205_48;
  goto Label_cons;
  Return_205_48:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_203_8;

Label__join_209_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_205_49;
  goto Label_cons;
  Return_205_49:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_203_8;

Label__join_211_12:
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A == 0) goto Label__inv_x_xs15; else goto Label__join_209_12;

Label__join_219_12:
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_214_50;
  goto Label__cons;
  Return_214_50:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__inv_x_xs14; else goto Label__join_211_12;

Label__join_223_10:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_221_51;
  goto Label__cons;
  Return_221_51:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  if (count(1,0), (var_A & 3)) goto Label__inv_x_xs13; else goto Label__join_219_12;

Label__join_228_10:
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  if (count(1,0), var_A == 0) goto Label__x_xs_ys9; else goto Label__join_223_10;

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
    fprintf(stderr,"\nJoin failure at line 243\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_238_7;

Label__split_243_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 243\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_238_7;

Label__inv_xs_x_ys2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 248\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_245_52;
  goto Label_cons;
  Return_245_52:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_243_8;

Label__join_249_14:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 248\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_245_53;
  goto Label_cons;
  Return_245_53:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_243_8;

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
    fprintf(stderr,"\nJoin failure at line 255\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_250_7;

Label__split_255_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 255\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  goto Label__split_250_7;

Label__inv_x_ys5:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 260\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_257_54;
  goto Label_cons;
  Return_257_54:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_255_8;

Label__join_261_11:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 260\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_257_55;
  goto Label_cons;
  Return_257_55:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_255_8;

Label__join_263_11:
  tmp = var_ys;
  var_ys = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A == 0) goto Label__inv_x_ys6; else goto Label__join_261_11;

Label__join_271_11:
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_266_56;
  goto Label__cons;
  Return_266_56:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__inv_x_ys5; else goto Label__join_263_11;

Label__join_272_14:
  if (count(1,0), (var_A & 3)) goto Label__inv_x_ys4; else goto Label__join_271_11;

Label__join_280_14:
  tmp = var_consD;
  var_consD = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_consA;
  var_consA = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_275_57;
  goto Label__cons;
  Return_275_57:
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__inv_xs_x_ys2; else goto Label__join_272_14;

Label__rev_exit_1:
  if (count(1,0), (var_A & 3)) goto Label__inv_xs_x_ys1; else goto Label__join_280_14;

Label__rev_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~285\n");
  writeVars(); goto programEnd;
}
  goto Label__rev_entry_2;

Label__copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 289\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~288\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_289_11:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 289\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~288\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_294_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_289_11;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~296\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), var_copyP < var_H) goto Label__copySymbol; else goto Label__join_294_12;

Label__join_308_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_305_58;
  goto Label__hash;
  Return_305_58:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~304\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~303\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~302\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~301\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~300\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 309\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_308_16;

Label__split_309_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 309\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_308_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 311\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_309_15;

Label__split_311_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 311\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_309_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 313\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_311_19;

Label__split_313_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 313\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_311_19;

Label__join_315_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_313_19;

Label__join_317_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_315_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 319\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_317_10;

Label__join_320_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 319\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_317_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 322\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_320_17;

Label__split_322_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 322\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_320_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 323\n");
  writeVars(); goto programEnd;
}
  goto Label__split_322_15;

Label__split_323_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 323\n");
  writeVars(); goto programEnd;
}
  goto Label__split_322_15;

Label__join_332_9:
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
   stack[stackPointer++] = &&Return_325_59;
  goto Label_hash;
  Return_325_59:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_323_15;

Label__join_335_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~334\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~333\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_332_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_335_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 341\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_340_60;
  goto Label_hash;
  Return_340_60:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_341_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 341\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_340_61;
  goto Label_hash;
  Return_340_61:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_343_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_341_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 346\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_343_13;

Label__split_346_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 346\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_343_13;

Label__join_348_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_346_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_348_13;

Label__join_360_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~358\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 361\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_360_6;

Label__split_361_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 361\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_360_6;

Label__join_363_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_361_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 365\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_363_6;

Label__split_365_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 365\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_363_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_365_10;

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
    fprintf(stderr,"\nAssertion failure at line ~370\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}