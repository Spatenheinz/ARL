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
  uint var_flip23 = 0;
  uint var_t22l_r = 0;
  uint var_t21l_r = 0;
  uint var_inv_tflip28l_r = 0;
  uint var_inv_tflip27l_r = 0;
  uint var_inv_l_rflip29 = 0;
  uint var_inv_tflip40l_r = 0;
  uint var_inv_tflip39l_r = 0;
  uint var_inv_l_rflip41 = 0;
  uint var_flip35 = 0;
  uint var_t34l_r = 0;
  uint var_t33l_r = 0;
  uint var_x = 0;
  uint var_inv_tflip2fr_fl = 0;
  uint var_inv_tflip1fr_fl = 0;
  uint var_inv_fr_flflip3 = 0;
  uint var_fr = 0;
  uint var_fl = 0;
  uint var_flip9 = 0;
  uint var_r = 0;
  uint var_l = 0;
  uint var_t8l_r = 0;
  uint var_t7l_r = 0;
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
    printf("var_flip23 = \%u\n",var_flip23);
    printf("var_t22l_r = \%u\n",var_t22l_r);
    printf("var_t21l_r = \%u\n",var_t21l_r);
    printf("var_inv_tflip28l_r = \%u\n",var_inv_tflip28l_r);
    printf("var_inv_tflip27l_r = \%u\n",var_inv_tflip27l_r);
    printf("var_inv_l_rflip29 = \%u\n",var_inv_l_rflip29);
    printf("var_inv_tflip40l_r = \%u\n",var_inv_tflip40l_r);
    printf("var_inv_tflip39l_r = \%u\n",var_inv_tflip39l_r);
    printf("var_inv_l_rflip41 = \%u\n",var_inv_l_rflip41);
    printf("var_flip35 = \%u\n",var_flip35);
    printf("var_t34l_r = \%u\n",var_t34l_r);
    printf("var_t33l_r = \%u\n",var_t33l_r);
    printf("var_x = \%u\n",var_x);
    printf("var_inv_tflip2fr_fl = \%u\n",var_inv_tflip2fr_fl);
    printf("var_inv_tflip1fr_fl = \%u\n",var_inv_tflip1fr_fl);
    printf("var_inv_fr_flflip3 = \%u\n",var_inv_fr_flflip3);
    printf("var_fr = \%u\n",var_fr);
    printf("var_fl = \%u\n",var_fl);
    printf("var_flip9 = \%u\n",var_flip9);
    printf("var_r = \%u\n",var_r);
    printf("var_l = \%u\n",var_l);
    printf("var_t8l_r = \%u\n",var_t8l_r);
    printf("var_t7l_r = \%u\n",var_t7l_r);
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
  var_consD = (var_consD + (2 + 0));
count(1, 0);
  var_consA = (var_consA + (7 + 0));
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
  if (count(1,0), (var_A & 3)) goto Label_flip7; else goto Label_split_75_7;

Label_split_75_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_77_6;
  goto Label__cons;
  Return_77_6:
  tmp = var_t7l_r;
  var_t7l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t8l_r;
  var_t8l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_l;
  var_l = (var_t7l_r);
  var_t7l_r = (tmp);
  if (count(1,0), var_t7l_r != 0) goto Label_flip8; else goto Label_split_81_12;

Label_split_81_12:
  tmp = var_r;
  var_r = (var_t8l_r);
  var_t8l_r = (tmp);
  if (count(1,0), var_flip9 == 0) goto Label_flip9; else goto Label_join_84_7;

