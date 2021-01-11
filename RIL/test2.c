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
  uint var_T1 = 0;
  uint var_copyQ = 0;
  uint var_copyP = 0;
  uint var_ss1 = 0;
  uint var_R0 = 0;
  uint var_A1 = 0;
  uint var_x = 0;
  uint var_A0 = 0;
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
  uint var_m = 0;
  uint var_hashT = 0;
  uint var_hashC = 0;
  uint var_hashB = 0;
  uint var_hashA = 0;

  void writeVars() {
    printf("var_failed = \%u\n",var_failed);
    printf("var_segEnd = \%u\n",var_segEnd);
    printf("var_hashV = \%u\n",var_hashV);
    printf("var_ttt = \%u\n",var_ttt);
    printf("var_T1 = \%u\n",var_T1);
    printf("var_copyQ = \%u\n",var_copyQ);
    printf("var_copyP = \%u\n",var_copyP);
    printf("var_ss1 = \%u\n",var_ss1);
    printf("var_R0 = \%u\n",var_R0);
    printf("var_A1 = \%u\n",var_A1);
    printf("var_x = \%u\n",var_x);
    printf("var_A0 = \%u\n",var_A0);
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
    printf("var_m = \%u\n",var_m);
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
  if (var_m != 0 || scanf("%d\n",&var_m) != 1)  { fprintf(stderr,"Read failure at line 10\n");
  goto programEnd;
}
count(1, 0);
  var_b = (var_b + (8 + 0));
count(1, 0);
  var_b1 = (var_b1 + (var_b - 1));
count(1, 0);
  var_hsize = (var_hsize + (1 << var_m));
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
  var_mask = (var_mask + (4 << var_m));
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
  goto Label_subsequences;
  Return_33_3:

printf("max refs = %d\n",A);
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 39\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_41_7;

Label_dump1:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 41\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_42_10;

Label_join_41_7:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 41\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_42_10;

Label_split_42_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_44_7;

Label_used1:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 44\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_46_10;

Label_join_44_7:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 44\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_46_10;

Label_split_46_10:
fprintf(stderr,"%d,", var_y);
  goto *stack[--stackPointer];

Label_initialise:
fprintf(stderr,"init: %d\n", var_consA);
count(1, 0);
  var_consA = (var_consA + (2 + 0));
fprintf(stderr,"init: %d\n", var_consA);
count(1, 0);
  var_consD = (var_consD + (2 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_55_4;
  goto Label_cons;
  Return_55_4:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  goto *stack[--stackPointer];

Label_build:
count(1, 0);
  var_consD = (var_consD + (2 + 0));
count(1, 0);
  var_consA = (var_consA + (3 + 0));
fprintf(stderr,"%d\n", var_consA);
  count(2,0);
   stack[stackPointer++] = &&Return_63_5;
  goto Label_cons;
  Return_63_5:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (7 + 0));
fprintf(stderr,"%d\n", var_consA);
  count(2,0);
   stack[stackPointer++] = &&Return_67_6;
  goto Label_cons;
  Return_67_6:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  goto *stack[--stackPointer];

Label_subsequences:
  if (count(1,0), var_A0 != 2) goto Label_l1; else goto Label_split_87_11;

Label_split_87_11:
count(1, 0);
  var_A0 = (var_A0 - (2 + 0));
  goto Label_join_89_6;

Label_l1:
  if (count(1,0), !(var_A0 != 0)){
    fprintf(stderr,"\nJoin failure at line 89\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A0 != 0) goto Label_entry2; else goto Label_join_93_9;

Label_join_89_6:
  if (count(1,0), var_A0 != 0){
    fprintf(stderr,"\nJoin failure at line 89\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A0 != 0) goto Label_entry2; else goto Label_join_93_9;

Label_exit2:
  if (count(1,0), !(var_A0 != 0)){
    fprintf(stderr,"\nJoin failure at line 93\n");
  writeVars(); goto programEnd;
}
  goto Label_join_95_6;

Label_join_93_9:
  if (count(1,0), var_A0 != 0){
    fprintf(stderr,"\nJoin failure at line 93\n");
  writeVars(); goto programEnd;
}
  goto Label_join_95_6;

Label_l3:
  if (count(1,0), !(var_A0 == var_nilnil)){
    fprintf(stderr,"\nJoin failure at line 95\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A0 = (var_A0 + (var_nilnil + 0));
  if (count(1,0), var_A0 == 0) goto Label_l3; else goto Label_endSS;

Label_join_95_6:
  if (count(1,0), var_A0 == var_nilnil){
    fprintf(stderr,"\nJoin failure at line 95\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A0 = (var_A0 + (var_nilnil + 0));
  if (count(1,0), var_A0 == 0) goto Label_l3; else goto Label_endSS;

Label_entry2:
  tmp = var_consP;
  var_consP = (var_A0);
  var_A0 = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_103_7;
  goto Label__cons;
  Return_103_7:
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consA);
  var_consA = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_A0;
  var_A0 = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_107_8;
  goto Label_subsequences;
  Return_107_8:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_x);
  var_x = (tmp);
  tmp = var_A1;
  var_A1 = (var_R0);
  var_R0 = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_111_9;
  goto Label_consAll;
  Return_111_9:
  goto Label_join_112_9;

Label_endSS:
  if (count(1,0), !(var_R0 == var_nilnil)){
    fprintf(stderr,"\nJoin failure at line 112\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"--> %d\n", var_R0);
  goto *stack[--stackPointer];

Label_join_112_9:
  if (count(1,0), var_R0 == var_nilnil){
    fprintf(stderr,"\nJoin failure at line 112\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"--> %d\n", var_R0);
  goto *stack[--stackPointer];

Label_consAll:
fprintf(stderr,"consAll(%d,%d)\n", var_x, var_A1);
  tmp = var_consP;
  var_consP = (var_A1);
  var_A1 = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_119_10;
  goto Label__cons;
  Return_119_10:
fprintf(stderr,"s = %d, ss = %d\n", var_consA, var_consD);
  if (count(1,0), var_consD != 2) goto Label_case2; else goto Label_split_121_14;

Label_split_121_14:
  tmp = var_ss1;
  var_ss1 = (var_consD);
  var_consD = (tmp);
  goto Label_caseEnd;

Label_case2:
  tmp = var_copyP;
  var_copyP = (var_x);
  var_x = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_126_11;
  goto Label_copy;
  Return_126_11:
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_copyP);
  var_copyP = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consA);
  var_consA = (tmp);
fprintf(stderr,"A0 ---> %d\n", var_consA);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_x;
  var_x = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_A1;
  var_A1 = (var_consD);
  var_consD = (tmp);
fprintf(stderr,"A1111 ---> %d\n", var_consA);
  count(2,0);
   stack[stackPointer++] = &&Return_135_12;
  goto Label_consAll;
  Return_135_12:
fprintf(stderr,"A1112 ---> %d\n", var_consA);
  tmp = var_ss1;
  var_ss1 = (var_R0);
  var_R0 = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
fprintf(stderr,"A1113 ---> %d\n", var_consA);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consA);
  var_consA = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_x);
  var_x = (tmp);
  goto Label_join_143_11;

Label_caseEnd:
  if (count(1,0), !(var_ss1 == 2)){
    fprintf(stderr,"\nJoin failure at line 143\n");
  writeVars(); goto programEnd;
}
  tmp = var_copyP;
  var_copyP = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_145_13;
  goto Label_copy;
  Return_145_13:
  tmp = var_consA;
  var_consA = (var_x);
  var_x = (tmp);
  tmp = var_consD;
  var_consD = (var_copyP);
  var_copyP = (tmp);
fprintf(stderr,"A ---> %d\n", var_consA);
  count(2,0);
   stack[stackPointer++] = &&Return_149_14;
  goto Label_cons;
  Return_149_14:
  tmp = var_T1;
  var_T1 = (var_consP);
  var_consP = (tmp);
  tmp = var_consA;
  var_consA = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_consD;
  var_consD = (var_ss1);
  var_ss1 = (tmp);
fprintf(stderr,"A1 ---> %d\n", var_consA);
  count(2,0);
   stack[stackPointer++] = &&Return_154_15;
  goto Label_cons;
  Return_154_15:
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
  tmp = var_consA;
  var_consA = (var_T1);
  var_T1 = (tmp);
fprintf(stderr,"A2 ---> %d\n", var_consA);
  count(2,0);
   stack[stackPointer++] = &&Return_158_16;
  goto Label_cons;
  Return_158_16:
  tmp = var_R0;
  var_R0 = (var_consP);
  var_consP = (tmp);
fprintf(stderr,"res ---> %d\n", var_R0);
  goto *stack[--stackPointer];

Label_join_143_11:
  if (count(1,0), var_ss1 == 2){
    fprintf(stderr,"\nJoin failure at line 143\n");
  writeVars(); goto programEnd;
}
  tmp = var_copyP;
  var_copyP = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_145_17;
  goto Label_copy;
  Return_145_17:
  tmp = var_consA;
  var_consA = (var_x);
  var_x = (tmp);
  tmp = var_consD;
  var_consD = (var_copyP);
  var_copyP = (tmp);
fprintf(stderr,"A ---> %d\n", var_consA);
  count(2,0);
   stack[stackPointer++] = &&Return_149_18;
  goto Label_cons;
  Return_149_18:
  tmp = var_T1;
  var_T1 = (var_consP);
  var_consP = (tmp);
  tmp = var_consA;
  var_consA = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_consD;
  var_consD = (var_ss1);
  var_ss1 = (tmp);
fprintf(stderr,"A1 ---> %d\n", var_consA);
  count(2,0);
   stack[stackPointer++] = &&Return_154_19;
  goto Label_cons;
  Return_154_19:
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
  tmp = var_consA;
  var_consA = (var_T1);
  var_T1 = (tmp);
fprintf(stderr,"A2 ---> %d\n", var_consA);
  count(2,0);
   stack[stackPointer++] = &&Return_158_20;
  goto Label_cons;
  Return_158_20:
  tmp = var_R0;
  var_R0 = (var_consP);
  var_consP = (tmp);
fprintf(stderr,"res ---> %d\n", var_R0);
  goto *stack[--stackPointer];

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 164\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_copyP < var_H) goto Label_copySymbol; else goto Label_split_165_13;

Label_split_165_13:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_170_14;

Label_copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 170\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 172\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_170_14:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 170\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 172\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 176\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 177\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 178\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 179\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 180\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_181_21;
  goto Label_hash;
  Return_181_21:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_185_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 185\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_186_17;

Label_join_185_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 185\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_186_17;

Label_split_186_17:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_188_23;

Label_split_188_23:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_190_25;

Label_split_190_25:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_192_14;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 192\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_194_12;

Label_join_192_14:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 192\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_194_12;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_197_17;

Label_join_194_12:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_197_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_199_17;

Label_join_197_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_199_17;

Label_split_199_17:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_200_17;

Label_split_200_17:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_202_22;
  goto Label__hash;
  Return_202_22:
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
  goto Label_join_209_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 210\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 211\n");
  writeVars(); goto programEnd;
}
  goto Label_join_212_12;

Label_join_209_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 210\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 211\n");
  writeVars(); goto programEnd;
}
  goto Label_join_212_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 212\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_212_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 212\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_217_23;
  goto Label__hash;
  Return_217_23:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_218_13;

Label_split_218_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_220_15;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 220\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_223_13;

Label_join_220_15:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 220\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_223_13;

Label_split_223_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_225_15;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 225\n");
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

Label_join_225_15:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 225\n");
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
    fprintf(stderr,"\nAssertion failure at line 239\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_241_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 241\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_242_10;

Label_join_241_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 241\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_242_10;

Label_split_242_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_244_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 244\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_246_10;

Label_join_244_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 244\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_246_10;

Label_split_246_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash_alt:
  if (!(var_hashV == 0 && var_hashA == 366001 && var_hashB == 827927 && var_hashC == 593041 && 1)){
    fprintf(stderr,"\nAssertion failure at line 251\n");
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
    fprintf(stderr,"\nAssertion failure at line 279\n");
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

Label__join_41_7:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~39\n");
  writeVars(); goto programEnd;
}

printf("max refs = %d\n",A);
  count(2,0);
   stack[stackPointer++] = &&Return_33_24;
  goto Label__subsequences;
  Return_33_24:
  count(2,0);
   stack[stackPointer++] = &&Return_32_25;
  goto Label__build;
  Return_32_25:
  count(2,0);
   stack[stackPointer++] = &&Return_31_26;
  goto Label__initialise;
  Return_31_26:
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
  var_mask = (var_mask - (4 << var_m));
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
  var_hsize = (var_hsize - (1 << var_m));
count(1, 0);
  var_b1 = (var_b1 - (var_b - 1));
count(1, 0);
  var_b = (var_b - (8 + 0));
printf("%u\n", var_m);
count(1,0);
  var_m = (0);
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
    fprintf(stderr,"\nJoin failure at line 42\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_41_7;

Label__split_42_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 42\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_41_7;

Label__join_44_7:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_42_10;

Label__dump1:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 46\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_44_7;

Label__split_46_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 46\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_44_7;

Label__main:
fprintf(stderr,"%d,", var_y);
  goto Label__split_46_10;

Label__initialise:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_55_27;
  goto Label__cons;
  Return_55_27:
count(1, 0);
  var_consD = (var_consD - (2 + 0));
fprintf(stderr,"init: %d\n", var_consA);
count(1, 0);
  var_consA = (var_consA - (2 + 0));
fprintf(stderr,"init: %d\n", var_consA);
  goto *stack[--stackPointer];

Label__build:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_67_28;
  goto Label__cons;
  Return_67_28:
fprintf(stderr,"%d\n", var_consA);
count(1, 0);
  var_consA = (var_consA - (7 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_63_29;
  goto Label__cons;
  Return_63_29:
fprintf(stderr,"%d\n", var_consA);
count(1, 0);
  var_consA = (var_consA - (3 + 0));
count(1, 0);
  var_consD = (var_consD - (2 + 0));
  goto *stack[--stackPointer];

Label__l1:
  if (count(1,0), !(var_A0 != 2)){
    fprintf(stderr,"\nJoin failure at line 87\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_87_11:
  if (count(1,0), var_A0 != 2){
    fprintf(stderr,"\nJoin failure at line 87\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_89_6:
count(1, 0);
  var_A0 = (var_A0 + (2 + 0));
  goto Label__split_87_11;

Label__entry2:
  if (count(1,0), !(var_A0 != 0)){
    fprintf(stderr,"\nJoin failure at line 91\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A0 != 0) goto Label__l1; else goto Label__join_89_6;

Label__join_93_9:
  if (count(1,0), var_A0 != 0){
    fprintf(stderr,"\nJoin failure at line 91\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A0 != 0) goto Label__l1; else goto Label__join_89_6;

Label__join_95_6:
  if (count(1,0), var_A0 != 0) goto Label__exit2; else goto Label__join_93_9;

Label__l3:
  if (count(1,0), !(var_A0 == 0)){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A0 = (var_A0 - (var_nilnil + 0));
  if (count(1,0), var_A0 == var_nilnil) goto Label__l3; else goto Label__join_95_6;

Label__endSS:
  if (count(1,0), var_A0 == 0){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A0 = (var_A0 - (var_nilnil + 0));
  if (count(1,0), var_A0 == var_nilnil) goto Label__l3; else goto Label__join_95_6;

Label__join_112_9:
  count(2,0);
   stack[stackPointer++] = &&Return_111_30;
  goto Label__consAll;
  Return_111_30:
  tmp = var_A1;
  var_A1 = (var_R0);
  var_R0 = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_x);
  var_x = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_107_31;
  goto Label__subsequences;
  Return_107_31:
  tmp = var_A0;
  var_A0 = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_103_32;
  goto Label_cons;
  Return_103_32:
  tmp = var_consP;
  var_consP = (var_A0);
  var_A0 = (tmp);
  goto Label__entry2;

Label__subsequences:
fprintf(stderr,"--> %d\n", var_R0);
  if (count(1,0), var_R0 == var_nilnil) goto Label__endSS; else goto Label__join_112_9;

Label__case2:
  if (count(1,0), !(var_consD != 2)){
    fprintf(stderr,"\nJoin failure at line 121\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"s = %d, ss = %d\n", var_consA, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_119_33;
  goto Label_cons;
  Return_119_33:
  tmp = var_consP;
  var_consP = (var_A1);
  var_A1 = (tmp);
fprintf(stderr,"consAll(%d,%d)\n", var_x, var_A1);
  goto *stack[--stackPointer];

Label__split_121_14:
  if (count(1,0), var_consD != 2){
    fprintf(stderr,"\nJoin failure at line 121\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"s = %d, ss = %d\n", var_consA, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_119_34;
  goto Label_cons;
  Return_119_34:
  tmp = var_consP;
  var_consP = (var_A1);
  var_A1 = (tmp);
fprintf(stderr,"consAll(%d,%d)\n", var_x, var_A1);
  goto *stack[--stackPointer];

Label__caseEnd:
  tmp = var_ss1;
  var_ss1 = (var_consD);
  var_consD = (tmp);
  goto Label__split_121_14;

Label__join_143_11:
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_x);
  var_x = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consA);
  var_consA = (tmp);
fprintf(stderr,"A1113 ---> %d\n", var_consA);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_ss1;
  var_ss1 = (var_R0);
  var_R0 = (tmp);
fprintf(stderr,"A1112 ---> %d\n", var_consA);
  count(2,0);
   stack[stackPointer++] = &&Return_135_35;
  goto Label__consAll;
  Return_135_35:
fprintf(stderr,"A1111 ---> %d\n", var_consA);
  tmp = var_A1;
  var_A1 = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_copyQ);
  var_copyQ = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
fprintf(stderr,"A0 ---> %d\n", var_consA);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consA);
  var_consA = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_126_36;
  goto Label__copy;
  Return_126_36:
  tmp = var_copyP;
  var_copyP = (var_x);
  var_x = (tmp);
  goto Label__case2;

Label__consAll:
fprintf(stderr,"res ---> %d\n", var_R0);
  tmp = var_R0;
  var_R0 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_158_37;
  goto Label__cons;
  Return_158_37:
fprintf(stderr,"A2 ---> %d\n", var_consA);
  tmp = var_consA;
  var_consA = (var_T1);
  var_T1 = (tmp);
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_154_38;
  goto Label__cons;
  Return_154_38:
fprintf(stderr,"A1 ---> %d\n", var_consA);
  tmp = var_consD;
  var_consD = (var_ss1);
  var_ss1 = (tmp);
  tmp = var_consA;
  var_consA = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_T1;
  var_T1 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_149_39;
  goto Label__cons;
  Return_149_39:
fprintf(stderr,"A ---> %d\n", var_consA);
  tmp = var_consD;
  var_consD = (var_copyP);
  var_copyP = (tmp);
  tmp = var_consA;
  var_consA = (var_x);
  var_x = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_145_40;
  goto Label__copy;
  Return_145_40:
  tmp = var_copyP;
  var_copyP = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_ss1 == 2) goto Label__caseEnd; else goto Label__join_143_11;

Label__copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 165\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~164\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_165_13:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 165\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~164\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_170_14:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_165_13;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~172\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), var_copyP < var_H) goto Label__copySymbol; else goto Label__join_170_14;

Label__join_185_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_181_41;
  goto Label__hash;
  Return_181_41:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~180\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~179\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~178\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~177\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~176\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 186\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_185_16;

Label__split_186_17:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 186\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_185_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_186_17;

Label__split_188_23:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_186_17;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 190\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_188_23;

Label__split_190_25:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 190\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_188_23;

Label__join_192_14:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_190_25;

Label__join_194_12:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_192_14;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 196\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_194_12;

Label__join_197_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 196\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_194_12;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 199\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_197_17;

Label__split_199_17:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 199\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_197_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 200\n");
  writeVars(); goto programEnd;
}
  goto Label__split_199_17;

Label__split_200_17:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 200\n");
  writeVars(); goto programEnd;
}
  goto Label__split_199_17;

Label__join_209_9:
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
   stack[stackPointer++] = &&Return_202_42;
  goto Label_hash;
  Return_202_42:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_200_17;

Label__join_212_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~211\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~210\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_209_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_212_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 218\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_217_43;
  goto Label_hash;
  Return_217_43:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_218_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 218\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_217_44;
  goto Label_hash;
  Return_217_44:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_220_15:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_218_13;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 223\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_220_15;

Label__split_223_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 223\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_220_15;

Label__join_225_15:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_223_13;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_225_15;

Label__join_241_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~239\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 242\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_241_6;

Label__split_242_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 242\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_241_6;

Label__join_244_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_242_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 246\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_244_6;

Label__split_246_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 246\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_244_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_246_10;

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
    fprintf(stderr,"\nAssertion failure at line ~251\n");
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
    fprintf(stderr,"\nAssertion failure at line ~279\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}