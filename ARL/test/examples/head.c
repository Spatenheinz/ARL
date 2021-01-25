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
  uint var_inv_t_head9x_xs = 0;
  uint var_inv_t_head8x_xs = 0;
  uint var_xss = 0;
  uint var_x = 0;
  uint var_fieldsD = 0;
  uint var_t_2x_xss = 0;
  uint var_fieldsA = 0;
  uint var_t_1x_xss = 0;
  uint var_xs = 0;
  uint var_fieldsP = 0;
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
    printf("var_inv_t_head9x_xs = \%u\n",var_inv_t_head9x_xs);
    printf("var_inv_t_head8x_xs = \%u\n",var_inv_t_head8x_xs);
    printf("var_xss = \%u\n",var_xss);
    printf("var_x = \%u\n",var_x);
    printf("var_fieldsD = \%u\n",var_fieldsD);
    printf("var_t_2x_xss = \%u\n",var_t_2x_xss);
    printf("var_fieldsA = \%u\n",var_fieldsA);
    printf("var_t_1x_xss = \%u\n",var_t_1x_xss);
    printf("var_xs = \%u\n",var_xs);
    printf("var_fieldsP = \%u\n",var_fieldsP);
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
  goto Label_head;
  Return_29_3:
  count(2,0);
   stack[stackPointer++] = &&Return_30_4;
  goto Label__head;
  Return_30_4:

printf("max refs = %d\n",A);
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 33\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_35_7;

Label_dump1:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 35\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_36_10;

Label_join_35_7:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 35\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_36_10;

Label_split_36_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_38_7;

Label_used1:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 38\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_40_10;

Label_join_38_7:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 38\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_40_10;

Label_split_40_10:
fprintf(stderr,"%d,", var_y);
  goto *stack[--stackPointer];

Label_initialise:
count(1, 0);
  var_consA = (var_consA + (2 + 0));