Label_flip8:
  if (count(1,0), !(var_t7l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 84\n");
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
   stack[stackPointer++] = &&Return_88_7;
  goto Label_cons;
  Return_88_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_90_7;

Label_join_84_7:
  if (count(1,0), var_t7l_r != 0){
    fprintf(stderr,"\nJoin failure at line 84\n");
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
   stack[stackPointer++] = &&Return_88_8;
  goto Label_cons;
  Return_88_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_90_7;

Label_flip9:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 90\n");
  writeVars(); goto programEnd;
}
  goto Label_join_91_7;

Label_join_90_7:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 90\n");
  writeVars(); goto programEnd;
}
  goto Label_join_91_7;

Label_flip7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 91\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_flip_entry_2; else goto Label_split_92_8;

Label_join_91_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 91\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_flip_entry_2; else goto Label_split_92_8;

Label_split_92_8:
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  tmp = var_r;
  var_r = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_99_9;
  goto Label_flip;
  Return_99_9:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_r;
  var_r = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_fl;
  var_fl = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 103\n");
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
   stack[stackPointer++] = &&Return_107_10;
  goto Label_flip;
  Return_107_10:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_fl;
  var_fl = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_fr;
  var_fr = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 111\n");
  writeVars(); goto programEnd;
}
  goto Label_join_112_13;

Label_flip_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 112\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_fr_flflip1; else goto Label_split_116_7;

Label_join_112_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 112\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_fr_flflip1; else goto Label_split_116_7;

Label_split_116_7:
  if (count(1,0), var_inv_fr_flflip3 == 0) goto Label_inv_fr_flflip3; else goto Label_split_117_21;

Label_split_117_21:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_119_11;
  goto Label__cons;
  Return_119_11:
  tmp = var_inv_tflip1fr_fl;
  var_inv_tflip1fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_tflip2fr_fl;
  var_inv_tflip2fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_fr;
  var_fr = (var_inv_tflip1fr_fl);
  var_inv_tflip1fr_fl = (tmp);
  if (count(1,0), var_inv_tflip1fr_fl != 0) goto Label_inv_fr_flflip2; else goto Label_join_124_16;

Label_inv_fr_flflip3:
  if (count(1,0), !(var_inv_tflip2fr_fl == 0)){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_inv_tflip2fr_fl);
  var_inv_tflip2fr_fl = (tmp);
  goto Label_join_126_16;

Label_join_124_16:
  if (count(1,0), var_inv_tflip2fr_fl == 0){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_inv_tflip2fr_fl);
  var_inv_tflip2fr_fl = (tmp);
  goto Label_join_126_16;

