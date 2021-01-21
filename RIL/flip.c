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
  uint var_D = 0;
  uint var_fr = 0;
  uint var_fl = 0;
  uint var_r = 0;
  uint var_l = 0;
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
    printf("var_D = \%u\n",var_D);
    printf("var_fr = \%u\n",var_fr);
    printf("var_fl = \%u\n",var_fl);
    printf("var_r = \%u\n",var_r);
    printf("var_l = \%u\n",var_l);
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
  goto Label_flip;
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
  var_consD = (var_consD + (7 + 0));
count(1, 0);
  var_consA = (var_consA + (9 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_58_5;
  goto Label_cons;
  Return_58_5:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto *stack[--stackPointer];

Label_flip:
  goto Label_flip_entry_1;

Label_flip_exit_1:
  goto *stack[--stackPointer];

Label_flip_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_l_r4; else goto Label_split_73_7;

Label_split_73_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_75_6;
  goto Label__cons;
  Return_75_6:
  tmp = var_consA;
  var_consA = (var_A);
  var_A = (tmp);
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label_l_r5; else goto Label_split_78_8;

Label_split_78_8:
  tmp = var_consD;
  var_consD = (var_A);
  var_A = (tmp);
  tmp = var_r;
  var_r = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A == 0) goto Label_l_r6; else goto Label_join_82_6;

Label_l_r5:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 82\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_84_7;
  goto Label_cons;
  Return_84_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_86_6;

Label_join_82_6:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 82\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_84_8;
  goto Label_cons;
  Return_84_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_86_6;

Label_l_r6:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 86\n");
  writeVars(); goto programEnd;
}
  goto Label_join_87_6;

Label_join_86_6:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 86\n");
  writeVars(); goto programEnd;
}
  goto Label_join_87_6;

Label_l_r4:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 87\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_flip_entry_2; else goto Label_split_88_8;

Label_join_87_6:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 87\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_flip_entry_2; else goto Label_split_88_8;

Label_split_88_8:
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_r);
  var_r = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_l);
  var_l = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_101_9;
  goto Label_flip;
  Return_101_9:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_l);
  var_l = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_r);
  var_r = (tmp);
  tmp = var_fl;
  var_fl = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 111\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_A);
  var_A = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_r);
  var_r = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_l);
  var_l = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_121_10;
  goto Label_flip;
  Return_121_10:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_l);
  var_l = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_r);
  var_r = (tmp);
  tmp = var_fr;
  var_fr = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 131\n");
  writeVars(); goto programEnd;
}
  goto Label_join_132_13;

Label_flip_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 132\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_fr_lr1; else goto Label_split_136_7;

Label_join_132_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 132\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_fr_lr1; else goto Label_split_136_7;

Label_split_136_7:
  if (count(1,0), var_A == 0) goto Label_inv_fr_lr3; else goto Label_split_137_8;

Label_split_137_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_139_11;
  goto Label__cons;
  Return_139_11:
  tmp = var_fr;
  var_fr = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label_inv_fr_lr2; else goto Label_join_142_12;

