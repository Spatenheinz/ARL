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
  uint var_fr = 0;
  uint var_fl = 0;
  uint var_p2 = 0;
  uint var_p1 = 0;
  uint var_lhs = 0;
  uint var_nilnil = 0;
  uint var_y = 0;
  uint var_z = 0;
  uint var_lhs2 = 0;
  uint var_lhs1 = 0;
  uint var_res1 = 0;
  uint var_consA = 0;
  uint var_consP = 0;
  uint var_consD = 0;
  uint var_A0 = 0;
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
    printf("var_fr = \%u\n",var_fr);
    printf("var_fl = \%u\n",var_fl);
    printf("var_p2 = \%u\n",var_p2);
    printf("var_p1 = \%u\n",var_p1);
    printf("var_lhs = \%u\n",var_lhs);
    printf("var_nilnil = \%u\n",var_nilnil);
    printf("var_y = \%u\n",var_y);
    printf("var_z = \%u\n",var_z);
    printf("var_lhs2 = \%u\n",var_lhs2);
    printf("var_lhs1 = \%u\n",var_lhs1);
    printf("var_res1 = \%u\n",var_res1);
    printf("var_consA = \%u\n",var_consA);
    printf("var_consP = \%u\n",var_consP);
    printf("var_consD = \%u\n",var_consD);
    printf("var_A0 = \%u\n",var_A0);
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
fprintf(stderr,"res: %d %d\n", var_A0, var_consD);
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_36_4;
  goto Label__cons;
  Return_36_4:
fprintf(stderr,"res after cons %d - %d - %d\n", var_consA, var_consD, var_consP);
  tmp = var_consA;
  var_consA = (var_consP);
  var_consP = (tmp);
  tmp = var_consD;
  var_consD = (var_res1);
  var_res1 = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_40_5;
  goto Label__cons;
  Return_40_5:
fprintf(stderr,"res after cons %d - %d\n", var_consA, var_consD);
  tmp = var_consA;
  var_consA = (var_lhs1);
  var_lhs1 = (tmp);
  tmp = var_consD;
  var_consD = (var_lhs2);
  var_lhs2 = (tmp);
  tmp = var_consP;
  var_consP = (var_res1);
  var_res1 = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_46_6;
  goto Label__cons;
  Return_46_6:
fprintf(stderr,"final: %d - %d - %d - %d\n", var_lhs1, var_lhs2, var_consA, var_consD);

printf("max refs = %d\n",A);
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 53\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_55_7;

Label_dump1:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 55\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_56_10;

Label_join_55_7:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 55\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_56_10;

Label_split_56_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_58_7;

Label_used1:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 58\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_60_10;

Label_join_58_7:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 58\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_60_10;

Label_split_60_10:
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
   stack[stackPointer++] = &&Return_69_7;
  goto Label_cons;
  Return_69_7:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  goto *stack[--stackPointer];

Label_build:
count(1, 0);
  var_consD = (var_consD + (3 + 0));
count(1, 0);
  var_consA = (var_consA + (5 + 0));
fprintf(stderr,"%d\n", var_consA);
  count(2,0);
   stack[stackPointer++] = &&Return_77_8;
  goto Label_cons;
  Return_77_8:
  tmp = var_lhs;
  var_lhs = (var_consP);
  var_consP = (tmp);
count(1, 0);
  var_consD = (var_consD + (7 + 0));
count(1, 0);
  var_consA = (var_consA + (9 + 0));
fprintf(stderr,"%d\n", var_consA);
fprintf(stderr,"%d\n", var_consP);
  count(2,0);
   stack[stackPointer++] = &&Return_86_9;
  goto Label_cons;
  Return_86_9:
  tmp = var_lhs;
  var_lhs = (var_consA);
  var_consA = (tmp);
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_89_10;
  goto Label_cons;
  Return_89_10:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  goto *stack[--stackPointer];

