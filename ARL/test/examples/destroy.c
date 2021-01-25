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
  uint var_fieldsD = 0;
  uint var_fieldsA = 0;
  uint var_fieldsP = 0;
  uint var_ttt = 0;
  uint var_copyQ = 0;
  uint var_copyP = 0;
  uint var_x = 0;
  uint var_t2x_x = 0;
  uint var_t1x_x = 0;
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
    printf("var_fieldsD = \%u\n",var_fieldsD);
    printf("var_fieldsA = \%u\n",var_fieldsA);
    printf("var_fieldsP = \%u\n",var_fieldsP);
    printf("var_ttt = \%u\n",var_ttt);
    printf("var_copyQ = \%u\n",var_copyQ);
    printf("var_copyP = \%u\n",var_copyP);
    printf("var_x = \%u\n",var_x);
    printf("var_t2x_x = \%u\n",var_t2x_x);
    printf("var_t1x_x = \%u\n",var_t1x_x);
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
   stack[stackPointer++] = &&Return_26_1;
  goto Label_initialise;
  Return_26_1:
  count(2,0);
   stack[stackPointer++] = &&Return_27_2;
  goto Label_build;
  Return_27_2:
  count(2,0);
   stack[stackPointer++] = &&Return_29_3;
  goto Label_destroy;
  Return_29_3:

printf("max refs = %d\n",A);
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 32\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_34_7;

Label_dump1:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 34\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_35_10;

Label_join_34_7:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 34\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_35_10;

Label_split_35_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_37_7;

Label_used1:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 37\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_39_10;

Label_join_37_7:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 37\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_39_10;

Label_split_39_10:
fprintf(stderr,"%d,", var_y);
  goto *stack[--stackPointer];

Label_initialise:
count(1, 0);
  var_consA = (var_consA + (2 + 0));