Label_inv_fr_lr3:
  if (count(1,0), !(var_D == 0)){
    fprintf(stderr,"\nJoin failure at line 142\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"%d %d %d %d\n", var_consA, var_consD, var_fl, var_fr);
  tmp = var_fl;
  var_fl = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_146_12;

Label_join_142_12:
  if (count(1,0), var_D == 0){
    fprintf(stderr,"\nJoin failure at line 142\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"%d %d %d %d\n", var_consA, var_consD, var_fl, var_fr);
  tmp = var_fl;
  var_fl = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  goto Label_join_146_12;

Label_inv_fr_lr2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 146\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
fprintf(stderr,"%d %d %d %d\n", var_consA, var_consD, var_fl, var_fr);
  count(2,0);
   stack[stackPointer++] = &&Return_150_12;
  goto Label_cons;
  Return_150_12:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_152_12;

Label_join_146_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 146\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_A);
  var_A = (tmp);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
fprintf(stderr,"%d %d %d %d\n", var_consA, var_consD, var_fl, var_fr);
  count(2,0);
   stack[stackPointer++] = &&Return_150_13;
  goto Label_cons;
  Return_150_13:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  goto Label_join_152_12;

Label_inv_fr_lr1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 152\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_1;

Label_join_152_12:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 152\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_1;

Label_flip_entry_2:
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label_flip_entry_3; else goto Label_join_165_13;

Label_flip_exit_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 165\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  goto Label_flip_exit_2;

Label_join_165_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 165\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  goto Label_flip_exit_2;

Label_flip_entry_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 174\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_3;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 177\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_copyP < var_H) goto Label_copySymbol; else goto Label_split_178_11;

Label_split_178_11:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_183_12;

Label_copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 183\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 185\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_183_12:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 183\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 185\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 189\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 190\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 191\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 192\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 193\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_194_14;
  goto Label_hash;
  Return_194_14:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_197_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_198_15;

Label_join_197_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_198_15;

Label_split_198_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_200_19;

Label_split_200_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_202_19;

Label_split_202_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_204_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 204\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_206_10;

Label_join_204_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 204\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_206_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 206\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_209_17;

Label_join_206_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 206\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_209_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_211_15;

Label_join_209_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_211_15;

Label_split_211_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_212_15;

Label_split_212_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_214_15;
  goto Label__hash;
  Return_214_15:
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
  goto Label_join_221_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 221\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 222\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 223\n");
  writeVars(); goto programEnd;
}
  goto Label_join_224_12;

Label_join_221_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 221\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 222\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 223\n");
  writeVars(); goto programEnd;
}
  goto Label_join_224_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 224\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_224_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 224\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_229_16;
  goto Label__hash;
  Return_229_16:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_230_11;

Label_split_230_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_232_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 232\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_235_11;

Label_join_232_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 232\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_235_11;

Label_split_235_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_237_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 237\n");
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

Label_join_237_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 237\n");
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
    fprintf(stderr,"\nAssertion failure at line 247\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_249_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 249\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_250_10;

Label_join_249_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 249\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_250_10;

Label_split_250_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_252_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 252\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_254_10;

Label_join_252_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 252\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_254_10;

Label_split_254_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 259\n");
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
   stack[stackPointer++] = &&Return_31_17;
  goto Label__flip;
  Return_31_17:
  count(2,0);
   stack[stackPointer++] = &&Return_28_18;
  goto Label__build;
  Return_28_18:
  count(2,0);
   stack[stackPointer++] = &&Return_27_19;
  goto Label__initialise;
  Return_27_19:
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
   stack[stackPointer++] = &&Return_50_20;
  goto Label__cons;
  Return_50_20:
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
   stack[stackPointer++] = &&Return_58_21;
  goto Label__cons;
  Return_58_21:
count(1, 0);
  var_consA = (var_consA - (9 + 0));
count(1, 0);
  var_consD = (var_consD - (7 + 0));
  goto *stack[--stackPointer];

Label__flip_entry_1:
  goto *stack[--stackPointer];

Label__flip:
  goto Label__flip_exit_1;

Label__l_r4:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 73\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_1;

Label__split_73_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 73\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_1;

Label__l_r5:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 78\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  tmp = var_consA;
  var_consA = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_75_22;
  goto Label_cons;
  Return_75_22:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_73_7;

Label__split_78_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 78\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  tmp = var_consA;
  var_consA = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_75_23;
  goto Label_cons;
  Return_75_23:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_73_7;

Label__l_r6:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 81\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_A);
  var_A = (tmp);
  tmp = var_consD;
  var_consD = (var_A);
  var_A = (tmp);
  goto Label__split_78_8;

Label__join_82_6:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 81\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_A);
  var_A = (tmp);
  tmp = var_consD;
  var_consD = (var_A);
  var_A = (tmp);
  goto Label__split_78_8;

Label__join_86_6:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_84_24;
  goto Label__cons;
  Return_84_24:
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__l_r5; else goto Label__join_82_6;

Label__join_87_6:
  if (count(1,0), var_A == 0) goto Label__l_r6; else goto Label__join_86_6;

Label__flip_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 88\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__l_r4; else goto Label__join_87_6;

