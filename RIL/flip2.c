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
  uint var_inv_t2fr_fl = 0;
  uint var_inv_t1fr_fl = 0;
  uint var_fr = 0;
  uint var_fl = 0;
  uint var_r = 0;
  uint var_l = 0;
  uint var_t5l_r = 0;
  uint var_t4l_r = 0;
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
    printf("var_inv_t2fr_fl = \%u\n",var_inv_t2fr_fl);
    printf("var_inv_t1fr_fl = \%u\n",var_inv_t1fr_fl);
    printf("var_fr = \%u\n",var_fr);
    printf("var_fl = \%u\n",var_fl);
    printf("var_r = \%u\n",var_r);
    printf("var_l = \%u\n",var_l);
    printf("var_t5l_r = \%u\n",var_t5l_r);
    printf("var_t4l_r = \%u\n",var_t4l_r);
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
  goto Label__flip;
  Return_31_3:
  count(2,0);
   stack[stackPointer++] = &&Return_32_4;
  goto Label_flip;
  Return_32_4:

printf("max refs = %d\n",A);
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 36\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_38_7;

Label_dump1:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 38\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_39_10;

Label_join_38_7:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 38\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_39_10;

Label_split_39_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_41_7;

Label_used1:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 41\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_43_10;

Label_join_41_7:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 41\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_43_10;

Label_split_43_10:
fprintf(stderr,"%d,", var_y);
  goto *stack[--stackPointer];

Label_initialise:
count(1, 0);
  var_consA = (var_consA + (2 + 0));
