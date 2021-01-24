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
  uint var_inv_t_helper21x_ss = 0;
  uint var_inv_t_helper20x_ss = 0;
  uint var_t10x_ss_neq_C2_ = 0;
  uint var_t9x_ss_neq_C2_ = 0;
  uint var_t2x_C2_ = 0;
  uint var_t1x_C2_ = 0;
  uint var_inv_t_consAll18x_s = 0;
  uint var_inv_t_consAll17x_s = 0;
  uint var_copyQ = 0;
  uint var_copyP = 0;
  uint var_inv_t_consAll25s_ss1 = 0;
  uint var_inv_t_consAll24s_ss1 = 0;
  uint var_t33x_s = 0;
  uint var_t32x_s = 0;
  uint var_inv_t_consAll15x_s_s_ss1 = 0;
  uint var_inv_t_consAll14x_s_s_ss1 = 0;
  uint var_inv_t_consAll36x_ss = 0;
  uint var_inv_t_consAll35x_ss = 0;
  uint var_ss = 0;
  uint var_s = 0;
  uint var_t6s_ss = 0;
  uint var_t5s_ss = 0;
  uint var_t2x_s_ss = 0;
  uint var_t1x_s_ss = 0;
  uint var_ss1 = 0;
  uint var_inv_t_subsequences18x_ss0 = 0;
  uint var_inv_t_subsequences17x_ss0 = 0;
  uint var_ss0 = 0;
  uint var_xs = 0;
  uint var_x = 0;
  uint var_t4x_xs = 0;
  uint var_t3x_xs = 0;
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
    printf("var_inv_t_helper21x_ss = \%u\n",var_inv_t_helper21x_ss);
    printf("var_inv_t_helper20x_ss = \%u\n",var_inv_t_helper20x_ss);
    printf("var_t10x_ss_neq_C2_ = \%u\n",var_t10x_ss_neq_C2_);
    printf("var_t9x_ss_neq_C2_ = \%u\n",var_t9x_ss_neq_C2_);
    printf("var_t2x_C2_ = \%u\n",var_t2x_C2_);
    printf("var_t1x_C2_ = \%u\n",var_t1x_C2_);
    printf("var_inv_t_consAll18x_s = \%u\n",var_inv_t_consAll18x_s);
    printf("var_inv_t_consAll17x_s = \%u\n",var_inv_t_consAll17x_s);
    printf("var_copyQ = \%u\n",var_copyQ);
    printf("var_copyP = \%u\n",var_copyP);
    printf("var_inv_t_consAll25s_ss1 = \%u\n",var_inv_t_consAll25s_ss1);
    printf("var_inv_t_consAll24s_ss1 = \%u\n",var_inv_t_consAll24s_ss1);
    printf("var_t33x_s = \%u\n",var_t33x_s);
    printf("var_t32x_s = \%u\n",var_t32x_s);
    printf("var_inv_t_consAll15x_s_s_ss1 = \%u\n",var_inv_t_consAll15x_s_s_ss1);
    printf("var_inv_t_consAll14x_s_s_ss1 = \%u\n",var_inv_t_consAll14x_s_s_ss1);
    printf("var_inv_t_consAll36x_ss = \%u\n",var_inv_t_consAll36x_ss);
    printf("var_inv_t_consAll35x_ss = \%u\n",var_inv_t_consAll35x_ss);
    printf("var_ss = \%u\n",var_ss);
    printf("var_s = \%u\n",var_s);
    printf("var_t6s_ss = \%u\n",var_t6s_ss);
    printf("var_t5s_ss = \%u\n",var_t5s_ss);
    printf("var_t2x_s_ss = \%u\n",var_t2x_s_ss);
    printf("var_t1x_s_ss = \%u\n",var_t1x_s_ss);
    printf("var_ss1 = \%u\n",var_ss1);
    printf("var_inv_t_subsequences18x_ss0 = \%u\n",var_inv_t_subsequences18x_ss0);
    printf("var_inv_t_subsequences17x_ss0 = \%u\n",var_inv_t_subsequences17x_ss0);
    printf("var_ss0 = \%u\n",var_ss0);
    printf("var_xs = \%u\n",var_xs);
    printf("var_x = \%u\n",var_x);
    printf("var_t4x_xs = \%u\n",var_t4x_xs);
    printf("var_t3x_xs = \%u\n",var_t3x_xs);
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
  goto Label_subsequences;
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

Label_subsequences:
  goto Label_subsequences_entry_1;

Label_subsequences_exit_1:
  goto *stack[--stackPointer];

Label_subsequences_entry_1:
  if (count(1,0), var_A != 2) goto Label_subsequences1; else goto Label_split_73_8;

Label_split_73_8:
count(1, 0);
  var_A = (var_A - (2 + 0));
  goto Label_join_75_15;

Label_subsequences1:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 75\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_subsequences_entry_2; else goto Label_join_81_21;

Label_join_75_15:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 75\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_subsequences_entry_2; else goto Label_join_81_21;

Label_subsequences_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 81\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_subsequences2; else goto Label_split_85_8;

Label_join_81_21:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 81\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_subsequences2; else goto Label_split_85_8;

Label_split_85_8:
count(1, 0);
  var_A = (var_A + (var_nilnil + 0));
  goto Label_join_87_15;

Label_subsequences2:
  if (count(1,0), !(var_A != var_nilnil)){
    fprintf(stderr,"\nJoin failure at line 87\n");
  writeVars(); goto programEnd;
}
  goto Label_subsequences_exit_1;

Label_join_87_15:
  if (count(1,0), var_A != var_nilnil){
    fprintf(stderr,"\nJoin failure at line 87\n");
  writeVars(); goto programEnd;
}
  goto Label_subsequences_exit_1;

Label_subsequences_entry_2:
  if (count(1,0), (var_A & 3)) goto Label_x_xssubsequences3; else goto Label_split_94_7;

Label_split_94_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_96_6;
  goto Label__cons;
  Return_96_6:
  tmp = var_t3x_xs;
  var_t3x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_t4x_xs;
  var_t4x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_t3x_xs);
  var_t3x_xs = (tmp);
  if (count(1,0), var_t3x_xs != 0) goto Label_subsequences4; else goto Label_split_100_13;

Label_split_100_13:
  tmp = var_xs;
  var_xs = (var_t4x_xs);
  var_t4x_xs = (tmp);
  if (count(1,0), var_t4x_xs == 0) goto Label_subsequences5; else goto Label_join_103_15;

Label_subsequences4:
  if (count(1,0), !(var_t3x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t3x_xs);
  var_t3x_xs = (tmp);
  tmp = var_t3x_xs;
  var_t3x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_t4x_xs;
  var_t4x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_107_7;
  goto Label_cons;
  Return_107_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_109_15;

Label_join_103_15:
  if (count(1,0), var_t3x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t3x_xs);
  var_t3x_xs = (tmp);
  tmp = var_t3x_xs;
  var_t3x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_t4x_xs;
  var_t4x_xs = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_107_8;
  goto Label_cons;
  Return_107_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_109_15;

Label_subsequences5:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 109\n");
  writeVars(); goto programEnd;
}
  goto Label_join_110_19;

Label_join_109_15:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 109\n");
  writeVars(); goto programEnd;
}
  goto Label_join_110_19;

Label_x_xssubsequences3:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 110\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_subsequences_entry_3; else goto Label_split_111_8;

Label_join_110_19:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 110\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_subsequences_entry_3; else goto Label_split_111_8;

Label_split_111_8:
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_x;
  var_x = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_118_9;
  goto Label_subsequences;
  Return_118_9:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_x;
  var_x = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_ss0;
  var_ss0 = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 122\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_ss0subsequences17; else goto Label_split_123_7;

Label_split_123_7:
  if (count(1,0), var_A == 0) goto Label_inv_x_ss0subsequences19; else goto Label_split_124_8;

Label_split_124_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_126_10;
  goto Label__cons;
  Return_126_10:
  tmp = var_inv_t_subsequences17x_ss0;
  var_inv_t_subsequences17x_ss0 = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_subsequences18x_ss0;
  var_inv_t_subsequences18x_ss0 = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_subsequences17x_ss0);
  var_inv_t_subsequences17x_ss0 = (tmp);
  if (count(1,0), var_inv_t_subsequences17x_ss0 != 0) goto Label_inv_x_ss0subsequences18; else goto Label_join_131_25;

