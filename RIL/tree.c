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
  uint var_r = 0;
  uint var_l = 0;
  uint var_fr = 0;
  uint var_fl = 0;
  uint var_A = 0;
  uint var_p2 = 0;
  uint var_p1 = 0;
  uint var_A0 = 0;
  uint var_lhs = 0;
  uint var_lhs2 = 0;
  uint var_lhs1 = 0;
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
    printf("var_r = \%u\n",var_r);
    printf("var_l = \%u\n",var_l);
    printf("var_fr = \%u\n",var_fr);
    printf("var_fl = \%u\n",var_fl);
    printf("var_A = \%u\n",var_A);
    printf("var_p2 = \%u\n",var_p2);
    printf("var_p1 = \%u\n",var_p1);
    printf("var_A0 = \%u\n",var_A0);
    printf("var_lhs = \%u\n",var_lhs);
    printf("var_lhs2 = \%u\n",var_lhs2);
    printf("var_lhs1 = \%u\n",var_lhs1);
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
   stack[stackPointer++] = &&Return_31_1;
  goto Label_initialise;
  Return_31_1:
  count(2,0);
   stack[stackPointer++] = &&Return_32_2;
  goto Label_build;
  Return_32_2:
  count(2,0);
   stack[stackPointer++] = &&Return_33_3;
  goto Label__flip;
  Return_33_3:

printf("max refs = %d\n",A);
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 61\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_63_7;

Label_dump1:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 63\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_64_10;

Label_join_63_7:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 63\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_64_10;

Label_split_64_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_66_7;

Label_used1:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 66\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_68_10;

Label_join_66_7:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 66\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_68_10;

Label_split_68_10:
fprintf(stderr,"%d,", var_y);
  goto *stack[--stackPointer];

Label_initialise:
count(1, 0);
  var_consA = (var_consA + (2 + 0));
