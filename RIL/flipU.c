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
  uint var_inv_tflip2fr_fl = 0;
  uint var_inv_tflip1fr_fl = 0;
  uint var_fr = 0;
  uint var_fl = 0;
  uint var_r = 0;
  uint var_l = 0;
  uint var_t8l_r = 0;
  uint var_t7l_r = 0;
  uint var_lhs = 0;
  uint var_nilnil = 0;
  uint var_y = 0;
  uint var_z = 0;
  uint var_rhs1 = 0;
  uint var_res2 = 0;
  uint var_lhs2 = 0;
  uint var_lhs1 = 0;
  uint var_res1 = 0;
  uint var_consA = 0;
  uint var_consP = 0;
  uint var_consD = 0;
  uint var_A = 0;
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
    printf("var_inv_tflip2fr_fl = \%u\n",var_inv_tflip2fr_fl);
    printf("var_inv_tflip1fr_fl = \%u\n",var_inv_tflip1fr_fl);
    printf("var_fr = \%u\n",var_fr);
    printf("var_fl = \%u\n",var_fl);
    printf("var_r = \%u\n",var_r);
    printf("var_l = \%u\n",var_l);
    printf("var_t8l_r = \%u\n",var_t8l_r);
    printf("var_t7l_r = \%u\n",var_t7l_r);
    printf("var_lhs = \%u\n",var_lhs);
    printf("var_nilnil = \%u\n",var_nilnil);
    printf("var_y = \%u\n",var_y);
    printf("var_z = \%u\n",var_z);
    printf("var_rhs1 = \%u\n",var_rhs1);
    printf("var_res2 = \%u\n",var_res2);
    printf("var_lhs2 = \%u\n",var_lhs2);
    printf("var_lhs1 = \%u\n",var_lhs1);
    printf("var_res1 = \%u\n",var_res1);
    printf("var_consA = \%u\n",var_consA);
    printf("var_consP = \%u\n",var_consP);
    printf("var_consD = \%u\n",var_consD);
    printf("var_A = \%u\n",var_A);
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
fprintf(stderr,"res: %d %d\n", var_A, var_consD);
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_34_4;
  goto Label__cons;
  Return_34_4:
fprintf(stderr,"res after cons %d - %d - %d\n", var_consA, var_consD, var_consP);
  tmp = var_consA;
  var_consA = (var_consP);
  var_consP = (tmp);
  tmp = var_consD;
  var_consD = (var_res1);
  var_res1 = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_38_5;
  goto Label__cons;
  Return_38_5:
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
   stack[stackPointer++] = &&Return_43_6;
  goto Label__cons;
  Return_43_6:
fprintf(stderr,"final: %d - %d - %d - %d\n", var_lhs1, var_lhs2, var_consA, var_consD);
  tmp = var_consA;
  var_consA = (var_consP);
  var_consP = (tmp);
  tmp = var_consD;
  var_consD = (var_res2);
  var_res2 = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_47_7;
  goto Label__cons;
  Return_47_7:
fprintf(stderr,"final: %d - %d - %d - %d - %d\n", var_lhs1, var_lhs2, var_rhs1, var_consA, var_consD);

printf("max refs = %d\n",A);
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 51\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_53_7;

Label_dump1:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 53\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_54_10;

Label_join_53_7:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 53\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used1; else goto Label_split_54_10;

Label_split_54_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_56_7;

Label_used1:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 56\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_58_10;

Label_join_56_7:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 56\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump1; else goto Label_split_58_10;

Label_split_58_10:
fprintf(stderr,"%d,", var_y);
  goto *stack[--stackPointer];

Label_initialise:
count(1, 0);
  var_consA = (var_consA + (2 + 0));
