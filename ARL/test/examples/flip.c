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
  uint var_inv_t_flip9fr_fl = 0;
  uint var_inv_t_flip8fr_fl = 0;
  uint var_fr = 0;
  uint var_fl = 0;
  uint var_r = 0;
  uint var_l = 0;
  uint var_t2l_r = 0;
  uint var_t1l_r = 0;
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
    printf("var_inv_t_flip9fr_fl = \%u\n",var_inv_t_flip9fr_fl);
    printf("var_inv_t_flip8fr_fl = \%u\n",var_inv_t_flip8fr_fl);
    printf("var_fr = \%u\n",var_fr);
    printf("var_fl = \%u\n",var_fl);
    printf("var_r = \%u\n",var_r);
    printf("var_l = \%u\n",var_l);
    printf("var_t2l_r = \%u\n",var_t2l_r);
    printf("var_t1l_r = \%u\n",var_t1l_r);
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
  goto Label__flip;
  Return_29_3:
  count(2,0);
   stack[stackPointer++] = &&Return_30_4;
  goto Label_flip;
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
  var_consA = (var_consA + (3 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_56_6;
  goto Label_cons;
  Return_56_6:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (5 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_59_7;
  goto Label_cons;
  Return_59_7:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (7 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_62_8;
  goto Label_cons;
  Return_62_8:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (9 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_65_9;
  goto Label_cons;
  Return_65_9:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (11 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_68_10;
  goto Label_cons;
  Return_68_10:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (13 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_71_11;
  goto Label_cons;
  Return_71_11:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (15 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_74_12;
  goto Label_cons;
  Return_74_12:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (17 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_77_13;
  goto Label_cons;
  Return_77_13:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (19 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_80_14;
  goto Label_cons;
  Return_80_14:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (21 + 0));
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

Label_flip:
  goto Label_flip_entry_1;

Label_flip_exit_1:
  goto *stack[--stackPointer];

Label_flip_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_l_rflip1; else goto Label_split_98_7;

Label_split_98_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_100_16;
  goto Label__cons;
  Return_100_16:
  tmp = var_t1l_r;
  var_t1l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t2l_r;
  var_t2l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_l;
  var_l = (var_t1l_r);
  var_t1l_r = (tmp);
  if (count(1,0), var_t1l_r != 0) goto Label_flip2; else goto Label_split_104_12;

Label_split_104_12:
  tmp = var_r;
  var_r = (var_t2l_r);
  var_t2l_r = (tmp);
  if (count(1,0), var_t2l_r == 0) goto Label_flip3; else goto Label_join_107_7;

Label_flip2:
  if (count(1,0), !(var_t1l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 107\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t1l_r);
  var_t1l_r = (tmp);
  tmp = var_t1l_r;
  var_t1l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t2l_r;
  var_t2l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_111_17;
  goto Label_cons;
  Return_111_17:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_113_7;

Label_join_107_7:
  if (count(1,0), var_t1l_r != 0){
    fprintf(stderr,"\nJoin failure at line 107\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t1l_r);
  var_t1l_r = (tmp);
  tmp = var_t1l_r;
  var_t1l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t2l_r;
  var_t2l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_111_18;
  goto Label_cons;
  Return_111_18:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_113_7;

Label_flip3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 113\n");
  writeVars(); goto programEnd;
}
  goto Label_join_114_10;

Label_join_113_7:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 113\n");
  writeVars(); goto programEnd;
}
  goto Label_join_114_10;

Label_l_rflip1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 114\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_flip_entry_2; else goto Label_split_115_8;

Label_join_114_10:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 114\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_flip_entry_2; else goto Label_split_115_8;

Label_split_115_8:
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  tmp = var_r;
  var_r = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_120_19;
  goto Label_flip;
  Return_120_19:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_r;
  var_r = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_fl;
  var_fl = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 124\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_A);
  var_A = (tmp);
  tmp = var_fl;
  var_fl = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_128_20;
  goto Label_flip;
  Return_128_20:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_fl;
  var_fl = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_fr;
  var_fr = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 132\n");
  writeVars(); goto programEnd;
}
  goto Label_join_133_13;

Label_flip_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 133\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_fr_flflip8; else goto Label_split_135_7;

Label_join_133_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 133\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_fr_flflip8; else goto Label_split_135_7;

Label_split_135_7:
  if (count(1,0), var_A == 0) goto Label_inv_fr_flflip10; else goto Label_split_136_8;

Label_split_136_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_138_21;
  goto Label__cons;
  Return_138_21:
  tmp = var_inv_t_flip8fr_fl;
  var_inv_t_flip8fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_flip9fr_fl;
  var_inv_t_flip9fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_fr;
  var_fr = (var_inv_t_flip8fr_fl);
  var_inv_t_flip8fr_fl = (tmp);
  if (count(1,0), var_inv_t_flip8fr_fl != 0) goto Label_inv_fr_flflip9; else goto Label_join_143_17;

Label_inv_fr_flflip10:
  if (count(1,0), !(var_inv_t_flip9fr_fl == 0)){
    fprintf(stderr,"\nJoin failure at line 143\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_inv_t_flip9fr_fl);
  var_inv_t_flip9fr_fl = (tmp);
  goto Label_join_145_16;

Label_join_143_17:
  if (count(1,0), var_inv_t_flip9fr_fl == 0){
    fprintf(stderr,"\nJoin failure at line 143\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_inv_t_flip9fr_fl);
  var_inv_t_flip9fr_fl = (tmp);
  goto Label_join_145_16;

Label_inv_fr_flflip9:
  if (count(1,0), !(var_inv_t_flip8fr_fl != 0)){
    fprintf(stderr,"\nJoin failure at line 145\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_inv_t_flip8fr_fl);
  var_inv_t_flip8fr_fl = (tmp);
  tmp = var_inv_t_flip8fr_fl;
  var_inv_t_flip8fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_flip9fr_fl;
  var_inv_t_flip9fr_fl = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_149_22;
  goto Label_cons;
  Return_149_22:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_151_16;

Label_join_145_16:
  if (count(1,0), var_inv_t_flip8fr_fl != 0){
    fprintf(stderr,"\nJoin failure at line 145\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_inv_t_flip8fr_fl);
  var_inv_t_flip8fr_fl = (tmp);
  tmp = var_inv_t_flip8fr_fl;
  var_inv_t_flip8fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_flip9fr_fl;
  var_inv_t_flip9fr_fl = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_149_23;
  goto Label_cons;
  Return_149_23:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_151_16;

Label_inv_fr_flflip8:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 151\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_1;

Label_join_151_16:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 151\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_1;

Label_flip_entry_2:
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label_flip_entry_3; else goto Label_join_162_13;

Label_flip_exit_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 162\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  goto Label_flip_exit_2;

Label_join_162_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 162\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  goto Label_flip_exit_2;

Label_flip_entry_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 169\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_3;

Label_copy:
  if (!((var_copyP & 3) == 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 174\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_copyP < var_H) goto Label_copySymbol; else goto Label_split_175_11;

Label_split_175_11:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_180_12;

Label_copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 180\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!((var_copyP & 3) == 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 182\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_180_12:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 180\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!((var_copyP & 3) == 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 182\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_fields:
  if (!((var_fieldsP & 3) == 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 187\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
  if (count(1,0), var_fieldsA < var_H) goto Label_fields1; else goto Label_split_189_13;

Label_split_189_13:
count(1, 0);
  Mem[var_fieldsA] = (count(0,1), (count(0,1), Mem[var_fieldsA]) + (1 + 0));
  goto Label_join_191_9;

Label_fields1:
  if (count(1,0), !((var_fieldsA & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 191\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsD = (var_fieldsD + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), var_fieldsD < var_H) goto Label_fields2; else goto Label_split_194_13;

Label_join_191_9:
  if (count(1,0), (var_fieldsA & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 191\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsD = (var_fieldsD + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), var_fieldsD < var_H) goto Label_fields2; else goto Label_split_194_13;

Label_split_194_13:
count(1, 0);
  Mem[var_fieldsD] = (count(0,1), (count(0,1), Mem[var_fieldsD]) + (1 + 0));
  goto Label_join_196_9;

Label_fields2:
  if (count(1,0), !(var_fieldsD < var_H)){
    fprintf(stderr,"\nJoin failure at line 196\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (8 + 0));
  if (!((var_fieldsP & 3) == 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 198\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_196_9:
  if (count(1,0), var_fieldsD < var_H){
    fprintf(stderr,"\nJoin failure at line 196\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (8 + 0));
  if (!((var_fieldsP & 3) == 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 198\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 204\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 205\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 206\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 207\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 208\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_209_24;
  goto Label_hash;
  Return_209_24:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_212_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 212\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_213_15;

Label_join_212_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 212\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_213_15;

Label_split_213_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_215_19;

Label_split_215_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_217_19;

Label_split_217_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_219_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_221_10;

Label_join_219_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_221_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 221\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_224_17;

Label_join_221_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 221\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_224_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 224\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_226_15;

Label_join_224_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 224\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_226_15;

Label_split_226_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_227_15;

Label_split_227_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_229_25;
  goto Label__hash;
  Return_229_25:
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
  goto Label_join_236_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 236\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 237\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 238\n");
  writeVars(); goto programEnd;
}
  goto Label_join_239_12;

Label_join_236_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 236\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 237\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 238\n");
  writeVars(); goto programEnd;
}
  goto Label_join_239_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 239\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_239_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 239\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_244_26;
  goto Label__hash;
  Return_244_26:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_245_11;

Label_split_245_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_247_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 247\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_250_11;

Label_join_247_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 247\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_250_11;

Label_split_250_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_252_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 252\n");
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

Label_join_252_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 252\n");
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

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 274\n");
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
   stack[stackPointer++] = &&Return_30_27;
  goto Label__flip;
  Return_30_27:
  count(2,0);
   stack[stackPointer++] = &&Return_29_28;
  goto Label_flip;
  Return_29_28:
  count(2,0);
   stack[stackPointer++] = &&Return_27_29;
  goto Label__build;
  Return_27_29:
  count(2,0);
   stack[stackPointer++] = &&Return_26_30;
  goto Label__initialise;
  Return_26_30:
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
   stack[stackPointer++] = &&Return_48_31;
  goto Label__cons;
  Return_48_31:
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
   stack[stackPointer++] = &&Return_83_32;
  goto Label__cons;
  Return_83_32:
count(1, 0);
  var_consA = (var_consA - (21 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_80_33;
  goto Label__cons;
  Return_80_33:
count(1, 0);
  var_consA = (var_consA - (19 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_77_34;
  goto Label__cons;
  Return_77_34:
count(1, 0);
  var_consA = (var_consA - (17 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_74_35;
  goto Label__cons;
  Return_74_35:
count(1, 0);
  var_consA = (var_consA - (15 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_71_36;
  goto Label__cons;
  Return_71_36:
count(1, 0);
  var_consA = (var_consA - (13 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_68_37;
  goto Label__cons;
  Return_68_37:
count(1, 0);
  var_consA = (var_consA - (11 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_65_38;
  goto Label__cons;
  Return_65_38:
count(1, 0);
  var_consA = (var_consA - (9 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_62_39;
  goto Label__cons;
  Return_62_39:
count(1, 0);
  var_consA = (var_consA - (7 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_59_40;
  goto Label__cons;
  Return_59_40:
count(1, 0);
  var_consA = (var_consA - (5 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_56_41;
  goto Label__cons;
  Return_56_41:
count(1, 0);
  var_consA = (var_consA - (3 + 0));
count(1, 0);
  var_consD = (var_consD - (2 + 0));
  goto *stack[--stackPointer];

Label__flip_entry_1:
  goto *stack[--stackPointer];

Label__flip:
  goto Label__flip_exit_1;

Label__l_rflip1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 98\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_1;

Label__split_98_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 98\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_1;

Label__flip2:
  if (count(1,0), !(var_t1l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 104\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t1l_r);
  var_t1l_r = (tmp);
  tmp = var_t2l_r;
  var_t2l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t1l_r;
  var_t1l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_100_42;
  goto Label_cons;
  Return_100_42:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_98_7;

Label__split_104_12:
  if (count(1,0), var_t1l_r != 0){
    fprintf(stderr,"\nJoin failure at line 104\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t1l_r);
  var_t1l_r = (tmp);
  tmp = var_t2l_r;
  var_t2l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t1l_r;
  var_t1l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_100_43;
  goto Label_cons;
  Return_100_43:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_98_7;

Label__flip3:
  if (count(1,0), !(var_t2l_r == 0)){
    fprintf(stderr,"\nJoin failure at line 106\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_t2l_r);
  var_t2l_r = (tmp);
  goto Label__split_104_12;

Label__join_107_7:
  if (count(1,0), var_t2l_r == 0){
    fprintf(stderr,"\nJoin failure at line 106\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_t2l_r);
  var_t2l_r = (tmp);
  goto Label__split_104_12;

Label__join_113_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_111_44;
  goto Label__cons;
  Return_111_44:
  tmp = var_t2l_r;
  var_t2l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t1l_r;
  var_t1l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_l;
  var_l = (var_t1l_r);
  var_t1l_r = (tmp);
  if (count(1,0), var_t1l_r != 0) goto Label__flip2; else goto Label__join_107_7;

Label__join_114_10:
  if (count(1,0), var_A == 0) goto Label__flip3; else goto Label__join_113_7;

Label__flip_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 115\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__l_rflip1; else goto Label__join_114_10;

Label__split_115_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 115\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__l_rflip1; else goto Label__join_114_10;

Label__join_133_13:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~132\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_A);
  var_A = (tmp);
  tmp = var_fl;
  var_fl = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_128_45;
  goto Label__flip;
  Return_128_45:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_fl;
  var_fl = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_r;
  var_r = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~124\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_A);
  var_A = (tmp);
  tmp = var_r;
  var_r = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_120_46;
  goto Label__flip;
  Return_120_46:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_r;
  var_r = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  goto Label__split_115_8;

Label__inv_fr_flflip8:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 135\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__flip_exit_2; else goto Label__join_133_13;

Label__split_135_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 135\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__flip_exit_2; else goto Label__join_133_13;

Label__inv_fr_flflip10:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 136\n");
  writeVars(); goto programEnd;
}
  goto Label__split_135_7;

Label__split_136_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 136\n");
  writeVars(); goto programEnd;
}
  goto Label__split_135_7;

Label__inv_fr_flflip9:
  if (count(1,0), !(var_inv_t_flip8fr_fl != 0)){
    fprintf(stderr,"\nJoin failure at line 142\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_inv_t_flip8fr_fl);
  var_inv_t_flip8fr_fl = (tmp);
  tmp = var_inv_t_flip9fr_fl;
  var_inv_t_flip9fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_flip8fr_fl;
  var_inv_t_flip8fr_fl = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_138_47;
  goto Label_cons;
  Return_138_47:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_136_8;

Label__join_143_17:
  if (count(1,0), var_inv_t_flip8fr_fl != 0){
    fprintf(stderr,"\nJoin failure at line 142\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_inv_t_flip8fr_fl);
  var_inv_t_flip8fr_fl = (tmp);
  tmp = var_inv_t_flip9fr_fl;
  var_inv_t_flip9fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_flip8fr_fl;
  var_inv_t_flip8fr_fl = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_138_48;
  goto Label_cons;
  Return_138_48:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_136_8;

Label__join_145_16:
  tmp = var_fl;
  var_fl = (var_inv_t_flip9fr_fl);
  var_inv_t_flip9fr_fl = (tmp);
  if (count(1,0), var_inv_t_flip9fr_fl == 0) goto Label__inv_fr_flflip10; else goto Label__join_143_17;

Label__join_151_16:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_149_49;
  goto Label__cons;
  Return_149_49:
  tmp = var_inv_t_flip9fr_fl;
  var_inv_t_flip9fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_flip8fr_fl;
  var_inv_t_flip8fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_fr;
  var_fr = (var_inv_t_flip8fr_fl);
  var_inv_t_flip8fr_fl = (tmp);
  if (count(1,0), var_inv_t_flip8fr_fl != 0) goto Label__inv_fr_flflip9; else goto Label__join_145_16;

Label__flip_exit_1:
  if (count(1,0), (var_A & 3)) goto Label__inv_fr_flflip8; else goto Label__join_151_16;

Label__flip_entry_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 159\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  goto Label__flip_entry_2;

Label__join_162_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 159\n");
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
  if (count(1,0), var_A != 0) goto Label__flip_exit_3; else goto Label__join_162_13;

Label__flip_exit_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~169\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_3;

Label__copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 175\n");
  writeVars(); goto programEnd;
}
  if (!((var_copyP & 3) == 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~174\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_175_11:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 175\n");
  writeVars(); goto programEnd;
}
  if (!((var_copyP & 3) == 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~174\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_180_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_175_11;

Label__copy:
  if (!((var_copyP & 3) == 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~182\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), var_copyP < var_H) goto Label__copySymbol; else goto Label__join_180_12;

Label__fields1:
  if (count(1,0), !(var_fieldsA < var_H)){
    fprintf(stderr,"\nJoin failure at line 189\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (!((var_fieldsP & 3) == 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~187\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_189_13:
  if (count(1,0), var_fieldsA < var_H){
    fprintf(stderr,"\nJoin failure at line 189\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (!((var_fieldsP & 3) == 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~187\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_191_9:
count(1, 0);
  Mem[var_fieldsA] = (count(0,1), (count(0,1), Mem[var_fieldsA]) - (1 + 0));
  goto Label__split_189_13;

Label__fields2:
  if (count(1,0), !(var_fieldsD < var_H)){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsD = (var_fieldsD - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label__fields1; else goto Label__join_191_9;

Label__split_194_13:
  if (count(1,0), var_fieldsD < var_H){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsD = (var_fieldsD - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label__fields1; else goto Label__join_191_9;

Label__join_196_9:
count(1, 0);
  Mem[var_fieldsD] = (count(0,1), (count(0,1), Mem[var_fieldsD]) - (1 + 0));
  goto Label__split_194_13;

Label__fields:
  if (!((var_fieldsP & 3) == 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~198\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (8 + 0));
  if (count(1,0), var_fieldsD < var_H) goto Label__fields2; else goto Label__join_196_9;

Label__join_212_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_209_50;
  goto Label__hash;
  Return_209_50:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~208\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~207\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~206\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~205\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~204\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 213\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_212_16;

Label__split_213_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 213\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_212_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 215\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_213_15;

Label__split_215_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 215\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_213_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 217\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_215_19;

Label__split_217_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 217\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_215_19;

Label__join_219_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_217_19;

Label__join_221_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_219_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 223\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_221_10;

Label__join_224_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 223\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_221_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 226\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_224_17;

Label__split_226_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 226\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_224_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 227\n");
  writeVars(); goto programEnd;
}
  goto Label__split_226_15;

Label__split_227_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 227\n");
  writeVars(); goto programEnd;
}
  goto Label__split_226_15;

Label__join_236_9:
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
   stack[stackPointer++] = &&Return_229_51;
  goto Label_hash;
  Return_229_51:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_227_15;

Label__join_239_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~238\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~237\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_236_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_239_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 245\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_244_52;
  goto Label_hash;
  Return_244_52:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_245_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 245\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_244_53;
  goto Label_hash;
  Return_244_53:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_247_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_245_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 250\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_247_13;

Label__split_250_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 250\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_247_13;

Label__join_252_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_250_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_252_13;

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
    fprintf(stderr,"\nAssertion failure at line ~274\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}