count(1, 0);
  var_consD = (var_consD + (2 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_47_4;
  goto Label_cons;
  Return_47_4:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  goto *stack[--stackPointer];

Label_build:
count(1, 0);
  var_consD = (var_consD + (2 + 0));
count(1, 0);
  var_consA = (var_consA + (21 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_55_5;
  goto Label_cons;
  Return_55_5:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (19 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_58_6;
  goto Label_cons;
  Return_58_6:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (17 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_61_7;
  goto Label_cons;
  Return_61_7:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (15 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_64_8;
  goto Label_cons;
  Return_64_8:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (13 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_67_9;
  goto Label_cons;
  Return_67_9:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (11 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_70_10;
  goto Label_cons;
  Return_70_10:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (9 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_73_11;
  goto Label_cons;
  Return_73_11:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (7 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_76_12;
  goto Label_cons;
  Return_76_12:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (5 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_79_13;
  goto Label_cons;
  Return_79_13:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (3 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_82_14;
  goto Label_cons;
  Return_82_14:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  tmp = var_consD;
  var_consD = (var_A);
  var_A = (tmp);
  goto *stack[--stackPointer];

Label_destroy:
  goto Label_destroy_entry_1;

Label_destroy_exit_1:
  goto *stack[--stackPointer];

Label_destroy_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_x_xdestroy1; else goto Label_split_97_7;

Label_split_97_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_99_15;
  goto Label__cons;
  Return_99_15:
  tmp = var_t1x_x;
  var_t1x_x = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_x;
  var_t2x_x = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_t1x_x);
  var_t1x_x = (tmp);
  if (count(1,0), var_t1x_x != 0) goto Label_x_xdestroy2; else goto Label_split_103_12;

Label_split_103_12:
  if (count(1,0), var_t2x_x != var_x) goto Label_destroy5; else goto Label_split_104_12;

Label_split_104_12:
  tmp = var_x;
  var_x = (var_copyP);
  var_copyP = (tmp);
  tmp = var_t2x_x;
  var_t2x_x = (var_copyQ);
  var_copyQ = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_107_16;
  goto Label__copy;
  Return_107_16:
  tmp = var_x;
  var_x = (var_copyP);
  var_copyP = (tmp);
  goto Label_join_109_10;

Label_destroy5:
  if (count(1,0), !(var_t2x_x != 0)){
    fprintf(stderr,"\nJoin failure at line 109\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t2x_x == 0) goto Label_x_xdestroy3; else goto Label_join_111_13;

Label_join_109_10:
  if (count(1,0), var_t2x_x != 0){
    fprintf(stderr,"\nJoin failure at line 109\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t2x_x == 0) goto Label_x_xdestroy3; else goto Label_join_111_13;

Label_x_xdestroy2:
  if (count(1,0), !(var_t1x_x != 0)){
    fprintf(stderr,"\nJoin failure at line 111\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_x);
  var_t1x_x = (tmp);
  tmp = var_t1x_x;
  var_t1x_x = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_x;
  var_t2x_x = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_115_17;
  goto Label_cons;
  Return_115_17:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_117_13;

Label_join_111_13:
  if (count(1,0), var_t1x_x != 0){
    fprintf(stderr,"\nJoin failure at line 111\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_x);
  var_t1x_x = (tmp);
  tmp = var_t1x_x;
  var_t1x_x = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_x;
  var_t2x_x = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_115_18;
  goto Label_cons;
  Return_115_18:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_117_13;

Label_x_xdestroy3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  goto Label_join_118_13;

Label_join_117_13:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  goto Label_join_118_13;

Label_x_xdestroy1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 118\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_destroy_entry_2; else goto Label_join_122_16;

Label_join_118_13:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 118\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_destroy_entry_2; else goto Label_join_122_16;

Label_destroy_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 122\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  goto Label_destroy_exit_1;

Label_join_122_16:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 122\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  goto Label_destroy_exit_1;

Label_destroy_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 129\n");
  writeVars(); goto programEnd;
}
  goto Label_destroy_exit_2;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 134\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_copyP & 3) == 0) goto Label_copySymbol; else goto Label_split_135_12;

Label_split_135_12:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_140_12;

Label_copySymbol:
  if (count(1,0), !((var_copyP & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 140\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 142\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_140_12:
  if (count(1,0), (var_copyP & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 140\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 142\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_fields:
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 147\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsA = (var_fieldsA + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label_fields1; else goto Label_split_150_14;

Label_split_150_14:
count(1, 0);
  Mem[var_fieldsA] = (count(0,1), (count(0,1), Mem[var_fieldsA]) + (1 + 0));
  goto Label_join_152_9;

Label_fields1:
  if (count(1,0), !((var_fieldsA & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 152\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsD = (var_fieldsD + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label_fields2; else goto Label_split_155_14;

Label_join_152_9:
  if (count(1,0), (var_fieldsA & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 152\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsD = (var_fieldsD + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label_fields2; else goto Label_split_155_14;

Label_split_155_14:
count(1, 0);
  Mem[var_fieldsD] = (count(0,1), (count(0,1), Mem[var_fieldsD]) + (1 + 0));
  goto Label_join_157_9;

Label_fields2:
  if (count(1,0), !((var_fieldsD & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 157\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (8 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 159\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_157_9:
  if (count(1,0), (var_fieldsD & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 157\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (8 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 159\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 165\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 166\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 167\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 168\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 169\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_170_19;
  goto Label_hash;
  Return_170_19:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_173_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 173\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_174_15;

Label_join_173_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 173\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_174_15;

Label_split_174_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_176_19;

Label_split_176_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_178_19;

Label_split_178_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_180_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 180\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_182_10;

Label_join_180_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 180\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_182_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 182\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_185_17;

Label_join_182_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 182\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_185_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 185\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_187_15;

Label_join_185_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 185\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_187_15;

Label_split_187_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_188_15;

Label_split_188_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_190_20;
  goto Label__hash;
  Return_190_20:
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
  goto Label_join_197_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 198\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 199\n");
  writeVars(); goto programEnd;
}
  goto Label_join_200_12;

Label_join_197_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 198\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 199\n");
  writeVars(); goto programEnd;
}
  goto Label_join_200_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 200\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_200_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 200\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_205_21;
  goto Label__hash;
  Return_205_21:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_206_11;

Label_split_206_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_208_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_211_11;

Label_join_208_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_211_11;

Label_split_211_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_213_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 213\n");
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

Label_join_213_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 213\n");
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
    fprintf(stderr,"\nAssertion failure at line 223\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_225_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 225\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_226_10;

Label_join_225_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 225\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_226_10;

Label_split_226_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_228_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 228\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_230_10;

Label_join_228_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 228\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_230_10;

Label_split_230_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 235\n");
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

Label__join_34_7:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~32\n");
  writeVars(); goto programEnd;
}

printf("max refs = %d\n",A);
  count(2,0);
   stack[stackPointer++] = &&Return_29_22;
  goto Label__destroy;
  Return_29_22:
  count(2,0);
   stack[stackPointer++] = &&Return_27_23;
  goto Label__build;
  Return_27_23:
  count(2,0);
   stack[stackPointer++] = &&Return_26_24;
  goto Label__initialise;
  Return_26_24:
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
    fprintf(stderr,"\nJoin failure at line 35\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_34_7;

Label__split_35_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 35\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_34_7;

Label__join_37_7:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_35_10;

Label__dump1:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 39\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_37_7;

Label__split_39_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 39\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_37_7;

Label__main:
fprintf(stderr,"%d,", var_y);
  goto Label__split_39_10;

Label__initialise:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_47_25;
  goto Label__cons;
  Return_47_25:
count(1, 0);
  var_consD = (var_consD - (2 + 0));
count(1, 0);
  var_consA = (var_consA - (2 + 0));
  goto *stack[--stackPointer];

Label__build:
  tmp = var_consD;
  var_consD = (var_A);
  var_A = (tmp);
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_82_26;
  goto Label__cons;
  Return_82_26:
count(1, 0);
  var_consA = (var_consA - (3 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_79_27;
  goto Label__cons;
  Return_79_27:
count(1, 0);
  var_consA = (var_consA - (5 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_76_28;
  goto Label__cons;
  Return_76_28:
count(1, 0);
  var_consA = (var_consA - (7 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_73_29;
  goto Label__cons;
  Return_73_29:
count(1, 0);
  var_consA = (var_consA - (9 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_70_30;
  goto Label__cons;
  Return_70_30:
count(1, 0);
  var_consA = (var_consA - (11 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_67_31;
  goto Label__cons;
  Return_67_31:
count(1, 0);
  var_consA = (var_consA - (13 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_64_32;
  goto Label__cons;
  Return_64_32:
count(1, 0);
  var_consA = (var_consA - (15 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_61_33;
  goto Label__cons;
  Return_61_33:
count(1, 0);
  var_consA = (var_consA - (17 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_58_34;
  goto Label__cons;
  Return_58_34:
count(1, 0);
  var_consA = (var_consA - (19 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_55_35;
  goto Label__cons;
  Return_55_35:
count(1, 0);
  var_consA = (var_consA - (21 + 0));
count(1, 0);
  var_consD = (var_consD - (2 + 0));
  goto *stack[--stackPointer];

Label__destroy_entry_1:
  goto *stack[--stackPointer];

Label__destroy:
  goto Label__destroy_exit_1;

Label__x_xdestroy1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
  goto Label__destroy_entry_1;

Label__split_97_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
  goto Label__destroy_entry_1;

Label__x_xdestroy2:
  if (count(1,0), !(var_t1x_x != 0)){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_x);
  var_t1x_x = (tmp);
  tmp = var_t2x_x;
  var_t2x_x = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_x;
  var_t1x_x = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_99_36;
  goto Label_cons;
  Return_99_36:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_97_7;

Label__split_103_12:
  if (count(1,0), var_t1x_x != 0){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_x);
  var_t1x_x = (tmp);
  tmp = var_t2x_x;
  var_t2x_x = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_x;
  var_t1x_x = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_99_37;
  goto Label_cons;
  Return_99_37:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_97_7;

Label__destroy5:
  if (count(1,0), !(var_t2x_x != var_x)){
    fprintf(stderr,"\nJoin failure at line 104\n");
  writeVars(); goto programEnd;
}
  goto Label__split_103_12;

Label__split_104_12:
  if (count(1,0), var_t2x_x != var_x){
    fprintf(stderr,"\nJoin failure at line 104\n");
  writeVars(); goto programEnd;
}
  goto Label__split_103_12;

Label__join_109_10:
  tmp = var_x;
  var_x = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_107_38;
  goto Label_copy;
  Return_107_38:
  tmp = var_t2x_x;
  var_t2x_x = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_x;
  var_x = (var_copyP);
  var_copyP = (tmp);
  goto Label__split_104_12;

Label__x_xdestroy3:
  if (count(1,0), !(var_t2x_x == 0)){
    fprintf(stderr,"\nJoin failure at line 110\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t2x_x != 0) goto Label__destroy5; else goto Label__join_109_10;

Label__join_111_13:
  if (count(1,0), var_t2x_x == 0){
    fprintf(stderr,"\nJoin failure at line 110\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t2x_x != 0) goto Label__destroy5; else goto Label__join_109_10;

Label__join_117_13:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_115_39;
  goto Label__cons;
  Return_115_39:
  tmp = var_t2x_x;
  var_t2x_x = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_x;
  var_t1x_x = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_t1x_x);
  var_t1x_x = (tmp);
  if (count(1,0), var_t1x_x != 0) goto Label__x_xdestroy2; else goto Label__join_111_13;

Label__join_118_13:
  if (count(1,0), var_A == 0) goto Label__x_xdestroy3; else goto Label__join_117_13;

Label__destroy_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 119\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xdestroy1; else goto Label__join_118_13;

Label__join_122_16:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 119\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xdestroy1; else goto Label__join_118_13;

Label__destroy_exit_1:
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__destroy_exit_2; else goto Label__join_122_16;

Label__destroy_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~129\n");
  writeVars(); goto programEnd;
}
  goto Label__destroy_entry_2;

Label__copySymbol:
  if (count(1,0), !((var_copyP & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 135\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~134\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_135_12:
  if (count(1,0), (var_copyP & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 135\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~134\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_140_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_135_12;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~142\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), (var_copyP & 3) == 0) goto Label__copySymbol; else goto Label__join_140_12;

Label__fields1:
  if (count(1,0), !((var_fieldsA & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 150\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsA = (var_fieldsA - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~147\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_150_14:
  if (count(1,0), (var_fieldsA & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 150\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsA = (var_fieldsA - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~147\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_152_9:
count(1, 0);
  Mem[var_fieldsA] = (count(0,1), (count(0,1), Mem[var_fieldsA]) - (1 + 0));
  goto Label__split_150_14;

Label__fields2:
  if (count(1,0), !((var_fieldsD & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 155\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsD = (var_fieldsD - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label__fields1; else goto Label__join_152_9;

Label__split_155_14:
  if (count(1,0), (var_fieldsD & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 155\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsD = (var_fieldsD - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label__fields1; else goto Label__join_152_9;

Label__join_157_9:
count(1, 0);
  Mem[var_fieldsD] = (count(0,1), (count(0,1), Mem[var_fieldsD]) - (1 + 0));
  goto Label__split_155_14;

Label__fields:
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~159\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (8 + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label__fields2; else goto Label__join_157_9;

Label__join_173_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_170_40;
  goto Label__hash;
  Return_170_40:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~169\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~168\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~167\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~166\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~165\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 174\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_173_16;

Label__split_174_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 174\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_173_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 176\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_174_15;

Label__split_176_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 176\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_174_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 178\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_176_19;

Label__split_178_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 178\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_176_19;

Label__join_180_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_178_19;

Label__join_182_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_180_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 184\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_182_10;

Label__join_185_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 184\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_182_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 187\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_185_17;

Label__split_187_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 187\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_185_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
  goto Label__split_187_15;

Label__split_188_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
  goto Label__split_187_15;

Label__join_197_9:
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
   stack[stackPointer++] = &&Return_190_41;
  goto Label_hash;
  Return_190_41:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_188_15;

Label__join_200_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~199\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~198\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_197_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_200_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 206\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_205_42;
  goto Label_hash;
  Return_205_42:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_206_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 206\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_205_43;
  goto Label_hash;
  Return_205_43:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_208_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_206_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_208_13;

Label__split_211_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_208_13;

Label__join_213_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_211_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_213_13;

Label__join_225_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~223\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 226\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_225_6;

Label__split_226_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 226\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_225_6;

Label__join_228_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_226_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 230\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_228_6;

Label__split_230_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 230\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_228_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_230_10;

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
    fprintf(stderr,"\nAssertion failure at line ~235\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}