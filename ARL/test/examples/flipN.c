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
  uint var_inv_t_flip45fr_fl = 0;
  uint var_inv_t_flip44fr_fl = 0;
  uint var_t38fr_fl = 0;
  uint var_t37fr_fl = 0;
  uint var_copyQ = 0;
  uint var_copyP = 0;
  uint var_inv_t_flip31l_r = 0;
  uint var_inv_t_flip30l_r = 0;
  uint var_t24l_r = 0;
  uint var_t23l_r = 0;
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
    printf("var_inv_t_flip45fr_fl = \%u\n",var_inv_t_flip45fr_fl);
    printf("var_inv_t_flip44fr_fl = \%u\n",var_inv_t_flip44fr_fl);
    printf("var_t38fr_fl = \%u\n",var_t38fr_fl);
    printf("var_t37fr_fl = \%u\n",var_t37fr_fl);
    printf("var_copyQ = \%u\n",var_copyQ);
    printf("var_copyP = \%u\n",var_copyP);
    printf("var_inv_t_flip31l_r = \%u\n",var_inv_t_flip31l_r);
    printf("var_inv_t_flip30l_r = \%u\n",var_inv_t_flip30l_r);
    printf("var_t24l_r = \%u\n",var_t24l_r);
    printf("var_t23l_r = \%u\n",var_t23l_r);
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
  goto Label_flip;
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

Label_flip:
  goto Label_flip_entry_1;

Label_flip_exit_1:
  goto *stack[--stackPointer];

Label_flip_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_l_rflip1; else goto Label_split_97_7;

Label_split_97_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_99_15;
  goto Label__cons;
  Return_99_15:
  tmp = var_t1l_r;
  var_t1l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t2l_r;
  var_t2l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_l;
  var_l = (var_t1l_r);
  var_t1l_r = (tmp);
  if (count(1,0), var_t1l_r != 0) goto Label_l_rflip2; else goto Label_split_103_12;

Label_split_103_12:
  tmp = var_r;
  var_r = (var_t2l_r);
  var_t2l_r = (tmp);
  if (count(1,0), var_t2l_r == 0) goto Label_l_rflip3; else goto Label_join_106_10;

Label_l_rflip2:
  if (count(1,0), !(var_t1l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 106\n");
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
   stack[stackPointer++] = &&Return_110_16;
  goto Label_cons;
  Return_110_16:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_112_10;

Label_join_106_10:
  if (count(1,0), var_t1l_r != 0){
    fprintf(stderr,"\nJoin failure at line 106\n");
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
   stack[stackPointer++] = &&Return_110_17;
  goto Label_cons;
  Return_110_17:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_112_10;

Label_l_rflip3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 112\n");
  writeVars(); goto programEnd;
}
  goto Label_join_113_10;

Label_join_112_10:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 112\n");
  writeVars(); goto programEnd;
}
  goto Label_join_113_10;

Label_l_rflip1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 113\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_flip_entry_2; else goto Label_split_114_8;

Label_join_113_10:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 113\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_flip_entry_2; else goto Label_split_114_8;

Label_split_114_8:
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  tmp = var_r;
  var_r = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_119_18;
  goto Label_flip;
  Return_119_18:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_r;
  var_r = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_fl;
  var_fl = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 123\n");
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
   stack[stackPointer++] = &&Return_127_19;
  goto Label_flip;
  Return_127_19:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_fl;
  var_fl = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_fr;
  var_fr = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 131\n");
  writeVars(); goto programEnd;
}
  goto Label_join_132_13;

Label_flip_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 132\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_fr_flflip8; else goto Label_split_134_7;

Label_join_132_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 132\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_fr_flflip8; else goto Label_split_134_7;

Label_split_134_7:
  if (count(1,0), var_A == 0) goto Label_inv_fr_flflip10; else goto Label_split_135_8;

Label_split_135_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_137_20;
  goto Label__cons;
  Return_137_20:
  tmp = var_inv_t_flip8fr_fl;
  var_inv_t_flip8fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_flip9fr_fl;
  var_inv_t_flip9fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_fr;
  var_fr = (var_inv_t_flip8fr_fl);
  var_inv_t_flip8fr_fl = (tmp);
  if (count(1,0), var_inv_t_flip8fr_fl != 0) goto Label_inv_fr_flflip9; else goto Label_join_142_17;