count(1, 0);
  var_consD = (var_consD + (2 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_48_5;
  goto Label_cons;
  Return_48_5:
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
   stack[stackPointer++] = &&Return_56_6;
  goto Label_cons;
  Return_56_6:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (19 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_59_7;
  goto Label_cons;
  Return_59_7:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (17 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_62_8;
  goto Label_cons;
  Return_62_8:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (15 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_65_9;
  goto Label_cons;
  Return_65_9:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (13 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_68_10;
  goto Label_cons;
  Return_68_10:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (11 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_71_11;
  goto Label_cons;
  Return_71_11:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (9 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_74_12;
  goto Label_cons;
  Return_74_12:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (7 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_77_13;
  goto Label_cons;
  Return_77_13:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (5 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_80_14;
  goto Label_cons;
  Return_80_14:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (3 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_83_15;
  goto Label_cons;
  Return_83_15:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  tmp = var_consD;
  var_consD = (var_A);
  var_A = (tmp);
  goto *stack[--stackPointer];

Label_head:
  goto Label_head_entry_1;

Label_head_exit_1:
  goto *stack[--stackPointer];

Label_head_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_x_xsshead1; else goto Label_split_98_7;

Label_split_98_7:
  tmp = var_A;
  var_A = (var_fieldsP);
  var_fieldsP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_100_16;
  goto Label_fields;
  Return_100_16:
  tmp = var_xs;
  var_xs = (var_fieldsP);
  var_fieldsP = (tmp);
  tmp = var_t_1x_xss;
  var_t_1x_xss = (var_fieldsA);
  var_fieldsA = (tmp);
  tmp = var_t_2x_xss;
  var_t_2x_xss = (var_fieldsD);
  var_fieldsD = (tmp);
  tmp = var_x;
  var_x = (var_t_1x_xss);
  var_t_1x_xss = (tmp);
  if (count(1,0), var_t_1x_xss != 0) goto Label_x_xsshead2; else goto Label_split_105_15;

Label_split_105_15:
  tmp = var_xss;
  var_xss = (var_t_2x_xss);
  var_t_2x_xss = (tmp);
  if (count(1,0), var_t_2x_xss == 0) goto Label_x_xsshead3; else goto Label_join_108_12;

Label_x_xsshead2:
  if (count(1,0), !(var_t_1x_xss != 0)){
    fprintf(stderr,"\nJoin failure at line 108\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t_1x_xss);
  var_t_1x_xss = (tmp);
  tmp = var_xs;
  var_xs = (var_fieldsP);
  var_fieldsP = (tmp);
  tmp = var_t_1x_xss;
  var_t_1x_xss = (var_fieldsA);
  var_fieldsA = (tmp);
  tmp = var_t_2x_xss;
  var_t_2x_xss = (var_fieldsD);
  var_fieldsD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_113_17;
  goto Label__fields;
  Return_113_17:
  tmp = var_A;
  var_A = (var_fieldsP);
  var_fieldsP = (tmp);
  goto Label_join_115_12;

Label_join_108_12:
  if (count(1,0), var_t_1x_xss != 0){
    fprintf(stderr,"\nJoin failure at line 108\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t_1x_xss);
  var_t_1x_xss = (tmp);
  tmp = var_xs;
  var_xs = (var_fieldsP);
  var_fieldsP = (tmp);
  tmp = var_t_1x_xss;
  var_t_1x_xss = (var_fieldsA);
  var_fieldsA = (tmp);
  tmp = var_t_2x_xss;
  var_t_2x_xss = (var_fieldsD);
  var_fieldsD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_113_18;
  goto Label__fields;
  Return_113_18:
  tmp = var_A;
  var_A = (var_fieldsP);
  var_fieldsP = (tmp);
  goto Label_join_115_12;

Label_x_xsshead3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 115\n");
  writeVars(); goto programEnd;
}
  goto Label_join_116_12;

Label_join_115_12:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 115\n");
  writeVars(); goto programEnd;
}
  goto Label_join_116_12;

Label_x_xsshead1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 116\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_head_entry_2; else goto Label_join_120_13;

Label_join_116_12:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 116\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_head_entry_2; else goto Label_join_120_13;

Label_head_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 120\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_xshead8; else goto Label_split_122_7;

Label_join_120_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 120\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_xshead8; else goto Label_split_122_7;

Label_split_122_7:
  if (count(1,0), var_A == 0) goto Label_inv_x_xshead10; else goto Label_split_123_8;

Label_split_123_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_125_19;
  goto Label__cons;
  Return_125_19:
  tmp = var_inv_t_head8x_xs;
  var_inv_t_head8x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_head9x_xs;
  var_inv_t_head9x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_head8x_xs);
  var_inv_t_head8x_xs = (tmp);
  if (count(1,0), var_inv_t_head8x_xs != 0) goto Label_inv_x_xshead9; else goto Label_join_130_16;

Label_inv_x_xshead10:
  if (count(1,0), !(var_inv_t_head9x_xs == 0)){
    fprintf(stderr,"\nJoin failure at line 130\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t_head9x_xs);
  var_inv_t_head9x_xs = (tmp);
  goto Label_join_132_15;

Label_join_130_16:
  if (count(1,0), var_inv_t_head9x_xs == 0){
    fprintf(stderr,"\nJoin failure at line 130\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t_head9x_xs);
  var_inv_t_head9x_xs = (tmp);
  goto Label_join_132_15;

Label_inv_x_xshead9:
  if (count(1,0), !(var_inv_t_head8x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 132\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_head8x_xs);
  var_inv_t_head8x_xs = (tmp);
  tmp = var_inv_t_head8x_xs;
  var_inv_t_head8x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_head9x_xs;
  var_inv_t_head9x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_136_20;
  goto Label_cons;
  Return_136_20:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_138_15;

Label_join_132_15:
  if (count(1,0), var_inv_t_head8x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 132\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_head8x_xs);
  var_inv_t_head8x_xs = (tmp);
  tmp = var_inv_t_head8x_xs;
  var_inv_t_head8x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_head9x_xs;
  var_inv_t_head9x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_136_21;
  goto Label_cons;
  Return_136_21:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_138_15;

Label_inv_x_xshead8:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 138\n");
  writeVars(); goto programEnd;
}
  goto Label_head_exit_1;

Label_join_138_15:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 138\n");
  writeVars(); goto programEnd;
}
  goto Label_head_exit_1;

Label_head_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 143\n");
  writeVars(); goto programEnd;
}
  goto Label_head_exit_2;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 148\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_copyP & 3) == 0) goto Label_copySymbol; else goto Label_split_149_12;

Label_split_149_12:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_154_12;

Label_copySymbol:
  if (count(1,0), !((var_copyP & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 154\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 156\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_154_12:
  if (count(1,0), (var_copyP & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 154\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 156\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_fields:
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 161\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsA = (var_fieldsA + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label_fields1; else goto Label_split_164_14;

Label_split_164_14:
count(1, 0);
  Mem[var_fieldsA] = (count(0,1), (count(0,1), Mem[var_fieldsA]) + (1 + 0));
  goto Label_join_166_9;

Label_fields1:
  if (count(1,0), !((var_fieldsA & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 166\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsD = (var_fieldsD + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label_fields2; else goto Label_split_169_14;

Label_join_166_9:
  if (count(1,0), (var_fieldsA & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 166\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsD = (var_fieldsD + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label_fields2; else goto Label_split_169_14;

Label_split_169_14:
count(1, 0);
  Mem[var_fieldsD] = (count(0,1), (count(0,1), Mem[var_fieldsD]) + (1 + 0));
  goto Label_join_171_9;

Label_fields2:
  if (count(1,0), !((var_fieldsD & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 171\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (8 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 173\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_171_9:
  if (count(1,0), (var_fieldsD & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 171\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (8 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 173\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 179\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 180\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 181\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 182\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 183\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_184_22;
  goto Label_hash;
  Return_184_22:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_187_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 187\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_188_15;

Label_join_187_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 187\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_188_15;

Label_split_188_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_190_19;

Label_split_190_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_192_19;

Label_split_192_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_194_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_196_10;

Label_join_194_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_196_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 196\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_199_17;

Label_join_196_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 196\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_199_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 199\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_201_15;

Label_join_199_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 199\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_201_15;

Label_split_201_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_202_15;

Label_split_202_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_204_23;
  goto Label__hash;
  Return_204_23:
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
  goto Label_join_211_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 212\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 213\n");
  writeVars(); goto programEnd;
}
  goto Label_join_214_12;

Label_join_211_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 212\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 213\n");
  writeVars(); goto programEnd;
}
  goto Label_join_214_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 214\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_214_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 214\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_219_24;
  goto Label__hash;
  Return_219_24:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_220_11;

Label_split_220_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_222_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 222\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_225_11;

Label_join_222_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 222\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_225_11;

Label_split_225_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_227_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 227\n");
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

Label_join_227_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 227\n");
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
    fprintf(stderr,"\nAssertion failure at line 237\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_239_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 239\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_240_10;

Label_join_239_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 239\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_240_10;

Label_split_240_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_242_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 242\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_244_10;

Label_join_242_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 242\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_244_10;

Label_split_244_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 249\n");
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

Label__join_35_7:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~33\n");
  writeVars(); goto programEnd;
}

printf("max refs = %d\n",A);
  count(2,0);
   stack[stackPointer++] = &&Return_30_25;
  goto Label_head;
  Return_30_25:
  count(2,0);
   stack[stackPointer++] = &&Return_29_26;
  goto Label__head;
  Return_29_26:
  count(2,0);
   stack[stackPointer++] = &&Return_27_27;
  goto Label__build;
  Return_27_27:
  count(2,0);
   stack[stackPointer++] = &&Return_26_28;
  goto Label__initialise;
  Return_26_28:
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
    fprintf(stderr,"\nJoin failure at line 36\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_35_7;

Label__split_36_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 36\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_35_7;

Label__join_38_7:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_36_10;

Label__dump1:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 40\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_38_7;

Label__split_40_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 40\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_38_7;

Label__main:
fprintf(stderr,"%d,", var_y);
  goto Label__split_40_10;

Label__initialise:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_48_29;
  goto Label__cons;
  Return_48_29:
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
   stack[stackPointer++] = &&Return_83_30;
  goto Label__cons;
  Return_83_30:
count(1, 0);
  var_consA = (var_consA - (3 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_80_31;
  goto Label__cons;
  Return_80_31:
count(1, 0);
  var_consA = (var_consA - (5 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_77_32;
  goto Label__cons;
  Return_77_32:
count(1, 0);
  var_consA = (var_consA - (7 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_74_33;
  goto Label__cons;
  Return_74_33:
count(1, 0);
  var_consA = (var_consA - (9 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_71_34;
  goto Label__cons;
  Return_71_34:
count(1, 0);
  var_consA = (var_consA - (11 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_68_35;
  goto Label__cons;
  Return_68_35:
count(1, 0);
  var_consA = (var_consA - (13 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_65_36;
  goto Label__cons;
  Return_65_36:
count(1, 0);
  var_consA = (var_consA - (15 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_62_37;
  goto Label__cons;
  Return_62_37:
count(1, 0);
  var_consA = (var_consA - (17 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_59_38;
  goto Label__cons;
  Return_59_38:
count(1, 0);
  var_consA = (var_consA - (19 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_56_39;
  goto Label__cons;
  Return_56_39:
count(1, 0);
  var_consA = (var_consA - (21 + 0));
count(1, 0);
  var_consD = (var_consD - (2 + 0));
  goto *stack[--stackPointer];

Label__head_entry_1:
  goto *stack[--stackPointer];

Label__head:
  goto Label__head_exit_1;

Label__x_xsshead1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 98\n");
  writeVars(); goto programEnd;
}
  goto Label__head_entry_1;

Label__split_98_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 98\n");
  writeVars(); goto programEnd;
}
  goto Label__head_entry_1;

Label__x_xsshead2:
  if (count(1,0), !(var_t_1x_xss != 0)){
    fprintf(stderr,"\nJoin failure at line 105\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t_1x_xss);
  var_t_1x_xss = (tmp);
  tmp = var_t_2x_xss;
  var_t_2x_xss = (var_fieldsD);
  var_fieldsD = (tmp);
  tmp = var_t_1x_xss;
  var_t_1x_xss = (var_fieldsA);
  var_fieldsA = (tmp);
  tmp = var_xs;
  var_xs = (var_fieldsP);
  var_fieldsP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_100_40;
  goto Label__fields;
  Return_100_40:
  tmp = var_A;
  var_A = (var_fieldsP);
  var_fieldsP = (tmp);
  goto Label__split_98_7;

Label__split_105_15:
  if (count(1,0), var_t_1x_xss != 0){
    fprintf(stderr,"\nJoin failure at line 105\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t_1x_xss);
  var_t_1x_xss = (tmp);
  tmp = var_t_2x_xss;
  var_t_2x_xss = (var_fieldsD);
  var_fieldsD = (tmp);
  tmp = var_t_1x_xss;
  var_t_1x_xss = (var_fieldsA);
  var_fieldsA = (tmp);
  tmp = var_xs;
  var_xs = (var_fieldsP);
  var_fieldsP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_100_41;
  goto Label__fields;
  Return_100_41:
  tmp = var_A;
  var_A = (var_fieldsP);
  var_fieldsP = (tmp);
  goto Label__split_98_7;

Label__x_xsshead3:
  if (count(1,0), !(var_t_2x_xss == 0)){
    fprintf(stderr,"\nJoin failure at line 107\n");
  writeVars(); goto programEnd;
}
  tmp = var_xss;
  var_xss = (var_t_2x_xss);
  var_t_2x_xss = (tmp);
  goto Label__split_105_15;

Label__join_108_12:
  if (count(1,0), var_t_2x_xss == 0){
    fprintf(stderr,"\nJoin failure at line 107\n");
  writeVars(); goto programEnd;
}
  tmp = var_xss;
  var_xss = (var_t_2x_xss);
  var_t_2x_xss = (tmp);
  goto Label__split_105_15;

Label__join_115_12:
  tmp = var_A;
  var_A = (var_fieldsP);
  var_fieldsP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_113_42;
  goto Label_fields;
  Return_113_42:
  tmp = var_t_2x_xss;
  var_t_2x_xss = (var_fieldsD);
  var_fieldsD = (tmp);
  tmp = var_t_1x_xss;
  var_t_1x_xss = (var_fieldsA);
  var_fieldsA = (tmp);
  tmp = var_xs;
  var_xs = (var_fieldsP);
  var_fieldsP = (tmp);
  tmp = var_x;
  var_x = (var_t_1x_xss);
  var_t_1x_xss = (tmp);
  if (count(1,0), var_t_1x_xss != 0) goto Label__x_xsshead2; else goto Label__join_108_12;

Label__join_116_12:
  if (count(1,0), var_A == 0) goto Label__x_xsshead3; else goto Label__join_115_12;

Label__head_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xsshead1; else goto Label__join_116_12;

Label__join_120_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xsshead1; else goto Label__join_116_12;

Label__inv_x_xshead8:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 122\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__head_exit_2; else goto Label__join_120_13;

Label__split_122_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 122\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__head_exit_2; else goto Label__join_120_13;

Label__inv_x_xshead10:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 123\n");
  writeVars(); goto programEnd;
}
  goto Label__split_122_7;

Label__split_123_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 123\n");
  writeVars(); goto programEnd;
}
  goto Label__split_122_7;

Label__inv_x_xshead9:
  if (count(1,0), !(var_inv_t_head8x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 129\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_head8x_xs);
  var_inv_t_head8x_xs = (tmp);
  tmp = var_inv_t_head9x_xs;
  var_inv_t_head9x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_head8x_xs;
  var_inv_t_head8x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_125_43;
  goto Label_cons;
  Return_125_43:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_123_8;

Label__join_130_16:
  if (count(1,0), var_inv_t_head8x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 129\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_head8x_xs);
  var_inv_t_head8x_xs = (tmp);
  tmp = var_inv_t_head9x_xs;
  var_inv_t_head9x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_head8x_xs;
  var_inv_t_head8x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_125_44;
  goto Label_cons;
  Return_125_44:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_123_8;

Label__join_132_15:
  tmp = var_xs;
  var_xs = (var_inv_t_head9x_xs);
  var_inv_t_head9x_xs = (tmp);
  if (count(1,0), var_inv_t_head9x_xs == 0) goto Label__inv_x_xshead10; else goto Label__join_130_16;

Label__join_138_15:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_136_45;
  goto Label__cons;
  Return_136_45:
  tmp = var_inv_t_head9x_xs;
  var_inv_t_head9x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_head8x_xs;
  var_inv_t_head8x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_head8x_xs);
  var_inv_t_head8x_xs = (tmp);
  if (count(1,0), var_inv_t_head8x_xs != 0) goto Label__inv_x_xshead9; else goto Label__join_132_15;

Label__head_exit_1:
  if (count(1,0), (var_A & 3)) goto Label__inv_x_xshead8; else goto Label__join_138_15;

Label__head_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~143\n");
  writeVars(); goto programEnd;
}
  goto Label__head_entry_2;

Label__copySymbol:
  if (count(1,0), !((var_copyP & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 149\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~148\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_149_12:
  if (count(1,0), (var_copyP & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 149\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~148\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_154_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_149_12;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~156\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), (var_copyP & 3) == 0) goto Label__copySymbol; else goto Label__join_154_12;

Label__fields1:
  if (count(1,0), !((var_fieldsA & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 164\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsA = (var_fieldsA - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~161\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_164_14:
  if (count(1,0), (var_fieldsA & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 164\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsA = (var_fieldsA - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~161\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_166_9:
count(1, 0);
  Mem[var_fieldsA] = (count(0,1), (count(0,1), Mem[var_fieldsA]) - (1 + 0));
  goto Label__split_164_14;

Label__fields2:
  if (count(1,0), !((var_fieldsD & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 169\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsD = (var_fieldsD - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label__fields1; else goto Label__join_166_9;

Label__split_169_14:
  if (count(1,0), (var_fieldsD & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 169\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsD = (var_fieldsD - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label__fields1; else goto Label__join_166_9;

Label__join_171_9:
count(1, 0);
  Mem[var_fieldsD] = (count(0,1), (count(0,1), Mem[var_fieldsD]) - (1 + 0));
  goto Label__split_169_14;

Label__fields:
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~173\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (8 + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label__fields2; else goto Label__join_171_9;

Label__join_187_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_184_46;
  goto Label__hash;
  Return_184_46:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~183\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~182\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~181\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~180\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~179\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_187_16;

Label__split_188_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_187_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 190\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_188_15;

Label__split_190_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 190\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_188_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 192\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_190_19;

Label__split_192_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 192\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_190_19;

Label__join_194_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_192_19;

Label__join_196_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_194_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_196_10;

Label__join_199_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_196_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 201\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_199_17;

Label__split_201_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 201\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_199_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 202\n");
  writeVars(); goto programEnd;
}
  goto Label__split_201_15;

Label__split_202_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 202\n");
  writeVars(); goto programEnd;
}
  goto Label__split_201_15;

Label__join_211_9:
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
   stack[stackPointer++] = &&Return_204_47;
  goto Label_hash;
  Return_204_47:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_202_15;

Label__join_214_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~213\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~212\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_211_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_214_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 220\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_219_48;
  goto Label_hash;
  Return_219_48:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_220_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 220\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_219_49;
  goto Label_hash;
  Return_219_49:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_222_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_220_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 225\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_222_13;

Label__split_225_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 225\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_222_13;

Label__join_227_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_225_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_227_13;

Label__join_239_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~237\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 240\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_239_6;

Label__split_240_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 240\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_239_6;

Label__join_242_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_240_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 244\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_242_6;

Label__split_244_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 244\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_242_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_244_10;

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
    fprintf(stderr,"\nAssertion failure at line ~249\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}