count(1, 0);
  var_consD = (var_consD + (2 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_75_4;
  goto Label_cons;
  Return_75_4:
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
   stack[stackPointer++] = &&Return_82_5;
  goto Label_cons;
  Return_82_5:
  tmp = var_lhs1;
  var_lhs1 = (var_consP);
  var_consP = (tmp);
count(1, 0);
  var_consA = (var_consA + (11 + 0));
count(1, 0);
  var_consD = (var_consD + (13 + 0));
fprintf(stderr,"snd %d %d", var_consA, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_87_6;
  goto Label_cons;
  Return_87_6:
  tmp = var_lhs2;
  var_lhs2 = (var_consP);
  var_consP = (tmp);
  tmp = var_lhs1;
  var_lhs1 = (var_consA);
  var_consA = (tmp);
  tmp = var_lhs2;
  var_lhs2 = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_91_7;
  goto Label_cons;
  Return_91_7:
  tmp = var_lhs;
  var_lhs = (var_consP);
  var_consP = (tmp);
count(1, 0);
  var_consD = (var_consD + (3 + 0));
count(1, 0);
  var_consA = (var_consA + (5 + 0));
fprintf(stderr,"%d\n", var_consP);
  count(2,0);
   stack[stackPointer++] = &&Return_99_8;
  goto Label_cons;
  Return_99_8:
  tmp = var_lhs;
  var_lhs = (var_consA);
  var_consA = (tmp);
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_102_9;
  goto Label_cons;
  Return_102_9:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  goto *stack[--stackPointer];

Label_flip:
  goto Label_entryLR;

Label_exitLR:
  goto *stack[--stackPointer];

Label_entryLR:
  if (count(1,0), (var_A0 & 3)) goto Label_l1; else goto Label_split_117_8;

Label_split_117_8:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_119_10;
  goto Label__cons;
  Return_119_10:
  tmp = var_p1;
  var_p1 = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_consA != 0) goto Label_l3; else goto Label_split_121_12;

Label_split_121_12:
  tmp = var_p2;
  var_p2 = (var_consD);
  var_consD = (tmp);
  if (count(1,0), var_consD == 0) goto Label_l4; else goto Label_join_124_4;

Label_l3:
  if (count(1,0), !(var_consA != 0)){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  tmp = var_p1;
  var_p1 = (var_consA);
  var_consA = (tmp);
fprintf(stderr,"first vcons %d %d \n", var_consA, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_134_11;
  goto Label_cons;
  Return_134_11:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  goto Label_join_136_4;

Label_join_124_4:
  if (count(1,0), var_consA != 0){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  tmp = var_p1;
  var_p1 = (var_consA);
  var_consA = (tmp);
fprintf(stderr,"first vcons %d %d \n", var_consA, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_134_12;
  goto Label_cons;
  Return_134_12:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  goto Label_join_136_4;

Label_l4:
  if (count(1,0), !(var_A0 == 0)){
    fprintf(stderr,"\nJoin failure at line 136\n");
  writeVars(); goto programEnd;
}
  goto Label_join_137_4;

Label_join_136_4:
  if (count(1,0), var_A0 == 0){
    fprintf(stderr,"\nJoin failure at line 136\n");
  writeVars(); goto programEnd;
}
  goto Label_join_137_4;

Label_l1:
  if (count(1,0), !((var_A0 & 3))){
    fprintf(stderr,"\nJoin failure at line 137\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A0 != 0) goto Label_Entry2; else goto Label_split_140_9;

Label_join_137_4:
  if (count(1,0), (var_A0 & 3)){
    fprintf(stderr,"\nJoin failure at line 137\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A0 != 0) goto Label_Entry2; else goto Label_split_140_9;

Label_split_140_9:
fprintf(stderr,"b A: %d P: %d a: %d d: %d l: %d r: %d fl:%d fr:%d\n", var_A, var_consP, var_consA, var_consD, var_p1, var_p2, var_fl, var_fr);
  tmp = var_A0;
  var_A0 = (var_p1);
  var_p1 = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_p2);
  var_p2 = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_152_13;
  goto Label_flip;
  Return_152_13:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_p2);
  var_p2 = (tmp);
fprintf(stderr," test: %d %d %d", var_A0, var_fl, var_p2);
  tmp = var_A0;
  var_A0 = (var_fl);
  var_fl = (tmp);
fprintf(stderr,"A: %d P: %d a: %d d: %d l: %d r: %d fl:%d fr:%d\n", var_A, var_consP, var_consA, var_consD, var_l, var_r, var_fl, var_fr);
  if (!(var_A0 == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 164\n");
  writeVars(); goto programEnd;
}
  tmp = var_A0;
  var_A0 = (var_p2);
  var_p2 = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_fl);
  var_fl = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_175_14;
  goto Label_flip;
  Return_175_14:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_fl);
  var_fl = (tmp);
  tmp = var_A0;
  var_A0 = (var_fr);
  var_fr = (tmp);
  if (!(var_A0 == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 185\n");
  writeVars(); goto programEnd;
}
  goto Label_join_187_7;

Label_exit2:
  if (count(1,0), !(var_A0 != 0)){
    fprintf(stderr,"\nJoin failure at line 187\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A0 & 3)) goto Label_res1; else goto Label_split_191_8;

Label_join_187_7:
  if (count(1,0), var_A0 != 0){
    fprintf(stderr,"\nJoin failure at line 187\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A0 & 3)) goto Label_res1; else goto Label_split_191_8;

Label_split_191_8:
fprintf(stderr,"something wroing here %d %d -- %d\n", var_fr, var_fl, var_A0);
  if (count(1,0), var_A0 == 0) goto Label_res4; else goto Label_split_193_9;

Label_split_193_9:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_195_15;
  goto Label__cons;
  Return_195_15:
  tmp = var_fr;
  var_fr = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_consA == 0) goto Label_res3; else goto Label_join_198_6;

Label_res4:
  if (count(1,0), !(var_consD == 0)){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_consD);
  var_consD = (tmp);
  goto Label_join_200_6;

Label_join_198_6:
  if (count(1,0), var_consD == 0){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_consD);
  var_consD = (tmp);
  goto Label_join_200_6;

Label_res3:
  if (count(1,0), !(var_consA != 0)){
    fprintf(stderr,"\nJoin failure at line 200\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_202_16;
  goto Label_cons;
  Return_202_16:
  tmp = var_consP;
  var_consP = (var_A0);
  var_A0 = (tmp);
  goto Label_join_204_6;

Label_join_200_6:
  if (count(1,0), var_consA != 0){
    fprintf(stderr,"\nJoin failure at line 200\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_202_17;
  goto Label_cons;
  Return_202_17:
  tmp = var_consP;
  var_consP = (var_A0);
  var_A0 = (tmp);
  goto Label_join_204_6;

Label_res1:
  if (count(1,0), !((var_A0 & 3))){
    fprintf(stderr,"\nJoin failure at line 204\n");
  writeVars(); goto programEnd;
}
  goto Label_exitLR;

Label_join_204_6:
  if (count(1,0), (var_A0 & 3)){
    fprintf(stderr,"\nJoin failure at line 204\n");
  writeVars(); goto programEnd;
}
  goto Label_exitLR;

Label_Entry2:
  tmp = var_x;
  var_x = (var_A0);
  var_A0 = (tmp);
  if (count(1,0), var_A0 != 0) goto Label_entry3; else goto Label_join_212_7;

Label_exit3:
  if (count(1,0), !(var_A0 != 0)){
    fprintf(stderr,"\nJoin failure at line 212\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A0);
  var_A0 = (tmp);
fprintf(stderr," second rule %d,%d --- %d/%d\n", var_x, var_A0, var_p1, var_p2);
  goto Label_exit2;

Label_join_212_7:
  if (count(1,0), var_A0 != 0){
    fprintf(stderr,"\nJoin failure at line 212\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A0);
  var_A0 = (tmp);
fprintf(stderr," second rule %d,%d --- %d/%d\n", var_x, var_A0, var_p1, var_p2);
  goto Label_exit2;

Label_entry3:
  if (!(var_A0 != var_A0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 218\n");
  writeVars(); goto programEnd;
}
  goto Label_exit3;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 223\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_copyP < var_H) goto Label_copySymbol; else goto Label_split_224_13;

Label_split_224_13:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_229_14;

Label_copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 229\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 231\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_229_14:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 229\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 231\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 235\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 236\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 237\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 238\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 239\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_240_18;
  goto Label_hash;
  Return_240_18:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_244_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 244\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_245_17;

Label_join_244_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 244\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_245_17;

Label_split_245_17:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_247_23;

Label_split_247_23:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_249_25;

Label_split_249_25:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_251_14;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 251\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_253_12;

Label_join_251_14:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 251\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_253_12;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 253\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_256_17;

Label_join_253_12:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 253\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_256_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 256\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_258_17;

Label_join_256_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 256\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_258_17;

Label_split_258_17:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_259_17;

Label_split_259_17:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_261_19;
  goto Label__hash;
  Return_261_19:
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
  goto Label_join_268_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 268\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 269\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 270\n");
  writeVars(); goto programEnd;
}
  goto Label_join_271_12;

Label_join_268_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 268\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 269\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 270\n");
  writeVars(); goto programEnd;
}
  goto Label_join_271_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 271\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_271_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 271\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_276_20;
  goto Label__hash;
  Return_276_20:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_277_13;

Label_split_277_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_279_15;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 279\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_282_13;

Label_join_279_15:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 279\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_282_13;

Label_split_282_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_284_15;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 284\n");
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

Label_join_284_15:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 284\n");
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
    fprintf(stderr,"\nAssertion failure at line 298\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_300_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 300\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_301_10;

Label_join_300_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 300\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_301_10;

Label_split_301_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_303_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 303\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_305_10;

Label_join_303_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 303\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_305_10;

Label_split_305_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash_alt:
  if (!(var_hashV == 0 && var_hashA == 366001 && var_hashB == 827927 && var_hashC == 593041 && 1)){
    fprintf(stderr,"\nAssertion failure at line 310\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_hashA = (var_hashA + (var_consA + 0));
count(1, 0);
  var_hashB = (var_hashB + (var_consD + 0));
count(1, 0);
  var_hashA = (var_hashA - (var_hashB + var_hashC));
count(1, 0);
  var_hashA = (var_hashA ^ (var_hashC >> 13));
count(1, 0);
  var_hashB = (var_hashB - (var_hashC + var_hashA));
count(1, 0);
  var_hashB = (var_hashB ^ (var_hashA << 8));
count(1, 0);
  var_hashC = (var_hashC - (var_hashA + var_hashB));
count(1, 0);
  var_hashC = (var_hashC ^ (var_hashB >> 13));
count(1, 0);
  var_hashA = (var_hashA - (var_hashB + var_hashC));
count(1, 0);
  var_hashA = (var_hashA ^ (var_hashC >> 12));
count(1, 0);
  var_hashB = (var_hashB - (var_hashC + var_hashA));
count(1, 0);
  var_hashB = (var_hashB ^ (var_hashA << 16));
count(1, 0);
  var_hashC = (var_hashC - (var_hashA + var_hashB));
count(1, 0);
  var_hashC = (var_hashC ^ (var_hashB >> 5));
count(1, 0);
  var_hashA = (var_hashA - (var_hashB + var_hashC));
count(1, 0);
  var_hashA = (var_hashA ^ (var_hashC >> 3));
count(1, 0);
  var_hashB = (var_hashB - (var_hashC + var_hashA));
count(1, 0);
  var_hashB = (var_hashB ^ (var_hashA << 10));
count(1, 0);
  var_hashC = (var_hashC - (var_hashA + var_hashB));
count(1, 0);
  var_hashC = (var_hashC ^ (var_hashB >> 15));
count(1, 0);
  var_hashV = (var_hashV + (var_hashC & var_mask));
count(1, 0);
  var_hashV = (var_hashV + (var_hashC & var_mask));
count(1, 0);
  var_hashV = (var_hashV + (var_hashC & var_mask));
count(1, 0);
  var_hashV = (var_hashV + (var_H + 0));
  goto *stack[--stackPointer];

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 338\n");
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

Label__join_63_7:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~61\n");
  writeVars(); goto programEnd;
}

printf("max refs = %d\n",A);
  count(2,0);
   stack[stackPointer++] = &&Return_33_21;
  goto Label_flip;
  Return_33_21:
  count(2,0);
   stack[stackPointer++] = &&Return_32_22;
  goto Label__build;
  Return_32_22:
  count(2,0);
   stack[stackPointer++] = &&Return_31_23;
  goto Label__initialise;
  Return_31_23:
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
    fprintf(stderr,"\nJoin failure at line 64\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_63_7;

Label__split_64_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 64\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_63_7;

Label__join_66_7:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_64_10;

Label__dump1:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 68\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_66_7;

Label__split_68_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 68\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_66_7;

Label__main:
fprintf(stderr,"%d,", var_y);
  goto Label__split_68_10;

Label__initialise:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_75_24;
  goto Label__cons;
  Return_75_24:
count(1, 0);
  var_consD = (var_consD - (2 + 0));
count(1, 0);
  var_consA = (var_consA - (2 + 0));
  goto *stack[--stackPointer];

Label__build:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_102_25;
  goto Label__cons;
  Return_102_25:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  tmp = var_lhs;
  var_lhs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_99_26;
  goto Label__cons;
  Return_99_26:
fprintf(stderr,"%d\n", var_consP);
count(1, 0);
  var_consA = (var_consA - (5 + 0));
count(1, 0);
  var_consD = (var_consD - (3 + 0));
  tmp = var_lhs;
  var_lhs = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_91_27;
  goto Label__cons;
  Return_91_27:
  tmp = var_lhs2;
  var_lhs2 = (var_consD);
  var_consD = (tmp);
  tmp = var_lhs1;
  var_lhs1 = (var_consA);
  var_consA = (tmp);
  tmp = var_lhs2;
  var_lhs2 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_87_28;
  goto Label__cons;
  Return_87_28:
fprintf(stderr,"snd %d %d", var_consA, var_consD);
count(1, 0);
  var_consD = (var_consD - (13 + 0));
count(1, 0);
  var_consA = (var_consA - (11 + 0));
  tmp = var_lhs1;
  var_lhs1 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_82_29;
  goto Label__cons;
  Return_82_29:
count(1, 0);
  var_consA = (var_consA - (9 + 0));
count(1, 0);
  var_consD = (var_consD - (7 + 0));
  goto *stack[--stackPointer];

Label__entryLR:
  goto *stack[--stackPointer];

Label__flip:
  goto Label__exitLR;

Label__l1:
  if (count(1,0), !((var_A0 & 3))){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  goto Label__entryLR;

Label__split_117_8:
  if (count(1,0), (var_A0 & 3)){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  goto Label__entryLR;

Label__l3:
  if (count(1,0), !(var_consA != 0)){
    fprintf(stderr,"\nJoin failure at line 121\n");
  writeVars(); goto programEnd;
}
  tmp = var_p1;
  var_p1 = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_119_30;
  goto Label_cons;
  Return_119_30:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  goto Label__split_117_8;

Label__split_121_12:
  if (count(1,0), var_consA != 0){
    fprintf(stderr,"\nJoin failure at line 121\n");
  writeVars(); goto programEnd;
}
  tmp = var_p1;
  var_p1 = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_119_31;
  goto Label_cons;
  Return_119_31:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  goto Label__split_117_8;

Label__l4:
  if (count(1,0), !(var_consD == 0)){
    fprintf(stderr,"\nJoin failure at line 123\n");
  writeVars(); goto programEnd;
}
  tmp = var_p2;
  var_p2 = (var_consD);
  var_consD = (tmp);
  goto Label__split_121_12;

Label__join_124_4:
  if (count(1,0), var_consD == 0){
    fprintf(stderr,"\nJoin failure at line 123\n");
  writeVars(); goto programEnd;
}
  tmp = var_p2;
  var_p2 = (var_consD);
  var_consD = (tmp);
  goto Label__split_121_12;

Label__join_136_4:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_134_32;
  goto Label__cons;
  Return_134_32:
fprintf(stderr,"first vcons %d %d \n", var_consA, var_consD);
  tmp = var_p1;
  var_p1 = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_consA != 0) goto Label__l3; else goto Label__join_124_4;

Label__join_137_4:
  if (count(1,0), var_A0 == 0) goto Label__l4; else goto Label__join_136_4;

Label__Entry2:
  if (count(1,0), !(var_A0 != 0)){
    fprintf(stderr,"\nJoin failure at line 140\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A0 & 3)) goto Label__l1; else goto Label__join_137_4;

Label__split_140_9:
  if (count(1,0), var_A0 != 0){
    fprintf(stderr,"\nJoin failure at line 140\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A0 & 3)) goto Label__l1; else goto Label__join_137_4;

Label__join_187_7:
  if (!(var_A0 == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~185\n");
  writeVars(); goto programEnd;
}
  tmp = var_A0;
  var_A0 = (var_fr);
  var_fr = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_fl);
  var_fl = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_175_33;
  goto Label__flip;
  Return_175_33:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_fl);
  var_fl = (tmp);
  tmp = var_A0;
  var_A0 = (var_p2);
  var_p2 = (tmp);
  if (!(var_A0 == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~164\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"A: %d P: %d a: %d d: %d l: %d r: %d fl:%d fr:%d\n", var_A, var_consP, var_consA, var_consD, var_l, var_r, var_fl, var_fr);
  tmp = var_A0;
  var_A0 = (var_fl);
  var_fl = (tmp);
fprintf(stderr," test: %d %d %d", var_A0, var_fl, var_p2);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_p2);
  var_p2 = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_152_34;
  goto Label__flip;
  Return_152_34:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_p2);
  var_p2 = (tmp);
  tmp = var_A0;
  var_A0 = (var_p1);
  var_p1 = (tmp);
fprintf(stderr,"b A: %d P: %d a: %d d: %d l: %d r: %d fl:%d fr:%d\n", var_A, var_consP, var_consA, var_consD, var_p1, var_p2, var_fl, var_fr);
  goto Label__split_140_9;

Label__res1:
  if (count(1,0), !((var_A0 & 3))){
    fprintf(stderr,"\nJoin failure at line 191\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A0 != 0) goto Label__exit2; else goto Label__join_187_7;

Label__split_191_8:
  if (count(1,0), (var_A0 & 3)){
    fprintf(stderr,"\nJoin failure at line 191\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A0 != 0) goto Label__exit2; else goto Label__join_187_7;

Label__res4:
  if (count(1,0), !(var_A0 == 0)){
    fprintf(stderr,"\nJoin failure at line 193\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"something wroing here %d %d -- %d\n", var_fr, var_fl, var_A0);
  goto Label__split_191_8;

Label__split_193_9:
  if (count(1,0), var_A0 == 0){
    fprintf(stderr,"\nJoin failure at line 193\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"something wroing here %d %d -- %d\n", var_fr, var_fl, var_A0);
  goto Label__split_191_8;

Label__res3:
  if (count(1,0), !(var_consA == 0)){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_195_35;
  goto Label_cons;
  Return_195_35:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  goto Label__split_193_9;

Label__join_198_6:
  if (count(1,0), var_consA == 0){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_195_36;
  goto Label_cons;
  Return_195_36:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  goto Label__split_193_9;

Label__join_200_6:
  tmp = var_fl;
  var_fl = (var_consD);
  var_consD = (tmp);
  if (count(1,0), var_consD == 0) goto Label__res4; else goto Label__join_198_6;

Label__join_204_6:
  tmp = var_consP;
  var_consP = (var_A0);
  var_A0 = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_202_37;
  goto Label__cons;
  Return_202_37:
  tmp = var_fr;
  var_fr = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_consA != 0) goto Label__res3; else goto Label__join_200_6;

Label__exitLR:
  if (count(1,0), (var_A0 & 3)) goto Label__res1; else goto Label__join_204_6;

Label__entry3:
  if (count(1,0), !(var_A0 != 0)){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A0);
  var_A0 = (tmp);
  goto Label__Entry2;

Label__join_212_7:
  if (count(1,0), var_A0 != 0){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A0);
  var_A0 = (tmp);
  goto Label__Entry2;

Label__exit2:
fprintf(stderr," second rule %d,%d --- %d/%d\n", var_x, var_A0, var_p1, var_p2);
  tmp = var_x;
  var_x = (var_A0);
  var_A0 = (tmp);
  if (count(1,0), var_A0 != 0) goto Label__exit3; else goto Label__join_212_7;

Label__exit3:
  if (!(var_A0 != var_A0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~218\n");
  writeVars(); goto programEnd;
}
  goto Label__entry3;

Label__copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 224\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~223\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_224_13:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 224\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~223\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_229_14:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_224_13;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~231\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), var_copyP < var_H) goto Label__copySymbol; else goto Label__join_229_14;

Label__join_244_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_240_38;
  goto Label__hash;
  Return_240_38:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~239\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~238\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~237\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~236\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~235\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 245\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_244_16;

Label__split_245_17:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 245\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_244_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 247\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_245_17;

Label__split_247_23:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 247\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_245_17;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 249\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_247_23;

Label__split_249_25:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 249\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_247_23;

Label__join_251_14:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_249_25;

Label__join_253_12:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_251_14;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 255\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_253_12;

Label__join_256_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 255\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_253_12;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 258\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_256_17;

Label__split_258_17:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 258\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_256_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 259\n");
  writeVars(); goto programEnd;
}
  goto Label__split_258_17;

Label__split_259_17:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 259\n");
  writeVars(); goto programEnd;
}
  goto Label__split_258_17;

Label__join_268_9:
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
   stack[stackPointer++] = &&Return_261_39;
  goto Label_hash;
  Return_261_39:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_259_17;

Label__join_271_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~270\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~269\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_268_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_271_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 277\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_276_40;
  goto Label_hash;
  Return_276_40:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_277_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 277\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_276_41;
  goto Label_hash;
  Return_276_41:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_279_15:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_277_13;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 282\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_279_15;

Label__split_282_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 282\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_279_15;

Label__join_284_15:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_282_13;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_284_15;

Label__join_300_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~298\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 301\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_300_6;

Label__split_301_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 301\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_300_6;

Label__join_303_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_301_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 305\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_303_6;

Label__split_305_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 305\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_303_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_305_10;

Label__hash_alt:
count(1, 0);
  var_hashV = (var_hashV - (var_H + 0));
count(1, 0);
  var_hashV = (var_hashV - (var_hashC & var_mask));
count(1, 0);
  var_hashV = (var_hashV - (var_hashC & var_mask));
count(1, 0);
  var_hashV = (var_hashV - (var_hashC & var_mask));
count(1, 0);
  var_hashC = (var_hashC ^ (var_hashB >> 15));
count(1, 0);
  var_hashC = (var_hashC + (var_hashA + var_hashB));
count(1, 0);
  var_hashB = (var_hashB ^ (var_hashA << 10));
count(1, 0);
  var_hashB = (var_hashB + (var_hashC + var_hashA));
count(1, 0);
  var_hashA = (var_hashA ^ (var_hashC >> 3));
count(1, 0);
  var_hashA = (var_hashA + (var_hashB + var_hashC));
count(1, 0);
  var_hashC = (var_hashC ^ (var_hashB >> 5));
count(1, 0);
  var_hashC = (var_hashC + (var_hashA + var_hashB));
count(1, 0);
  var_hashB = (var_hashB ^ (var_hashA << 16));
count(1, 0);
  var_hashB = (var_hashB + (var_hashC + var_hashA));
count(1, 0);
  var_hashA = (var_hashA ^ (var_hashC >> 12));
count(1, 0);
  var_hashA = (var_hashA + (var_hashB + var_hashC));
count(1, 0);
  var_hashC = (var_hashC ^ (var_hashB >> 13));
count(1, 0);
  var_hashC = (var_hashC + (var_hashA + var_hashB));
count(1, 0);
  var_hashB = (var_hashB ^ (var_hashA << 8));
count(1, 0);
  var_hashB = (var_hashB + (var_hashC + var_hashA));
count(1, 0);
  var_hashA = (var_hashA ^ (var_hashC >> 13));
count(1, 0);
  var_hashA = (var_hashA + (var_hashB + var_hashC));
count(1, 0);
  var_hashB = (var_hashB - (var_consD + 0));
count(1, 0);
  var_hashA = (var_hashA - (var_consA + 0));
  if (!(var_hashV == 0 && var_hashA == 366001 && var_hashB == 827927 && var_hashC == 593041 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~310\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

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
    fprintf(stderr,"\nAssertion failure at line ~338\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}