Label__split_88_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 88\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__l_r4; else goto Label__join_87_6;

Label__join_132_13:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~131\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_A);
  var_A = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_r);
  var_r = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_l);
  var_l = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_121_25;
  goto Label__flip;
  Return_121_25:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_l);
  var_l = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_r);
  var_r = (tmp);
  tmp = var_r;
  var_r = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~111\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_A);
  var_A = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_r);
  var_r = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_l);
  var_l = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_101_26;
  goto Label__flip;
  Return_101_26:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_l);
  var_l = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_r);
  var_r = (tmp);
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  goto Label__split_88_8;

Label__inv_fr_lr1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 136\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__flip_exit_2; else goto Label__join_132_13;

Label__split_136_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 136\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__flip_exit_2; else goto Label__join_132_13;

Label__inv_fr_lr3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 137\n");
  writeVars(); goto programEnd;
}
  goto Label__split_136_7;

Label__split_137_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 137\n");
  writeVars(); goto programEnd;
}
  goto Label__split_136_7;

Label__inv_fr_lr2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 141\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_139_27;
  goto Label_cons;
  Return_139_27:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_137_8;

Label__join_142_12:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 141\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_139_28;
  goto Label_cons;
  Return_139_28:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_137_8;

Label__join_146_12:
  tmp = var_A;
  var_A = (var_consD);
  var_consD = (tmp);
  tmp = var_fl;
  var_fl = (var_A);
  var_A = (tmp);
fprintf(stderr,"%d %d %d %d\n", var_consA, var_consD, var_fl, var_fr);
  if (count(1,0), var_D == 0) goto Label__inv_fr_lr3; else goto Label__join_142_12;

Label__join_152_12:
  tmp = var_consP;
  var_consP = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_150_29;
  goto Label__cons;
  Return_150_29:
fprintf(stderr,"%d %d %d %d\n", var_consA, var_consD, var_fl, var_fr);
  tmp = var_A;
  var_A = (var_consA);
  var_consA = (tmp);
  tmp = var_fr;
  var_fr = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__inv_fr_lr2; else goto Label__join_146_12;

Label__flip_exit_1:
  if (count(1,0), (var_A & 3)) goto Label__inv_fr_lr1; else goto Label__join_152_12;

Label__flip_entry_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 160\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  goto Label__flip_entry_2;

Label__join_165_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 160\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  goto Label__flip_entry_2;

Label__flip_exit_2:
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__flip_exit_3; else goto Label__join_165_13;

Label__flip_exit_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~174\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_3;

Label__copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 178\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~177\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_178_11:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 178\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~177\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_183_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_178_11;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~185\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), var_copyP < var_H) goto Label__copySymbol; else goto Label__join_183_12;

Label__join_197_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_194_30;
  goto Label__hash;
  Return_194_30:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~193\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~192\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~191\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~190\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~189\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_197_16;

Label__split_198_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_197_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 200\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_198_15;

Label__split_200_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 200\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_198_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 202\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_200_19;

Label__split_202_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 202\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_200_19;

Label__join_204_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_202_19;

Label__join_206_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_204_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_206_10;

Label__join_209_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_206_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_209_17;

Label__split_211_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_209_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 212\n");
  writeVars(); goto programEnd;
}
  goto Label__split_211_15;

Label__split_212_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 212\n");
  writeVars(); goto programEnd;
}
  goto Label__split_211_15;

Label__join_221_9:
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
   stack[stackPointer++] = &&Return_214_31;
  goto Label_hash;
  Return_214_31:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_212_15;

Label__join_224_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~223\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~222\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_221_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_224_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 230\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_229_32;
  goto Label_hash;
  Return_229_32:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_230_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 230\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_229_33;
  goto Label_hash;
  Return_229_33:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_232_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_230_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 235\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_232_13;

Label__split_235_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 235\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_232_13;

Label__join_237_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_235_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_237_13;

Label__join_249_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~247\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 250\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_249_6;

Label__split_250_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 250\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_249_6;

Label__join_252_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_250_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 254\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_252_6;

Label__split_254_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 254\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_252_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_254_10;

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
    fprintf(stderr,"\nAssertion failure at line ~259\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}