count(1, 0);
  var_consD = (var_consD + (2 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_66_8;
  goto Label_cons;
  Return_66_8:
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
   stack[stackPointer++] = &&Return_73_9;
  goto Label_cons;
  Return_73_9:
  tmp = var_lhs1;
  var_lhs1 = (var_consP);
  var_consP = (tmp);
count(1, 0);
  var_consA = (var_consA + (11 + 0));
count(1, 0);
  var_consD = (var_consD + (13 + 0));
fprintf(stderr,"snd %d %d", var_consA, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_78_10;
  goto Label_cons;
  Return_78_10:
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
   stack[stackPointer++] = &&Return_82_11;
  goto Label_cons;
  Return_82_11:
  tmp = var_lhs;
  var_lhs = (var_consP);
  var_consP = (tmp);
count(1, 0);
  var_consD = (var_consD + (3 + 0));
count(1, 0);
  var_consA = (var_consA + (5 + 0));
fprintf(stderr,"%d\n", var_consP);
  count(2,0);
   stack[stackPointer++] = &&Return_90_12;
  goto Label_cons;
  Return_90_12:
  tmp = var_lhs;
  var_lhs = (var_consA);
  var_consA = (tmp);
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_93_13;
  goto Label_cons;
  Return_93_13:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto *stack[--stackPointer];

Label_flip:
  goto Label_flip_entry_1;

Label_flip_exit_1:
  goto *stack[--stackPointer];

Label_flip_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_flip7; else goto Label_split_109_7;

Label_split_109_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_111_14;
  goto Label__cons;
  Return_111_14:
  tmp = var_t7l_r;
  var_t7l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t8l_r;
  var_t8l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_l;
  var_l = (var_t7l_r);
  var_t7l_r = (tmp);
  if (count(1,0), var_t7l_r != 0) goto Label_flip8; else goto Label_split_115_12;

Label_split_115_12:
  tmp = var_r;
  var_r = (var_t8l_r);
  var_t8l_r = (tmp);
  if (count(1,0), var_t8l_r == 0) goto Label_flip9; else goto Label_join_118_7;

Label_flip8:
  if (count(1,0), !(var_t7l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 118\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t7l_r);
  var_t7l_r = (tmp);
  tmp = var_t7l_r;
  var_t7l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t8l_r;
  var_t8l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_122_15;
  goto Label_cons;
  Return_122_15:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_124_7;

Label_join_118_7:
  if (count(1,0), var_t7l_r != 0){
    fprintf(stderr,"\nJoin failure at line 118\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t7l_r);
  var_t7l_r = (tmp);
  tmp = var_t7l_r;
  var_t7l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t8l_r;
  var_t8l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_122_16;
  goto Label_cons;
  Return_122_16:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_124_7;

Label_flip9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  goto Label_join_125_7;

Label_join_124_7:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  goto Label_join_125_7;

Label_flip7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 125\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_flip_entry_2; else goto Label_split_126_8;

Label_join_125_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 125\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_flip_entry_2; else goto Label_split_126_8;

Label_split_126_8:
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  tmp = var_r;
  var_r = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_133_17;
  goto Label__flip;
  Return_133_17:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_r;
  var_r = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_fl;
  var_fl = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 137\n");
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
   stack[stackPointer++] = &&Return_141_18;
  goto Label__flip;
  Return_141_18:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_fl;
  var_fl = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_fr;
  var_fr = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 145\n");
  writeVars(); goto programEnd;
}
  goto Label_join_146_13;

Label_flip_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 146\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_fr_flflip1; else goto Label_split_150_7;

Label_join_146_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 146\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_fr_flflip1; else goto Label_split_150_7;

Label_split_150_7:
  if (count(1,0), var_A == 0) goto Label_inv_fr_flflip3; else goto Label_split_151_8;

Label_split_151_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_153_19;
  goto Label__cons;
  Return_153_19:
  tmp = var_inv_tflip1fr_fl;
  var_inv_tflip1fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_tflip2fr_fl;
  var_inv_tflip2fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_fr;
  var_fr = (var_inv_tflip1fr_fl);
  var_inv_tflip1fr_fl = (tmp);
  if (count(1,0), var_inv_tflip1fr_fl != 0) goto Label_inv_fr_flflip2; else goto Label_join_158_16;

Label_inv_fr_flflip3:
  if (count(1,0), !(var_inv_tflip2fr_fl == 0)){
    fprintf(stderr,"\nJoin failure at line 158\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_inv_tflip2fr_fl);
  var_inv_tflip2fr_fl = (tmp);
  goto Label_join_160_16;

Label_join_158_16:
  if (count(1,0), var_inv_tflip2fr_fl == 0){
    fprintf(stderr,"\nJoin failure at line 158\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_inv_tflip2fr_fl);
  var_inv_tflip2fr_fl = (tmp);
  goto Label_join_160_16;

Label_inv_fr_flflip2:
  if (count(1,0), !(var_inv_tflip1fr_fl != 0)){
    fprintf(stderr,"\nJoin failure at line 160\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_inv_tflip1fr_fl);
  var_inv_tflip1fr_fl = (tmp);
  tmp = var_inv_tflip1fr_fl;
  var_inv_tflip1fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_tflip2fr_fl;
  var_inv_tflip2fr_fl = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_164_20;
  goto Label_cons;
  Return_164_20:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_166_16;

Label_join_160_16:
  if (count(1,0), var_inv_tflip1fr_fl != 0){
    fprintf(stderr,"\nJoin failure at line 160\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_inv_tflip1fr_fl);
  var_inv_tflip1fr_fl = (tmp);
  tmp = var_inv_tflip1fr_fl;
  var_inv_tflip1fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_tflip2fr_fl;
  var_inv_tflip2fr_fl = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_164_21;
  goto Label_cons;
  Return_164_21:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_166_16;

Label_inv_fr_flflip1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 166\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_1;

Label_join_166_16:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 166\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_1;

Label_flip_entry_2:
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label_flip_entry_3; else goto Label_join_179_13;

Label_flip_exit_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 179\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  goto Label_flip_exit_2;

Label_join_179_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 179\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  goto Label_flip_exit_2;

Label_flip_entry_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 188\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_3;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 191\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_copyP < var_H) goto Label_copySymbol; else goto Label_split_192_11;

Label_split_192_11:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_197_12;

Label_copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 199\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_197_12:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 199\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 203\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 204\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 205\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 206\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 207\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_208_22;
  goto Label_hash;
  Return_208_22:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_211_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_212_15;

Label_join_211_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_212_15;

Label_split_212_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_214_19;

Label_split_214_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_216_19;

Label_split_216_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_218_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 218\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_220_10;

Label_join_218_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 218\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_220_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 220\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_223_17;

Label_join_220_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 220\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_223_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 223\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_225_15;

Label_join_223_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 223\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_225_15;

Label_split_225_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_226_15;

Label_split_226_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_228_23;
  goto Label__hash;
  Return_228_23:
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
  goto Label_join_235_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 235\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 236\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 237\n");
  writeVars(); goto programEnd;
}
  goto Label_join_238_12;

Label_join_235_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 235\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 236\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 237\n");
  writeVars(); goto programEnd;
}
  goto Label_join_238_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 238\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_238_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 238\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_243_24;
  goto Label__hash;
  Return_243_24:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_244_11;

Label_split_244_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_246_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 246\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_249_11;

Label_join_246_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 246\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_249_11;

Label_split_249_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_251_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 251\n");
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

Label_join_251_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 251\n");
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
    fprintf(stderr,"\nAssertion failure at line 261\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_263_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 263\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_264_10;

Label_join_263_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 263\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_264_10;

Label_split_264_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_266_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 266\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_268_10;

Label_join_266_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 266\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_268_10;

Label_split_268_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 273\n");
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

Label__join_53_7:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~51\n");
  writeVars(); goto programEnd;
}

printf("max refs = %d\n",A);
fprintf(stderr,"final: %d - %d - %d - %d - %d\n", var_lhs1, var_lhs2, var_rhs1, var_consA, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_47_25;
  goto Label_cons;
  Return_47_25:
  tmp = var_consD;
  var_consD = (var_res2);
  var_res2 = (tmp);
  tmp = var_consA;
  var_consA = (var_consP);
  var_consP = (tmp);
fprintf(stderr,"final: %d - %d - %d - %d\n", var_lhs1, var_lhs2, var_consA, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_43_26;
  goto Label_cons;
  Return_43_26:
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
   stack[stackPointer++] = &&Return_38_27;
  goto Label_cons;
  Return_38_27:
  tmp = var_consD;
  var_consD = (var_res1);
  var_res1 = (tmp);
  tmp = var_consA;
  var_consA = (var_consP);
  var_consP = (tmp);
fprintf(stderr,"res after cons %d - %d - %d\n", var_consA, var_consD, var_consP);
  count(2,0);
   stack[stackPointer++] = &&Return_34_28;
  goto Label_cons;
  Return_34_28:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
fprintf(stderr,"res: %d %d\n", var_A, var_consD);
  count(2,0);
   stack[stackPointer++] = &&Return_31_29;
  goto Label__flip;
  Return_31_29:
  count(2,0);
   stack[stackPointer++] = &&Return_28_30;
  goto Label__build;
  Return_28_30:
  count(2,0);
   stack[stackPointer++] = &&Return_27_31;
  goto Label__initialise;
  Return_27_31:
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
    fprintf(stderr,"\nJoin failure at line 54\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_53_7;

Label__split_54_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 54\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump1; else goto Label__join_53_7;

Label__join_56_7:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_54_10;

Label__dump1:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 58\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_56_7;

Label__split_58_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 58\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used1; else goto Label__join_56_7;

Label__main:
fprintf(stderr,"%d,", var_y);
  goto Label__split_58_10;

Label__initialise:
  tmp = var_nilnil;
  var_nilnil = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_66_32;
  goto Label__cons;
  Return_66_32:
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
   stack[stackPointer++] = &&Return_93_33;
  goto Label__cons;
  Return_93_33:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  tmp = var_lhs;
  var_lhs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_90_34;
  goto Label__cons;
  Return_90_34:
fprintf(stderr,"%d\n", var_consP);
count(1, 0);
  var_consA = (var_consA - (5 + 0));
count(1, 0);
  var_consD = (var_consD - (3 + 0));
  tmp = var_lhs;
  var_lhs = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_82_35;
  goto Label__cons;
  Return_82_35:
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
   stack[stackPointer++] = &&Return_78_36;
  goto Label__cons;
  Return_78_36:
fprintf(stderr,"snd %d %d", var_consA, var_consD);
count(1, 0);
  var_consD = (var_consD - (13 + 0));
count(1, 0);
  var_consA = (var_consA - (11 + 0));
  tmp = var_lhs1;
  var_lhs1 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_73_37;
  goto Label__cons;
  Return_73_37:
count(1, 0);
  var_consA = (var_consA - (9 + 0));
count(1, 0);
  var_consD = (var_consD - (7 + 0));
  goto *stack[--stackPointer];

Label__flip_entry_1:
  goto *stack[--stackPointer];

Label__flip:
  goto Label__flip_exit_1;

Label__flip7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 109\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_1;

Label__split_109_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 109\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_1;

Label__flip8:
  if (count(1,0), !(var_t7l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 115\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t7l_r);
  var_t7l_r = (tmp);
  tmp = var_t8l_r;
  var_t8l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t7l_r;
  var_t7l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_111_38;
  goto Label_cons;
  Return_111_38:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_109_7;

Label__split_115_12:
  if (count(1,0), var_t7l_r != 0){
    fprintf(stderr,"\nJoin failure at line 115\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t7l_r);
  var_t7l_r = (tmp);
  tmp = var_t8l_r;
  var_t8l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t7l_r;
  var_t7l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_111_39;
  goto Label_cons;
  Return_111_39:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_109_7;

Label__flip9:
  if (count(1,0), !(var_t8l_r == 0)){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_t8l_r);
  var_t8l_r = (tmp);
  goto Label__split_115_12;

Label__join_118_7:
  if (count(1,0), var_t8l_r == 0){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_t8l_r);
  var_t8l_r = (tmp);
  goto Label__split_115_12;

Label__join_124_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_122_40;
  goto Label__cons;
  Return_122_40:
  tmp = var_t8l_r;
  var_t8l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t7l_r;
  var_t7l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_l;
  var_l = (var_t7l_r);
  var_t7l_r = (tmp);
  if (count(1,0), var_t7l_r != 0) goto Label__flip8; else goto Label__join_118_7;

Label__join_125_7:
  if (count(1,0), var_A == 0) goto Label__flip9; else goto Label__join_124_7;

Label__flip_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 126\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__flip7; else goto Label__join_125_7;

Label__split_126_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 126\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__flip7; else goto Label__join_125_7;

Label__join_146_13:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~145\n");
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
   stack[stackPointer++] = &&Return_141_41;
  goto Label_flip;
  Return_141_41:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_fl;
  var_fl = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_r;
  var_r = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~137\n");
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
   stack[stackPointer++] = &&Return_133_42;
  goto Label_flip;
  Return_133_42:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_r;
  var_r = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  goto Label__split_126_8;

Label__inv_fr_flflip1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 150\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__flip_exit_2; else goto Label__join_146_13;

Label__split_150_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 150\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__flip_exit_2; else goto Label__join_146_13;

Label__inv_fr_flflip3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 151\n");
  writeVars(); goto programEnd;
}
  goto Label__split_150_7;

Label__split_151_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 151\n");
  writeVars(); goto programEnd;
}
  goto Label__split_150_7;

Label__inv_fr_flflip2:
  if (count(1,0), !(var_inv_tflip1fr_fl != 0)){
    fprintf(stderr,"\nJoin failure at line 157\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_inv_tflip1fr_fl);
  var_inv_tflip1fr_fl = (tmp);
  tmp = var_inv_tflip2fr_fl;
  var_inv_tflip2fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_tflip1fr_fl;
  var_inv_tflip1fr_fl = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_153_43;
  goto Label_cons;
  Return_153_43:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_151_8;

Label__join_158_16:
  if (count(1,0), var_inv_tflip1fr_fl != 0){
    fprintf(stderr,"\nJoin failure at line 157\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_inv_tflip1fr_fl);
  var_inv_tflip1fr_fl = (tmp);
  tmp = var_inv_tflip2fr_fl;
  var_inv_tflip2fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_tflip1fr_fl;
  var_inv_tflip1fr_fl = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_153_44;
  goto Label_cons;
  Return_153_44:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_151_8;

Label__join_160_16:
  tmp = var_fl;
  var_fl = (var_inv_tflip2fr_fl);
  var_inv_tflip2fr_fl = (tmp);
  if (count(1,0), var_inv_tflip2fr_fl == 0) goto Label__inv_fr_flflip3; else goto Label__join_158_16;

Label__join_166_16:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_164_45;
  goto Label__cons;
  Return_164_45:
  tmp = var_inv_tflip2fr_fl;
  var_inv_tflip2fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_tflip1fr_fl;
  var_inv_tflip1fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_fr;
  var_fr = (var_inv_tflip1fr_fl);
  var_inv_tflip1fr_fl = (tmp);
  if (count(1,0), var_inv_tflip1fr_fl != 0) goto Label__inv_fr_flflip2; else goto Label__join_160_16;

Label__flip_exit_1:
  if (count(1,0), (var_A & 3)) goto Label__inv_fr_flflip1; else goto Label__join_166_16;

Label__flip_entry_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 174\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_A);
  var_A = (tmp);
  goto Label__flip_entry_2;

Label__join_179_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 174\n");
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
  if (count(1,0), var_A != 0) goto Label__flip_exit_3; else goto Label__join_179_13;

Label__flip_exit_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~188\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_3;

Label__copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 192\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~191\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_192_11:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 192\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~191\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_197_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_192_11;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~199\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), var_copyP < var_H) goto Label__copySymbol; else goto Label__join_197_12;

Label__join_211_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_208_46;
  goto Label__hash;
  Return_208_46:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~207\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~206\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~205\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~204\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~203\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 212\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_211_16;

Label__split_212_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 212\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_211_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 214\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_212_15;

Label__split_214_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 214\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_212_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 216\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_214_19;

Label__split_216_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 216\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_214_19;

Label__join_218_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_216_19;

Label__join_220_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_218_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 222\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_220_10;

Label__join_223_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 222\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_220_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 225\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_223_17;

Label__split_225_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 225\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_223_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 226\n");
  writeVars(); goto programEnd;
}
  goto Label__split_225_15;

Label__split_226_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 226\n");
  writeVars(); goto programEnd;
}
  goto Label__split_225_15;

Label__join_235_9:
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
   stack[stackPointer++] = &&Return_228_47;
  goto Label_hash;
  Return_228_47:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_226_15;

Label__join_238_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~237\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~236\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_235_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_238_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 244\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_243_48;
  goto Label_hash;
  Return_243_48:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_244_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 244\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_243_49;
  goto Label_hash;
  Return_243_49:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_246_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_244_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 249\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_246_13;

Label__split_249_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 249\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_246_13;

Label__join_251_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_249_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_251_13;

Label__join_263_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~261\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 264\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_263_6;

Label__split_264_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 264\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_263_6;

Label__join_266_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_264_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 268\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_266_6;

Label__split_268_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 268\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_266_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_268_10;

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
    fprintf(stderr,"\nAssertion failure at line ~273\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}