Label_inv_fr_flflip2:
  if (count(1,0), !(var_inv_tflip1fr_fl != 0)){
    fprintf(stderr,"\nJoin failure at line 126\n");
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
   stack[stackPointer++] = &&Return_130_12;
  goto Label_cons;
  Return_130_12:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_132_16;

Label_join_126_16:
  if (count(1,0), var_inv_tflip1fr_fl != 0){
    fprintf(stderr,"\nJoin failure at line 126\n");
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
   stack[stackPointer++] = &&Return_130_13;
  goto Label_cons;
  Return_130_13:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_132_16;

Label_inv_fr_flflip1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 132\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_1;

Label_join_132_16:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 132\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_1;

Label_flip_entry_2:
  if (!(var_x == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 139\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_flip33; else goto Label_split_142_7;

Label_split_142_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_144_14;
  goto Label__cons;
  Return_144_14:
  tmp = var_t33l_r;
  var_t33l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t34l_r;
  var_t34l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_l;
  var_l = (var_t33l_r);
  var_t33l_r = (tmp);
  if (count(1,0), var_t33l_r != 0) goto Label_flip34; else goto Label_split_148_13;

Label_split_148_13:
  tmp = var_r;
  var_r = (var_t34l_r);
  var_t34l_r = (tmp);
  if (count(1,0), var_flip35 == 0) goto Label_flip35; else goto Label_join_151_8;

Label_flip34:
  if (count(1,0), !(var_t33l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 151\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t33l_r);
  var_t33l_r = (tmp);
  tmp = var_t33l_r;
  var_t33l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t34l_r;
  var_t34l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_155_15;
  goto Label_cons;
  Return_155_15:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_157_8;

Label_join_151_8:
  if (count(1,0), var_t33l_r != 0){
    fprintf(stderr,"\nJoin failure at line 151\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t33l_r);
  var_t33l_r = (tmp);
  tmp = var_t33l_r;
  var_t33l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t34l_r;
  var_t34l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_155_16;
  goto Label_cons;
  Return_155_16:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_157_8;

Label_flip35:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 157\n");
  writeVars(); goto programEnd;
}
  goto Label_join_158_8;

Label_join_157_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 157\n");
  writeVars(); goto programEnd;
}
  goto Label_join_158_8;

Label_flip33:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 158\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_x = (var_x + (var_A + 0));
  if (count(1,0), (var_A & 3)) goto Label_inv_l_rflip39; else goto Label_split_160_7;

Label_join_158_8:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 158\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_x = (var_x + (var_A + 0));
  if (count(1,0), (var_A & 3)) goto Label_inv_l_rflip39; else goto Label_split_160_7;

Label_split_160_7:
  if (count(1,0), var_inv_l_rflip41 == 0) goto Label_inv_l_rflip41; else goto Label_split_161_20;

Label_split_161_20:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_163_17;
  goto Label__cons;
  Return_163_17:
  tmp = var_inv_tflip39l_r;
  var_inv_tflip39l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_tflip40l_r;
  var_inv_tflip40l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_l;
  var_l = (var_inv_tflip39l_r);
  var_inv_tflip39l_r = (tmp);
  if (count(1,0), var_inv_tflip39l_r != 0) goto Label_inv_l_rflip40; else goto Label_join_168_15;

Label_inv_l_rflip41:
  if (count(1,0), !(var_inv_tflip40l_r == 0)){
    fprintf(stderr,"\nJoin failure at line 168\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_inv_tflip40l_r);
  var_inv_tflip40l_r = (tmp);
  goto Label_join_170_15;

Label_join_168_15:
  if (count(1,0), var_inv_tflip40l_r == 0){
    fprintf(stderr,"\nJoin failure at line 168\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_inv_tflip40l_r);
  var_inv_tflip40l_r = (tmp);
  goto Label_join_170_15;

Label_inv_l_rflip40:
  if (count(1,0), !(var_inv_tflip39l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 170\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_inv_tflip39l_r);
  var_inv_tflip39l_r = (tmp);
  tmp = var_inv_tflip39l_r;
  var_inv_tflip39l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_tflip40l_r;
  var_inv_tflip40l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_174_18;
  goto Label_cons;
  Return_174_18:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_176_15;

Label_join_170_15:
  if (count(1,0), var_inv_tflip39l_r != 0){
    fprintf(stderr,"\nJoin failure at line 170\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_inv_tflip39l_r);
  var_inv_tflip39l_r = (tmp);
  tmp = var_inv_tflip39l_r;
  var_inv_tflip39l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_tflip40l_r;
  var_inv_tflip40l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_174_19;
  goto Label_cons;
  Return_174_19:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_176_15;

Label_inv_l_rflip39:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 176\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A = (var_A - (var_x + 0));
  if (count(1,0), var_A != 0) goto Label_flip_entry_3; else goto Label_join_183_13;

Label_join_176_15:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 176\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A = (var_A - (var_x + 0));
  if (count(1,0), var_A != 0) goto Label_flip_entry_3; else goto Label_join_183_13;

Label_flip_exit_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 183\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A = (var_A + (var_x + 0));
  if (count(1,0), (var_A & 3)) goto Label_inv_l_rflip27; else goto Label_split_188_7;

Label_join_183_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 183\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A = (var_A + (var_x + 0));
  if (count(1,0), (var_A & 3)) goto Label_inv_l_rflip27; else goto Label_split_188_7;

Label_split_188_7:
  if (count(1,0), var_inv_l_rflip29 == 0) goto Label_inv_l_rflip29; else goto Label_split_189_20;

Label_split_189_20:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_191_20;
  goto Label__cons;
  Return_191_20:
  tmp = var_inv_tflip27l_r;
  var_inv_tflip27l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_tflip28l_r;
  var_inv_tflip28l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_l;
  var_l = (var_inv_tflip27l_r);
  var_inv_tflip27l_r = (tmp);
  if (count(1,0), var_inv_tflip27l_r != 0) goto Label_inv_l_rflip28; else goto Label_join_196_15;

Label_inv_l_rflip29:
  if (count(1,0), !(var_inv_tflip28l_r == 0)){
    fprintf(stderr,"\nJoin failure at line 196\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_inv_tflip28l_r);
  var_inv_tflip28l_r = (tmp);
  goto Label_join_198_15;

Label_join_196_15:
  if (count(1,0), var_inv_tflip28l_r == 0){
    fprintf(stderr,"\nJoin failure at line 196\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_inv_tflip28l_r);
  var_inv_tflip28l_r = (tmp);
  goto Label_join_198_15;

Label_inv_l_rflip28:
  if (count(1,0), !(var_inv_tflip27l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_inv_tflip27l_r);
  var_inv_tflip27l_r = (tmp);
  tmp = var_inv_tflip27l_r;
  var_inv_tflip27l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_tflip28l_r;
  var_inv_tflip28l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_202_21;
  goto Label_cons;
  Return_202_21:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_204_15;

Label_join_198_15:
  if (count(1,0), var_inv_tflip27l_r != 0){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_inv_tflip27l_r);
  var_inv_tflip27l_r = (tmp);
  tmp = var_inv_tflip27l_r;
  var_inv_tflip27l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_tflip28l_r;
  var_inv_tflip28l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_202_22;
  goto Label_cons;
  Return_202_22:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_204_15;

Label_inv_l_rflip27:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 204\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_x = (var_x - (var_A + 0));
  if (count(1,0), (var_A & 3)) goto Label_flip21; else goto Label_split_208_7;

Label_join_204_15:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 204\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_x = (var_x - (var_A + 0));
  if (count(1,0), (var_A & 3)) goto Label_flip21; else goto Label_split_208_7;

Label_split_208_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_210_23;
  goto Label__cons;
  Return_210_23:
  tmp = var_t21l_r;
  var_t21l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t22l_r;
  var_t22l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_l;
  var_l = (var_t21l_r);
  var_t21l_r = (tmp);
  if (count(1,0), var_t21l_r != 0) goto Label_flip22; else goto Label_split_214_13;

Label_split_214_13:
  tmp = var_r;
  var_r = (var_t22l_r);
  var_t22l_r = (tmp);
  if (count(1,0), var_flip23 == 0) goto Label_flip23; else goto Label_join_217_8;

Label_flip22:
  if (count(1,0), !(var_t21l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 217\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t21l_r);
  var_t21l_r = (tmp);
  tmp = var_t21l_r;
  var_t21l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t22l_r;
  var_t22l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_221_24;
  goto Label_cons;
  Return_221_24:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_223_8;

Label_join_217_8:
  if (count(1,0), var_t21l_r != 0){
    fprintf(stderr,"\nJoin failure at line 217\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t21l_r);
  var_t21l_r = (tmp);
  tmp = var_t21l_r;
  var_t21l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t22l_r;
  var_t22l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_221_25;
  goto Label_cons;
  Return_221_25:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_223_8;

Label_flip23:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 223\n");
  writeVars(); goto programEnd;
}
  goto Label_join_224_8;

Label_join_223_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 223\n");
  writeVars(); goto programEnd;
}
  goto Label_join_224_8;

Label_flip21:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 224\n");
  writeVars(); goto programEnd;
}
  if (!(var_x == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 225\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_2;

Label_join_224_8:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 224\n");
  writeVars(); goto programEnd;
}
  if (!(var_x == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 225\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_2;

Label_flip_entry_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 230\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_3;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 233\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_copyP < var_H) goto Label_copySymbol; else goto Label_split_234_11;

Label_split_234_11:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_239_12;

Label_copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 239\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 241\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_239_12:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 239\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 241\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 245\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 246\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 247\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 248\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 249\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_250_26;
  goto Label_hash;
  Return_250_26:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_253_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 253\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_254_15;

Label_join_253_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 253\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_254_15;

Label_split_254_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_256_19;

Label_split_256_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_258_19;

Label_split_258_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_260_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 260\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_262_10;

Label_join_260_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 260\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_262_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 262\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_265_17;

Label_join_262_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 262\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_265_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 265\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_267_15;

Label_join_265_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 265\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_267_15;

Label_split_267_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_268_15;

Label_split_268_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_270_27;
  goto Label__hash;
  Return_270_27:
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
  goto Label_join_277_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 277\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 278\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 279\n");
  writeVars(); goto programEnd;
}
  goto Label_join_280_12;

Label_join_277_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 277\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 278\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 279\n");
  writeVars(); goto programEnd;
}
  goto Label_join_280_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 280\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_280_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 280\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_285_28;
  goto Label__hash;
  Return_285_28:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_286_11;

Label_split_286_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_288_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 288\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_291_11;

Label_join_288_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 288\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_291_11;

Label_split_291_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_293_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 293\n");
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

Label_join_293_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 293\n");
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
    fprintf(stderr,"\nAssertion failure at line 303\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_305_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 305\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_306_10;

Label_join_305_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 305\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_306_10;

Label_split_306_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_308_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 308\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_310_10;

Label_join_308_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 308\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_310_10;

Label_split_310_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 315\n");
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
   stack[stackPointer++] = &&Return_50_32;
  goto Label__cons;
  Return_50_32:
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
   stack[stackPointer++] = &&Return_58_33;
  goto Label__cons;
  Return_58_33:
count(1, 0);
  var_consA = (var_consA - (7 + 0));
count(1, 0);
  var_consD = (var_consD - (2 + 0));
  goto *stack[--stackPointer];

Label__flip_entry_1:
  goto *stack[--stackPointer];

Label__flip:
  goto Label__flip_exit_1;

Label__flip7:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 75\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_1;

Label__split_75_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 75\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_1;

Label__flip8:
  if (count(1,0), !(var_t7l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 81\n");
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
   stack[stackPointer++] = &&Return_77_34;
  goto Label_cons;
  Return_77_34:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_75_7;

Label__split_81_12:
  if (count(1,0), var_t7l_r != 0){
    fprintf(stderr,"\nJoin failure at line 81\n");
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
   stack[stackPointer++] = &&Return_77_35;
  goto Label_cons;
  Return_77_35:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_75_7;

Label__flip9:
  if (count(1,0), !(var_flip9 == 0)){
    fprintf(stderr,"\nJoin failure at line 83\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_t8l_r);
  var_t8l_r = (tmp);
  goto Label__split_81_12;

Label__join_84_7:
  if (count(1,0), var_flip9 == 0){
    fprintf(stderr,"\nJoin failure at line 83\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_t8l_r);
  var_t8l_r = (tmp);
  goto Label__split_81_12;

Label__join_90_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_88_36;
  goto Label__cons;
  Return_88_36:
  tmp = var_t8l_r;
  var_t8l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t7l_r;
  var_t7l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_l;
  var_l = (var_t7l_r);
  var_t7l_r = (tmp);
  if (count(1,0), var_t7l_r != 0) goto Label__flip8; else goto Label__join_84_7;

Label__join_91_7:
  if (count(1,0), var_A == 0) goto Label__flip9; else goto Label__join_90_7;

Label__flip_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 92\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__flip7; else goto Label__join_91_7;

Label__split_92_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 92\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__flip7; else goto Label__join_91_7;

Label__join_112_13:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~111\n");
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
   stack[stackPointer++] = &&Return_107_37;
  goto Label__flip;
  Return_107_37:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_fl;
  var_fl = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_r;
  var_r = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~103\n");
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
   stack[stackPointer++] = &&Return_99_38;
  goto Label__flip;
  Return_99_38:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_r;
  var_r = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  goto Label__split_92_8;

Label__inv_fr_flflip1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 116\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__flip_exit_2; else goto Label__join_112_13;

Label__split_116_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 116\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__flip_exit_2; else goto Label__join_112_13;

Label__inv_fr_flflip3:
  if (count(1,0), !(var_inv_fr_flflip3 == 0)){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  goto Label__split_116_7;

Label__split_117_21:
  if (count(1,0), var_inv_fr_flflip3 == 0){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  goto Label__split_116_7;

Label__inv_fr_flflip2:
  if (count(1,0), !(var_inv_tflip1fr_fl != 0)){
    fprintf(stderr,"\nJoin failure at line 123\n");
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
   stack[stackPointer++] = &&Return_119_39;
  goto Label_cons;
  Return_119_39:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_117_21;

Label__join_124_16:
  if (count(1,0), var_inv_tflip1fr_fl != 0){
    fprintf(stderr,"\nJoin failure at line 123\n");
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
   stack[stackPointer++] = &&Return_119_40;
  goto Label_cons;
  Return_119_40:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_117_21;

Label__join_126_16:
  tmp = var_fl;
  var_fl = (var_inv_tflip2fr_fl);
  var_inv_tflip2fr_fl = (tmp);
  if (count(1,0), var_inv_tflip2fr_fl == 0) goto Label__inv_fr_flflip3; else goto Label__join_124_16;

Label__join_132_16:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_130_41;
  goto Label__cons;
  Return_130_41:
  tmp = var_inv_tflip2fr_fl;
  var_inv_tflip2fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_tflip1fr_fl;
  var_inv_tflip1fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_fr;
  var_fr = (var_inv_tflip1fr_fl);
  var_inv_tflip1fr_fl = (tmp);
  if (count(1,0), var_inv_tflip1fr_fl != 0) goto Label__inv_fr_flflip2; else goto Label__join_126_16;

Label__flip_exit_1:
  if (count(1,0), (var_A & 3)) goto Label__inv_fr_flflip1; else goto Label__join_132_16;

Label__flip33:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 142\n");
  writeVars(); goto programEnd;
}
  if (!(var_x == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~139\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_2;

Label__split_142_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 142\n");
  writeVars(); goto programEnd;
}
  if (!(var_x == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~139\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_2;

Label__flip34:
  if (count(1,0), !(var_t33l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 148\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t33l_r);
  var_t33l_r = (tmp);
  tmp = var_t34l_r;
  var_t34l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t33l_r;
  var_t33l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_144_42;
  goto Label_cons;
  Return_144_42:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_142_7;

Label__split_148_13:
  if (count(1,0), var_t33l_r != 0){
    fprintf(stderr,"\nJoin failure at line 148\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t33l_r);
  var_t33l_r = (tmp);
  tmp = var_t34l_r;
  var_t34l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t33l_r;
  var_t33l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_144_43;
  goto Label_cons;
  Return_144_43:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_142_7;

Label__flip35:
  if (count(1,0), !(var_flip35 == 0)){
    fprintf(stderr,"\nJoin failure at line 150\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_t34l_r);
  var_t34l_r = (tmp);
  goto Label__split_148_13;

Label__join_151_8:
  if (count(1,0), var_flip35 == 0){
    fprintf(stderr,"\nJoin failure at line 150\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_t34l_r);
  var_t34l_r = (tmp);
  goto Label__split_148_13;

Label__join_157_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_155_44;
  goto Label__cons;
  Return_155_44:
  tmp = var_t34l_r;
  var_t34l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t33l_r;
  var_t33l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_l;
  var_l = (var_t33l_r);
  var_t33l_r = (tmp);
  if (count(1,0), var_t33l_r != 0) goto Label__flip34; else goto Label__join_151_8;

Label__join_158_8:
  if (count(1,0), var_A == 0) goto Label__flip35; else goto Label__join_157_8;

Label__inv_l_rflip39:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 160\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_x = (var_x - (var_A + 0));
  if (count(1,0), (var_A & 3)) goto Label__flip33; else goto Label__join_158_8;

Label__split_160_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 160\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_x = (var_x - (var_A + 0));
  if (count(1,0), (var_A & 3)) goto Label__flip33; else goto Label__join_158_8;

Label__inv_l_rflip41:
  if (count(1,0), !(var_inv_l_rflip41 == 0)){
    fprintf(stderr,"\nJoin failure at line 161\n");
  writeVars(); goto programEnd;
}
  goto Label__split_160_7;

Label__split_161_20:
  if (count(1,0), var_inv_l_rflip41 == 0){
    fprintf(stderr,"\nJoin failure at line 161\n");
  writeVars(); goto programEnd;
}
  goto Label__split_160_7;

Label__inv_l_rflip40:
  if (count(1,0), !(var_inv_tflip39l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 167\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_inv_tflip39l_r);
  var_inv_tflip39l_r = (tmp);
  tmp = var_inv_tflip40l_r;
  var_inv_tflip40l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_tflip39l_r;
  var_inv_tflip39l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_163_45;
  goto Label_cons;
  Return_163_45:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_161_20;

Label__join_168_15:
  if (count(1,0), var_inv_tflip39l_r != 0){
    fprintf(stderr,"\nJoin failure at line 167\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_inv_tflip39l_r);
  var_inv_tflip39l_r = (tmp);
  tmp = var_inv_tflip40l_r;
  var_inv_tflip40l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_tflip39l_r;
  var_inv_tflip39l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_163_46;
  goto Label_cons;
  Return_163_46:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_161_20;

Label__join_170_15:
  tmp = var_r;
  var_r = (var_inv_tflip40l_r);
  var_inv_tflip40l_r = (tmp);
  if (count(1,0), var_inv_tflip40l_r == 0) goto Label__inv_l_rflip41; else goto Label__join_168_15;

Label__join_176_15:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_174_47;
  goto Label__cons;
  Return_174_47:
  tmp = var_inv_tflip40l_r;
  var_inv_tflip40l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_tflip39l_r;
  var_inv_tflip39l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_l;
  var_l = (var_inv_tflip39l_r);
  var_inv_tflip39l_r = (tmp);
  if (count(1,0), var_inv_tflip39l_r != 0) goto Label__inv_l_rflip40; else goto Label__join_170_15;

Label__flip_entry_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 178\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A = (var_A + (var_x + 0));
  if (count(1,0), (var_A & 3)) goto Label__inv_l_rflip39; else goto Label__join_176_15;

Label__join_183_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 178\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A = (var_A + (var_x + 0));
  if (count(1,0), (var_A & 3)) goto Label__inv_l_rflip39; else goto Label__join_176_15;

Label__inv_l_rflip27:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A = (var_A - (var_x + 0));
  if (count(1,0), var_A != 0) goto Label__flip_exit_3; else goto Label__join_183_13;

Label__split_188_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A = (var_A - (var_x + 0));
  if (count(1,0), var_A != 0) goto Label__flip_exit_3; else goto Label__join_183_13;

Label__inv_l_rflip29:
  if (count(1,0), !(var_inv_l_rflip29 == 0)){
    fprintf(stderr,"\nJoin failure at line 189\n");
  writeVars(); goto programEnd;
}
  goto Label__split_188_7;

Label__split_189_20:
  if (count(1,0), var_inv_l_rflip29 == 0){
    fprintf(stderr,"\nJoin failure at line 189\n");
  writeVars(); goto programEnd;
}
  goto Label__split_188_7;

Label__inv_l_rflip28:
  if (count(1,0), !(var_inv_tflip27l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 195\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_inv_tflip27l_r);
  var_inv_tflip27l_r = (tmp);
  tmp = var_inv_tflip28l_r;
  var_inv_tflip28l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_tflip27l_r;
  var_inv_tflip27l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_191_48;
  goto Label_cons;
  Return_191_48:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_189_20;

Label__join_196_15:
  if (count(1,0), var_inv_tflip27l_r != 0){
    fprintf(stderr,"\nJoin failure at line 195\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_inv_tflip27l_r);
  var_inv_tflip27l_r = (tmp);
  tmp = var_inv_tflip28l_r;
  var_inv_tflip28l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_tflip27l_r;
  var_inv_tflip27l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_191_49;
  goto Label_cons;
  Return_191_49:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_189_20;

Label__join_198_15:
  tmp = var_r;
  var_r = (var_inv_tflip28l_r);
  var_inv_tflip28l_r = (tmp);
  if (count(1,0), var_inv_tflip28l_r == 0) goto Label__inv_l_rflip29; else goto Label__join_196_15;

Label__join_204_15:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_202_50;
  goto Label__cons;
  Return_202_50:
  tmp = var_inv_tflip28l_r;
  var_inv_tflip28l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_tflip27l_r;
  var_inv_tflip27l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_l;
  var_l = (var_inv_tflip27l_r);
  var_inv_tflip27l_r = (tmp);
  if (count(1,0), var_inv_tflip27l_r != 0) goto Label__inv_l_rflip28; else goto Label__join_198_15;

Label__flip21:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_x = (var_x + (var_A + 0));
  if (count(1,0), (var_A & 3)) goto Label__inv_l_rflip27; else goto Label__join_204_15;

Label__split_208_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_x = (var_x + (var_A + 0));
  if (count(1,0), (var_A & 3)) goto Label__inv_l_rflip27; else goto Label__join_204_15;

Label__flip22:
  if (count(1,0), !(var_t21l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 214\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t21l_r);
  var_t21l_r = (tmp);
  tmp = var_t22l_r;
  var_t22l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t21l_r;
  var_t21l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_210_51;
  goto Label_cons;
  Return_210_51:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_208_7;

Label__split_214_13:
  if (count(1,0), var_t21l_r != 0){
    fprintf(stderr,"\nJoin failure at line 214\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t21l_r);
  var_t21l_r = (tmp);
  tmp = var_t22l_r;
  var_t22l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t21l_r;
  var_t21l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_210_52;
  goto Label_cons;
  Return_210_52:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_208_7;

Label__flip23:
  if (count(1,0), !(var_flip23 == 0)){
    fprintf(stderr,"\nJoin failure at line 216\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_t22l_r);
  var_t22l_r = (tmp);
  goto Label__split_214_13;

Label__join_217_8:
  if (count(1,0), var_flip23 == 0){
    fprintf(stderr,"\nJoin failure at line 216\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_t22l_r);
  var_t22l_r = (tmp);
  goto Label__split_214_13;

Label__join_223_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_221_53;
  goto Label__cons;
  Return_221_53:
  tmp = var_t22l_r;
  var_t22l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t21l_r;
  var_t21l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_l;
  var_l = (var_t21l_r);
  var_t21l_r = (tmp);
  if (count(1,0), var_t21l_r != 0) goto Label__flip22; else goto Label__join_217_8;

Label__join_224_8:
  if (count(1,0), var_A == 0) goto Label__flip23; else goto Label__join_223_8;

Label__flip_exit_2:
  if (!(var_x == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~225\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__flip21; else goto Label__join_224_8;

Label__flip_exit_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~230\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_3;

Label__copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 234\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~233\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_234_11:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 234\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~233\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_239_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_234_11;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~241\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), var_copyP < var_H) goto Label__copySymbol; else goto Label__join_239_12;

Label__join_253_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_250_54;
  goto Label__hash;
  Return_250_54:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~249\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~248\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~247\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~246\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~245\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 254\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_253_16;

Label__split_254_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 254\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_253_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 256\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_254_15;

Label__split_256_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 256\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_254_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 258\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_256_19;

Label__split_258_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 258\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_256_19;

Label__join_260_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_258_19;

Label__join_262_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_260_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 264\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_262_10;

Label__join_265_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 264\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_262_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 267\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_265_17;

Label__split_267_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 267\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_265_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 268\n");
  writeVars(); goto programEnd;
}
  goto Label__split_267_15;

Label__split_268_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 268\n");
  writeVars(); goto programEnd;
}
  goto Label__split_267_15;

Label__join_277_9:
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
   stack[stackPointer++] = &&Return_270_55;
  goto Label_hash;
  Return_270_55:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_268_15;

Label__join_280_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~279\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~278\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_277_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_280_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 286\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_285_56;
  goto Label_hash;
  Return_285_56:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_286_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 286\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_285_57;
  goto Label_hash;
  Return_285_57:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_288_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_286_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 291\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_288_13;

Label__split_291_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 291\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_288_13;

Label__join_293_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_291_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_293_13;

Label__join_305_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~303\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 306\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_305_6;

Label__split_306_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 306\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_305_6;

Label__join_308_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_306_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 310\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_308_6;

Label__split_310_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 310\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_308_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_310_10;

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
    fprintf(stderr,"\nAssertion failure at line ~315\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}