Label_inv_x_ss0subsequences19:
  if (count(1,0), !(var_inv_t_subsequences18x_ss0 == 0)){
    fprintf(stderr,"\nJoin failure at line 131\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss0;
  var_ss0 = (var_inv_t_subsequences18x_ss0);
  var_inv_t_subsequences18x_ss0 = (tmp);
  goto Label_join_133_25;

Label_join_131_25:
  if (count(1,0), var_inv_t_subsequences18x_ss0 == 0){
    fprintf(stderr,"\nJoin failure at line 131\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss0;
  var_ss0 = (var_inv_t_subsequences18x_ss0);
  var_inv_t_subsequences18x_ss0 = (tmp);
  goto Label_join_133_25;

Label_inv_x_ss0subsequences18:
  if (count(1,0), !(var_inv_t_subsequences17x_ss0 != 0)){
    fprintf(stderr,"\nJoin failure at line 133\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_subsequences17x_ss0);
  var_inv_t_subsequences17x_ss0 = (tmp);
  tmp = var_inv_t_subsequences17x_ss0;
  var_inv_t_subsequences17x_ss0 = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_subsequences18x_ss0;
  var_inv_t_subsequences18x_ss0 = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_137_11;
  goto Label_cons;
  Return_137_11:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_139_25;

Label_join_133_25:
  if (count(1,0), var_inv_t_subsequences17x_ss0 != 0){
    fprintf(stderr,"\nJoin failure at line 133\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_subsequences17x_ss0);
  var_inv_t_subsequences17x_ss0 = (tmp);
  tmp = var_inv_t_subsequences17x_ss0;
  var_inv_t_subsequences17x_ss0 = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_subsequences18x_ss0;
  var_inv_t_subsequences18x_ss0 = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_137_12;
  goto Label_cons;
  Return_137_12:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_139_25;

Label_inv_x_ss0subsequences17:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 139\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_141_13;
  goto Label_consAll;
  Return_141_13:
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 144\n");
  writeVars(); goto programEnd;
}
  goto Label_join_145_21;

Label_join_139_25:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 139\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_141_14;
  goto Label_consAll;
  Return_141_14:
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 144\n");
  writeVars(); goto programEnd;
}
  goto Label_join_145_21;

Label_subsequences_exit_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 145\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  goto Label_subsequences_exit_2;

Label_join_145_21:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 145\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  goto Label_subsequences_exit_2;

Label_subsequences_entry_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 154\n");
  writeVars(); goto programEnd;
}
  goto Label_subsequences_exit_3;

Label_consAll:
  goto Label_consAll_entry_1;

Label_consAll_exit_1:
  goto *stack[--stackPointer];

Label_consAll_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_x_s_ssconsAll1; else goto Label_split_165_7;

Label_split_165_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_167_15;
  goto Label__cons;
  Return_167_15:
  tmp = var_t1x_s_ss;
  var_t1x_s_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_s_ss;
  var_t2x_s_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_t1x_s_ss);
  var_t1x_s_ss = (tmp);
  if (count(1,0), var_t1x_s_ss != 0) goto Label_consAll2; else goto Label_split_171_15;

Label_split_171_15:
  if (count(1,0), (var_t2x_s_ss & 3)) goto Label_s_ssconsAll5; else goto Label_split_172_14;

Label_split_172_14:
  tmp = var_t2x_s_ss;
  var_t2x_s_ss = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_174_16;
  goto Label__cons;
  Return_174_16:
  tmp = var_t5s_ss;
  var_t5s_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_t6s_ss;
  var_t6s_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_s;
  var_s = (var_t5s_ss);
  var_t5s_ss = (tmp);
  if (count(1,0), var_t5s_ss != 0) goto Label_consAll6; else goto Label_split_178_13;

Label_split_178_13:
  tmp = var_ss;
  var_ss = (var_t6s_ss);
  var_t6s_ss = (tmp);
  if (count(1,0), var_t6s_ss == 0) goto Label_consAll7; else goto Label_join_181_10;

Label_consAll6:
  if (count(1,0), !(var_t5s_ss != 0)){
    fprintf(stderr,"\nJoin failure at line 181\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_t5s_ss);
  var_t5s_ss = (tmp);
  tmp = var_t5s_ss;
  var_t5s_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_t6s_ss;
  var_t6s_ss = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_185_17;
  goto Label_cons;
  Return_185_17:
  tmp = var_t2x_s_ss;
  var_t2x_s_ss = (var_consP);
  var_consP = (tmp);
  goto Label_join_187_10;

Label_join_181_10:
  if (count(1,0), var_t5s_ss != 0){
    fprintf(stderr,"\nJoin failure at line 181\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_t5s_ss);
  var_t5s_ss = (tmp);
  tmp = var_t5s_ss;
  var_t5s_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_t6s_ss;
  var_t6s_ss = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_185_18;
  goto Label_cons;
  Return_185_18:
  tmp = var_t2x_s_ss;
  var_t2x_s_ss = (var_consP);
  var_consP = (tmp);
  goto Label_join_187_10;

Label_consAll7:
  if (count(1,0), !(var_t2x_s_ss == 0)){
    fprintf(stderr,"\nJoin failure at line 187\n");
  writeVars(); goto programEnd;
}
  goto Label_join_188_14;

Label_join_187_10:
  if (count(1,0), var_t2x_s_ss == 0){
    fprintf(stderr,"\nJoin failure at line 187\n");
  writeVars(); goto programEnd;
}
  goto Label_join_188_14;

Label_s_ssconsAll5:
  if (count(1,0), !((var_t2x_s_ss & 3))){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t2x_s_ss == 0) goto Label_consAll3; else goto Label_join_190_10;

Label_join_188_14:
  if (count(1,0), (var_t2x_s_ss & 3)){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t2x_s_ss == 0) goto Label_consAll3; else goto Label_join_190_10;

Label_consAll2:
  if (count(1,0), !(var_t1x_s_ss != 0)){
    fprintf(stderr,"\nJoin failure at line 190\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_s_ss);
  var_t1x_s_ss = (tmp);
  tmp = var_t1x_s_ss;
  var_t1x_s_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_s_ss;
  var_t2x_s_ss = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_194_19;
  goto Label_cons;
  Return_194_19:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_196_10;

Label_join_190_10:
  if (count(1,0), var_t1x_s_ss != 0){
    fprintf(stderr,"\nJoin failure at line 190\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_s_ss);
  var_t1x_s_ss = (tmp);
  tmp = var_t1x_s_ss;
  var_t1x_s_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_s_ss;
  var_t2x_s_ss = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_194_20;
  goto Label_cons;
  Return_194_20:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_196_10;

Label_consAll3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 196\n");
  writeVars(); goto programEnd;
}
  goto Label_join_197_16;

Label_join_196_10:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 196\n");
  writeVars(); goto programEnd;
}
  goto Label_join_197_16;

Label_x_s_ssconsAll1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_consAll_entry_2; else goto Label_split_198_8;

Label_join_197_16:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_consAll_entry_2; else goto Label_split_198_8;

Label_split_198_8:
  if (count(1,0), (var_A & 3)) goto Label_inv_x_ssconsAll35; else goto Label_split_202_7;

Label_split_202_7:
  if (count(1,0), var_A == 0) goto Label_inv_x_ssconsAll37; else goto Label_split_203_8;

Label_split_203_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_205_21;
  goto Label__cons;
  Return_205_21:
  tmp = var_inv_t_consAll35x_ss;
  var_inv_t_consAll35x_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll36x_ss;
  var_inv_t_consAll36x_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_consAll35x_ss);
  var_inv_t_consAll35x_ss = (tmp);
  if (count(1,0), var_inv_t_consAll35x_ss != 0) goto Label_inv_x_ssconsAll36; else goto Label_join_210_19;

Label_inv_x_ssconsAll37:
  if (count(1,0), !(var_inv_t_consAll36x_ss == 0)){
    fprintf(stderr,"\nJoin failure at line 210\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss;
  var_ss = (var_inv_t_consAll36x_ss);
  var_inv_t_consAll36x_ss = (tmp);
  goto Label_join_212_19;

Label_join_210_19:
  if (count(1,0), var_inv_t_consAll36x_ss == 0){
    fprintf(stderr,"\nJoin failure at line 210\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss;
  var_ss = (var_inv_t_consAll36x_ss);
  var_inv_t_consAll36x_ss = (tmp);
  goto Label_join_212_19;

Label_inv_x_ssconsAll36:
  if (count(1,0), !(var_inv_t_consAll35x_ss != 0)){
    fprintf(stderr,"\nJoin failure at line 212\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll35x_ss);
  var_inv_t_consAll35x_ss = (tmp);
  tmp = var_inv_t_consAll35x_ss;
  var_inv_t_consAll35x_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll36x_ss;
  var_inv_t_consAll36x_ss = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_216_22;
  goto Label_cons;
  Return_216_22:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_218_19;

Label_join_212_19:
  if (count(1,0), var_inv_t_consAll35x_ss != 0){
    fprintf(stderr,"\nJoin failure at line 212\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll35x_ss);
  var_inv_t_consAll35x_ss = (tmp);
  tmp = var_inv_t_consAll35x_ss;
  var_inv_t_consAll35x_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll36x_ss;
  var_inv_t_consAll36x_ss = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_216_23;
  goto Label_cons;
  Return_216_23:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_218_19;

Label_inv_x_ssconsAll35:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 218\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_s;
  var_s = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_223_24;
  goto Label_helper;
  Return_223_24:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_x;
  var_x = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_s;
  var_s = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 229\n");
  writeVars(); goto programEnd;
}
  goto Label_join_230_16;

Label_join_218_19:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 218\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_s;
  var_s = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_223_25;
  goto Label_helper;
  Return_223_25:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_x;
  var_x = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_s;
  var_s = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 229\n");
  writeVars(); goto programEnd;
}
  goto Label_join_230_16;

Label_consAll_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 230\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_s_s_ss1consAll14; else goto Label_split_234_7;

Label_join_230_16:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 230\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_s_s_ss1consAll14; else goto Label_split_234_7;

Label_split_234_7:
  if (count(1,0), var_A == 0) goto Label_inv_x_s_s_ss1consAll16; else goto Label_split_235_8;

Label_split_235_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_237_26;
  goto Label__cons;
  Return_237_26:
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll15x_s_s_ss1;
  var_inv_t_consAll15x_s_s_ss1 = (var_consD);
  var_consD = (tmp);
  if (count(1,0), (var_inv_t_consAll14x_s_s_ss1 & 3)) goto Label_x_sconsAll32; else goto Label_split_240_30;

Label_split_240_30:
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_242_27;
  goto Label__cons;
  Return_242_27:
  tmp = var_t32x_s;
  var_t32x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_t33x_s;
  var_t33x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_t32x_s);
  var_t32x_s = (tmp);
  if (count(1,0), var_t32x_s != 0) goto Label_consAll33; else goto Label_split_246_13;

Label_split_246_13:
  tmp = var_s;
  var_s = (var_t33x_s);
  var_t33x_s = (tmp);
  if (count(1,0), var_t33x_s == 0) goto Label_consAll34; else goto Label_join_249_11;

Label_consAll33:
  if (count(1,0), !(var_t32x_s != 0)){
    fprintf(stderr,"\nJoin failure at line 249\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t32x_s);
  var_t32x_s = (tmp);
  tmp = var_t32x_s;
  var_t32x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_t33x_s;
  var_t33x_s = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_253_28;
  goto Label_cons;
  Return_253_28:
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label_join_255_11;

Label_join_249_11:
  if (count(1,0), var_t32x_s != 0){
    fprintf(stderr,"\nJoin failure at line 249\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t32x_s);
  var_t32x_s = (tmp);
  tmp = var_t32x_s;
  var_t32x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_t33x_s;
  var_t33x_s = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_253_29;
  goto Label_cons;
  Return_253_29:
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label_join_255_11;

Label_consAll34:
  if (count(1,0), !(var_inv_t_consAll14x_s_s_ss1 == 0)){
    fprintf(stderr,"\nJoin failure at line 255\n");
  writeVars(); goto programEnd;
}
  goto Label_join_256_14;

Label_join_255_11:
  if (count(1,0), var_inv_t_consAll14x_s_s_ss1 == 0){
    fprintf(stderr,"\nJoin failure at line 255\n");
  writeVars(); goto programEnd;
}
  goto Label_join_256_14;

Label_x_sconsAll32:
  if (count(1,0), !((var_inv_t_consAll14x_s_s_ss1 & 3))){
    fprintf(stderr,"\nJoin failure at line 256\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll14x_s_s_ss1 != 0) goto Label_inv_x_s_s_ss1consAll15; else goto Label_join_258_24;

Label_join_256_14:
  if (count(1,0), (var_inv_t_consAll14x_s_s_ss1 & 3)){
    fprintf(stderr,"\nJoin failure at line 256\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll14x_s_s_ss1 != 0) goto Label_inv_x_s_s_ss1consAll15; else goto Label_join_258_24;

Label_inv_x_s_s_ss1consAll16:
  if (count(1,0), !(var_inv_t_consAll15x_s_s_ss1 == 0)){
    fprintf(stderr,"\nJoin failure at line 258\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_consAll15x_s_s_ss1 & 3)) goto Label_inv_s_ss1consAll24; else goto Label_split_259_30;

Label_join_258_24:
  if (count(1,0), var_inv_t_consAll15x_s_s_ss1 == 0){
    fprintf(stderr,"\nJoin failure at line 258\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_consAll15x_s_s_ss1 & 3)) goto Label_inv_s_ss1consAll24; else goto Label_split_259_30;

Label_split_259_30:
  if (count(1,0), var_inv_t_consAll15x_s_s_ss1 == 0) goto Label_inv_s_ss1consAll26; else goto Label_split_260_31;

Label_split_260_31:
  tmp = var_inv_t_consAll15x_s_s_ss1;
  var_inv_t_consAll15x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_262_30;
  goto Label__cons;
  Return_262_30:
  tmp = var_inv_t_consAll24s_ss1;
  var_inv_t_consAll24s_ss1 = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll25s_ss1;
  var_inv_t_consAll25s_ss1 = (var_consD);
  var_consD = (tmp);
  tmp = var_s;
  var_s = (var_inv_t_consAll24s_ss1);
  var_inv_t_consAll24s_ss1 = (tmp);
  if (count(1,0), var_inv_t_consAll24s_ss1 != 0) goto Label_inv_s_ss1consAll25; else goto Label_join_267_20;

Label_inv_s_ss1consAll26:
  if (count(1,0), !(var_inv_t_consAll25s_ss1 == 0)){
    fprintf(stderr,"\nJoin failure at line 267\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss1;
  var_ss1 = (var_inv_t_consAll25s_ss1);
  var_inv_t_consAll25s_ss1 = (tmp);
  goto Label_join_269_20;

Label_join_267_20:
  if (count(1,0), var_inv_t_consAll25s_ss1 == 0){
    fprintf(stderr,"\nJoin failure at line 267\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss1;
  var_ss1 = (var_inv_t_consAll25s_ss1);
  var_inv_t_consAll25s_ss1 = (tmp);
  goto Label_join_269_20;

Label_inv_s_ss1consAll25:
  if (count(1,0), !(var_inv_t_consAll24s_ss1 != 0)){
    fprintf(stderr,"\nJoin failure at line 269\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll24s_ss1 != 0) goto Label_consAll27; else goto Label_split_270_27;

Label_join_269_20:
  if (count(1,0), var_inv_t_consAll24s_ss1 != 0){
    fprintf(stderr,"\nJoin failure at line 269\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll24s_ss1 != 0) goto Label_consAll27; else goto Label_split_270_27;

Label_split_270_27:
  tmp = var_s;
  var_s = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_272_31;
  goto Label_copy;
  Return_272_31:
  tmp = var_s;
  var_s = (var_copyP);
  var_copyP = (tmp);
  tmp = var_inv_t_consAll24s_ss1;
  var_inv_t_consAll24s_ss1 = (var_copyQ);
  var_copyQ = (tmp);
  goto Label_join_275_11;

Label_consAll27:
  if (count(1,0), !(var_inv_t_consAll24s_ss1 != var_s)){
    fprintf(stderr,"\nJoin failure at line 275\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_consAll24s_ss1;
  var_inv_t_consAll24s_ss1 = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll25s_ss1;
  var_inv_t_consAll25s_ss1 = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_278_32;
  goto Label_cons;
  Return_278_32:
  tmp = var_inv_t_consAll15x_s_s_ss1;
  var_inv_t_consAll15x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label_join_280_20;

Label_join_275_11:
  if (count(1,0), var_inv_t_consAll24s_ss1 != var_s){
    fprintf(stderr,"\nJoin failure at line 275\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_consAll24s_ss1;
  var_inv_t_consAll24s_ss1 = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll25s_ss1;
  var_inv_t_consAll25s_ss1 = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_278_33;
  goto Label_cons;
  Return_278_33:
  tmp = var_inv_t_consAll15x_s_s_ss1;
  var_inv_t_consAll15x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label_join_280_20;

Label_inv_s_ss1consAll24:
  if (count(1,0), !((var_inv_t_consAll15x_s_s_ss1 & 3))){
    fprintf(stderr,"\nJoin failure at line 280\n");
  writeVars(); goto programEnd;
}
  goto Label_join_281_24;

Label_join_280_20:
  if (count(1,0), (var_inv_t_consAll15x_s_s_ss1 & 3)){
    fprintf(stderr,"\nJoin failure at line 280\n");
  writeVars(); goto programEnd;
}
  goto Label_join_281_24;

Label_inv_x_s_s_ss1consAll15:
  if (count(1,0), !(var_inv_t_consAll14x_s_s_ss1 != 0)){
    fprintf(stderr,"\nJoin failure at line 281\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_consAll14x_s_s_ss1 & 3)) goto Label_inv_x_sconsAll17; else goto Label_split_282_30;

Label_join_281_24:
  if (count(1,0), var_inv_t_consAll14x_s_s_ss1 != 0){
    fprintf(stderr,"\nJoin failure at line 281\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_consAll14x_s_s_ss1 & 3)) goto Label_inv_x_sconsAll17; else goto Label_split_282_30;

Label_split_282_30:
  if (count(1,0), var_inv_t_consAll14x_s_s_ss1 == 0) goto Label_inv_x_sconsAll19; else goto Label_split_283_31;

Label_split_283_31:
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_285_34;
  goto Label__cons;
  Return_285_34:
  tmp = var_inv_t_consAll17x_s;
  var_inv_t_consAll17x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll18x_s;
  var_inv_t_consAll18x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_consAll17x_s);
  var_inv_t_consAll17x_s = (tmp);
  if (count(1,0), var_inv_t_consAll17x_s != 0) goto Label_inv_x_sconsAll18; else goto Label_join_290_18;

Label_inv_x_sconsAll19:
  if (count(1,0), !(var_inv_t_consAll18x_s == 0)){
    fprintf(stderr,"\nJoin failure at line 290\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_inv_t_consAll18x_s);
  var_inv_t_consAll18x_s = (tmp);
  goto Label_join_292_18;

Label_join_290_18:
  if (count(1,0), var_inv_t_consAll18x_s == 0){
    fprintf(stderr,"\nJoin failure at line 290\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_inv_t_consAll18x_s);
  var_inv_t_consAll18x_s = (tmp);
  goto Label_join_292_18;

Label_inv_x_sconsAll18:
  if (count(1,0), !(var_inv_t_consAll17x_s != 0)){
    fprintf(stderr,"\nJoin failure at line 292\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll17x_s);
  var_inv_t_consAll17x_s = (tmp);
  tmp = var_inv_t_consAll17x_s;
  var_inv_t_consAll17x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll18x_s;
  var_inv_t_consAll18x_s = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_296_35;
  goto Label_cons;
  Return_296_35:
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label_join_298_18;

Label_join_292_18:
  if (count(1,0), var_inv_t_consAll17x_s != 0){
    fprintf(stderr,"\nJoin failure at line 292\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll17x_s);
  var_inv_t_consAll17x_s = (tmp);
  tmp = var_inv_t_consAll17x_s;
  var_inv_t_consAll17x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll18x_s;
  var_inv_t_consAll18x_s = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_296_36;
  goto Label_cons;
  Return_296_36:
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label_join_298_18;

Label_inv_x_sconsAll17:
  if (count(1,0), !((var_inv_t_consAll14x_s_s_ss1 & 3))){
    fprintf(stderr,"\nJoin failure at line 298\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll15x_s_s_ss1;
  var_inv_t_consAll15x_s_s_ss1 = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_301_37;
  goto Label_cons;
  Return_301_37:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_303_24;

Label_join_298_18:
  if (count(1,0), (var_inv_t_consAll14x_s_s_ss1 & 3)){
    fprintf(stderr,"\nJoin failure at line 298\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll15x_s_s_ss1;
  var_inv_t_consAll15x_s_s_ss1 = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_301_38;
  goto Label_cons;
  Return_301_38:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_303_24;

Label_inv_x_s_s_ss1consAll14:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 303\n");
  writeVars(); goto programEnd;
}
  goto Label_consAll_exit_1;

Label_join_303_24:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 303\n");
  writeVars(); goto programEnd;
}
  goto Label_consAll_exit_1;

Label_consAll_entry_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 308\n");
  writeVars(); goto programEnd;
}
  goto Label_consAll_exit_2;

Label_helper:
  goto Label_helper_entry_1;

Label_helper_exit_1:
  goto *stack[--stackPointer];

Label_helper_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_x_C2_helper1; else goto Label_split_319_7;

Label_split_319_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_321_39;
  goto Label__cons;
  Return_321_39:
  tmp = var_t1x_C2_;
  var_t1x_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_C2_;
  var_t2x_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_t1x_C2_);
  var_t1x_C2_ = (tmp);
  if (count(1,0), var_t1x_C2_ != 0) goto Label_helper2; else goto Label_split_325_14;

Label_split_325_14:
  if (count(1,0), var_t2x_C2_ != 2) goto Label_helper5; else goto Label_split_326_14;

Label_split_326_14:
count(1, 0);
  var_t2x_C2_ = (var_t2x_C2_ - (2 + 0));
  goto Label_join_328_9;

Label_helper5:
  if (count(1,0), !(var_t2x_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 328\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t2x_C2_ == 0) goto Label_helper3; else goto Label_join_330_9;

Label_join_328_9:
  if (count(1,0), var_t2x_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 328\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t2x_C2_ == 0) goto Label_helper3; else goto Label_join_330_9;

Label_helper2:
  if (count(1,0), !(var_t1x_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 330\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_C2_);
  var_t1x_C2_ = (tmp);
  tmp = var_t1x_C2_;
  var_t1x_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_C2_;
  var_t2x_C2_ = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_334_40;
  goto Label_cons;
  Return_334_40:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_336_9;

Label_join_330_9:
  if (count(1,0), var_t1x_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 330\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_C2_);
  var_t1x_C2_ = (tmp);
  tmp = var_t1x_C2_;
  var_t1x_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_C2_;
  var_t2x_C2_ = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_334_41;
  goto Label_cons;
  Return_334_41:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_336_9;

Label_helper3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 336\n");
  writeVars(); goto programEnd;
}
  goto Label_join_337_14;

Label_join_336_9:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 336\n");
  writeVars(); goto programEnd;
}
  goto Label_join_337_14;

Label_x_C2_helper1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 337\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_helper_entry_2; else goto Label_join_343_15;

Label_join_337_14:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 337\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_helper_entry_2; else goto Label_join_343_15;

Label_helper_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 343\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_inv_5helper8; else goto Label_split_347_8;

Label_join_343_15:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 343\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_inv_5helper8; else goto Label_split_347_8;

Label_split_347_8:
count(1, 0);
  var_A = (var_A + (2 + 0));
  goto Label_join_349_14;

Label_inv_5helper8:
  if (count(1,0), !(var_A != 2)){
    fprintf(stderr,"\nJoin failure at line 349\n");
  writeVars(); goto programEnd;
}
  goto Label_helper_exit_1;

Label_join_349_14:
  if (count(1,0), var_A != 2){
    fprintf(stderr,"\nJoin failure at line 349\n");
  writeVars(); goto programEnd;
}
  goto Label_helper_exit_1;

Label_helper_entry_2:
  if (count(1,0), (var_A & 3)) goto Label_x_ss_neq_C2_helper9; else goto Label_split_356_7;

Label_split_356_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_358_42;
  goto Label__cons;
  Return_358_42:
  tmp = var_t9x_ss_neq_C2_;
  var_t9x_ss_neq_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_t10x_ss_neq_C2_;
  var_t10x_ss_neq_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_t9x_ss_neq_C2_);
  var_t9x_ss_neq_C2_ = (tmp);
  if (count(1,0), var_t9x_ss_neq_C2_ != 0) goto Label_helper10; else goto Label_split_362_21;

Label_split_362_21:
  if (!(var_ss == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 363\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 2) goto Label_helper13; else goto Label_split_364_8;

Label_split_364_8:
count(1, 0);
  var_A = (var_A - (2 + 0));
  goto Label_join_366_10;

Label_helper13:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 366\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_ss = (var_ss + (var_t10x_ss_neq_C2_ + 0));
  if (count(1,0), var_A != 0) goto Label_inv_5helper14; else goto Label_split_368_8;

Label_join_366_10:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 366\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_ss = (var_ss + (var_t10x_ss_neq_C2_ + 0));
  if (count(1,0), var_A != 0) goto Label_inv_5helper14; else goto Label_split_368_8;

Label_split_368_8:
count(1, 0);
  var_A = (var_A + (2 + 0));
  goto Label_join_370_15;

Label_inv_5helper14:
  if (count(1,0), !(var_A != 2)){
    fprintf(stderr,"\nJoin failure at line 370\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_t10x_ss_neq_C2_ = (var_t10x_ss_neq_C2_ - (var_ss + 0));
  if (count(1,0), var_t10x_ss_neq_C2_ == 0) goto Label_helper11; else goto Label_join_373_10;

Label_join_370_15:
  if (count(1,0), var_A != 2){
    fprintf(stderr,"\nJoin failure at line 370\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_t10x_ss_neq_C2_ = (var_t10x_ss_neq_C2_ - (var_ss + 0));
  if (count(1,0), var_t10x_ss_neq_C2_ == 0) goto Label_helper11; else goto Label_join_373_10;

Label_helper10:
  if (count(1,0), !(var_t9x_ss_neq_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 373\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t9x_ss_neq_C2_);
  var_t9x_ss_neq_C2_ = (tmp);
  tmp = var_t9x_ss_neq_C2_;
  var_t9x_ss_neq_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_t10x_ss_neq_C2_;
  var_t10x_ss_neq_C2_ = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_377_43;
  goto Label_cons;
  Return_377_43:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_379_10;

Label_join_373_10:
  if (count(1,0), var_t9x_ss_neq_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 373\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t9x_ss_neq_C2_);
  var_t9x_ss_neq_C2_ = (tmp);
  tmp = var_t9x_ss_neq_C2_;
  var_t9x_ss_neq_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_t10x_ss_neq_C2_;
  var_t10x_ss_neq_C2_ = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_377_44;
  goto Label_cons;
  Return_377_44:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_379_10;

Label_helper11:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 379\n");
  writeVars(); goto programEnd;
}
  goto Label_join_380_21;

Label_join_379_10:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 379\n");
  writeVars(); goto programEnd;
}
  goto Label_join_380_21;

Label_x_ss_neq_C2_helper9:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 380\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_helper_entry_3; else goto Label_split_381_8;

Label_join_380_21:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 380\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_helper_entry_3; else goto Label_split_381_8;

Label_split_381_8:
  if (count(1,0), (var_A & 3)) goto Label_inv_x_sshelper20; else goto Label_split_385_7;

Label_split_385_7:
  if (count(1,0), var_A == 0) goto Label_inv_x_sshelper22; else goto Label_split_386_8;

Label_split_386_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_388_45;
  goto Label__cons;
  Return_388_45:
  tmp = var_inv_t_helper20x_ss;
  var_inv_t_helper20x_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_helper21x_ss;
  var_inv_t_helper21x_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_helper20x_ss);
  var_inv_t_helper20x_ss = (tmp);
  if (count(1,0), var_inv_t_helper20x_ss != 0) goto Label_inv_x_sshelper21; else goto Label_join_393_18;

Label_inv_x_sshelper22:
  if (count(1,0), !(var_inv_t_helper21x_ss == 0)){
    fprintf(stderr,"\nJoin failure at line 393\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss;
  var_ss = (var_inv_t_helper21x_ss);
  var_inv_t_helper21x_ss = (tmp);
  goto Label_join_395_18;

Label_join_393_18:
  if (count(1,0), var_inv_t_helper21x_ss == 0){
    fprintf(stderr,"\nJoin failure at line 393\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss;
  var_ss = (var_inv_t_helper21x_ss);
  var_inv_t_helper21x_ss = (tmp);
  goto Label_join_395_18;

Label_inv_x_sshelper21:
  if (count(1,0), !(var_inv_t_helper20x_ss != 0)){
    fprintf(stderr,"\nJoin failure at line 395\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_helper20x_ss);
  var_inv_t_helper20x_ss = (tmp);
  tmp = var_inv_t_helper20x_ss;
  var_inv_t_helper20x_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_helper21x_ss;
  var_inv_t_helper21x_ss = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_399_46;
  goto Label_cons;
  Return_399_46:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_401_18;

Label_join_395_18:
  if (count(1,0), var_inv_t_helper20x_ss != 0){
    fprintf(stderr,"\nJoin failure at line 395\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_helper20x_ss);
  var_inv_t_helper20x_ss = (tmp);
  tmp = var_inv_t_helper20x_ss;
  var_inv_t_helper20x_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_helper21x_ss;
  var_inv_t_helper21x_ss = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_399_47;
  goto Label_cons;
  Return_399_47:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_401_18;

Label_inv_x_sshelper20:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 401\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_403_48;
  goto Label_consAll;
  Return_403_48:
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 406\n");
  writeVars(); goto programEnd;
}
  goto Label_join_407_15;

Label_join_401_18:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 401\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_403_49;
  goto Label_consAll;
  Return_403_49:
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 406\n");
  writeVars(); goto programEnd;
}
  goto Label_join_407_15;

Label_helper_exit_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 407\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  goto Label_helper_exit_2;

Label_join_407_15:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 407\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  goto Label_helper_exit_2;

Label_helper_entry_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 416\n");
  writeVars(); goto programEnd;
}
  goto Label_helper_exit_3;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 419\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_copyP < var_H) goto Label_copySymbol; else goto Label_split_420_11;

Label_split_420_11:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_425_12;

Label_copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 425\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 427\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_425_12:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 425\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 427\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 431\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 432\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 433\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 434\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 435\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_436_50;
  goto Label_hash;
  Return_436_50:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_439_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 439\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_440_15;

Label_join_439_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 439\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_440_15;

Label_split_440_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_442_19;

Label_split_442_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_444_19;

Label_split_444_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_446_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 446\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_448_10;

Label_join_446_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 446\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_448_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 448\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_451_17;

Label_join_448_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 448\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_451_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 451\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_453_15;

Label_join_451_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 451\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_453_15;

Label_split_453_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_454_15;

Label_split_454_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_456_51;
  goto Label__hash;
  Return_456_51:
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
  goto Label_join_463_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 463\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 464\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 465\n");
  writeVars(); goto programEnd;
}
  goto Label_join_466_12;

Label_join_463_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 463\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 464\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 465\n");
  writeVars(); goto programEnd;
}
  goto Label_join_466_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 466\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_466_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 466\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_471_52;
  goto Label__hash;
  Return_471_52:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_472_11;

Label_split_472_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_474_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 474\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_477_11;

Label_join_474_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 474\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_477_11;

Label_split_477_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_479_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 479\n");
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

Label_join_479_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 479\n");
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
    fprintf(stderr,"\nAssertion failure at line 489\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_491_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 491\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_492_10;

Label_join_491_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 491\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_492_10;

Label_split_492_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_494_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 494\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_496_10;

Label_join_494_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 494\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_496_10;

Label_split_496_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 501\n");
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
   stack[stackPointer++] = &&Return_31_53;
  goto Label__subsequences;
  Return_31_53:
  count(2,0);
   stack[stackPointer++] = &&Return_28_54;
  goto Label__build;
  Return_28_54:
  count(2,0);
   stack[stackPointer++] = &&Return_27_55;
  goto Label__initialise;
  Return_27_55:
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
   stack[stackPointer++] = &&Return_50_56;
  goto Label__cons;
  Return_50_56:
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
   stack[stackPointer++] = &&Return_58_57;
  goto Label__cons;
  Return_58_57:
count(1, 0);
  var_consA = (var_consA - (7 + 0));
count(1, 0);
  var_consD = (var_consD - (2 + 0));
  goto *stack[--stackPointer];

Label__subsequences_entry_1:
  goto *stack[--stackPointer];

Label__subsequences:
  goto Label__subsequences_exit_1;

Label__subsequences1:
  if (count(1,0), !(var_A != 2)){
    fprintf(stderr,"\nJoin failure at line 73\n");
  writeVars(); goto programEnd;
}
  goto Label__subsequences_entry_1;

Label__split_73_8:
  if (count(1,0), var_A != 2){
    fprintf(stderr,"\nJoin failure at line 73\n");
  writeVars(); goto programEnd;
}
  goto Label__subsequences_entry_1;

Label__join_75_15:
count(1, 0);
  var_A = (var_A + (2 + 0));
  goto Label__split_73_8;

Label__subsequences_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 76\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__subsequences1; else goto Label__join_75_15;

Label__join_81_21:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 76\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__subsequences1; else goto Label__join_75_15;

Label__subsequences2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 85\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__subsequences_exit_2; else goto Label__join_81_21;

Label__split_85_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 85\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__subsequences_exit_2; else goto Label__join_81_21;

Label__join_87_15:
count(1, 0);
  var_A = (var_A - (var_nilnil + 0));
  goto Label__split_85_8;

Label__subsequences_exit_1:
  if (count(1,0), var_A != var_nilnil) goto Label__subsequences2; else goto Label__join_87_15;

Label__x_xssubsequences3:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 94\n");
  writeVars(); goto programEnd;
}
  goto Label__subsequences_entry_2;

Label__split_94_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 94\n");
  writeVars(); goto programEnd;
}
  goto Label__subsequences_entry_2;

Label__subsequences4:
  if (count(1,0), !(var_t3x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 100\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t3x_xs);
  var_t3x_xs = (tmp);
  tmp = var_t4x_xs;
  var_t4x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_t3x_xs;
  var_t3x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_96_58;
  goto Label_cons;
  Return_96_58:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_94_7;

Label__split_100_13:
  if (count(1,0), var_t3x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 100\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t3x_xs);
  var_t3x_xs = (tmp);
  tmp = var_t4x_xs;
  var_t4x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_t3x_xs;
  var_t3x_xs = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_96_59;
  goto Label_cons;
  Return_96_59:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_94_7;

Label__subsequences5:
  if (count(1,0), !(var_t4x_xs == 0)){
    fprintf(stderr,"\nJoin failure at line 102\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_t4x_xs);
  var_t4x_xs = (tmp);
  goto Label__split_100_13;

Label__join_103_15:
  if (count(1,0), var_t4x_xs == 0){
    fprintf(stderr,"\nJoin failure at line 102\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_t4x_xs);
  var_t4x_xs = (tmp);
  goto Label__split_100_13;

Label__join_109_15:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_107_60;
  goto Label__cons;
  Return_107_60:
  tmp = var_t4x_xs;
  var_t4x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_t3x_xs;
  var_t3x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_t3x_xs);
  var_t3x_xs = (tmp);
  if (count(1,0), var_t3x_xs != 0) goto Label__subsequences4; else goto Label__join_103_15;

Label__join_110_19:
  if (count(1,0), var_A == 0) goto Label__subsequences5; else goto Label__join_109_15;

Label__subsequences_entry_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 111\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xssubsequences3; else goto Label__join_110_19;

Label__split_111_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 111\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xssubsequences3; else goto Label__join_110_19;

Label__inv_x_ss0subsequences17:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 123\n");
  writeVars(); goto programEnd;
}
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~122\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss0;
  var_ss0 = (var_A);
  var_A = (tmp);
  tmp = var_x;
  var_x = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_118_61;
  goto Label__subsequences;
  Return_118_61:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_x;
  var_x = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  goto Label__split_111_8;

Label__split_123_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 123\n");
  writeVars(); goto programEnd;
}
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~122\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss0;
  var_ss0 = (var_A);
  var_A = (tmp);
  tmp = var_x;
  var_x = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_118_62;
  goto Label__subsequences;
  Return_118_62:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_x;
  var_x = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  goto Label__split_111_8;

Label__inv_x_ss0subsequences19:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  goto Label__split_123_7;

Label__split_124_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 124\n");
  writeVars(); goto programEnd;
}
  goto Label__split_123_7;

Label__inv_x_ss0subsequences18:
  if (count(1,0), !(var_inv_t_subsequences17x_ss0 != 0)){
    fprintf(stderr,"\nJoin failure at line 130\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_subsequences17x_ss0);
  var_inv_t_subsequences17x_ss0 = (tmp);
  tmp = var_inv_t_subsequences18x_ss0;
  var_inv_t_subsequences18x_ss0 = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_subsequences17x_ss0;
  var_inv_t_subsequences17x_ss0 = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_126_63;
  goto Label_cons;
  Return_126_63:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_124_8;

Label__join_131_25:
  if (count(1,0), var_inv_t_subsequences17x_ss0 != 0){
    fprintf(stderr,"\nJoin failure at line 130\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_subsequences17x_ss0);
  var_inv_t_subsequences17x_ss0 = (tmp);
  tmp = var_inv_t_subsequences18x_ss0;
  var_inv_t_subsequences18x_ss0 = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_subsequences17x_ss0;
  var_inv_t_subsequences17x_ss0 = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_126_64;
  goto Label_cons;
  Return_126_64:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_124_8;

Label__join_133_25:
  tmp = var_ss0;
  var_ss0 = (var_inv_t_subsequences18x_ss0);
  var_inv_t_subsequences18x_ss0 = (tmp);
  if (count(1,0), var_inv_t_subsequences18x_ss0 == 0) goto Label__inv_x_ss0subsequences19; else goto Label__join_131_25;

Label__join_139_25:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_137_65;
  goto Label__cons;
  Return_137_65:
  tmp = var_inv_t_subsequences18x_ss0;
  var_inv_t_subsequences18x_ss0 = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_subsequences17x_ss0;
  var_inv_t_subsequences17x_ss0 = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_subsequences17x_ss0);
  var_inv_t_subsequences17x_ss0 = (tmp);
  if (count(1,0), var_inv_t_subsequences17x_ss0 != 0) goto Label__inv_x_ss0subsequences18; else goto Label__join_133_25;

Label__join_145_21:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~144\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_141_66;
  goto Label__consAll;
  Return_141_66:
  if (count(1,0), (var_A & 3)) goto Label__inv_x_ss0subsequences17; else goto Label__join_139_25;

Label__subsequences_exit_2:
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__subsequences_exit_3; else goto Label__join_145_21;

Label__subsequences_exit_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~154\n");
  writeVars(); goto programEnd;
}
  goto Label__subsequences_entry_3;

Label__consAll_entry_1:
  goto *stack[--stackPointer];

Label__consAll:
  goto Label__consAll_exit_1;

Label__x_s_ssconsAll1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 165\n");
  writeVars(); goto programEnd;
}
  goto Label__consAll_entry_1;

Label__split_165_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 165\n");
  writeVars(); goto programEnd;
}
  goto Label__consAll_entry_1;

Label__consAll2:
  if (count(1,0), !(var_t1x_s_ss != 0)){
    fprintf(stderr,"\nJoin failure at line 171\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_s_ss);
  var_t1x_s_ss = (tmp);
  tmp = var_t2x_s_ss;
  var_t2x_s_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_s_ss;
  var_t1x_s_ss = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_167_67;
  goto Label_cons;
  Return_167_67:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_165_7;

Label__split_171_15:
  if (count(1,0), var_t1x_s_ss != 0){
    fprintf(stderr,"\nJoin failure at line 171\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_s_ss);
  var_t1x_s_ss = (tmp);
  tmp = var_t2x_s_ss;
  var_t2x_s_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_s_ss;
  var_t1x_s_ss = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_167_68;
  goto Label_cons;
  Return_167_68:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_165_7;

Label__s_ssconsAll5:
  if (count(1,0), !((var_t2x_s_ss & 3))){
    fprintf(stderr,"\nJoin failure at line 172\n");
  writeVars(); goto programEnd;
}
  goto Label__split_171_15;

Label__split_172_14:
  if (count(1,0), (var_t2x_s_ss & 3)){
    fprintf(stderr,"\nJoin failure at line 172\n");
  writeVars(); goto programEnd;
}
  goto Label__split_171_15;

Label__consAll6:
  if (count(1,0), !(var_t5s_ss != 0)){
    fprintf(stderr,"\nJoin failure at line 178\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_t5s_ss);
  var_t5s_ss = (tmp);
  tmp = var_t6s_ss;
  var_t6s_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_t5s_ss;
  var_t5s_ss = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_174_69;
  goto Label_cons;
  Return_174_69:
  tmp = var_t2x_s_ss;
  var_t2x_s_ss = (var_consP);
  var_consP = (tmp);
  goto Label__split_172_14;

Label__split_178_13:
  if (count(1,0), var_t5s_ss != 0){
    fprintf(stderr,"\nJoin failure at line 178\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_t5s_ss);
  var_t5s_ss = (tmp);
  tmp = var_t6s_ss;
  var_t6s_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_t5s_ss;
  var_t5s_ss = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_174_70;
  goto Label_cons;
  Return_174_70:
  tmp = var_t2x_s_ss;
  var_t2x_s_ss = (var_consP);
  var_consP = (tmp);
  goto Label__split_172_14;

Label__consAll7:
  if (count(1,0), !(var_t6s_ss == 0)){
    fprintf(stderr,"\nJoin failure at line 180\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss;
  var_ss = (var_t6s_ss);
  var_t6s_ss = (tmp);
  goto Label__split_178_13;

Label__join_181_10:
  if (count(1,0), var_t6s_ss == 0){
    fprintf(stderr,"\nJoin failure at line 180\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss;
  var_ss = (var_t6s_ss);
  var_t6s_ss = (tmp);
  goto Label__split_178_13;

Label__join_187_10:
  tmp = var_t2x_s_ss;
  var_t2x_s_ss = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_185_71;
  goto Label__cons;
  Return_185_71:
  tmp = var_t6s_ss;
  var_t6s_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_t5s_ss;
  var_t5s_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_s;
  var_s = (var_t5s_ss);
  var_t5s_ss = (tmp);
  if (count(1,0), var_t5s_ss != 0) goto Label__consAll6; else goto Label__join_181_10;

Label__join_188_14:
  if (count(1,0), var_t2x_s_ss == 0) goto Label__consAll7; else goto Label__join_187_10;

Label__consAll3:
  if (count(1,0), !(var_t2x_s_ss == 0)){
    fprintf(stderr,"\nJoin failure at line 189\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t2x_s_ss & 3)) goto Label__s_ssconsAll5; else goto Label__join_188_14;

Label__join_190_10:
  if (count(1,0), var_t2x_s_ss == 0){
    fprintf(stderr,"\nJoin failure at line 189\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t2x_s_ss & 3)) goto Label__s_ssconsAll5; else goto Label__join_188_14;

Label__join_196_10:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_194_72;
  goto Label__cons;
  Return_194_72:
  tmp = var_t2x_s_ss;
  var_t2x_s_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_s_ss;
  var_t1x_s_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_t1x_s_ss);
  var_t1x_s_ss = (tmp);
  if (count(1,0), var_t1x_s_ss != 0) goto Label__consAll2; else goto Label__join_190_10;

Label__join_197_16:
  if (count(1,0), var_A == 0) goto Label__consAll3; else goto Label__join_196_10;

Label__consAll_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_s_ssconsAll1; else goto Label__join_197_16;

Label__split_198_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_s_ssconsAll1; else goto Label__join_197_16;

Label__inv_x_ssconsAll35:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 202\n");
  writeVars(); goto programEnd;
}
  goto Label__split_198_8;

Label__split_202_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 202\n");
  writeVars(); goto programEnd;
}
  goto Label__split_198_8;

Label__inv_x_ssconsAll37:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 203\n");
  writeVars(); goto programEnd;
}
  goto Label__split_202_7;

Label__split_203_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 203\n");
  writeVars(); goto programEnd;
}
  goto Label__split_202_7;

Label__inv_x_ssconsAll36:
  if (count(1,0), !(var_inv_t_consAll35x_ss != 0)){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll35x_ss);
  var_inv_t_consAll35x_ss = (tmp);
  tmp = var_inv_t_consAll36x_ss;
  var_inv_t_consAll36x_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll35x_ss;
  var_inv_t_consAll35x_ss = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_205_73;
  goto Label_cons;
  Return_205_73:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_203_8;

Label__join_210_19:
  if (count(1,0), var_inv_t_consAll35x_ss != 0){
    fprintf(stderr,"\nJoin failure at line 209\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll35x_ss);
  var_inv_t_consAll35x_ss = (tmp);
  tmp = var_inv_t_consAll36x_ss;
  var_inv_t_consAll36x_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll35x_ss;
  var_inv_t_consAll35x_ss = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_205_74;
  goto Label_cons;
  Return_205_74:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_203_8;

Label__join_212_19:
  tmp = var_ss;
  var_ss = (var_inv_t_consAll36x_ss);
  var_inv_t_consAll36x_ss = (tmp);
  if (count(1,0), var_inv_t_consAll36x_ss == 0) goto Label__inv_x_ssconsAll37; else goto Label__join_210_19;

Label__join_218_19:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_216_75;
  goto Label__cons;
  Return_216_75:
  tmp = var_inv_t_consAll36x_ss;
  var_inv_t_consAll36x_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll35x_ss;
  var_inv_t_consAll35x_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_consAll35x_ss);
  var_inv_t_consAll35x_ss = (tmp);
  if (count(1,0), var_inv_t_consAll35x_ss != 0) goto Label__inv_x_ssconsAll36; else goto Label__join_212_19;

Label__join_230_16:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~229\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  tmp = var_s;
  var_s = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  tmp = var_x;
  var_x = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_223_76;
  goto Label__helper;
  Return_223_76:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_s;
  var_s = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_x;
  var_x = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  if (count(1,0), (var_A & 3)) goto Label__inv_x_ssconsAll35; else goto Label__join_218_19;

Label__inv_x_s_s_ss1consAll14:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 234\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__consAll_exit_2; else goto Label__join_230_16;

Label__split_234_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 234\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__consAll_exit_2; else goto Label__join_230_16;

Label__inv_x_s_s_ss1consAll16:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 235\n");
  writeVars(); goto programEnd;
}
  goto Label__split_234_7;

Label__split_235_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 235\n");
  writeVars(); goto programEnd;
}
  goto Label__split_234_7;

Label__x_sconsAll32:
  if (count(1,0), !((var_inv_t_consAll14x_s_s_ss1 & 3))){
    fprintf(stderr,"\nJoin failure at line 240\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_consAll15x_s_s_ss1;
  var_inv_t_consAll15x_s_s_ss1 = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_237_77;
  goto Label_cons;
  Return_237_77:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_235_8;

Label__split_240_30:
  if (count(1,0), (var_inv_t_consAll14x_s_s_ss1 & 3)){
    fprintf(stderr,"\nJoin failure at line 240\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_consAll15x_s_s_ss1;
  var_inv_t_consAll15x_s_s_ss1 = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_237_78;
  goto Label_cons;
  Return_237_78:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_235_8;

Label__consAll33:
  if (count(1,0), !(var_t32x_s != 0)){
    fprintf(stderr,"\nJoin failure at line 246\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t32x_s);
  var_t32x_s = (tmp);
  tmp = var_t33x_s;
  var_t33x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_t32x_s;
  var_t32x_s = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_242_79;
  goto Label_cons;
  Return_242_79:
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label__split_240_30;

Label__split_246_13:
  if (count(1,0), var_t32x_s != 0){
    fprintf(stderr,"\nJoin failure at line 246\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t32x_s);
  var_t32x_s = (tmp);
  tmp = var_t33x_s;
  var_t33x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_t32x_s;
  var_t32x_s = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_242_80;
  goto Label_cons;
  Return_242_80:
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label__split_240_30;

Label__consAll34:
  if (count(1,0), !(var_t33x_s == 0)){
    fprintf(stderr,"\nJoin failure at line 248\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_t33x_s);
  var_t33x_s = (tmp);
  goto Label__split_246_13;

Label__join_249_11:
  if (count(1,0), var_t33x_s == 0){
    fprintf(stderr,"\nJoin failure at line 248\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_t33x_s);
  var_t33x_s = (tmp);
  goto Label__split_246_13;

Label__join_255_11:
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_253_81;
  goto Label__cons;
  Return_253_81:
  tmp = var_t33x_s;
  var_t33x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_t32x_s;
  var_t32x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_t32x_s);
  var_t32x_s = (tmp);
  if (count(1,0), var_t32x_s != 0) goto Label__consAll33; else goto Label__join_249_11;

Label__join_256_14:
  if (count(1,0), var_inv_t_consAll14x_s_s_ss1 == 0) goto Label__consAll34; else goto Label__join_255_11;

Label__inv_x_s_s_ss1consAll15:
  if (count(1,0), !(var_inv_t_consAll14x_s_s_ss1 != 0)){
    fprintf(stderr,"\nJoin failure at line 257\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_consAll14x_s_s_ss1 & 3)) goto Label__x_sconsAll32; else goto Label__join_256_14;

Label__join_258_24:
  if (count(1,0), var_inv_t_consAll14x_s_s_ss1 != 0){
    fprintf(stderr,"\nJoin failure at line 257\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_consAll14x_s_s_ss1 & 3)) goto Label__x_sconsAll32; else goto Label__join_256_14;

Label__inv_s_ss1consAll24:
  if (count(1,0), !((var_inv_t_consAll15x_s_s_ss1 & 3))){
    fprintf(stderr,"\nJoin failure at line 259\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll15x_s_s_ss1 == 0) goto Label__inv_x_s_s_ss1consAll16; else goto Label__join_258_24;

Label__split_259_30:
  if (count(1,0), (var_inv_t_consAll15x_s_s_ss1 & 3)){
    fprintf(stderr,"\nJoin failure at line 259\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll15x_s_s_ss1 == 0) goto Label__inv_x_s_s_ss1consAll16; else goto Label__join_258_24;

Label__inv_s_ss1consAll26:
  if (count(1,0), !(var_inv_t_consAll15x_s_s_ss1 == 0)){
    fprintf(stderr,"\nJoin failure at line 260\n");
  writeVars(); goto programEnd;
}
  goto Label__split_259_30;

Label__split_260_31:
  if (count(1,0), var_inv_t_consAll15x_s_s_ss1 == 0){
    fprintf(stderr,"\nJoin failure at line 260\n");
  writeVars(); goto programEnd;
}
  goto Label__split_259_30;

Label__inv_s_ss1consAll25:
  if (count(1,0), !(var_inv_t_consAll24s_ss1 != 0)){
    fprintf(stderr,"\nJoin failure at line 266\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_inv_t_consAll24s_ss1);
  var_inv_t_consAll24s_ss1 = (tmp);
  tmp = var_inv_t_consAll25s_ss1;
  var_inv_t_consAll25s_ss1 = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll24s_ss1;
  var_inv_t_consAll24s_ss1 = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_262_82;
  goto Label_cons;
  Return_262_82:
  tmp = var_inv_t_consAll15x_s_s_ss1;
  var_inv_t_consAll15x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label__split_260_31;

Label__join_267_20:
  if (count(1,0), var_inv_t_consAll24s_ss1 != 0){
    fprintf(stderr,"\nJoin failure at line 266\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_inv_t_consAll24s_ss1);
  var_inv_t_consAll24s_ss1 = (tmp);
  tmp = var_inv_t_consAll25s_ss1;
  var_inv_t_consAll25s_ss1 = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll24s_ss1;
  var_inv_t_consAll24s_ss1 = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_262_83;
  goto Label_cons;
  Return_262_83:
  tmp = var_inv_t_consAll15x_s_s_ss1;
  var_inv_t_consAll15x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label__split_260_31;

Label__join_269_20:
  tmp = var_ss1;
  var_ss1 = (var_inv_t_consAll25s_ss1);
  var_inv_t_consAll25s_ss1 = (tmp);
  if (count(1,0), var_inv_t_consAll25s_ss1 == 0) goto Label__inv_s_ss1consAll26; else goto Label__join_267_20;

Label__consAll27:
  if (count(1,0), !(var_inv_t_consAll24s_ss1 != 0)){
    fprintf(stderr,"\nJoin failure at line 270\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll24s_ss1 != 0) goto Label__inv_s_ss1consAll25; else goto Label__join_269_20;

Label__split_270_27:
  if (count(1,0), var_inv_t_consAll24s_ss1 != 0){
    fprintf(stderr,"\nJoin failure at line 270\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll24s_ss1 != 0) goto Label__inv_s_ss1consAll25; else goto Label__join_269_20;

Label__join_275_11:
  tmp = var_inv_t_consAll24s_ss1;
  var_inv_t_consAll24s_ss1 = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_s;
  var_s = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_272_84;
  goto Label__copy;
  Return_272_84:
  tmp = var_s;
  var_s = (var_copyP);
  var_copyP = (tmp);
  goto Label__split_270_27;

Label__join_280_20:
  tmp = var_inv_t_consAll15x_s_s_ss1;
  var_inv_t_consAll15x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_278_85;
  goto Label__cons;
  Return_278_85:
  tmp = var_inv_t_consAll25s_ss1;
  var_inv_t_consAll25s_ss1 = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll24s_ss1;
  var_inv_t_consAll24s_ss1 = (var_consA);
  var_consA = (tmp);
  if (count(1,0), var_inv_t_consAll24s_ss1 != var_s) goto Label__consAll27; else goto Label__join_275_11;

Label__join_281_24:
  if (count(1,0), (var_inv_t_consAll15x_s_s_ss1 & 3)) goto Label__inv_s_ss1consAll24; else goto Label__join_280_20;

Label__inv_x_sconsAll17:
  if (count(1,0), !((var_inv_t_consAll14x_s_s_ss1 & 3))){
    fprintf(stderr,"\nJoin failure at line 282\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll14x_s_s_ss1 != 0) goto Label__inv_x_s_s_ss1consAll15; else goto Label__join_281_24;

Label__split_282_30:
  if (count(1,0), (var_inv_t_consAll14x_s_s_ss1 & 3)){
    fprintf(stderr,"\nJoin failure at line 282\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll14x_s_s_ss1 != 0) goto Label__inv_x_s_s_ss1consAll15; else goto Label__join_281_24;

Label__inv_x_sconsAll19:
  if (count(1,0), !(var_inv_t_consAll14x_s_s_ss1 == 0)){
    fprintf(stderr,"\nJoin failure at line 283\n");
  writeVars(); goto programEnd;
}
  goto Label__split_282_30;

Label__split_283_31:
  if (count(1,0), var_inv_t_consAll14x_s_s_ss1 == 0){
    fprintf(stderr,"\nJoin failure at line 283\n");
  writeVars(); goto programEnd;
}
  goto Label__split_282_30;

Label__inv_x_sconsAll18:
  if (count(1,0), !(var_inv_t_consAll17x_s != 0)){
    fprintf(stderr,"\nJoin failure at line 289\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll17x_s);
  var_inv_t_consAll17x_s = (tmp);
  tmp = var_inv_t_consAll18x_s;
  var_inv_t_consAll18x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll17x_s;
  var_inv_t_consAll17x_s = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_285_86;
  goto Label_cons;
  Return_285_86:
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label__split_283_31;

Label__join_290_18:
  if (count(1,0), var_inv_t_consAll17x_s != 0){
    fprintf(stderr,"\nJoin failure at line 289\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll17x_s);
  var_inv_t_consAll17x_s = (tmp);
  tmp = var_inv_t_consAll18x_s;
  var_inv_t_consAll18x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll17x_s;
  var_inv_t_consAll17x_s = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_285_87;
  goto Label_cons;
  Return_285_87:
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label__split_283_31;

Label__join_292_18:
  tmp = var_s;
  var_s = (var_inv_t_consAll18x_s);
  var_inv_t_consAll18x_s = (tmp);
  if (count(1,0), var_inv_t_consAll18x_s == 0) goto Label__inv_x_sconsAll19; else goto Label__join_290_18;

Label__join_298_18:
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_296_88;
  goto Label__cons;
  Return_296_88:
  tmp = var_inv_t_consAll18x_s;
  var_inv_t_consAll18x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll17x_s;
  var_inv_t_consAll17x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_consAll17x_s);
  var_inv_t_consAll17x_s = (tmp);
  if (count(1,0), var_inv_t_consAll17x_s != 0) goto Label__inv_x_sconsAll18; else goto Label__join_292_18;

Label__join_303_24:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_301_89;
  goto Label__cons;
  Return_301_89:
  tmp = var_inv_t_consAll15x_s_s_ss1;
  var_inv_t_consAll15x_s_s_ss1 = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll14x_s_s_ss1;
  var_inv_t_consAll14x_s_s_ss1 = (var_consA);
  var_consA = (tmp);
  if (count(1,0), (var_inv_t_consAll14x_s_s_ss1 & 3)) goto Label__inv_x_sconsAll17; else goto Label__join_298_18;

Label__consAll_exit_1:
  if (count(1,0), (var_A & 3)) goto Label__inv_x_s_s_ss1consAll14; else goto Label__join_303_24;

Label__consAll_exit_2:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~308\n");
  writeVars(); goto programEnd;
}
  goto Label__consAll_entry_2;

Label__helper_entry_1:
  goto *stack[--stackPointer];

Label__helper:
  goto Label__helper_exit_1;

Label__x_C2_helper1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 319\n");
  writeVars(); goto programEnd;
}
  goto Label__helper_entry_1;

Label__split_319_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 319\n");
  writeVars(); goto programEnd;
}
  goto Label__helper_entry_1;

Label__helper2:
  if (count(1,0), !(var_t1x_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 325\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_C2_);
  var_t1x_C2_ = (tmp);
  tmp = var_t2x_C2_;
  var_t2x_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_C2_;
  var_t1x_C2_ = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_321_90;
  goto Label_cons;
  Return_321_90:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_319_7;

Label__split_325_14:
  if (count(1,0), var_t1x_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 325\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_C2_);
  var_t1x_C2_ = (tmp);
  tmp = var_t2x_C2_;
  var_t2x_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_C2_;
  var_t1x_C2_ = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_321_91;
  goto Label_cons;
  Return_321_91:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_319_7;

Label__helper5:
  if (count(1,0), !(var_t2x_C2_ != 2)){
    fprintf(stderr,"\nJoin failure at line 326\n");
  writeVars(); goto programEnd;
}
  goto Label__split_325_14;

Label__split_326_14:
  if (count(1,0), var_t2x_C2_ != 2){
    fprintf(stderr,"\nJoin failure at line 326\n");
  writeVars(); goto programEnd;
}
  goto Label__split_325_14;

Label__join_328_9:
count(1, 0);
  var_t2x_C2_ = (var_t2x_C2_ + (2 + 0));
  goto Label__split_326_14;

Label__helper3:
  if (count(1,0), !(var_t2x_C2_ == 0)){
    fprintf(stderr,"\nJoin failure at line 329\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t2x_C2_ != 0) goto Label__helper5; else goto Label__join_328_9;

Label__join_330_9:
  if (count(1,0), var_t2x_C2_ == 0){
    fprintf(stderr,"\nJoin failure at line 329\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t2x_C2_ != 0) goto Label__helper5; else goto Label__join_328_9;

Label__join_336_9:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_334_92;
  goto Label__cons;
  Return_334_92:
  tmp = var_t2x_C2_;
  var_t2x_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_C2_;
  var_t1x_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_t1x_C2_);
  var_t1x_C2_ = (tmp);
  if (count(1,0), var_t1x_C2_ != 0) goto Label__helper2; else goto Label__join_330_9;

Label__join_337_14:
  if (count(1,0), var_A == 0) goto Label__helper3; else goto Label__join_336_9;

Label__helper_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 338\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_C2_helper1; else goto Label__join_337_14;

Label__join_343_15:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 338\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_C2_helper1; else goto Label__join_337_14;

Label__inv_5helper8:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 347\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__helper_exit_2; else goto Label__join_343_15;

Label__split_347_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 347\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__helper_exit_2; else goto Label__join_343_15;

Label__join_349_14:
count(1, 0);
  var_A = (var_A - (2 + 0));
  goto Label__split_347_8;

Label__helper_exit_1:
  if (count(1,0), var_A != 2) goto Label__inv_5helper8; else goto Label__join_349_14;

Label__x_ss_neq_C2_helper9:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 356\n");
  writeVars(); goto programEnd;
}
  goto Label__helper_entry_2;

Label__split_356_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 356\n");
  writeVars(); goto programEnd;
}
  goto Label__helper_entry_2;

Label__helper10:
  if (count(1,0), !(var_t9x_ss_neq_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 362\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t9x_ss_neq_C2_);
  var_t9x_ss_neq_C2_ = (tmp);
  tmp = var_t10x_ss_neq_C2_;
  var_t10x_ss_neq_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_t9x_ss_neq_C2_;
  var_t9x_ss_neq_C2_ = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_358_93;
  goto Label_cons;
  Return_358_93:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_356_7;

Label__split_362_21:
  if (count(1,0), var_t9x_ss_neq_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 362\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t9x_ss_neq_C2_);
  var_t9x_ss_neq_C2_ = (tmp);
  tmp = var_t10x_ss_neq_C2_;
  var_t10x_ss_neq_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_t9x_ss_neq_C2_;
  var_t9x_ss_neq_C2_ = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_358_94;
  goto Label_cons;
  Return_358_94:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_356_7;

Label__helper13:
  if (count(1,0), !(var_A != 2)){
    fprintf(stderr,"\nJoin failure at line 364\n");
  writeVars(); goto programEnd;
}
  if (!(var_ss == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~363\n");
  writeVars(); goto programEnd;
}
  goto Label__split_362_21;

Label__split_364_8:
  if (count(1,0), var_A != 2){
    fprintf(stderr,"\nJoin failure at line 364\n");
  writeVars(); goto programEnd;
}
  if (!(var_ss == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~363\n");
  writeVars(); goto programEnd;
}
  goto Label__split_362_21;

Label__join_366_10:
count(1, 0);
  var_A = (var_A + (2 + 0));
  goto Label__split_364_8;

Label__inv_5helper14:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 368\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_ss = (var_ss - (var_t10x_ss_neq_C2_ + 0));
  if (count(1,0), var_A != 0) goto Label__helper13; else goto Label__join_366_10;

Label__split_368_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 368\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_ss = (var_ss - (var_t10x_ss_neq_C2_ + 0));
  if (count(1,0), var_A != 0) goto Label__helper13; else goto Label__join_366_10;

Label__join_370_15:
count(1, 0);
  var_A = (var_A - (2 + 0));
  goto Label__split_368_8;

Label__helper11:
  if (count(1,0), !(var_t10x_ss_neq_C2_ == 0)){
    fprintf(stderr,"\nJoin failure at line 372\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_t10x_ss_neq_C2_ = (var_t10x_ss_neq_C2_ + (var_ss + 0));
  if (count(1,0), var_A != 2) goto Label__inv_5helper14; else goto Label__join_370_15;

Label__join_373_10:
  if (count(1,0), var_t10x_ss_neq_C2_ == 0){
    fprintf(stderr,"\nJoin failure at line 372\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_t10x_ss_neq_C2_ = (var_t10x_ss_neq_C2_ + (var_ss + 0));
  if (count(1,0), var_A != 2) goto Label__inv_5helper14; else goto Label__join_370_15;

Label__join_379_10:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_377_95;
  goto Label__cons;
  Return_377_95:
  tmp = var_t10x_ss_neq_C2_;
  var_t10x_ss_neq_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_t9x_ss_neq_C2_;
  var_t9x_ss_neq_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_t9x_ss_neq_C2_);
  var_t9x_ss_neq_C2_ = (tmp);
  if (count(1,0), var_t9x_ss_neq_C2_ != 0) goto Label__helper10; else goto Label__join_373_10;

Label__join_380_21:
  if (count(1,0), var_A == 0) goto Label__helper11; else goto Label__join_379_10;

Label__helper_entry_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 381\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_ss_neq_C2_helper9; else goto Label__join_380_21;

Label__split_381_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 381\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_ss_neq_C2_helper9; else goto Label__join_380_21;

Label__inv_x_sshelper20:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 385\n");
  writeVars(); goto programEnd;
}
  goto Label__split_381_8;

Label__split_385_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 385\n");
  writeVars(); goto programEnd;
}
  goto Label__split_381_8;

Label__inv_x_sshelper22:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 386\n");
  writeVars(); goto programEnd;
}
  goto Label__split_385_7;

Label__split_386_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 386\n");
  writeVars(); goto programEnd;
}
  goto Label__split_385_7;

Label__inv_x_sshelper21:
  if (count(1,0), !(var_inv_t_helper20x_ss != 0)){
    fprintf(stderr,"\nJoin failure at line 392\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_helper20x_ss);
  var_inv_t_helper20x_ss = (tmp);
  tmp = var_inv_t_helper21x_ss;
  var_inv_t_helper21x_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_helper20x_ss;
  var_inv_t_helper20x_ss = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_388_96;
  goto Label_cons;
  Return_388_96:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_386_8;

Label__join_393_18:
  if (count(1,0), var_inv_t_helper20x_ss != 0){
    fprintf(stderr,"\nJoin failure at line 392\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_helper20x_ss);
  var_inv_t_helper20x_ss = (tmp);
  tmp = var_inv_t_helper21x_ss;
  var_inv_t_helper21x_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_helper20x_ss;
  var_inv_t_helper20x_ss = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_388_97;
  goto Label_cons;
  Return_388_97:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_386_8;

Label__join_395_18:
  tmp = var_ss;
  var_ss = (var_inv_t_helper21x_ss);
  var_inv_t_helper21x_ss = (tmp);
  if (count(1,0), var_inv_t_helper21x_ss == 0) goto Label__inv_x_sshelper22; else goto Label__join_393_18;

Label__join_401_18:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_399_98;
  goto Label__cons;
  Return_399_98:
  tmp = var_inv_t_helper21x_ss;
  var_inv_t_helper21x_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_helper20x_ss;
  var_inv_t_helper20x_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_helper20x_ss);
  var_inv_t_helper20x_ss = (tmp);
  if (count(1,0), var_inv_t_helper20x_ss != 0) goto Label__inv_x_sshelper21; else goto Label__join_395_18;

Label__join_407_15:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~406\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_403_99;
  goto Label__consAll;
  Return_403_99:
  if (count(1,0), (var_A & 3)) goto Label__inv_x_sshelper20; else goto Label__join_401_18;

Label__helper_exit_2:
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__helper_exit_3; else goto Label__join_407_15;

Label__helper_exit_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~416\n");
  writeVars(); goto programEnd;
}
  goto Label__helper_entry_3;

Label__copySymbol:
  if (count(1,0), !(var_copyP < var_H)){
    fprintf(stderr,"\nJoin failure at line 420\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~419\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_420_11:
  if (count(1,0), var_copyP < var_H){
    fprintf(stderr,"\nJoin failure at line 420\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~419\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_425_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_420_11;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~427\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), var_copyP < var_H) goto Label__copySymbol; else goto Label__join_425_12;

Label__join_439_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_436_100;
  goto Label__hash;
  Return_436_100:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~435\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~434\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~433\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~432\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~431\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 440\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_439_16;

Label__split_440_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 440\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_439_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 442\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_440_15;

Label__split_442_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 442\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_440_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 444\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_442_19;

Label__split_444_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 444\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_442_19;

Label__join_446_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_444_19;

Label__join_448_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_446_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 450\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_448_10;

Label__join_451_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 450\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_448_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 453\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_451_17;

Label__split_453_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 453\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_451_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 454\n");
  writeVars(); goto programEnd;
}
  goto Label__split_453_15;

Label__split_454_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 454\n");
  writeVars(); goto programEnd;
}
  goto Label__split_453_15;

Label__join_463_9:
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
   stack[stackPointer++] = &&Return_456_101;
  goto Label_hash;
  Return_456_101:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_454_15;

Label__join_466_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~465\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~464\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_463_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_466_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 472\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_471_102;
  goto Label_hash;
  Return_471_102:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_472_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 472\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_471_103;
  goto Label_hash;
  Return_471_103:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_474_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_472_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 477\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_474_13;

Label__split_477_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 477\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_474_13;

Label__join_479_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_477_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_479_13;

Label__join_491_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~489\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 492\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_491_6;

Label__split_492_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 492\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_491_6;

Label__join_494_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_492_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 496\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_494_6;

Label__split_496_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 496\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_494_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_496_10;

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
    fprintf(stderr,"\nAssertion failure at line ~501\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}