count(1, 0);
  var_consD = (var_consD + (2 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_51_5;
  goto Label_cons;
  Return_51_5:
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
   stack[stackPointer++] = &&Return_59_6;
  goto Label_cons;
  Return_59_6:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto *stack[--stackPointer];

Label_flip:
  goto Label_flip_entry_1;

Label_flip_exit_1:
  goto *stack[--stackPointer];

Label_flip_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_l_r4; else goto Label_split_76_7;

Label_split_76_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_78_7;
  goto Label__cons;
  Return_78_7:
  tmp = var_t4l_r;
  var_t4l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t5l_r;
  var_t5l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_l;
  var_l = (var_t4l_r);
  var_t4l_r = (tmp);
  if (count(1,0), var_t4l_r != 0) goto Label_l_r5; else goto Label_split_82_12;

Label_split_82_12:
  tmp = var_r;
  var_r = (var_t5l_r);
  var_t5l_r = (tmp);
  if (count(1,0), var_t5l_r == 0) goto Label_l_r6; else goto Label_join_85_6;

Label_l_r5:
  if (count(1,0), !(var_t4l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 85\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t4l_r);
  var_t4l_r = (tmp);
  tmp = var_t4l_r;
  var_t4l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t5l_r;
  var_t5l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_89_8;
  goto Label_cons;
  Return_89_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_91_6;

Label_join_85_6:
  if (count(1,0), var_t4l_r != 0){
    fprintf(stderr,"\nJoin failure at line 85\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t4l_r);
  var_t4l_r = (tmp);
  tmp = var_t4l_r;
  var_t4l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t5l_r;
  var_t5l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_89_9;
  goto Label_cons;
  Return_89_9:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_91_6;

Label_l_r6:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 91\n");
  writeVars(); goto programEnd;
}
  goto Label_join_92_6;

Label_join_91_6:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 91\n");
  writeVars(); goto programEnd;
}
  goto Label_join_92_6;

Label_l_r4:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 92\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_flip_entry_2; else goto Label_split_93_8;

Label_join_92_6:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 92\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_flip_entry_2; else goto Label_split_93_8;

Label_split_93_8:
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_98_10;
  goto Label_flip;
  Return_98_10:
  tmp = var_fl;
  var_fl = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 100\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_102_11;
  goto Label_flip;
  Return_102_11:
  tmp = var_fr;
  var_fr = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 104\n");
  writeVars(); goto programEnd;
}
  goto Label_join_105_13;

Label_flip_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 105\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_fr_fl1; else goto Label_split_109_7;

Label_join_105_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 105\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_fr_fl1; else goto Label_split_109_7;

Label_split_109_7:
  if (count(1,0), var_A == 0) goto Label_inv_fr_fl3; else goto Label_split_110_8;

Label_split_110_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_112_12;
  goto Label__cons;
  Return_112_12:
  tmp = var_inv_t1fr_fl;
  var_inv_t1fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t2fr_fl;
  var_inv_t2fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_fr;
  var_fr = (var_inv_t1fr_fl);
  var_inv_t1fr_fl = (tmp);
  if (count(1,0), var_inv_t1fr_fl != 0) goto Label_inv_fr_fl2; else goto Label_join_117_12;

Label_inv_fr_fl3:
  if (count(1,0), !(var_inv_t2fr_fl == 0)){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_inv_t2fr_fl);
  var_inv_t2fr_fl = (tmp);
  goto Label_join_119_12;

Label_join_117_12:
  if (count(1,0), var_inv_t2fr_fl == 0){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_inv_t2fr_fl);
  var_inv_t2fr_fl = (tmp);
  goto Label_join_119_12;

Label_inv_fr_fl2:
  if (count(1,0), !(var_inv_t1fr_fl != 0)){
    fprintf(stderr,"\nJoin failure at line 119\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_inv_t1fr_fl);
  var_inv_t1fr_fl = (tmp);
  tmp = var_inv_t1fr_fl;
  var_inv_t1fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t2fr_fl;
  var_inv_t2fr_fl = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_123_13;
  goto Label_cons;
  Return_123_13:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_125_12;

Label_join_119_12:
  if (count(1,0), var_inv_t1fr_fl != 0){
    fprintf(stderr,"\nJoin failure at line 119\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_inv_t1fr_fl);
  var_inv_t1fr_fl = (tmp);
  tmp = var_inv_t1fr_fl;
  var_inv_t1fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t2fr_fl;
  var_inv_t2fr_fl = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_123_14;
  goto Label_cons;
  Return_123_14:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_125_12;

Label_inv_fr_fl1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 125\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_1;

Label_join_125_12:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 125\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_1;

Label_flip_entry_2:
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label_flip_entry_3; else goto Label_join_138_13;

Label_flip_exit_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 138\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  goto Label_flip_exit_2;

Label_join_138_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 138\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  goto Label_flip_exit_2;

Label_flip_entry_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 147\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_3;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 150\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_copyP < var_H) goto Label_copySymbol; else goto Label_split_151_11;

Label_split_151_11:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_156_12;

Label_copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 156\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 158\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_156_12:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 156\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 158\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 162\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 163\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 164\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 165\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 166\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_167_15;
  goto Label_hash;
  Return_167_15:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_170_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 170\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_171_15;

Label_join_170_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 170\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_171_15;

Label_split_171_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_173_19;

Label_split_173_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_175_19;

Label_split_175_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_177_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 177\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_179_10;

Label_join_177_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 177\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_179_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 179\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_182_17;

Label_join_179_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 179\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_182_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 182\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_184_15;

Label_join_182_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 182\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_184_15;

Label_split_184_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_185_15;

Label_split_185_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_187_16;
  goto Label__hash;
  Return_187_16:
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
  goto Label_join_194_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 195\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 196\n");
  writeVars(); goto programEnd;
}
  goto Label_join_197_12;

Label_join_194_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 195\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 196\n");
  writeVars(); goto programEnd;
}
  goto Label_join_197_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_197_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_202_17;
  goto Label__hash;
  Return_202_17:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_203_11;

Label_split_203_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_205_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 205\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_208_11;

Label_join_205_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 205\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_208_11;

Label_split_208_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_210_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 210\n");
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

Label_join_210_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 210\n");
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
    fprintf(stderr,"\nAssertion failure at line 220\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_222_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 222\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_223_10;

Label_join_222_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 222\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_223_10;

Label_split_223_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_225_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 225\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_227_10;

Label_join_225_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 225\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_227_10;

Label_split_227_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 232\n");
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

Label__join_38_7:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~36\n");
  writeVars(); goto programEnd;
}

printf("max refs = %d\n",A);
  count(2,0);
   stack[stackPointer++] = &&Return_32_18;
  goto Label__flip;
  Return_32_18:
  count(2,0);
   stack[stackPointer++] = &&Return_31_19;
  goto Label_flip;
  Return_31_19:
  count(2,0);
   stack[stackPointer++] = &&Return_28_20;
  goto Label__build;
  Return_28_20:
  count(2,0);
   stack[stackPointer++] = &&Return_27_21;
  goto Label__initialise;
  Return_27_21:
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
    fprintf(stderr,"\nJoin failure at line 39\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_38_7;

Label__split_39_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 39\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_38_7;

Label__join_41_7:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_39_10;

Label__dump1:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 43\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_41_7;

Label__split_43_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 43\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_41_7;

Label__main:
fprintf(stderr,"%d,", var_y);
  goto Label__split_43_10;

Label__initialise:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_51_22;
  goto Label__cons;
  Return_51_22:
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
   stack[stackPointer++] = &&Return_59_23;
  goto Label__cons;
  Return_59_23:
count(1, 0);
  var_consA = (var_consA - (7 + 0));
count(1, 0);
  var_consD = (var_consD - (2 + 0));
  goto *stack[--stackPointer];

Label__flip_entry_1:
  goto *stack[--stackPointer];

Label__flip:
  goto Label__flip_exit_1;

Label__l_r4:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 76\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_1;

Label__split_76_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 76\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_1;

Label__l_r5:
  if (count(1,0), !(var_t4l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 82\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t4l_r);
  var_t4l_r = (tmp);
  tmp = var_t5l_r;
  var_t5l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t4l_r;
  var_t4l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_78_24;
  goto Label_cons;
  Return_78_24:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_76_7;

Label__split_82_12:
  if (count(1,0), var_t4l_r != 0){
    fprintf(stderr,"\nJoin failure at line 82\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t4l_r);
  var_t4l_r = (tmp);
  tmp = var_t5l_r;
  var_t5l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t4l_r;
  var_t4l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_78_25;
  goto Label_cons;
  Return_78_25:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_76_7;

Label__l_r6:
  if (count(1,0), !(var_t5l_r == 0)){
    fprintf(stderr,"\nJoin failure at line 84\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_t5l_r);
  var_t5l_r = (tmp);
  goto Label__split_82_12;

Label__join_85_6:
  if (count(1,0), var_t5l_r == 0){
    fprintf(stderr,"\nJoin failure at line 84\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_t5l_r);
  var_t5l_r = (tmp);
  goto Label__split_82_12;

Label__join_91_6:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_89_26;
  goto Label__cons;
  Return_89_26:
  tmp = var_t5l_r;
  var_t5l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t4l_r;
  var_t4l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_l;
  var_l = (var_t4l_r);
  var_t4l_r = (tmp);
  if (count(1,0), var_t4l_r != 0) goto Label__l_r5; else goto Label__join_85_6;

Label__join_92_6:
  if (count(1,0), var_A == 0) goto Label__l_r6; else goto Label__join_91_6;

Label__flip_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 93\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__l_r4; else goto Label__join_92_6;

Label__split_93_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 93\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__l_r4; else goto Label__join_92_6;

Label__join_105_13:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~104\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_102_27;
  goto Label__flip;
  Return_102_27:
  tmp = var_r;
  var_r = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~100\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_98_28;
  goto Label__flip;
  Return_98_28:
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  goto Label__split_93_8;

Label__inv_fr_fl1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 109\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__flip_exit_2; else goto Label__join_105_13;

Label__split_109_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 109\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__flip_exit_2; else goto Label__join_105_13;

Label__inv_fr_fl3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 110\n");
  writeVars(); goto programEnd;
}
  goto Label__split_109_7;

Label__split_110_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 110\n");
  writeVars(); goto programEnd;
}
  goto Label__split_109_7;

Label__inv_fr_fl2:
  if (count(1,0), !(var_inv_t1fr_fl != 0)){
    fprintf(stderr,"\nJoin failure at line 116\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_inv_t1fr_fl);
  var_inv_t1fr_fl = (tmp);
  tmp = var_inv_t2fr_fl;
  var_inv_t2fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t1fr_fl;
  var_inv_t1fr_fl = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_112_29;
  goto Label_cons;
  Return_112_29:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_110_8;

Label__join_117_12:
  if (count(1,0), var_inv_t1fr_fl != 0){
    fprintf(stderr,"\nJoin failure at line 116\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_inv_t1fr_fl);
  var_inv_t1fr_fl = (tmp);
  tmp = var_inv_t2fr_fl;
  var_inv_t2fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t1fr_fl;
  var_inv_t1fr_fl = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_112_30;
  goto Label_cons;
  Return_112_30:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_110_8;

Label__join_119_12:
  tmp = var_fl;
  var_fl = (var_inv_t2fr_fl);
  var_inv_t2fr_fl = (tmp);
  if (count(1,0), var_inv_t2fr_fl == 0) goto Label__inv_fr_fl3; else goto Label__join_117_12;

Label__join_125_12:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_123_31;
  goto Label__cons;
  Return_123_31:
  tmp = var_inv_t2fr_fl;
  var_inv_t2fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t1fr_fl;
  var_inv_t1fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_fr;
  var_fr = (var_inv_t1fr_fl);
  var_inv_t1fr_fl = (tmp);
  if (count(1,0), var_inv_t1fr_fl != 0) goto Label__inv_fr_fl2; else goto Label__join_119_12;

Label__flip_exit_1:
  if (count(1,0), (var_A & 3)) goto Label__inv_fr_fl1; else goto Label__join_125_12;

Label__flip_entry_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 133\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  goto Label__flip_entry_2;

Label__join_138_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 133\n");
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
  if (count(1,0), var_A != 0) goto Label__flip_exit_3; else goto Label__join_138_13;

Label__flip_exit_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~147\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_3;

Label__copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 151\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~150\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_151_11:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 151\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~150\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_156_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_151_11;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~158\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), var_copyP < var_H) goto Label__copySymbol; else goto Label__join_156_12;

Label__join_170_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_167_32;
  goto Label__hash;
  Return_167_32:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~166\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~165\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~164\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~163\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~162\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 171\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_170_16;

Label__split_171_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 171\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_170_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 173\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_171_15;

Label__split_173_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 173\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_171_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 175\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_173_19;

Label__split_175_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 175\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_173_19;

Label__join_177_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_175_19;

Label__join_179_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_177_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 181\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_179_10;

Label__join_182_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 181\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_179_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 184\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_182_17;

Label__split_184_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 184\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_182_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 185\n");
  writeVars(); goto programEnd;
}
  goto Label__split_184_15;

Label__split_185_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 185\n");
  writeVars(); goto programEnd;
}
  goto Label__split_184_15;

Label__join_194_9:
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
   stack[stackPointer++] = &&Return_187_33;
  goto Label_hash;
  Return_187_33:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_185_15;

Label__join_197_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~196\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~195\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_194_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_197_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 203\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_202_34;
  goto Label_hash;
  Return_202_34:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_203_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 203\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_202_35;
  goto Label_hash;
  Return_202_35:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_205_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_203_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_205_13;

Label__split_208_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_205_13;

Label__join_210_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_208_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_210_13;

Label__join_222_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~220\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 223\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_222_6;

Label__split_223_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 223\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_222_6;

Label__join_225_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_223_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 227\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_225_6;

Label__split_227_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 227\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_225_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_227_10;

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
    fprintf(stderr,"\nAssertion failure at line ~232\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}