Label_flip:
  goto Label_entryLR;

Label_exitLR:
  goto *stack[--stackPointer];

Label_entryLR:
  if (count(1,0), (var_A0 & 3)) goto Label_l1; else goto Label_split_104_8;

Label_split_104_8:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_106_11;
  goto Label__cons;
  Return_106_11:
  tmp = var_p1;
  var_p1 = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_consA != 0) goto Label_l3; else goto Label_split_108_12;

Label_split_108_12:
  tmp = var_p2;
  var_p2 = (var_consD);
  var_consD = (tmp);
  if (count(1,0), var_consD == 0) goto Label_l4; else goto Label_join_111_4;

Label_l3:
  if (count(1,0), !(var_consA != 0)){
    fprintf(stderr,"\nJoin failure at line 111\n");
  writeVars(); goto programEnd;
}
  tmp = var_p1;
  var_p1 = (var_consA);
  var_consA = (tmp);
fprintf(stderr,"first vcons %d %d \n", var_consA, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_121_12;
  goto Label_cons;
  Return_121_12:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  goto Label_join_123_4;

Label_join_111_4:
  if (count(1,0), var_consA != 0){
    fprintf(stderr,"\nJoin failure at line 111\n");
  writeVars(); goto programEnd;
}
  tmp = var_p1;
  var_p1 = (var_consA);
  var_consA = (tmp);
fprintf(stderr,"first vcons %d %d \n", var_consA, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_121_13;
  goto Label_cons;
  Return_121_13:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  goto Label_join_123_4;

Label_l4:
  if (count(1,0), !(var_A0 == 0)){
    fprintf(stderr,"\nJoin failure at line 123\n");
  writeVars(); goto programEnd;
}
  goto Label_join_124_4;

Label_join_123_4:
  if (count(1,0), var_A0 == 0){
    fprintf(stderr,"\nJoin failure at line 123\n");
  writeVars(); goto programEnd;
}
  goto Label_join_124_4;

Label_l1:
  if (count(1,0), !((var_A0 & 3))){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A0 != 0) goto Label_Entry2; else goto Label_split_127_9;

Label_join_124_4:
  if (count(1,0), (var_A0 & 3)){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A0 != 0) goto Label_Entry2; else goto Label_split_127_9;

Label_split_127_9:
  tmp = var_A0;
  var_A0 = (var_p1);
  var_p1 = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_p2);
  var_p2 = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_132_14;
  goto Label_flip;
  Return_132_14:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_p2);
  var_p2 = (tmp);