Label_inv_fr_flflip10:
  if (count(1,0), !(var_inv_t_flip9fr_fl == 0)){
    fprintf(stderr,"\nJoin failure at line 142\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_inv_t_flip9fr_fl);
  var_inv_t_flip9fr_fl = (tmp);
  goto Label_join_144_16;

Label_join_142_17:
  if (count(1,0), var_inv_t_flip9fr_fl == 0){
    fprintf(stderr,"\nJoin failure at line 142\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_inv_t_flip9fr_fl);
  var_inv_t_flip9fr_fl = (tmp);
  goto Label_join_144_16;

Label_inv_fr_flflip9:
  if (count(1,0), !(var_inv_t_flip8fr_fl != 0)){
    fprintf(stderr,"\nJoin failure at line 144\n");
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
   stack[stackPointer++] = &&Return_148_21;
  goto Label_cons;
  Return_148_21:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_150_16;

Label_join_144_16:
  if (count(1,0), var_inv_t_flip8fr_fl != 0){
    fprintf(stderr,"\nJoin failure at line 144\n");
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
   stack[stackPointer++] = &&Return_148_22;
  goto Label_cons;
  Return_148_22:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_150_16;

Label_inv_fr_flflip8:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 150\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_1;

Label_join_150_16:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 150\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_1;

Label_flip_entry_2:
  if (!(var_x == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 157\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_l_rflip23; else goto Label_split_158_7;

Label_split_158_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_160_23;
  goto Label__cons;
  Return_160_23:
  tmp = var_t23l_r;
  var_t23l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t24l_r;
  var_t24l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_l;
  var_l = (var_t23l_r);
  var_t23l_r = (tmp);
  if (count(1,0), var_t23l_r != 0) goto Label_l_rflip24; else goto Label_split_164_13;

Label_split_164_13:
  tmp = var_r;
  var_r = (var_t24l_r);
  var_t24l_r = (tmp);
  if (count(1,0), var_t24l_r == 0) goto Label_l_rflip25; else goto Label_join_167_11;

Label_l_rflip24:
  if (count(1,0), !(var_t23l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 167\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t23l_r);
  var_t23l_r = (tmp);
  tmp = var_t23l_r;
  var_t23l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t24l_r;
  var_t24l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_171_24;
  goto Label_cons;
  Return_171_24:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_173_11;

Label_join_167_11:
  if (count(1,0), var_t23l_r != 0){
    fprintf(stderr,"\nJoin failure at line 167\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t23l_r);
  var_t23l_r = (tmp);
  tmp = var_t23l_r;
  var_t23l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_t24l_r;
  var_t24l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_171_25;
  goto Label_cons;
  Return_171_25:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_173_11;

Label_l_rflip25:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 173\n");
  writeVars(); goto programEnd;
}
  goto Label_join_174_11;

Label_join_173_11:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 173\n");
  writeVars(); goto programEnd;
}
  goto Label_join_174_11;

Label_l_rflip23:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 174\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_x = (var_x + (var_A + 0));
  if (count(1,0), (var_A & 3)) goto Label_inv_l_rflip30; else goto Label_split_176_7;

Label_join_174_11:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 174\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_x = (var_x + (var_A + 0));
  if (count(1,0), (var_A & 3)) goto Label_inv_l_rflip30; else goto Label_split_176_7;

Label_split_176_7:
  if (count(1,0), var_A == 0) goto Label_inv_l_rflip32; else goto Label_split_177_8;

Label_split_177_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_179_26;
  goto Label__cons;
  Return_179_26:
  tmp = var_inv_t_flip30l_r;
  var_inv_t_flip30l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_flip31l_r;
  var_inv_t_flip31l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_l;
  var_l = (var_inv_t_flip30l_r);
  var_inv_t_flip30l_r = (tmp);
  if (count(1,0), var_inv_t_flip30l_r != 0) goto Label_inv_l_rflip31; else goto Label_join_184_15;

Label_inv_l_rflip32:
  if (count(1,0), !(var_inv_t_flip31l_r == 0)){
    fprintf(stderr,"\nJoin failure at line 184\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_flip31l_r != 0) goto Label_flip34; else goto Label_split_185_22;

Label_join_184_15:
  if (count(1,0), var_inv_t_flip31l_r == 0){
    fprintf(stderr,"\nJoin failure at line 184\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_flip31l_r != 0) goto Label_flip34; else goto Label_split_185_22;

Label_split_185_22:
  tmp = var_r;
  var_r = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_187_27;
  goto Label_copy;
  Return_187_27:
  tmp = var_r;
  var_r = (var_copyP);
  var_copyP = (tmp);
  tmp = var_inv_t_flip31l_r;
  var_inv_t_flip31l_r = (var_copyQ);
  var_copyQ = (tmp);
  goto Label_join_190_8;

Label_flip34:
  if (count(1,0), !(var_inv_t_flip31l_r != var_r)){
    fprintf(stderr,"\nJoin failure at line 190\n");
  writeVars(); goto programEnd;
}
  goto Label_join_191_15;

Label_join_190_8:
  if (count(1,0), var_inv_t_flip31l_r != var_r){
    fprintf(stderr,"\nJoin failure at line 190\n");
  writeVars(); goto programEnd;
}
  goto Label_join_191_15;

Label_inv_l_rflip31:
  if (count(1,0), !(var_inv_t_flip30l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 191\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_flip30l_r != 0) goto Label_flip33; else goto Label_split_192_22;

Label_join_191_15:
  if (count(1,0), var_inv_t_flip30l_r != 0){
    fprintf(stderr,"\nJoin failure at line 191\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_flip30l_r != 0) goto Label_flip33; else goto Label_split_192_22;

Label_split_192_22:
  tmp = var_l;
  var_l = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_194_28;
  goto Label_copy;
  Return_194_28:
  tmp = var_l;
  var_l = (var_copyP);
  var_copyP = (tmp);
  tmp = var_inv_t_flip30l_r;
  var_inv_t_flip30l_r = (var_copyQ);
  var_copyQ = (tmp);
  goto Label_join_197_8;

Label_flip33:
  if (count(1,0), !(var_inv_t_flip30l_r != var_l)){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_flip30l_r;
  var_inv_t_flip30l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_flip31l_r;
  var_inv_t_flip31l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_200_29;
  goto Label_cons;
  Return_200_29:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_202_15;

Label_join_197_8:
  if (count(1,0), var_inv_t_flip30l_r != var_l){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_flip30l_r;
  var_inv_t_flip30l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_flip31l_r;
  var_inv_t_flip31l_r = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_200_30;
  goto Label_cons;
  Return_200_30:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_202_15;

Label_inv_l_rflip30:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 202\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A = (var_A - (var_x + 0));
  if (count(1,0), var_A != 0) goto Label_flip_entry_3; else goto Label_join_207_13;

Label_join_202_15:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 202\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A = (var_A - (var_x + 0));
  if (count(1,0), var_A != 0) goto Label_flip_entry_3; else goto Label_join_207_13;

Label_flip_exit_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 207\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A = (var_A + (var_x + 0));
  if (count(1,0), (var_A & 3)) goto Label_fr_flflip37; else goto Label_split_210_7;

Label_join_207_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 207\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A = (var_A + (var_x + 0));
  if (count(1,0), (var_A & 3)) goto Label_fr_flflip37; else goto Label_split_210_7;

Label_split_210_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_212_31;
  goto Label__cons;
  Return_212_31:
  tmp = var_t37fr_fl;
  var_t37fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_t38fr_fl;
  var_t38fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_fr;
  var_fr = (var_t37fr_fl);
  var_t37fr_fl = (tmp);
  if (count(1,0), var_t37fr_fl != 0) goto Label_fr_flflip38; else goto Label_split_216_15;

Label_split_216_15:
  tmp = var_fl;
  var_fl = (var_t38fr_fl);
  var_t38fr_fl = (tmp);
  if (count(1,0), var_t38fr_fl == 0) goto Label_fr_flflip39; else goto Label_join_219_13;

Label_fr_flflip38:
  if (count(1,0), !(var_t37fr_fl != 0)){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_t37fr_fl);
  var_t37fr_fl = (tmp);
  tmp = var_t37fr_fl;
  var_t37fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_t38fr_fl;
  var_t38fr_fl = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_223_32;
  goto Label_cons;
  Return_223_32:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_225_13;

Label_join_219_13:
  if (count(1,0), var_t37fr_fl != 0){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_t37fr_fl);
  var_t37fr_fl = (tmp);
  tmp = var_t37fr_fl;
  var_t37fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_t38fr_fl;
  var_t38fr_fl = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_223_33;
  goto Label_cons;
  Return_223_33:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_225_13;

Label_fr_flflip39:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 225\n");
  writeVars(); goto programEnd;
}
  goto Label_join_226_13;

Label_join_225_13:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 225\n");
  writeVars(); goto programEnd;
}
  goto Label_join_226_13;

Label_fr_flflip37:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 226\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_x = (var_x - (var_A + 0));
  if (count(1,0), (var_A & 3)) goto Label_inv_fr_flflip44; else goto Label_split_228_7;

Label_join_226_13:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 226\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_x = (var_x - (var_A + 0));
  if (count(1,0), (var_A & 3)) goto Label_inv_fr_flflip44; else goto Label_split_228_7;

Label_split_228_7:
  if (count(1,0), var_A == 0) goto Label_inv_fr_flflip46; else goto Label_split_229_8;

Label_split_229_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_231_34;
  goto Label__cons;
  Return_231_34:
  tmp = var_inv_t_flip44fr_fl;
  var_inv_t_flip44fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_flip45fr_fl;
  var_inv_t_flip45fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_fr;
  var_fr = (var_inv_t_flip44fr_fl);
  var_inv_t_flip44fr_fl = (tmp);
  if (count(1,0), var_inv_t_flip44fr_fl != 0) goto Label_inv_fr_flflip45; else goto Label_join_236_17;

Label_inv_fr_flflip46:
  if (count(1,0), !(var_inv_t_flip45fr_fl == 0)){
    fprintf(stderr,"\nJoin failure at line 236\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_flip45fr_fl != 0) goto Label_flip48; else goto Label_split_237_24;

Label_join_236_17:
  if (count(1,0), var_inv_t_flip45fr_fl == 0){
    fprintf(stderr,"\nJoin failure at line 236\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_flip45fr_fl != 0) goto Label_flip48; else goto Label_split_237_24;

Label_split_237_24:
  tmp = var_fl;
  var_fl = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_239_35;
  goto Label_copy;
  Return_239_35:
  tmp = var_fl;
  var_fl = (var_copyP);
  var_copyP = (tmp);
  tmp = var_inv_t_flip45fr_fl;
  var_inv_t_flip45fr_fl = (var_copyQ);
  var_copyQ = (tmp);
  goto Label_join_242_8;

Label_flip48:
  if (count(1,0), !(var_inv_t_flip45fr_fl != var_fl)){
    fprintf(stderr,"\nJoin failure at line 242\n");
  writeVars(); goto programEnd;
}
  goto Label_join_243_17;

Label_join_242_8:
  if (count(1,0), var_inv_t_flip45fr_fl != var_fl){
    fprintf(stderr,"\nJoin failure at line 242\n");
  writeVars(); goto programEnd;
}
  goto Label_join_243_17;

Label_inv_fr_flflip45:
  if (count(1,0), !(var_inv_t_flip44fr_fl != 0)){
    fprintf(stderr,"\nJoin failure at line 243\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_flip44fr_fl != 0) goto Label_flip47; else goto Label_split_244_24;

Label_join_243_17:
  if (count(1,0), var_inv_t_flip44fr_fl != 0){
    fprintf(stderr,"\nJoin failure at line 243\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_flip44fr_fl != 0) goto Label_flip47; else goto Label_split_244_24;

Label_split_244_24:
  tmp = var_fr;
  var_fr = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_246_36;
  goto Label_copy;
  Return_246_36:
  tmp = var_fr;
  var_fr = (var_copyP);
  var_copyP = (tmp);
  tmp = var_inv_t_flip44fr_fl;
  var_inv_t_flip44fr_fl = (var_copyQ);
  var_copyQ = (tmp);
  goto Label_join_249_8;

Label_flip47:
  if (count(1,0), !(var_inv_t_flip44fr_fl != var_fr)){
    fprintf(stderr,"\nJoin failure at line 249\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_flip44fr_fl;
  var_inv_t_flip44fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_flip45fr_fl;
  var_inv_t_flip45fr_fl = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_252_37;
  goto Label_cons;
  Return_252_37:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_254_17;

Label_join_249_8:
  if (count(1,0), var_inv_t_flip44fr_fl != var_fr){
    fprintf(stderr,"\nJoin failure at line 249\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_flip44fr_fl;
  var_inv_t_flip44fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_flip45fr_fl;
  var_inv_t_flip45fr_fl = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_252_38;
  goto Label_cons;
  Return_252_38:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_254_17;

Label_inv_fr_flflip44:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 254\n");
  writeVars(); goto programEnd;
}
  if (!(var_x == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 255\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_2;

Label_join_254_17:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 254\n");
  writeVars(); goto programEnd;
}
  if (!(var_x == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 255\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_2;

Label_flip_entry_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 260\n");
  writeVars(); goto programEnd;
}
  goto Label_flip_exit_3;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 265\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_copyP & 3) == 0) goto Label_copySymbol; else goto Label_split_266_12;

Label_split_266_12:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_271_12;

Label_copySymbol:
  if (count(1,0), !((var_copyP & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 271\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 273\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_271_12:
  if (count(1,0), (var_copyP & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 271\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 273\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_fields:
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 278\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsA = (var_fieldsA + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label_fields1; else goto Label_split_281_14;

Label_split_281_14:
count(1, 0);
  Mem[var_fieldsA] = (count(0,1), (count(0,1), Mem[var_fieldsA]) + (1 + 0));
  goto Label_join_283_9;

Label_fields1:
  if (count(1,0), !((var_fieldsA & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 283\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsD = (var_fieldsD + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label_fields2; else goto Label_split_286_14;

Label_join_283_9:
  if (count(1,0), (var_fieldsA & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 283\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsD = (var_fieldsD + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label_fields2; else goto Label_split_286_14;

Label_split_286_14:
count(1, 0);
  Mem[var_fieldsD] = (count(0,1), (count(0,1), Mem[var_fieldsD]) + (1 + 0));
  goto Label_join_288_9;

Label_fields2:
  if (count(1,0), !((var_fieldsD & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 288\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (8 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 290\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_288_9:
  if (count(1,0), (var_fieldsD & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 288\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (8 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 290\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 296\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 297\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 298\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 299\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 300\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_301_39;
  goto Label_hash;
  Return_301_39:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_304_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 304\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_305_15;

Label_join_304_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 304\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_305_15;

Label_split_305_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_307_19;

Label_split_307_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_309_19;

Label_split_309_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_311_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 311\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_313_10;

Label_join_311_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 311\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_313_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 313\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_316_17;

Label_join_313_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 313\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_316_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 316\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_318_15;

Label_join_316_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 316\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_318_15;

Label_split_318_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_319_15;

Label_split_319_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_321_40;
  goto Label__hash;
  Return_321_40:
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
  goto Label_join_328_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 328\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 329\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 330\n");
  writeVars(); goto programEnd;
}
  goto Label_join_331_12;

Label_join_328_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 328\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 329\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 330\n");
  writeVars(); goto programEnd;
}
  goto Label_join_331_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 331\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_331_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 331\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_336_41;
  goto Label__hash;
  Return_336_41:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_337_11;

Label_split_337_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_339_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 339\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_342_11;

Label_join_339_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 339\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_342_11;

Label_split_342_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_344_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 344\n");
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

Label_join_344_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 344\n");
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
    fprintf(stderr,"\nAssertion failure at line 354\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_356_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 356\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_357_10;

Label_join_356_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 356\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_357_10;

Label_split_357_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_359_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 359\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_361_10;

Label_join_359_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 359\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_361_10;

Label_split_361_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 366\n");
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
   stack[stackPointer++] = &&Return_29_42;
  goto Label__flip;
  Return_29_42:
  count(2,0);
   stack[stackPointer++] = &&Return_27_43;
  goto Label__build;
  Return_27_43:
  count(2,0);
   stack[stackPointer++] = &&Return_26_44;
  goto Label__initialise;
  Return_26_44:
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
   stack[stackPointer++] = &&Return_47_45;
  goto Label__cons;
  Return_47_45:
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
   stack[stackPointer++] = &&Return_82_46;
  goto Label__cons;
  Return_82_46:
count(1, 0);
  var_consA = (var_consA - (3 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_79_47;
  goto Label__cons;
  Return_79_47:
count(1, 0);
  var_consA = (var_consA - (5 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_76_48;
  goto Label__cons;
  Return_76_48:
count(1, 0);
  var_consA = (var_consA - (7 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_73_49;
  goto Label__cons;
  Return_73_49:
count(1, 0);
  var_consA = (var_consA - (9 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_70_50;
  goto Label__cons;
  Return_70_50:
count(1, 0);
  var_consA = (var_consA - (11 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_67_51;
  goto Label__cons;
  Return_67_51:
count(1, 0);
  var_consA = (var_consA - (13 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_64_52;
  goto Label__cons;
  Return_64_52:
count(1, 0);
  var_consA = (var_consA - (15 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_61_53;
  goto Label__cons;
  Return_61_53:
count(1, 0);
  var_consA = (var_consA - (17 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_58_54;
  goto Label__cons;
  Return_58_54:
count(1, 0);
  var_consA = (var_consA - (19 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_55_55;
  goto Label__cons;
  Return_55_55:
count(1, 0);
  var_consA = (var_consA - (21 + 0));
count(1, 0);
  var_consD = (var_consD - (2 + 0));
  goto *stack[--stackPointer];

Label__flip_entry_1:
  goto *stack[--stackPointer];

Label__flip:
  goto Label__flip_exit_1;

Label__l_rflip1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_1;

Label__split_97_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_1;

Label__l_rflip2:
  if (count(1,0), !(var_t1l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 103\n");
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
   stack[stackPointer++] = &&Return_99_56;
  goto Label_cons;
  Return_99_56:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_97_7;

Label__split_103_12:
  if (count(1,0), var_t1l_r != 0){
    fprintf(stderr,"\nJoin failure at line 103\n");
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
   stack[stackPointer++] = &&Return_99_57;
  goto Label_cons;
  Return_99_57:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_97_7;

Label__l_rflip3:
  if (count(1,0), !(var_t2l_r == 0)){
    fprintf(stderr,"\nJoin failure at line 105\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_t2l_r);
  var_t2l_r = (tmp);
  goto Label__split_103_12;

Label__join_106_10:
  if (count(1,0), var_t2l_r == 0){
    fprintf(stderr,"\nJoin failure at line 105\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_t2l_r);
  var_t2l_r = (tmp);
  goto Label__split_103_12;

Label__join_112_10:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_110_58;
  goto Label__cons;
  Return_110_58:
  tmp = var_t2l_r;
  var_t2l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t1l_r;
  var_t1l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_l;
  var_l = (var_t1l_r);
  var_t1l_r = (tmp);
  if (count(1,0), var_t1l_r != 0) goto Label__l_rflip2; else goto Label__join_106_10;

Label__join_113_10:
  if (count(1,0), var_A == 0) goto Label__l_rflip3; else goto Label__join_112_10;

Label__flip_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 114\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__l_rflip1; else goto Label__join_113_10;

Label__split_114_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 114\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__l_rflip1; else goto Label__join_113_10;

Label__join_132_13:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~131\n");
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
   stack[stackPointer++] = &&Return_127_59;
  goto Label__flip;
  Return_127_59:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_fl;
  var_fl = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_r;
  var_r = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~123\n");
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
   stack[stackPointer++] = &&Return_119_60;
  goto Label__flip;
  Return_119_60:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_r;
  var_r = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_l;
  var_l = (var_A);
  var_A = (tmp);
  goto Label__split_114_8;

Label__inv_fr_flflip8:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 134\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__flip_exit_2; else goto Label__join_132_13;

Label__split_134_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 134\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__flip_exit_2; else goto Label__join_132_13;

Label__inv_fr_flflip10:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 135\n");
  writeVars(); goto programEnd;
}
  goto Label__split_134_7;

Label__split_135_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 135\n");
  writeVars(); goto programEnd;
}
  goto Label__split_134_7;

Label__inv_fr_flflip9:
  if (count(1,0), !(var_inv_t_flip8fr_fl != 0)){
    fprintf(stderr,"\nJoin failure at line 141\n");
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
   stack[stackPointer++] = &&Return_137_61;
  goto Label_cons;
  Return_137_61:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_135_8;

Label__join_142_17:
  if (count(1,0), var_inv_t_flip8fr_fl != 0){
    fprintf(stderr,"\nJoin failure at line 141\n");
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
   stack[stackPointer++] = &&Return_137_62;
  goto Label_cons;
  Return_137_62:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_135_8;

Label__join_144_16:
  tmp = var_fl;
  var_fl = (var_inv_t_flip9fr_fl);
  var_inv_t_flip9fr_fl = (tmp);
  if (count(1,0), var_inv_t_flip9fr_fl == 0) goto Label__inv_fr_flflip10; else goto Label__join_142_17;

Label__join_150_16:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_148_63;
  goto Label__cons;
  Return_148_63:
  tmp = var_inv_t_flip9fr_fl;
  var_inv_t_flip9fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_flip8fr_fl;
  var_inv_t_flip8fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_fr;
  var_fr = (var_inv_t_flip8fr_fl);
  var_inv_t_flip8fr_fl = (tmp);
  if (count(1,0), var_inv_t_flip8fr_fl != 0) goto Label__inv_fr_flflip9; else goto Label__join_144_16;

Label__flip_exit_1:
  if (count(1,0), (var_A & 3)) goto Label__inv_fr_flflip8; else goto Label__join_150_16;

Label__l_rflip23:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 158\n");
  writeVars(); goto programEnd;
}
  if (!(var_x == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~157\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_2;

Label__split_158_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 158\n");
  writeVars(); goto programEnd;
}
  if (!(var_x == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~157\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_2;

Label__l_rflip24:
  if (count(1,0), !(var_t23l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 164\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t23l_r);
  var_t23l_r = (tmp);
  tmp = var_t24l_r;
  var_t24l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t23l_r;
  var_t23l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_160_64;
  goto Label_cons;
  Return_160_64:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_158_7;

Label__split_164_13:
  if (count(1,0), var_t23l_r != 0){
    fprintf(stderr,"\nJoin failure at line 164\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_t23l_r);
  var_t23l_r = (tmp);
  tmp = var_t24l_r;
  var_t24l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t23l_r;
  var_t23l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_160_65;
  goto Label_cons;
  Return_160_65:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_158_7;

Label__l_rflip25:
  if (count(1,0), !(var_t24l_r == 0)){
    fprintf(stderr,"\nJoin failure at line 166\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_t24l_r);
  var_t24l_r = (tmp);
  goto Label__split_164_13;

Label__join_167_11:
  if (count(1,0), var_t24l_r == 0){
    fprintf(stderr,"\nJoin failure at line 166\n");
  writeVars(); goto programEnd;
}
  tmp = var_r;
  var_r = (var_t24l_r);
  var_t24l_r = (tmp);
  goto Label__split_164_13;

Label__join_173_11:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_171_66;
  goto Label__cons;
  Return_171_66:
  tmp = var_t24l_r;
  var_t24l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_t23l_r;
  var_t23l_r = (var_consA);
  var_consA = (tmp);
  tmp = var_l;
  var_l = (var_t23l_r);
  var_t23l_r = (tmp);
  if (count(1,0), var_t23l_r != 0) goto Label__l_rflip24; else goto Label__join_167_11;

Label__join_174_11:
  if (count(1,0), var_A == 0) goto Label__l_rflip25; else goto Label__join_173_11;

Label__inv_l_rflip30:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 176\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_x = (var_x - (var_A + 0));
  if (count(1,0), (var_A & 3)) goto Label__l_rflip23; else goto Label__join_174_11;

Label__split_176_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 176\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_x = (var_x - (var_A + 0));
  if (count(1,0), (var_A & 3)) goto Label__l_rflip23; else goto Label__join_174_11;

Label__inv_l_rflip32:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 177\n");
  writeVars(); goto programEnd;
}
  goto Label__split_176_7;

Label__split_177_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 177\n");
  writeVars(); goto programEnd;
}
  goto Label__split_176_7;

Label__inv_l_rflip31:
  if (count(1,0), !(var_inv_t_flip30l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 183\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_inv_t_flip30l_r);
  var_inv_t_flip30l_r = (tmp);
  tmp = var_inv_t_flip31l_r;
  var_inv_t_flip31l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_flip30l_r;
  var_inv_t_flip30l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_179_67;
  goto Label_cons;
  Return_179_67:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_177_8;

Label__join_184_15:
  if (count(1,0), var_inv_t_flip30l_r != 0){
    fprintf(stderr,"\nJoin failure at line 183\n");
  writeVars(); goto programEnd;
}
  tmp = var_l;
  var_l = (var_inv_t_flip30l_r);
  var_inv_t_flip30l_r = (tmp);
  tmp = var_inv_t_flip31l_r;
  var_inv_t_flip31l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_flip30l_r;
  var_inv_t_flip30l_r = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_179_68;
  goto Label_cons;
  Return_179_68:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_177_8;

Label__flip34:
  if (count(1,0), !(var_inv_t_flip31l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 185\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_flip31l_r == 0) goto Label__inv_l_rflip32; else goto Label__join_184_15;

Label__split_185_22:
  if (count(1,0), var_inv_t_flip31l_r != 0){
    fprintf(stderr,"\nJoin failure at line 185\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_flip31l_r == 0) goto Label__inv_l_rflip32; else goto Label__join_184_15;

Label__join_190_8:
  tmp = var_inv_t_flip31l_r;
  var_inv_t_flip31l_r = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_r;
  var_r = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_187_69;
  goto Label__copy;
  Return_187_69:
  tmp = var_r;
  var_r = (var_copyP);
  var_copyP = (tmp);
  goto Label__split_185_22;

Label__join_191_15:
  if (count(1,0), var_inv_t_flip31l_r != var_r) goto Label__flip34; else goto Label__join_190_8;

Label__flip33:
  if (count(1,0), !(var_inv_t_flip30l_r != 0)){
    fprintf(stderr,"\nJoin failure at line 192\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_flip30l_r != 0) goto Label__inv_l_rflip31; else goto Label__join_191_15;

Label__split_192_22:
  if (count(1,0), var_inv_t_flip30l_r != 0){
    fprintf(stderr,"\nJoin failure at line 192\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_flip30l_r != 0) goto Label__inv_l_rflip31; else goto Label__join_191_15;

Label__join_197_8:
  tmp = var_inv_t_flip30l_r;
  var_inv_t_flip30l_r = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_l;
  var_l = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_194_70;
  goto Label__copy;
  Return_194_70:
  tmp = var_l;
  var_l = (var_copyP);
  var_copyP = (tmp);
  goto Label__split_192_22;

Label__join_202_15:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_200_71;
  goto Label__cons;
  Return_200_71:
  tmp = var_inv_t_flip31l_r;
  var_inv_t_flip31l_r = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_flip30l_r;
  var_inv_t_flip30l_r = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_inv_t_flip30l_r != var_l) goto Label__flip33; else goto Label__join_197_8;

Label__flip_entry_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 204\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A = (var_A + (var_x + 0));
  if (count(1,0), (var_A & 3)) goto Label__inv_l_rflip30; else goto Label__join_202_15;

Label__join_207_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 204\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A = (var_A + (var_x + 0));
  if (count(1,0), (var_A & 3)) goto Label__inv_l_rflip30; else goto Label__join_202_15;

Label__fr_flflip37:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 210\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A = (var_A - (var_x + 0));
  if (count(1,0), var_A != 0) goto Label__flip_exit_3; else goto Label__join_207_13;

Label__split_210_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 210\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_A = (var_A - (var_x + 0));
  if (count(1,0), var_A != 0) goto Label__flip_exit_3; else goto Label__join_207_13;

Label__fr_flflip38:
  if (count(1,0), !(var_t37fr_fl != 0)){
    fprintf(stderr,"\nJoin failure at line 216\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_t37fr_fl);
  var_t37fr_fl = (tmp);
  tmp = var_t38fr_fl;
  var_t38fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_t37fr_fl;
  var_t37fr_fl = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_212_72;
  goto Label_cons;
  Return_212_72:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_210_7;

Label__split_216_15:
  if (count(1,0), var_t37fr_fl != 0){
    fprintf(stderr,"\nJoin failure at line 216\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_t37fr_fl);
  var_t37fr_fl = (tmp);
  tmp = var_t38fr_fl;
  var_t38fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_t37fr_fl;
  var_t37fr_fl = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_212_73;
  goto Label_cons;
  Return_212_73:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_210_7;

Label__fr_flflip39:
  if (count(1,0), !(var_t38fr_fl == 0)){
    fprintf(stderr,"\nJoin failure at line 218\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_t38fr_fl);
  var_t38fr_fl = (tmp);
  goto Label__split_216_15;

Label__join_219_13:
  if (count(1,0), var_t38fr_fl == 0){
    fprintf(stderr,"\nJoin failure at line 218\n");
  writeVars(); goto programEnd;
}
  tmp = var_fl;
  var_fl = (var_t38fr_fl);
  var_t38fr_fl = (tmp);
  goto Label__split_216_15;

Label__join_225_13:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_223_74;
  goto Label__cons;
  Return_223_74:
  tmp = var_t38fr_fl;
  var_t38fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_t37fr_fl;
  var_t37fr_fl = (var_consA);
  var_consA = (tmp);
  tmp = var_fr;
  var_fr = (var_t37fr_fl);
  var_t37fr_fl = (tmp);
  if (count(1,0), var_t37fr_fl != 0) goto Label__fr_flflip38; else goto Label__join_219_13;

Label__join_226_13:
  if (count(1,0), var_A == 0) goto Label__fr_flflip39; else goto Label__join_225_13;

Label__inv_fr_flflip44:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 228\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_x = (var_x + (var_A + 0));
  if (count(1,0), (var_A & 3)) goto Label__fr_flflip37; else goto Label__join_226_13;

Label__split_228_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 228\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_x = (var_x + (var_A + 0));
  if (count(1,0), (var_A & 3)) goto Label__fr_flflip37; else goto Label__join_226_13;

Label__inv_fr_flflip46:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 229\n");
  writeVars(); goto programEnd;
}
  goto Label__split_228_7;

Label__split_229_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 229\n");
  writeVars(); goto programEnd;
}
  goto Label__split_228_7;

Label__inv_fr_flflip45:
  if (count(1,0), !(var_inv_t_flip44fr_fl != 0)){
    fprintf(stderr,"\nJoin failure at line 235\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_inv_t_flip44fr_fl);
  var_inv_t_flip44fr_fl = (tmp);
  tmp = var_inv_t_flip45fr_fl;
  var_inv_t_flip45fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_flip44fr_fl;
  var_inv_t_flip44fr_fl = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_231_75;
  goto Label_cons;
  Return_231_75:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_229_8;

Label__join_236_17:
  if (count(1,0), var_inv_t_flip44fr_fl != 0){
    fprintf(stderr,"\nJoin failure at line 235\n");
  writeVars(); goto programEnd;
}
  tmp = var_fr;
  var_fr = (var_inv_t_flip44fr_fl);
  var_inv_t_flip44fr_fl = (tmp);
  tmp = var_inv_t_flip45fr_fl;
  var_inv_t_flip45fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_flip44fr_fl;
  var_inv_t_flip44fr_fl = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_231_76;
  goto Label_cons;
  Return_231_76:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_229_8;

Label__flip48:
  if (count(1,0), !(var_inv_t_flip45fr_fl != 0)){
    fprintf(stderr,"\nJoin failure at line 237\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_flip45fr_fl == 0) goto Label__inv_fr_flflip46; else goto Label__join_236_17;

Label__split_237_24:
  if (count(1,0), var_inv_t_flip45fr_fl != 0){
    fprintf(stderr,"\nJoin failure at line 237\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_flip45fr_fl == 0) goto Label__inv_fr_flflip46; else goto Label__join_236_17;

Label__join_242_8:
  tmp = var_inv_t_flip45fr_fl;
  var_inv_t_flip45fr_fl = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_fl;
  var_fl = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_239_77;
  goto Label__copy;
  Return_239_77:
  tmp = var_fl;
  var_fl = (var_copyP);
  var_copyP = (tmp);
  goto Label__split_237_24;

Label__join_243_17:
  if (count(1,0), var_inv_t_flip45fr_fl != var_fl) goto Label__flip48; else goto Label__join_242_8;

Label__flip47:
  if (count(1,0), !(var_inv_t_flip44fr_fl != 0)){
    fprintf(stderr,"\nJoin failure at line 244\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_flip44fr_fl != 0) goto Label__inv_fr_flflip45; else goto Label__join_243_17;

Label__split_244_24:
  if (count(1,0), var_inv_t_flip44fr_fl != 0){
    fprintf(stderr,"\nJoin failure at line 244\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_flip44fr_fl != 0) goto Label__inv_fr_flflip45; else goto Label__join_243_17;

Label__join_249_8:
  tmp = var_inv_t_flip44fr_fl;
  var_inv_t_flip44fr_fl = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_fr;
  var_fr = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_246_78;
  goto Label__copy;
  Return_246_78:
  tmp = var_fr;
  var_fr = (var_copyP);
  var_copyP = (tmp);
  goto Label__split_244_24;

Label__join_254_17:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_252_79;
  goto Label__cons;
  Return_252_79:
  tmp = var_inv_t_flip45fr_fl;
  var_inv_t_flip45fr_fl = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_flip44fr_fl;
  var_inv_t_flip44fr_fl = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_inv_t_flip44fr_fl != var_fr) goto Label__flip47; else goto Label__join_249_8;

Label__flip_exit_2:
  if (!(var_x == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~255\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__inv_fr_flflip44; else goto Label__join_254_17;

Label__flip_exit_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~260\n");
  writeVars(); goto programEnd;
}
  goto Label__flip_entry_3;

Label__copySymbol:
  if (count(1,0), !((var_copyP & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 266\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~265\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_266_12:
  if (count(1,0), (var_copyP & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 266\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~265\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_271_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_266_12;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~273\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), (var_copyP & 3) == 0) goto Label__copySymbol; else goto Label__join_271_12;

Label__fields1:
  if (count(1,0), !((var_fieldsA & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 281\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsA = (var_fieldsA - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~278\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_281_14:
  if (count(1,0), (var_fieldsA & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 281\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsA = (var_fieldsA - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~278\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_283_9:
count(1, 0);
  Mem[var_fieldsA] = (count(0,1), (count(0,1), Mem[var_fieldsA]) - (1 + 0));
  goto Label__split_281_14;

Label__fields2:
  if (count(1,0), !((var_fieldsD & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 286\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsD = (var_fieldsD - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label__fields1; else goto Label__join_283_9;

Label__split_286_14:
  if (count(1,0), (var_fieldsD & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 286\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsD = (var_fieldsD - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label__fields1; else goto Label__join_283_9;

Label__join_288_9:
count(1, 0);
  Mem[var_fieldsD] = (count(0,1), (count(0,1), Mem[var_fieldsD]) - (1 + 0));
  goto Label__split_286_14;

Label__fields:
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~290\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (8 + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label__fields2; else goto Label__join_288_9;

Label__join_304_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_301_80;
  goto Label__hash;
  Return_301_80:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~300\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~299\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~298\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~297\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~296\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 305\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_304_16;

Label__split_305_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 305\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_304_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 307\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_305_15;

Label__split_307_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 307\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_305_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 309\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_307_19;

Label__split_309_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 309\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_307_19;

Label__join_311_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_309_19;

Label__join_313_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_311_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 315\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_313_10;

Label__join_316_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 315\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_313_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 318\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_316_17;

Label__split_318_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 318\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_316_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 319\n");
  writeVars(); goto programEnd;
}
  goto Label__split_318_15;

Label__split_319_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 319\n");
  writeVars(); goto programEnd;
}
  goto Label__split_318_15;

Label__join_328_9:
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
   stack[stackPointer++] = &&Return_321_81;
  goto Label_hash;
  Return_321_81:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_319_15;

Label__join_331_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~330\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~329\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_328_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_331_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 337\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_336_82;
  goto Label_hash;
  Return_336_82:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_337_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 337\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_336_83;
  goto Label_hash;
  Return_336_83:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_339_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_337_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 342\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_339_13;

Label__split_342_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 342\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_339_13;

Label__join_344_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_342_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_344_13;

Label__join_356_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~354\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 357\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_356_6;

Label__split_357_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 357\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_356_6;

Label__join_359_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_357_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 361\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_359_6;

Label__split_361_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 361\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_359_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_361_10;

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
    fprintf(stderr,"\nAssertion failure at line ~366\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}