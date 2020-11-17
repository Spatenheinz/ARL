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
  uint var_A1 = 0;
  uint var_x = 0;
  uint var_R0 = 0;
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
    printf("var_A1 = \%u\n",var_A1);
    printf("var_x = \%u\n",var_x);
    printf("var_R0 = \%u\n",var_R0);
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
  if (var_m != 0 || scanf("%d\n",&var_m) != 1)  { fprintf(stderr,"Read failure at line 14\n");
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
   stack[stackPointer++] = &&Return_35_1;
  goto Label_initialise;
  Return_35_1:
  count(2,0);
   stack[stackPointer++] = &&Return_36_2;
  goto Label_build;
  Return_36_2:
  count(2,0);
   stack[stackPointer++] = &&Return_37_3;
  goto Label_subsequences;
  Return_37_3:
  count(2,0);
   stack[stackPointer++] = &&Return_38_4;
  goto Label__initialise;
  Return_38_4:

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
   stack[stackPointer++] = &&Return_56_5;
  goto Label_cons;
  Return_56_5:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  goto *stack[--stackPointer];

Label_build:
count(1, 0);
  var_consD = (var_consD + (2 + 0));
count(1, 0);
  var_consA = (var_consA + (43 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_63_6;
  goto Label_cons;
  Return_63_6:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (45 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_66_7;
  goto Label_cons;
  Return_66_7:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (47 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_69_8;
  goto Label_cons;
  Return_69_8:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (49 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_72_9;
  goto Label_cons;
  Return_72_9:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (411 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_75_10;
  goto Label_cons;
  Return_75_10:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (413 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_78_11;
  goto Label_cons;
  Return_78_11:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (415 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_81_12;
  goto Label_cons;
  Return_81_12:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (417 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_84_13;
  goto Label_cons;
  Return_84_13:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (419 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_87_14;
  goto Label_cons;
  Return_87_14:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (421 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_90_15;
  goto Label_cons;
  Return_90_15:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (423 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_93_16;
  goto Label_cons;
  Return_93_16:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (425 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_96_17;
  goto Label_cons;
  Return_96_17:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  goto *stack[--stackPointer];

Label_subsequences:
fprintf(stderr,"subsequences(%d)\n", var_A0);
  if (count(1,0), var_A0 != 2) goto Label_rule2; else goto Label_split_102_11;

Label_split_102_11:
count(1, 0);
  var_A0 = (var_A0 - (2 + 0));
count(1, 0);
  var_R0 = (var_R0 + (var_nilnil + 0));
  goto Label_endSS;

Label_rule2:
  tmp = var_consP;
  var_consP = (var_A0);
  var_A0 = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_108_18;
  goto Label__cons;
  Return_108_18:
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consA);
  var_consA = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_A0;
  var_A0 = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_112_19;
  goto Label_subsequences;
  Return_112_19:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_x);
  var_x = (tmp);
  tmp = var_A1;
  var_A1 = (var_R0);
  var_R0 = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_116_20;
  goto Label_consAll;
  Return_116_20:
  goto Label_join_117_9;

Label_endSS:
  if (count(1,0), !(var_R0 == var_nilnil)){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"--> %d\n", var_R0);
  goto *stack[--stackPointer];

Label_join_117_9:
  if (count(1,0), var_R0 == var_nilnil){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"--> %d\n", var_R0);
  goto *stack[--stackPointer];

Label_consAll:
  tmp = var_consP;
  var_consP = (var_A1);
  var_A1 = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_124_21;
  goto Label__cons;
  Return_124_21:
  if (count(1,0), var_consD != 2) goto Label_case2; else goto Label_split_126_14;

Label_split_126_14:
  tmp = var_ss1;
  var_ss1 = (var_consD);
  var_consD = (tmp);
  goto Label_caseEnd;

Label_case2:
  tmp = var_copyP;
  var_copyP = (var_x);
  var_x = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_131_22;
  goto Label_copy;
  Return_131_22:
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_copyP);
  var_copyP = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consA);
  var_consA = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_x;
  var_x = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_A1;
  var_A1 = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_138_23;
  goto Label_consAll;
  Return_138_23:
  tmp = var_ss1;
  var_ss1 = (var_R0);
  var_R0 = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consA);
  var_consA = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_x);
  var_x = (tmp);
  goto Label_join_144_11;

Label_caseEnd:
  if (count(1,0), !(var_ss1 == 2)){
    fprintf(stderr,"\nJoin failure at line 144\n");
  writeVars(); goto programEnd;
}
  tmp = var_copyP;
  var_copyP = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_146_24;
  goto Label_copy;
  Return_146_24:
  tmp = var_consA;
  var_consA = (var_x);
  var_x = (tmp);
  tmp = var_consD;
  var_consD = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_149_25;
  goto Label_cons;
  Return_149_25:
  tmp = var_T1;
  var_T1 = (var_consP);
  var_consP = (tmp);
  tmp = var_consA;
  var_consA = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_consD;
  var_consD = (var_ss1);
  var_ss1 = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_153_26;
  goto Label_cons;
  Return_153_26:
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
  tmp = var_consA;
  var_consA = (var_T1);
  var_T1 = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_156_27;
  goto Label_cons;
  Return_156_27:
  tmp = var_R0;
  var_R0 = (var_consP);
  var_consP = (tmp);
  goto *stack[--stackPointer];

Label_join_144_11:
  if (count(1,0), var_ss1 == 2){
    fprintf(stderr,"\nJoin failure at line 144\n");
  writeVars(); goto programEnd;
}
  tmp = var_copyP;
  var_copyP = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_146_28;
  goto Label_copy;
  Return_146_28:
  tmp = var_consA;
  var_consA = (var_x);
  var_x = (tmp);
  tmp = var_consD;
  var_consD = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_149_29;
  goto Label_cons;
  Return_149_29:
  tmp = var_T1;
  var_T1 = (var_consP);
  var_consP = (tmp);
  tmp = var_consA;
  var_consA = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_consD;
  var_consD = (var_ss1);
  var_ss1 = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_153_30;
  goto Label_cons;
  Return_153_30:
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
  tmp = var_consA;
  var_consA = (var_T1);
  var_T1 = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_156_31;
  goto Label_cons;
  Return_156_31:
  tmp = var_R0;
  var_R0 = (var_consP);
  var_consP = (tmp);
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
   stack[stackPointer++] = &&Return_181_32;
  goto Label_hash;
  Return_181_32:
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
   stack[stackPointer++] = &&Return_202_33;
  goto Label__hash;
  Return_202_33:
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
   stack[stackPointer++] = &&Return_217_34;
  goto Label__hash;
  Return_217_34:
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

Label__join_44_7:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~42\n");
  writeVars(); goto programEnd;
}

printf("max refs = %d\n",A);
  count(2,0);
   stack[stackPointer++] = &&Return_38_35;
  goto Label_initialise;
  Return_38_35:
  count(2,0);
   stack[stackPointer++] = &&Return_37_36;
  goto Label__subsequences;
  Return_37_36:
  count(2,0);
   stack[stackPointer++] = &&Return_36_37;
  goto Label__build;
  Return_36_37:
  count(2,0);
   stack[stackPointer++] = &&Return_35_38;
  goto Label__initialise;
  Return_35_38:
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
   stack[stackPointer++] = &&Return_56_39;
  goto Label__cons;
  Return_56_39:
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
   stack[stackPointer++] = &&Return_96_40;
  goto Label__cons;
  Return_96_40:
count(1, 0);
  var_consA = (var_consA - (425 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_93_41;
  goto Label__cons;
  Return_93_41:
count(1, 0);
  var_consA = (var_consA - (423 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_90_42;
  goto Label__cons;
  Return_90_42:
count(1, 0);
  var_consA = (var_consA - (421 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_87_43;
  goto Label__cons;
  Return_87_43:
count(1, 0);
  var_consA = (var_consA - (419 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_84_44;
  goto Label__cons;
  Return_84_44:
count(1, 0);
  var_consA = (var_consA - (417 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_81_45;
  goto Label__cons;
  Return_81_45:
count(1, 0);
  var_consA = (var_consA - (415 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_78_46;
  goto Label__cons;
  Return_78_46:
count(1, 0);
  var_consA = (var_consA - (413 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_75_47;
  goto Label__cons;
  Return_75_47:
count(1, 0);
  var_consA = (var_consA - (411 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_72_48;
  goto Label__cons;
  Return_72_48:
count(1, 0);
  var_consA = (var_consA - (49 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_69_49;
  goto Label__cons;
  Return_69_49:
count(1, 0);
  var_consA = (var_consA - (47 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_66_50;
  goto Label__cons;
  Return_66_50:
count(1, 0);
  var_consA = (var_consA - (45 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_63_51;
  goto Label__cons;
  Return_63_51:
count(1, 0);
  var_consA = (var_consA - (43 + 0));
count(1, 0);
  var_consD = (var_consD - (2 + 0));
  goto *stack[--stackPointer];

Label__rule2:
  if (count(1,0), !(var_A0 != 2)){
    fprintf(stderr,"\nJoin failure at line 102\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"subsequences(%d)\n", var_A0);
  goto *stack[--stackPointer];

Label__split_102_11:
  if (count(1,0), var_A0 != 2){
    fprintf(stderr,"\nJoin failure at line 102\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"subsequences(%d)\n", var_A0);
  goto *stack[--stackPointer];

Label__endSS:
count(1, 0);
  var_R0 = (var_R0 - (var_nilnil + 0));
count(1, 0);
  var_A0 = (var_A0 + (2 + 0));
  goto Label__split_102_11;

Label__join_117_9:
  count(2,0);
   stack[stackPointer++] = &&Return_116_52;
  goto Label__consAll;
  Return_116_52:
  tmp = var_A1;
  var_A1 = (var_R0);
  var_R0 = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_x);
  var_x = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_112_53;
  goto Label__subsequences;
  Return_112_53:
  tmp = var_A0;
  var_A0 = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_108_54;
  goto Label_cons;
  Return_108_54:
  tmp = var_consP;
  var_consP = (var_A0);
  var_A0 = (tmp);
  goto Label__rule2;

Label__subsequences:
fprintf(stderr,"--> %d\n", var_R0);
  if (count(1,0), var_R0 == var_nilnil) goto Label__endSS; else goto Label__join_117_9;

Label__case2:
  if (count(1,0), !(var_consD != 2)){
    fprintf(stderr,"\nJoin failure at line 126\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_124_55;
  goto Label_cons;
  Return_124_55:
  tmp = var_consP;
  var_consP = (var_A1);
  var_A1 = (tmp);
  goto *stack[--stackPointer];

Label__split_126_14:
  if (count(1,0), var_consD != 2){
    fprintf(stderr,"\nJoin failure at line 126\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_124_56;
  goto Label_cons;
  Return_124_56:
  tmp = var_consP;
  var_consP = (var_A1);
  var_A1 = (tmp);
  goto *stack[--stackPointer];

Label__caseEnd:
  tmp = var_ss1;
  var_ss1 = (var_consD);
  var_consD = (tmp);
  goto Label__split_126_14;

Label__join_144_11:
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_x);
  var_x = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consA);
  var_consA = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_ss1;
  var_ss1 = (var_R0);
  var_R0 = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_138_57;
  goto Label__consAll;
  Return_138_57:
  tmp = var_A1;
  var_A1 = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_copyQ);
  var_copyQ = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_consA);
  var_consA = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_131_58;
  goto Label__copy;
  Return_131_58:
  tmp = var_copyP;
  var_copyP = (var_x);
  var_x = (tmp);
  goto Label__case2;

Label__consAll:
  tmp = var_R0;
  var_R0 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_156_59;
  goto Label__cons;
  Return_156_59:
  tmp = var_consA;
  var_consA = (var_T1);
  var_T1 = (tmp);
  tmp = var_consD;
  var_consD = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_153_60;
  goto Label__cons;
  Return_153_60:
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
   stack[stackPointer++] = &&Return_149_61;
  goto Label__cons;
  Return_149_61:
  tmp = var_consD;
  var_consD = (var_copyP);
  var_copyP = (tmp);
  tmp = var_consA;
  var_consA = (var_x);
  var_x = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_146_62;
  goto Label__copy;
  Return_146_62:
  tmp = var_copyP;
  var_copyP = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_ss1 == 2) goto Label__caseEnd; else goto Label__join_144_11;

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
   stack[stackPointer++] = &&Return_181_63;
  goto Label__hash;
  Return_181_63:
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
   stack[stackPointer++] = &&Return_202_64;
  goto Label_hash;
  Return_202_64:
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
   stack[stackPointer++] = &&Return_217_65;
  goto Label_hash;
  Return_217_65:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_218_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 218\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_217_66;
  goto Label_hash;
  Return_217_66:
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