fprintf(stderr," test: %d %d %d", var_A0, var_fl, var_p2);
  tmp = var_A0;
  var_A0 = (var_fl);
  var_fl = (tmp);
  if (!(var_A0 == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 137\n");
  writeVars(); goto programEnd;
}
  tmp = var_A0;
  var_A0 = (var_p2);
  var_p2 = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_p1);
  var_p1 = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_fl);
  var_fl = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_144_15;
  goto Label_flip;
  Return_144_15:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_fl);
  var_fl = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_p2);
  var_p2 = (tmp);
  tmp = var_A0;
  var_A0 = (var_fr);
  var_fr = (tmp);
  if (!(var_A0 == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 150\n");
  writeVars(); goto programEnd;
}
  goto Label_join_152_7;

Label_exit2:
  if (count(1,0), !(var_A0 != 0)){
    fprintf(stderr,"\nJoin failure at line 152\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A0 & 3)) goto Label_res1; else goto Label_split_156_8;

Label_join_152_7:
  if (count(1,0), var_A0 != 0){
    fprintf(stderr,"\nJoin failure at line 152\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A0 & 3)) goto Label_res1; else goto Label_split_156_8;

Label_split_156_8:
fprintf(stderr,"something wroing here %d %d\n", var_fr, var_fl);
  if (count(1,0), var_A0 == 0) goto Label_res4; else goto Label_split_158_9;

Label_split_158_9:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_160_16;
  goto Label__cons;
  Return_160_16:
  tmp = var_fr;
  var_fr = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_consA == 0) goto Label_res3; else goto Label_join_163_6;

Label_res4:
  if (count(1,0), !(var_consD == 0)){
    fprintf(stderr,"\nJoin failure at line 163\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_consD);
  var_consD = (tmp);
  goto Label_join_165_6;

Label_join_163_6:
  if (count(1,0), var_consD == 0){
    fprintf(stderr,"\nJoin failure at line 163\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_consD);
  var_consD = (tmp);
  goto Label_join_165_6;

Label_res3:
  if (count(1,0), !(var_consA != 0)){
    fprintf(stderr,"\nJoin failure at line 165\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_167_17;
  goto Label_cons;
  Return_167_17:
  tmp = var_consP;
  var_consP = (var_A0);
  var_A0 = (tmp);
  goto Label_join_169_6;

Label_join_165_6:
  if (count(1,0), var_consA != 0){
    fprintf(stderr,"\nJoin failure at line 165\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_167_18;
  goto Label_cons;
  Return_167_18:
  tmp = var_consP;
  var_consP = (var_A0);
  var_A0 = (tmp);
  goto Label_join_169_6;

Label_res1:
  if (count(1,0), !((var_A0 & 3))){
    fprintf(stderr,"\nJoin failure at line 169\n");
  writeVars(); goto programEnd;
}
  goto Label_exitLR;

Label_join_169_6:
  if (count(1,0), (var_A0 & 3)){
    fprintf(stderr,"\nJoin failure at line 169\n");
  writeVars(); goto programEnd;
}
  goto Label_exitLR;

Label_Entry2:
  tmp = var_x;
  var_x = (var_A0);
  var_A0 = (tmp);
  if (count(1,0), var_A0 != 0) goto Label_entry3; else goto Label_join_176_7;

Label_exit3:
  if (count(1,0), !(var_A0 != 0)){
    fprintf(stderr,"\nJoin failure at line 176\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A0);
  var_A0 = (tmp);
fprintf(stderr," second rule %d,%d --- %d/%d\n", var_x, var_A0, var_p1, var_p2);
  goto Label_exit2;

Label_join_176_7:
  if (count(1,0), var_A0 != 0){
    fprintf(stderr,"\nJoin failure at line 176\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A0);
  var_A0 = (tmp);
fprintf(stderr," second rule %d,%d --- %d/%d\n", var_x, var_A0, var_p1, var_p2);
  goto Label_exit2;

Label_entry3:
  if (!(var_A0 != var_A0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 182\n");
  writeVars(); goto programEnd;
}
  goto Label_exit3;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 187\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_copyP < var_H) goto Label_copySymbol; else goto Label_split_188_13;

Label_split_188_13:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_193_14;

Label_copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 193\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 195\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_193_14:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 193\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 195\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 199\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 200\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 201\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 202\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 203\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_204_19;
  goto Label_hash;
  Return_204_19:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_208_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_209_17;

Label_join_208_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_209_17;

Label_split_209_17:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_211_23;

Label_split_211_23:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_213_25;

Label_split_213_25:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_215_14;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 215\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_217_12;

Label_join_215_14:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 215\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_217_12;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 217\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_220_17;

Label_join_217_12:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 217\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_220_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 220\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_222_17;

Label_join_220_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 220\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_222_17;

Label_split_222_17:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_223_17;

Label_split_223_17:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_225_20;
  goto Label__hash;
  Return_225_20:
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
  goto Label_join_232_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 232\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 233\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 234\n");
  writeVars(); goto programEnd;
}
  goto Label_join_235_12;

Label_join_232_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 232\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 233\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 234\n");
  writeVars(); goto programEnd;
}
  goto Label_join_235_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 235\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_235_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 235\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_240_21;
  goto Label__hash;
  Return_240_21:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_241_13;

Label_split_241_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_243_15;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 243\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_246_13;

Label_join_243_15:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 243\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_246_13;

Label_split_246_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_248_15;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 248\n");
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

Label_join_248_15:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 248\n");
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
    fprintf(stderr,"\nAssertion failure at line 262\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_264_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 264\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_265_10;

Label_join_264_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 264\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_265_10;

Label_split_265_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_267_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 267\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_269_10;

Label_join_267_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 267\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_269_10;

Label_split_269_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash_alt:
  if (!(var_hashV == 0 && var_hashA == 366001 && var_hashB == 827927 && var_hashC == 593041 && 1)){
    fprintf(stderr,"\nAssertion failure at line 274\n");
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
    fprintf(stderr,"\nAssertion failure at line 302\n");
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

Label__join_55_7:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~53\n");
  writeVars(); goto programEnd;
}

printf("max refs = %d\n",A);
fprintf(stderr,"final: %d - %d - %d - %d\n", var_lhs1, var_lhs2, var_consA, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_46_22;
  goto Label_cons;
  Return_46_22:
  tmp = var_consP;
  var_consP = (var_res1);
  var_res1 = (tmp);
  tmp = var_consD;
  var_consD = (var_lhs2);
  var_lhs2 = (tmp);
  tmp = var_consA;
  var_consA = (var_lhs1);
  var_lhs1 = (tmp);
fprintf(stderr,"res after cons %d - %d\n", var_consA, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_40_23;
  goto Label_cons;
  Return_40_23:
  tmp = var_consD;
  var_consD = (var_res1);
  var_res1 = (tmp);
  tmp = var_consA;
  var_consA = (var_consP);
  var_consP = (tmp);
fprintf(stderr,"res after cons %d - %d - %d\n", var_consA, var_consD, var_consP);
  count(2,0);
   stack[stackPointer++] = &&Return_36_24;
  goto Label_cons;
  Return_36_24:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
fprintf(stderr,"res: %d %d\n", var_A0, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_33_25;
  goto Label_flip;
  Return_33_25:
  count(2,0);
   stack[stackPointer++] = &&Return_32_26;
  goto Label__build;
  Return_32_26:
  count(2,0);
   stack[stackPointer++] = &&Return_31_27;
  goto Label__initialise;
  Return_31_27:
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
    fprintf(stderr,"\nJoin failure at line 56\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_55_7;

Label__split_56_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 56\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_55_7;

Label__join_58_7:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_56_10;

Label__dump1:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 60\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_58_7;

Label__split_60_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 60\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_58_7;

Label__main:
fprintf(stderr,"%d,", var_y);
  goto Label__split_60_10;

Label__initialise:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_69_28;
  goto Label__cons;
  Return_69_28:
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
   stack[stackPointer++] = &&Return_89_29;
  goto Label__cons;
  Return_89_29:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  tmp = var_lhs;
  var_lhs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_86_30;
  goto Label__cons;
  Return_86_30:
fprintf(stderr,"%d\n", var_consP);
fprintf(stderr,"%d\n", var_consA);
count(1, 0);
  var_consA = (var_consA - (9 + 0));
count(1, 0);
  var_consD = (var_consD - (7 + 0));
  tmp = var_lhs;
  var_lhs = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_77_31;
  goto Label__cons;
  Return_77_31:
fprintf(stderr,"%d\n", var_consA);
count(1, 0);
  var_consA = (var_consA - (5 + 0));
count(1, 0);
  var_consD = (var_consD - (3 + 0));
  goto *stack[--stackPointer];

Label__entryLR:
  goto *stack[--stackPointer];

Label__flip:
  goto Label__exitLR;

Label__l1:
  if (count(1,0), !((var_A0 & 3))){
    fprintf(stderr,"\nJoin failure at line 104\n");
  writeVars(); goto programEnd;
}
  goto Label__entryLR;

Label__split_104_8:
  if (count(1,0), (var_A0 & 3)){
    fprintf(stderr,"\nJoin failure at line 104\n");
  writeVars(); goto programEnd;
}
  goto Label__entryLR;

Label__l3:
  if (count(1,0), !(var_consA != 0)){
    fprintf(stderr,"\nJoin failure at line 108\n");
  writeVars(); goto programEnd;
}
  tmp = var_p1;
  var_p1 = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_106_32;
  goto Label_cons;
  Return_106_32:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  goto Label__split_104_8;

Label__split_108_12:
  if (count(1,0), var_consA != 0){
    fprintf(stderr,"\nJoin failure at line 108\n");
  writeVars(); goto programEnd;
}
  tmp = var_p1;
  var_p1 = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_106_33;
  goto Label_cons;
  Return_106_33:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  goto Label__split_104_8;

Label__l4:
  if (count(1,0), !(var_consD == 0)){
    fprintf(stderr,"\nJoin failure at line 110\n");
  writeVars(); goto programEnd;
}
  tmp = var_p2;
  var_p2 = (var_consD);
  var_consD = (tmp);
  goto Label__split_108_12;

Label__join_111_4:
  if (count(1,0), var_consD == 0){
    fprintf(stderr,"\nJoin failure at line 110\n");
  writeVars(); goto programEnd;
}
  tmp = var_p2;
  var_p2 = (var_consD);
  var_consD = (tmp);
  goto Label__split_108_12;

Label__join_123_4:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_121_34;
  goto Label__cons;
  Return_121_34:
fprintf(stderr,"first vcons %d %d \n", var_consA, var_consD);
  tmp = var_p1;
  var_p1 = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_consA != 0) goto Label__l3; else goto Label__join_111_4;

Label__join_124_4:
  if (count(1,0), var_A0 == 0) goto Label__l4; else goto Label__join_123_4;

Label__Entry2:
  if (count(1,0), !(var_A0 != 0)){
    fprintf(stderr,"\nJoin failure at line 127\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A0 & 3)) goto Label__l1; else goto Label__join_124_4;

Label__split_127_9:
  if (count(1,0), var_A0 != 0){
    fprintf(stderr,"\nJoin failure at line 127\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A0 & 3)) goto Label__l1; else goto Label__join_124_4;

Label__join_152_7:
  if (!(var_A0 == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~150\n");
  writeVars(); goto programEnd;
}
  tmp = var_A0;
  var_A0 = (var_fr);
  var_fr = (tmp);
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_p2);
  var_p2 = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_fl);
  var_fl = (tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_144_35;
  goto Label__flip;
  Return_144_35:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_fl);
  var_fl = (tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_p1);
  var_p1 = (tmp);
  tmp = var_A0;
  var_A0 = (var_p2);
  var_p2 = (tmp);
  if (!(var_A0 == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~137\n");
  writeVars(); goto programEnd;
}
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
   stack[stackPointer++] = &&Return_132_36;
  goto Label__flip;
  Return_132_36:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = (count(0,1), Mem[var_stackP]);
  Mem[var_stackP] = (count(0,1), var_p2);
  var_p2 = (tmp);
  tmp = var_A0;
  var_A0 = (var_p1);
  var_p1 = (tmp);
  goto Label__split_127_9;

Label__res1:
  if (count(1,0), !((var_A0 & 3))){
    fprintf(stderr,"\nJoin failure at line 156\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A0 != 0) goto Label__exit2; else goto Label__join_152_7;

Label__split_156_8:
  if (count(1,0), (var_A0 & 3)){
    fprintf(stderr,"\nJoin failure at line 156\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A0 != 0) goto Label__exit2; else goto Label__join_152_7;

Label__res4:
  if (count(1,0), !(var_A0 == 0)){
    fprintf(stderr,"\nJoin failure at line 158\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"something wroing here %d %d\n", var_fr, var_fl);
  goto Label__split_156_8;

Label__split_158_9:
  if (count(1,0), var_A0 == 0){
    fprintf(stderr,"\nJoin failure at line 158\n");
  writeVars(); goto programEnd;
}
fprintf(stderr,"something wroing here %d %d\n", var_fr, var_fl);
  goto Label__split_156_8;

Label__res3:
  if (count(1,0), !(var_consA == 0)){
    fprintf(stderr,"\nJoin failure at line 162\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_160_37;
  goto Label_cons;
  Return_160_37:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  goto Label__split_158_9;

Label__join_163_6:
  if (count(1,0), var_consA == 0){
    fprintf(stderr,"\nJoin failure at line 162\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_160_38;
  goto Label_cons;
  Return_160_38:
  tmp = var_A0;
  var_A0 = (var_consP);
  var_consP = (tmp);
  goto Label__split_158_9;

Label__join_165_6:
  tmp = var_fl;
  var_fl = (var_consD);
  var_consD = (tmp);
  if (count(1,0), var_consD == 0) goto Label__res4; else goto Label__join_163_6;

Label__join_169_6:
  tmp = var_consP;
  var_consP = (var_A0);
  var_A0 = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_167_39;
  goto Label__cons;
  Return_167_39:
  tmp = var_fr;
  var_fr = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_consA != 0) goto Label__res3; else goto Label__join_165_6;

Label__exitLR:
  if (count(1,0), (var_A0 & 3)) goto Label__res1; else goto Label__join_169_6;

Label__entry3:
  if (count(1,0), !(var_A0 != 0)){
    fprintf(stderr,"\nJoin failure at line 175\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A0);
  var_A0 = (tmp);
  goto Label__Entry2;

Label__join_176_7:
  if (count(1,0), var_A0 != 0){
    fprintf(stderr,"\nJoin failure at line 175\n");
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
  if (count(1,0), var_A0 != 0) goto Label__exit3; else goto Label__join_176_7;

Label__exit3:
  if (!(var_A0 != var_A0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~182\n");
  writeVars(); goto programEnd;
}
  goto Label__entry3;

Label__copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~187\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_188_13:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~187\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_193_14:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_188_13;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~195\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), var_copyP < var_H) goto Label__copySymbol; else goto Label__join_193_14;

Label__join_208_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_204_40;
  goto Label__hash;
  Return_204_40:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~203\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~202\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~201\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~200\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~199\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_208_16;

Label__split_209_17:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_208_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_209_17;

Label__split_211_23:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_209_17;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 213\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_211_23;

Label__split_213_25:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 213\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_211_23;

Label__join_215_14:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_213_25;

Label__join_217_12:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_215_14;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_217_12;

Label__join_220_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_217_12;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 222\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_220_17;

Label__split_222_17:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 222\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_220_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 223\n");
  writeVars(); goto programEnd;
}
  goto Label__split_222_17;

Label__split_223_17:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 223\n");
  writeVars(); goto programEnd;
}
  goto Label__split_222_17;

Label__join_232_9:
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
   stack[stackPointer++] = &&Return_225_41;
  goto Label_hash;
  Return_225_41:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_223_17;

Label__join_235_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~234\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~233\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_232_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_235_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 241\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_240_42;
  goto Label_hash;
  Return_240_42:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_241_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 241\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_240_43;
  goto Label_hash;
  Return_240_43:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_243_15:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_241_13;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 246\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_243_15;

Label__split_246_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 246\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_243_15;

Label__join_248_15:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_246_13;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_248_15;

Label__join_264_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~262\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 265\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_264_6;

Label__split_265_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 265\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_264_6;

Label__join_267_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_265_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 269\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_267_6;

Label__split_269_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 269\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_267_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_269_10;

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
    fprintf(stderr,"\nAssertion failure at line ~274\n");
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
    fprintf(stderr,"\nAssertion failure at line ~302\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}