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
  uint var_inv_t_head13x_xs = 0;
  uint var_inv_t_head12x_xs = 0;
  uint var_inv_t_head9x_x_xs = 0;
  uint var_inv_t_head8x_x_xs = 0;
  uint var_xs = 0;
  uint var_x = 0;
  uint var_t2x_xs = 0;
  uint var_t1x_xs = 0;
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
    printf("var_inv_t_head13x_xs = \%u\n",var_inv_t_head13x_xs);
    printf("var_inv_t_head12x_xs = \%u\n",var_inv_t_head12x_xs);
    printf("var_inv_t_head9x_x_xs = \%u\n",var_inv_t_head9x_x_xs);
    printf("var_inv_t_head8x_x_xs = \%u\n",var_inv_t_head8x_x_xs);
    printf("var_xs = \%u\n",var_xs);
    printf("var_x = \%u\n",var_x);
    printf("var_t2x_xs = \%u\n",var_t2x_xs);
    printf("var_t1x_xs = \%u\n",var_t1x_xs);
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
  var_consA = (var_consA + (3 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_55_5;
  goto Label_cons;
  Return_55_5:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (5 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_58_6;
  goto Label_cons;
  Return_58_6:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (7 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_61_7;
  goto Label_cons;
  Return_61_7:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (9 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_64_8;
  goto Label_cons;
  Return_64_8:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (11 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_67_9;
  goto Label_cons;
  Return_67_9:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (13 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_70_10;
  goto Label_cons;
  Return_70_10:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (15 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_73_11;
  goto Label_cons;
  Return_73_11:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (17 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_76_12;
  goto Label_cons;
  Return_76_12:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (19 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_79_13;
  goto Label_cons;
  Return_79_13:
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
count(1, 0);
  var_consA = (var_consA + (21 + 0));
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

Label_head:
  goto Label_head_entry_1;

Label_head_exit_1:
  goto *stack[--stackPointer];

Label_head_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_x_xshead1; else goto Label_split_97_7;

Label_split_97_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_99_15;
  goto Label__cons;
  Return_99_15:
  tmp = var_t1x_xs;
  var_t1x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_xs;
  var_t2x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_t1x_xs);
  var_t1x_xs = (tmp);
  if (count(1,0), var_t1x_xs != 0) goto Label_head2; else goto Label_split_103_13;

Label_split_103_13:
  tmp = var_xs;
  var_xs = (var_t2x_xs);
  var_t2x_xs = (tmp);
  if (count(1,0), var_t2x_xs == 0) goto Label_head3; else goto Label_join_106_7;

Label_head2:
  if (count(1,0), !(var_t1x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 106\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_xs);
  var_t1x_xs = (tmp);
  tmp = var_t1x_xs;
  var_t1x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_xs;
  var_t2x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_110_16;
  goto Label_cons;
  Return_110_16:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_112_7;

Label_join_106_7:
  if (count(1,0), var_t1x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 106\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_xs);
  var_t1x_xs = (tmp);
  tmp = var_t1x_xs;
  var_t1x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_xs;
  var_t2x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_110_17;
  goto Label_cons;
  Return_110_17:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_112_7;

Label_head3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 112\n");
  writeVars(); goto programEnd;
}
  goto Label_join_113_11;

Label_join_112_7:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 112\n");
  writeVars(); goto programEnd;
}
  goto Label_join_113_11;

Label_x_xshead1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 113\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_head_entry_2; else goto Label_join_117_13;

Label_join_113_11:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 113\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_head_entry_2; else goto Label_join_117_13;

Label_head_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_x_xshead8; else goto Label_split_119_7;

Label_join_117_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 117\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_x_xshead8; else goto Label_split_119_7;

Label_split_119_7:
  if (count(1,0), var_A == 0) goto Label_inv_x_x_xshead10; else goto Label_split_120_8;

Label_split_120_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_122_18;
  goto Label__cons;
  Return_122_18:
  tmp = var_inv_t_head8x_x_xs;
  var_inv_t_head8x_x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_head9x_x_xs;
  var_inv_t_head9x_x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_head8x_x_xs);
  var_inv_t_head8x_x_xs = (tmp);
  if (count(1,0), var_inv_t_head8x_x_xs != 0) goto Label_inv_x_x_xshead9; else goto Label_join_127_18;

Label_inv_x_x_xshead10:
  if (count(1,0), !(var_inv_t_head9x_x_xs == 0)){
    fprintf(stderr,"\nJoin failure at line 127\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_head9x_x_xs & 3)) goto Label_inv_x_xshead12; else goto Label_split_128_23;

Label_join_127_18:
  if (count(1,0), var_inv_t_head9x_x_xs == 0){
    fprintf(stderr,"\nJoin failure at line 127\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_head9x_x_xs & 3)) goto Label_inv_x_xshead12; else goto Label_split_128_23;

Label_split_128_23:
  if (count(1,0), var_inv_t_head9x_x_xs == 0) goto Label_inv_x_xshead14; else goto Label_split_129_24;

Label_split_129_24:
  tmp = var_inv_t_head9x_x_xs;
  var_inv_t_head9x_x_xs = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_131_19;
  goto Label__cons;
  Return_131_19:
  tmp = var_inv_t_head12x_xs;
  var_inv_t_head12x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_head13x_xs;
  var_inv_t_head13x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_head12x_xs);
  var_inv_t_head12x_xs = (tmp);
  if (count(1,0), var_inv_t_head12x_xs != 0) goto Label_inv_x_xshead13; else goto Label_join_136_16;

Label_inv_x_xshead14:
  if (count(1,0), !(var_inv_t_head13x_xs == 0)){
    fprintf(stderr,"\nJoin failure at line 136\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t_head13x_xs);
  var_inv_t_head13x_xs = (tmp);
  goto Label_join_138_16;

Label_join_136_16:
  if (count(1,0), var_inv_t_head13x_xs == 0){
    fprintf(stderr,"\nJoin failure at line 136\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_inv_t_head13x_xs);
  var_inv_t_head13x_xs = (tmp);
  goto Label_join_138_16;

Label_inv_x_xshead13:
  if (count(1,0), !(var_inv_t_head12x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 138\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_head12x_xs != 0) goto Label_head15; else goto Label_split_139_23;

Label_join_138_16:
  if (count(1,0), var_inv_t_head12x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 138\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_head12x_xs != 0) goto Label_head15; else goto Label_split_139_23;

Label_split_139_23:
  tmp = var_x;
  var_x = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_141_20;
  goto Label_copy;
  Return_141_20:
  tmp = var_x;
  var_x = (var_copyP);
  var_copyP = (tmp);
  tmp = var_inv_t_head12x_xs;
  var_inv_t_head12x_xs = (var_copyQ);
  var_copyQ = (tmp);
  goto Label_join_144_8;

Label_head15:
  if (count(1,0), !(var_inv_t_head12x_xs != var_x)){
    fprintf(stderr,"\nJoin failure at line 144\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_head12x_xs;
  var_inv_t_head12x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_head13x_xs;
  var_inv_t_head13x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_147_21;
  goto Label_cons;
  Return_147_21:
  tmp = var_inv_t_head9x_x_xs;
  var_inv_t_head9x_x_xs = (var_consP);
  var_consP = (tmp);
  goto Label_join_149_16;

Label_join_144_8:
  if (count(1,0), var_inv_t_head12x_xs != var_x){
    fprintf(stderr,"\nJoin failure at line 144\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_head12x_xs;
  var_inv_t_head12x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_head13x_xs;
  var_inv_t_head13x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_147_22;
  goto Label_cons;
  Return_147_22:
  tmp = var_inv_t_head9x_x_xs;
  var_inv_t_head9x_x_xs = (var_consP);
  var_consP = (tmp);
  goto Label_join_149_16;

Label_inv_x_xshead12:
  if (count(1,0), !((var_inv_t_head9x_x_xs & 3))){
    fprintf(stderr,"\nJoin failure at line 149\n");
  writeVars(); goto programEnd;
}
  goto Label_join_150_17;

Label_join_149_16:
  if (count(1,0), (var_inv_t_head9x_x_xs & 3)){
    fprintf(stderr,"\nJoin failure at line 149\n");
  writeVars(); goto programEnd;
}
  goto Label_join_150_17;

Label_inv_x_x_xshead9:
  if (count(1,0), !(var_inv_t_head8x_x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 150\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_head8x_x_xs);
  var_inv_t_head8x_x_xs = (tmp);
  tmp = var_inv_t_head8x_x_xs;
  var_inv_t_head8x_x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_head9x_x_xs;
  var_inv_t_head9x_x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_154_23;
  goto Label_cons;
  Return_154_23:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_156_17;

Label_join_150_17:
  if (count(1,0), var_inv_t_head8x_x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 150\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_head8x_x_xs);
  var_inv_t_head8x_x_xs = (tmp);
  tmp = var_inv_t_head8x_x_xs;
  var_inv_t_head8x_x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_head9x_x_xs;
  var_inv_t_head9x_x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_154_24;
  goto Label_cons;
  Return_154_24:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_156_17;

Label_inv_x_x_xshead8:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 156\n");
  writeVars(); goto programEnd;
}
  goto Label_head_exit_1;

Label_join_156_17:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 156\n");
  writeVars(); goto programEnd;
}
  goto Label_head_exit_1;

Label_head_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 161\n");
  writeVars(); goto programEnd;
}
  goto Label_head_exit_2;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 166\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_copyP & 3) == 0) goto Label_copySymbol; else goto Label_split_167_12;

Label_split_167_12:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_172_12;

Label_copySymbol:
  if (count(1,0), !((var_copyP & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 172\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 174\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_172_12:
  if (count(1,0), (var_copyP & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 172\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 174\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_fields:
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 179\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label_fields1; else goto Label_split_181_14;

Label_split_181_14:
count(1, 0);
  Mem[var_fieldsA] = (count(0,1), (count(0,1), Mem[var_fieldsA]) + (1 + 0));
  goto Label_join_183_9;

Label_fields1:
  if (count(1,0), !((var_fieldsA & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 183\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsD = (var_fieldsD + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label_fields2; else goto Label_split_186_14;

Label_join_183_9:
  if (count(1,0), (var_fieldsA & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 183\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsD = (var_fieldsD + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label_fields2; else goto Label_split_186_14;

Label_split_186_14:
count(1, 0);
  Mem[var_fieldsD] = (count(0,1), (count(0,1), Mem[var_fieldsD]) + (1 + 0));
  goto Label_join_188_9;

Label_fields2:
  if (count(1,0), !((var_fieldsD & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (8 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 190\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_188_9:
  if (count(1,0), (var_fieldsD & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (8 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 190\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 196\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 197\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 198\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 199\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 200\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_201_25;
  goto Label_hash;
  Return_201_25:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_204_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 204\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_205_15;

Label_join_204_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 204\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_205_15;

Label_split_205_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_207_19;

Label_split_207_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_209_19;

Label_split_209_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_211_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_213_10;

Label_join_211_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 211\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_213_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 213\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_216_17;

Label_join_213_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 213\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_216_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 216\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_218_15;

Label_join_216_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 216\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_218_15;

Label_split_218_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_219_15;

Label_split_219_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_221_26;
  goto Label__hash;
  Return_221_26:
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
  goto Label_join_228_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 228\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 229\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 230\n");
  writeVars(); goto programEnd;
}
  goto Label_join_231_12;

Label_join_228_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 228\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 229\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 230\n");
  writeVars(); goto programEnd;
}
  goto Label_join_231_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 231\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_231_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 231\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_236_27;
  goto Label__hash;
  Return_236_27:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_237_11;

Label_split_237_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_239_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 239\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_242_11;

Label_join_239_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 239\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_242_11;

Label_split_242_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_244_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 244\n");
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

Label_join_244_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 244\n");
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
    fprintf(stderr,"\nAssertion failure at line 254\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_256_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 256\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_257_10;

Label_join_256_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 256\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_257_10;

Label_split_257_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_259_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 259\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_261_10;

Label_join_259_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 259\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_261_10;

Label_split_261_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 266\n");
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
   stack[stackPointer++] = &&Return_29_28;
  goto Label__head;
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
   stack[stackPointer++] = &&Return_47_31;
  goto Label__cons;
  Return_47_31:
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
   stack[stackPointer++] = &&Return_82_32;
  goto Label__cons;
  Return_82_32:
count(1, 0);
  var_consA = (var_consA - (21 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_79_33;
  goto Label__cons;
  Return_79_33:
count(1, 0);
  var_consA = (var_consA - (19 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_76_34;
  goto Label__cons;
  Return_76_34:
count(1, 0);
  var_consA = (var_consA - (17 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_73_35;
  goto Label__cons;
  Return_73_35:
count(1, 0);
  var_consA = (var_consA - (15 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_70_36;
  goto Label__cons;
  Return_70_36:
count(1, 0);
  var_consA = (var_consA - (13 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_67_37;
  goto Label__cons;
  Return_67_37:
count(1, 0);
  var_consA = (var_consA - (11 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_64_38;
  goto Label__cons;
  Return_64_38:
count(1, 0);
  var_consA = (var_consA - (9 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_61_39;
  goto Label__cons;
  Return_61_39:
count(1, 0);
  var_consA = (var_consA - (7 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_58_40;
  goto Label__cons;
  Return_58_40:
count(1, 0);
  var_consA = (var_consA - (5 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_55_41;
  goto Label__cons;
  Return_55_41:
count(1, 0);
  var_consA = (var_consA - (3 + 0));
count(1, 0);
  var_consD = (var_consD - (2 + 0));
  goto *stack[--stackPointer];

Label__head_entry_1:
  goto *stack[--stackPointer];

Label__head:
  goto Label__head_exit_1;

Label__x_xshead1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
  goto Label__head_entry_1;

Label__split_97_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
  goto Label__head_entry_1;

Label__head2:
  if (count(1,0), !(var_t1x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_xs);
  var_t1x_xs = (tmp);
  tmp = var_t2x_xs;
  var_t2x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_xs;
  var_t1x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_99_42;
  goto Label_cons;
  Return_99_42:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_97_7;

Label__split_103_13:
  if (count(1,0), var_t1x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_xs);
  var_t1x_xs = (tmp);
  tmp = var_t2x_xs;
  var_t2x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_xs;
  var_t1x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_99_43;
  goto Label_cons;
  Return_99_43:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_97_7;

Label__head3:
  if (count(1,0), !(var_t2x_xs == 0)){
    fprintf(stderr,"\nJoin failure at line 105\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_t2x_xs);
  var_t2x_xs = (tmp);
  goto Label__split_103_13;

Label__join_106_7:
  if (count(1,0), var_t2x_xs == 0){
    fprintf(stderr,"\nJoin failure at line 105\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_t2x_xs);
  var_t2x_xs = (tmp);
  goto Label__split_103_13;

Label__join_112_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_110_44;
  goto Label__cons;
  Return_110_44:
  tmp = var_t2x_xs;
  var_t2x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_xs;
  var_t1x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_t1x_xs);
  var_t1x_xs = (tmp);
  if (count(1,0), var_t1x_xs != 0) goto Label__head2; else goto Label__join_106_7;

Label__join_113_11:
  if (count(1,0), var_A == 0) goto Label__head3; else goto Label__join_112_7;

Label__head_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 114\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xshead1; else goto Label__join_113_11;

Label__join_117_13:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 114\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xshead1; else goto Label__join_113_11;

Label__inv_x_x_xshead8:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 119\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__head_exit_2; else goto Label__join_117_13;

Label__split_119_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 119\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__head_exit_2; else goto Label__join_117_13;

Label__inv_x_x_xshead10:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 120\n");
  writeVars(); goto programEnd;
}
  goto Label__split_119_7;

Label__split_120_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 120\n");
  writeVars(); goto programEnd;
}
  goto Label__split_119_7;

Label__inv_x_x_xshead9:
  if (count(1,0), !(var_inv_t_head8x_x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 126\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_head8x_x_xs);
  var_inv_t_head8x_x_xs = (tmp);
  tmp = var_inv_t_head9x_x_xs;
  var_inv_t_head9x_x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_head8x_x_xs;
  var_inv_t_head8x_x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_122_45;
  goto Label_cons;
  Return_122_45:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_120_8;

Label__join_127_18:
  if (count(1,0), var_inv_t_head8x_x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 126\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_head8x_x_xs);
  var_inv_t_head8x_x_xs = (tmp);
  tmp = var_inv_t_head9x_x_xs;
  var_inv_t_head9x_x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_head8x_x_xs;
  var_inv_t_head8x_x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_122_46;
  goto Label_cons;
  Return_122_46:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_120_8;

Label__inv_x_xshead12:
  if (count(1,0), !((var_inv_t_head9x_x_xs & 3))){
    fprintf(stderr,"\nJoin failure at line 128\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_head9x_x_xs == 0) goto Label__inv_x_x_xshead10; else goto Label__join_127_18;

Label__split_128_23:
  if (count(1,0), (var_inv_t_head9x_x_xs & 3)){
    fprintf(stderr,"\nJoin failure at line 128\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_head9x_x_xs == 0) goto Label__inv_x_x_xshead10; else goto Label__join_127_18;

Label__inv_x_xshead14:
  if (count(1,0), !(var_inv_t_head9x_x_xs == 0)){
    fprintf(stderr,"\nJoin failure at line 129\n");
  writeVars(); goto programEnd;
}
  goto Label__split_128_23;

Label__split_129_24:
  if (count(1,0), var_inv_t_head9x_x_xs == 0){
    fprintf(stderr,"\nJoin failure at line 129\n");
  writeVars(); goto programEnd;
}
  goto Label__split_128_23;

Label__inv_x_xshead13:
  if (count(1,0), !(var_inv_t_head12x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 135\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_head12x_xs);
  var_inv_t_head12x_xs = (tmp);
  tmp = var_inv_t_head13x_xs;
  var_inv_t_head13x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_head12x_xs;
  var_inv_t_head12x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_131_47;
  goto Label_cons;
  Return_131_47:
  tmp = var_inv_t_head9x_x_xs;
  var_inv_t_head9x_x_xs = (var_consP);
  var_consP = (tmp);
  goto Label__split_129_24;

Label__join_136_16:
  if (count(1,0), var_inv_t_head12x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 135\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_head12x_xs);
  var_inv_t_head12x_xs = (tmp);
  tmp = var_inv_t_head13x_xs;
  var_inv_t_head13x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_head12x_xs;
  var_inv_t_head12x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_131_48;
  goto Label_cons;
  Return_131_48:
  tmp = var_inv_t_head9x_x_xs;
  var_inv_t_head9x_x_xs = (var_consP);
  var_consP = (tmp);
  goto Label__split_129_24;

Label__join_138_16:
  tmp = var_xs;
  var_xs = (var_inv_t_head13x_xs);
  var_inv_t_head13x_xs = (tmp);
  if (count(1,0), var_inv_t_head13x_xs == 0) goto Label__inv_x_xshead14; else goto Label__join_136_16;

Label__head15:
  if (count(1,0), !(var_inv_t_head12x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 139\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_head12x_xs != 0) goto Label__inv_x_xshead13; else goto Label__join_138_16;

Label__split_139_23:
  if (count(1,0), var_inv_t_head12x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 139\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_head12x_xs != 0) goto Label__inv_x_xshead13; else goto Label__join_138_16;

Label__join_144_8:
  tmp = var_inv_t_head12x_xs;
  var_inv_t_head12x_xs = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_x;
  var_x = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_141_49;
  goto Label__copy;
  Return_141_49:
  tmp = var_x;
  var_x = (var_copyP);
  var_copyP = (tmp);
  goto Label__split_139_23;

Label__join_149_16:
  tmp = var_inv_t_head9x_x_xs;
  var_inv_t_head9x_x_xs = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_147_50;
  goto Label__cons;
  Return_147_50:
  tmp = var_inv_t_head13x_xs;
  var_inv_t_head13x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_head12x_xs;
  var_inv_t_head12x_xs = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_inv_t_head12x_xs != var_x) goto Label__head15; else goto Label__join_144_8;

Label__join_150_17:
  if (count(1,0), (var_inv_t_head9x_x_xs & 3)) goto Label__inv_x_xshead12; else goto Label__join_149_16;

Label__join_156_17:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_154_51;
  goto Label__cons;
  Return_154_51:
  tmp = var_inv_t_head9x_x_xs;
  var_inv_t_head9x_x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_head8x_x_xs;
  var_inv_t_head8x_x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_head8x_x_xs);
  var_inv_t_head8x_x_xs = (tmp);
  if (count(1,0), var_inv_t_head8x_x_xs != 0) goto Label__inv_x_x_xshead9; else goto Label__join_150_17;

Label__head_exit_1:
  if (count(1,0), (var_A & 3)) goto Label__inv_x_x_xshead8; else goto Label__join_156_17;

Label__head_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~161\n");
  writeVars(); goto programEnd;
}
  goto Label__head_entry_2;

Label__copySymbol:
  if (count(1,0), !((var_copyP & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 167\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~166\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_167_12:
  if (count(1,0), (var_copyP & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 167\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~166\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_172_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_167_12;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~174\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), (var_copyP & 3) == 0) goto Label__copySymbol; else goto Label__join_172_12;

Label__fields1:
  if (count(1,0), !((var_fieldsA & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 181\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~179\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_181_14:
  if (count(1,0), (var_fieldsA & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 181\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~179\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_183_9:
count(1, 0);
  Mem[var_fieldsA] = (count(0,1), (count(0,1), Mem[var_fieldsA]) - (1 + 0));
  goto Label__split_181_14;

Label__fields2:
  if (count(1,0), !((var_fieldsD & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 186\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsD = (var_fieldsD - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label__fields1; else goto Label__join_183_9;

Label__split_186_14:
  if (count(1,0), (var_fieldsD & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 186\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsD = (var_fieldsD - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label__fields1; else goto Label__join_183_9;

Label__join_188_9:
count(1, 0);
  Mem[var_fieldsD] = (count(0,1), (count(0,1), Mem[var_fieldsD]) - (1 + 0));
  goto Label__split_186_14;

Label__fields:
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~190\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (8 + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label__fields2; else goto Label__join_188_9;

Label__join_204_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_201_52;
  goto Label__hash;
  Return_201_52:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~200\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~199\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~198\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~197\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~196\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 205\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_204_16;

Label__split_205_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 205\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_204_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 207\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_205_15;

Label__split_207_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 207\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_205_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_207_19;

Label__split_209_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_207_19;

Label__join_211_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_209_19;

Label__join_213_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_211_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 215\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_213_10;

Label__join_216_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 215\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_213_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 218\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_216_17;

Label__split_218_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 218\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_216_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
  goto Label__split_218_15;

Label__split_219_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
  goto Label__split_218_15;

Label__join_228_9:
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
   stack[stackPointer++] = &&Return_221_53;
  goto Label_hash;
  Return_221_53:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_219_15;

Label__join_231_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~230\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~229\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_228_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_231_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 237\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_236_54;
  goto Label_hash;
  Return_236_54:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_237_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 237\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_236_55;
  goto Label_hash;
  Return_236_55:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_239_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_237_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 242\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_239_13;

Label__split_242_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 242\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_239_13;

Label__join_244_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_242_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_244_13;

Label__join_256_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~254\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 257\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_256_6;

Label__split_257_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 257\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_256_6;

Label__join_259_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_257_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 261\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_259_6;

Label__split_261_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 261\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_259_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_261_10;

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
    fprintf(stderr,"\nAssertion failure at line ~266\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}