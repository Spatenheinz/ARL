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
  uint var_inv_t_consAll57x_s = 0;
  uint var_inv_t_consAll56x_s = 0;
  uint var_t48x_s = 0;
  uint var_t47x_s = 0;
  uint var_inv_t_consAll45x_s_ss1 = 0;
  uint var_inv_t_consAll44x_s_ss1 = 0;
  uint var_inv_t_consAll41s_x_s_ss1 = 0;
  uint var_inv_t_consAll40s_x_s_ss1 = 0;
  uint var_inv_t_consAll62x_ss = 0;
  uint var_inv_t_consAll61x_ss = 0;
  uint var_ss = 0;
  uint var_t32s_ss = 0;
  uint var_t31s_ss = 0;
  uint var_t28x_s_ss = 0;
  uint var_t27x_s_ss = 0;
  uint var_copyQ = 0;
  uint var_copyP = 0;
  uint var_inv_t_consAll19x_s = 0;
  uint var_inv_t_consAll18x_s = 0;
  uint var_inv_t_consAll15s_x_s = 0;
  uint var_inv_t_consAll14s_x_s = 0;
  uint var_s = 0;
  uint var_t6s_C2_ = 0;
  uint var_t5s_C2_ = 0;
  uint var_t2x_s_C2_ = 0;
  uint var_t1x_s_C2_ = 0;
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
    printf("var_fieldsD = \%u\n",var_fieldsD);
    printf("var_fieldsA = \%u\n",var_fieldsA);
    printf("var_fieldsP = \%u\n",var_fieldsP);
    printf("var_ttt = \%u\n",var_ttt);
    printf("var_inv_t_consAll57x_s = \%u\n",var_inv_t_consAll57x_s);
    printf("var_inv_t_consAll56x_s = \%u\n",var_inv_t_consAll56x_s);
    printf("var_t48x_s = \%u\n",var_t48x_s);
    printf("var_t47x_s = \%u\n",var_t47x_s);
    printf("var_inv_t_consAll45x_s_ss1 = \%u\n",var_inv_t_consAll45x_s_ss1);
    printf("var_inv_t_consAll44x_s_ss1 = \%u\n",var_inv_t_consAll44x_s_ss1);
    printf("var_inv_t_consAll41s_x_s_ss1 = \%u\n",var_inv_t_consAll41s_x_s_ss1);
    printf("var_inv_t_consAll40s_x_s_ss1 = \%u\n",var_inv_t_consAll40s_x_s_ss1);
    printf("var_inv_t_consAll62x_ss = \%u\n",var_inv_t_consAll62x_ss);
    printf("var_inv_t_consAll61x_ss = \%u\n",var_inv_t_consAll61x_ss);
    printf("var_ss = \%u\n",var_ss);
    printf("var_t32s_ss = \%u\n",var_t32s_ss);
    printf("var_t31s_ss = \%u\n",var_t31s_ss);
    printf("var_t28x_s_ss = \%u\n",var_t28x_s_ss);
    printf("var_t27x_s_ss = \%u\n",var_t27x_s_ss);
    printf("var_copyQ = \%u\n",var_copyQ);
    printf("var_copyP = \%u\n",var_copyP);
    printf("var_inv_t_consAll19x_s = \%u\n",var_inv_t_consAll19x_s);
    printf("var_inv_t_consAll18x_s = \%u\n",var_inv_t_consAll18x_s);
    printf("var_inv_t_consAll15s_x_s = \%u\n",var_inv_t_consAll15s_x_s);
    printf("var_inv_t_consAll14s_x_s = \%u\n",var_inv_t_consAll14s_x_s);
    printf("var_s = \%u\n",var_s);
    printf("var_t6s_C2_ = \%u\n",var_t6s_C2_);
    printf("var_t5s_C2_ = \%u\n",var_t5s_C2_);
    printf("var_t2x_s_C2_ = \%u\n",var_t2x_s_C2_);
    printf("var_t1x_s_C2_ = \%u\n",var_t1x_s_C2_);
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
   stack[stackPointer++] = &&Return_26_1;
  goto Label_initialise;
  Return_26_1:
  count(2,0);
   stack[stackPointer++] = &&Return_27_2;
  goto Label_build;
  Return_27_2:
  count(2,0);
   stack[stackPointer++] = &&Return_29_3;
  goto Label_subsequences;
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

Label_subsequences:
  goto Label_subsequences_entry_1;

Label_subsequences_exit_1:
  goto *stack[--stackPointer];

Label_subsequences_entry_1:
  if (count(1,0), var_A != 2) goto Label_subsequences1; else goto Label_split_97_8;

Label_split_97_8:
count(1, 0);
  var_A = (var_A - (2 + 0));
  goto Label_join_99_15;

Label_subsequences1:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 99\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_subsequences_entry_2; else goto Label_join_103_21;

Label_join_99_15:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 99\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_subsequences_entry_2; else goto Label_join_103_21;

Label_subsequences_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_subsequences2; else goto Label_split_105_8;

Label_join_103_21:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 103\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_subsequences2; else goto Label_split_105_8;

Label_split_105_8:
count(1, 0);
  var_A = (var_A + (var_nilnil + 0));
  goto Label_join_107_15;

Label_subsequences2:
  if (count(1,0), !(var_A != var_nilnil)){
    fprintf(stderr,"\nJoin failure at line 107\n");
  writeVars(); goto programEnd;
}
  goto Label_subsequences_exit_1;

Label_join_107_15:
  if (count(1,0), var_A != var_nilnil){
    fprintf(stderr,"\nJoin failure at line 107\n");
  writeVars(); goto programEnd;
}
  goto Label_subsequences_exit_1;

Label_subsequences_entry_2:
  if (count(1,0), (var_A & 3)) goto Label_x_xssubsequences3; else goto Label_split_114_7;

Label_split_114_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_116_15;
  goto Label__cons;
  Return_116_15:
  tmp = var_t3x_xs;
  var_t3x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_t4x_xs;
  var_t4x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_t3x_xs);
  var_t3x_xs = (tmp);
  if (count(1,0), var_t3x_xs != 0) goto Label_x_xssubsequences4; else goto Label_split_120_13;

Label_split_120_13:
  tmp = var_xs;
  var_xs = (var_t4x_xs);
  var_t4x_xs = (tmp);
  if (count(1,0), var_t4x_xs == 0) goto Label_x_xssubsequences5; else goto Label_join_123_19;

Label_x_xssubsequences4:
  if (count(1,0), !(var_t3x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 123\n");
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
   stack[stackPointer++] = &&Return_127_16;
  goto Label_cons;
  Return_127_16:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_129_19;

Label_join_123_19:
  if (count(1,0), var_t3x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 123\n");
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
   stack[stackPointer++] = &&Return_127_17;
  goto Label_cons;
  Return_127_17:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_129_19;

Label_x_xssubsequences5:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 129\n");
  writeVars(); goto programEnd;
}
  goto Label_join_130_19;

Label_join_129_19:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 129\n");
  writeVars(); goto programEnd;
}
  goto Label_join_130_19;

Label_x_xssubsequences3:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 130\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_subsequences_entry_3; else goto Label_split_131_8;

Label_join_130_19:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 130\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_subsequences_entry_3; else goto Label_split_131_8;

Label_split_131_8:
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  tmp = var_x;
  var_x = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
count(1, 0);
  var_stackP = (var_stackP + (4 + 0));
  count(2,0);
   stack[stackPointer++] = &&Return_136_18;
  goto Label_subsequences;
  Return_136_18:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_x;
  var_x = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_ss0;
  var_ss0 = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 140\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_x_ss0subsequences17; else goto Label_split_141_7;

Label_split_141_7:
  if (count(1,0), var_A == 0) goto Label_inv_x_ss0subsequences19; else goto Label_split_142_8;

Label_split_142_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_144_19;
  goto Label__cons;
  Return_144_19:
  tmp = var_inv_t_subsequences17x_ss0;
  var_inv_t_subsequences17x_ss0 = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_subsequences18x_ss0;
  var_inv_t_subsequences18x_ss0 = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_subsequences17x_ss0);
  var_inv_t_subsequences17x_ss0 = (tmp);
  if (count(1,0), var_inv_t_subsequences17x_ss0 != 0) goto Label_inv_x_ss0subsequences18; else goto Label_join_149_25;

Label_inv_x_ss0subsequences19:
  if (count(1,0), !(var_inv_t_subsequences18x_ss0 == 0)){
    fprintf(stderr,"\nJoin failure at line 149\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss0;
  var_ss0 = (var_inv_t_subsequences18x_ss0);
  var_inv_t_subsequences18x_ss0 = (tmp);
  goto Label_join_151_25;

Label_join_149_25:
  if (count(1,0), var_inv_t_subsequences18x_ss0 == 0){
    fprintf(stderr,"\nJoin failure at line 149\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss0;
  var_ss0 = (var_inv_t_subsequences18x_ss0);
  var_inv_t_subsequences18x_ss0 = (tmp);
  goto Label_join_151_25;

Label_inv_x_ss0subsequences18:
  if (count(1,0), !(var_inv_t_subsequences17x_ss0 != 0)){
    fprintf(stderr,"\nJoin failure at line 151\n");
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
   stack[stackPointer++] = &&Return_155_20;
  goto Label_cons;
  Return_155_20:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_157_25;

Label_join_151_25:
  if (count(1,0), var_inv_t_subsequences17x_ss0 != 0){
    fprintf(stderr,"\nJoin failure at line 151\n");
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
   stack[stackPointer++] = &&Return_155_21;
  goto Label_cons;
  Return_155_21:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_157_25;

Label_inv_x_ss0subsequences17:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 157\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_159_22;
  goto Label_consAll;
  Return_159_22:
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 162\n");
  writeVars(); goto programEnd;
}
  goto Label_join_163_21;

Label_join_157_25:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 157\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_159_23;
  goto Label_consAll;
  Return_159_23:
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 162\n");
  writeVars(); goto programEnd;
}
  goto Label_join_163_21;

Label_subsequences_exit_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 163\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  goto Label_subsequences_exit_2;

Label_join_163_21:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 163\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  goto Label_subsequences_exit_2;

Label_subsequences_entry_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 170\n");
  writeVars(); goto programEnd;
}
  goto Label_subsequences_exit_3;

Label_consAll:
  goto Label_consAll_entry_1;

Label_consAll_exit_1:
  goto *stack[--stackPointer];

Label_consAll_entry_1:
  if (count(1,0), (var_A & 3)) goto Label_x_s_C2_consAll1; else goto Label_split_181_7;

Label_split_181_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_183_24;
  goto Label__cons;
  Return_183_24:
  tmp = var_t1x_s_C2_;
  var_t1x_s_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_s_C2_;
  var_t2x_s_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_t1x_s_C2_);
  var_t1x_s_C2_ = (tmp);
  if (count(1,0), var_t1x_s_C2_ != 0) goto Label_x_s_C2_consAll2; else goto Label_split_187_16;

Label_split_187_16:
  if (count(1,0), (var_t2x_s_C2_ & 3)) goto Label_s_C2_consAll5; else goto Label_split_188_15;

Label_split_188_15:
  tmp = var_t2x_s_C2_;
  var_t2x_s_C2_ = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_190_25;
  goto Label__cons;
  Return_190_25:
  tmp = var_t5s_C2_;
  var_t5s_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_t6s_C2_;
  var_t6s_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_s;
  var_s = (var_t5s_C2_);
  var_t5s_C2_ = (tmp);
  if (count(1,0), var_t5s_C2_ != 0) goto Label_s_C2_consAll6; else goto Label_split_194_14;

Label_split_194_14:
  if (count(1,0), var_t6s_C2_ != 2) goto Label_consAll9; else goto Label_split_195_14;

Label_split_195_14:
count(1, 0);
  var_t6s_C2_ = (var_t6s_C2_ - (2 + 0));
  goto Label_join_197_10;

Label_consAll9:
  if (count(1,0), !(var_t6s_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t6s_C2_ == 0) goto Label_s_C2_consAll7; else goto Label_join_199_15;

Label_join_197_10:
  if (count(1,0), var_t6s_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 197\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t6s_C2_ == 0) goto Label_s_C2_consAll7; else goto Label_join_199_15;

Label_s_C2_consAll6:
  if (count(1,0), !(var_t5s_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 199\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_t5s_C2_);
  var_t5s_C2_ = (tmp);
  tmp = var_t5s_C2_;
  var_t5s_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_t6s_C2_;
  var_t6s_C2_ = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_203_26;
  goto Label_cons;
  Return_203_26:
  tmp = var_t2x_s_C2_;
  var_t2x_s_C2_ = (var_consP);
  var_consP = (tmp);
  goto Label_join_205_15;

Label_join_199_15:
  if (count(1,0), var_t5s_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 199\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_t5s_C2_);
  var_t5s_C2_ = (tmp);
  tmp = var_t5s_C2_;
  var_t5s_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_t6s_C2_;
  var_t6s_C2_ = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_203_27;
  goto Label_cons;
  Return_203_27:
  tmp = var_t2x_s_C2_;
  var_t2x_s_C2_ = (var_consP);
  var_consP = (tmp);
  goto Label_join_205_15;

Label_s_C2_consAll7:
  if (count(1,0), !(var_t2x_s_C2_ == 0)){
    fprintf(stderr,"\nJoin failure at line 205\n");
  writeVars(); goto programEnd;
}
  goto Label_join_206_15;

Label_join_205_15:
  if (count(1,0), var_t2x_s_C2_ == 0){
    fprintf(stderr,"\nJoin failure at line 205\n");
  writeVars(); goto programEnd;
}
  goto Label_join_206_15;

Label_s_C2_consAll5:
  if (count(1,0), !((var_t2x_s_C2_ & 3))){
    fprintf(stderr,"\nJoin failure at line 206\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t2x_s_C2_ == 0) goto Label_x_s_C2_consAll3; else goto Label_join_208_17;

Label_join_206_15:
  if (count(1,0), (var_t2x_s_C2_ & 3)){
    fprintf(stderr,"\nJoin failure at line 206\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t2x_s_C2_ == 0) goto Label_x_s_C2_consAll3; else goto Label_join_208_17;

Label_x_s_C2_consAll2:
  if (count(1,0), !(var_t1x_s_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_s_C2_);
  var_t1x_s_C2_ = (tmp);
  tmp = var_t1x_s_C2_;
  var_t1x_s_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_s_C2_;
  var_t2x_s_C2_ = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_212_28;
  goto Label_cons;
  Return_212_28:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_214_17;

Label_join_208_17:
  if (count(1,0), var_t1x_s_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 208\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_s_C2_);
  var_t1x_s_C2_ = (tmp);
  tmp = var_t1x_s_C2_;
  var_t1x_s_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_t2x_s_C2_;
  var_t2x_s_C2_ = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_212_29;
  goto Label_cons;
  Return_212_29:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_214_17;

Label_x_s_C2_consAll3:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 214\n");
  writeVars(); goto programEnd;
}
  goto Label_join_215_17;

Label_join_214_17:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 214\n");
  writeVars(); goto programEnd;
}
  goto Label_join_215_17;

Label_x_s_C2_consAll1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 215\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_consAll_entry_2; else goto Label_join_219_16;

Label_join_215_17:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 215\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_consAll_entry_2; else goto Label_join_219_16;

Label_consAll_exit_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_s_x_sconsAll14; else goto Label_split_221_7;

Label_join_219_16:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 219\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_s_x_sconsAll14; else goto Label_split_221_7;

Label_split_221_7:
  if (count(1,0), var_A == 0) goto Label_inv_s_x_sconsAll16; else goto Label_split_222_8;

Label_split_222_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_224_30;
  goto Label__cons;
  Return_224_30:
  tmp = var_inv_t_consAll14s_x_s;
  var_inv_t_consAll14s_x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll15s_x_s;
  var_inv_t_consAll15s_x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_s;
  var_s = (var_inv_t_consAll14s_x_s);
  var_inv_t_consAll14s_x_s = (tmp);
  if (count(1,0), var_inv_t_consAll14s_x_s != 0) goto Label_inv_s_x_sconsAll15; else goto Label_join_229_20;

Label_inv_s_x_sconsAll16:
  if (count(1,0), !(var_inv_t_consAll15s_x_s == 0)){
    fprintf(stderr,"\nJoin failure at line 229\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_consAll15s_x_s & 3)) goto Label_inv_x_sconsAll18; else goto Label_split_230_26;

Label_join_229_20:
  if (count(1,0), var_inv_t_consAll15s_x_s == 0){
    fprintf(stderr,"\nJoin failure at line 229\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_consAll15s_x_s & 3)) goto Label_inv_x_sconsAll18; else goto Label_split_230_26;

Label_split_230_26:
  if (count(1,0), var_inv_t_consAll15s_x_s == 0) goto Label_inv_x_sconsAll20; else goto Label_split_231_27;

Label_split_231_27:
  tmp = var_inv_t_consAll15s_x_s;
  var_inv_t_consAll15s_x_s = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_233_31;
  goto Label__cons;
  Return_233_31:
  tmp = var_inv_t_consAll18x_s;
  var_inv_t_consAll18x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll19x_s;
  var_inv_t_consAll19x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_consAll18x_s);
  var_inv_t_consAll18x_s = (tmp);
  if (count(1,0), var_inv_t_consAll18x_s != 0) goto Label_inv_x_sconsAll19; else goto Label_join_238_18;

Label_inv_x_sconsAll20:
  if (count(1,0), !(var_inv_t_consAll19x_s == 0)){
    fprintf(stderr,"\nJoin failure at line 238\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll19x_s != 0) goto Label_consAll22; else goto Label_split_239_25;

Label_join_238_18:
  if (count(1,0), var_inv_t_consAll19x_s == 0){
    fprintf(stderr,"\nJoin failure at line 238\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll19x_s != 0) goto Label_consAll22; else goto Label_split_239_25;

Label_split_239_25:
  tmp = var_s;
  var_s = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_241_32;
  goto Label_copy;
  Return_241_32:
  tmp = var_s;
  var_s = (var_copyP);
  var_copyP = (tmp);
  tmp = var_inv_t_consAll19x_s;
  var_inv_t_consAll19x_s = (var_copyQ);
  var_copyQ = (tmp);
  goto Label_join_244_11;

Label_consAll22:
  if (count(1,0), !(var_inv_t_consAll19x_s != var_s)){
    fprintf(stderr,"\nJoin failure at line 244\n");
  writeVars(); goto programEnd;
}
  goto Label_join_245_18;

Label_join_244_11:
  if (count(1,0), var_inv_t_consAll19x_s != var_s){
    fprintf(stderr,"\nJoin failure at line 244\n");
  writeVars(); goto programEnd;
}
  goto Label_join_245_18;

Label_inv_x_sconsAll19:
  if (count(1,0), !(var_inv_t_consAll18x_s != 0)){
    fprintf(stderr,"\nJoin failure at line 245\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll18x_s);
  var_inv_t_consAll18x_s = (tmp);
  tmp = var_inv_t_consAll18x_s;
  var_inv_t_consAll18x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll19x_s;
  var_inv_t_consAll19x_s = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_249_33;
  goto Label_cons;
  Return_249_33:
  tmp = var_inv_t_consAll15s_x_s;
  var_inv_t_consAll15s_x_s = (var_consP);
  var_consP = (tmp);
  goto Label_join_251_18;

Label_join_245_18:
  if (count(1,0), var_inv_t_consAll18x_s != 0){
    fprintf(stderr,"\nJoin failure at line 245\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll18x_s);
  var_inv_t_consAll18x_s = (tmp);
  tmp = var_inv_t_consAll18x_s;
  var_inv_t_consAll18x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll19x_s;
  var_inv_t_consAll19x_s = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_249_34;
  goto Label_cons;
  Return_249_34:
  tmp = var_inv_t_consAll15s_x_s;
  var_inv_t_consAll15s_x_s = (var_consP);
  var_consP = (tmp);
  goto Label_join_251_18;

Label_inv_x_sconsAll18:
  if (count(1,0), !((var_inv_t_consAll15s_x_s & 3))){
    fprintf(stderr,"\nJoin failure at line 251\n");
  writeVars(); goto programEnd;
}
  goto Label_join_252_20;

Label_join_251_18:
  if (count(1,0), (var_inv_t_consAll15s_x_s & 3)){
    fprintf(stderr,"\nJoin failure at line 251\n");
  writeVars(); goto programEnd;
}
  goto Label_join_252_20;

Label_inv_s_x_sconsAll15:
  if (count(1,0), !(var_inv_t_consAll14s_x_s != 0)){
    fprintf(stderr,"\nJoin failure at line 252\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_inv_t_consAll14s_x_s);
  var_inv_t_consAll14s_x_s = (tmp);
  tmp = var_inv_t_consAll14s_x_s;
  var_inv_t_consAll14s_x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll15s_x_s;
  var_inv_t_consAll15s_x_s = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_256_35;
  goto Label_cons;
  Return_256_35:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_258_20;

Label_join_252_20:
  if (count(1,0), var_inv_t_consAll14s_x_s != 0){
    fprintf(stderr,"\nJoin failure at line 252\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_inv_t_consAll14s_x_s);
  var_inv_t_consAll14s_x_s = (tmp);
  tmp = var_inv_t_consAll14s_x_s;
  var_inv_t_consAll14s_x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll15s_x_s;
  var_inv_t_consAll15s_x_s = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_256_36;
  goto Label_cons;
  Return_256_36:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_258_20;

Label_inv_s_x_sconsAll14:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 258\n");
  writeVars(); goto programEnd;
}
  goto Label_consAll_exit_1;

Label_join_258_20:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 258\n");
  writeVars(); goto programEnd;
}
  goto Label_consAll_exit_1;

Label_consAll_entry_2:
  if (count(1,0), (var_A & 3)) goto Label_x_s_ssconsAll27; else goto Label_split_265_7;

Label_split_265_7:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_267_37;
  goto Label__cons;
  Return_267_37:
  tmp = var_t27x_s_ss;
  var_t27x_s_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_t28x_s_ss;
  var_t28x_s_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_t27x_s_ss);
  var_t27x_s_ss = (tmp);
  if (count(1,0), var_t27x_s_ss != 0) goto Label_x_s_ssconsAll28; else goto Label_split_271_16;

Label_split_271_16:
  if (count(1,0), (var_t28x_s_ss & 3)) goto Label_s_ssconsAll31; else goto Label_split_272_15;

Label_split_272_15:
  tmp = var_t28x_s_ss;
  var_t28x_s_ss = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_274_38;
  goto Label__cons;
  Return_274_38:
  tmp = var_t31s_ss;
  var_t31s_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_t32s_ss;
  var_t32s_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_s;
  var_s = (var_t31s_ss);
  var_t31s_ss = (tmp);
  if (count(1,0), var_t31s_ss != 0) goto Label_s_ssconsAll32; else goto Label_split_278_14;

Label_split_278_14:
  tmp = var_ss;
  var_ss = (var_t32s_ss);
  var_t32s_ss = (tmp);
  if (count(1,0), var_t32s_ss == 0) goto Label_s_ssconsAll33; else goto Label_join_281_15;

Label_s_ssconsAll32:
  if (count(1,0), !(var_t31s_ss != 0)){
    fprintf(stderr,"\nJoin failure at line 281\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_t31s_ss);
  var_t31s_ss = (tmp);
  tmp = var_t31s_ss;
  var_t31s_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_t32s_ss;
  var_t32s_ss = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_285_39;
  goto Label_cons;
  Return_285_39:
  tmp = var_t28x_s_ss;
  var_t28x_s_ss = (var_consP);
  var_consP = (tmp);
  goto Label_join_287_15;

Label_join_281_15:
  if (count(1,0), var_t31s_ss != 0){
    fprintf(stderr,"\nJoin failure at line 281\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_t31s_ss);
  var_t31s_ss = (tmp);
  tmp = var_t31s_ss;
  var_t31s_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_t32s_ss;
  var_t32s_ss = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_285_40;
  goto Label_cons;
  Return_285_40:
  tmp = var_t28x_s_ss;
  var_t28x_s_ss = (var_consP);
  var_consP = (tmp);
  goto Label_join_287_15;

Label_s_ssconsAll33:
  if (count(1,0), !(var_t28x_s_ss == 0)){
    fprintf(stderr,"\nJoin failure at line 287\n");
  writeVars(); goto programEnd;
}
  goto Label_join_288_15;

Label_join_287_15:
  if (count(1,0), var_t28x_s_ss == 0){
    fprintf(stderr,"\nJoin failure at line 287\n");
  writeVars(); goto programEnd;
}
  goto Label_join_288_15;

Label_s_ssconsAll31:
  if (count(1,0), !((var_t28x_s_ss & 3))){
    fprintf(stderr,"\nJoin failure at line 288\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t28x_s_ss == 0) goto Label_x_s_ssconsAll29; else goto Label_join_290_17;

Label_join_288_15:
  if (count(1,0), (var_t28x_s_ss & 3)){
    fprintf(stderr,"\nJoin failure at line 288\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t28x_s_ss == 0) goto Label_x_s_ssconsAll29; else goto Label_join_290_17;

Label_x_s_ssconsAll28:
  if (count(1,0), !(var_t27x_s_ss != 0)){
    fprintf(stderr,"\nJoin failure at line 290\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t27x_s_ss);
  var_t27x_s_ss = (tmp);
  tmp = var_t27x_s_ss;
  var_t27x_s_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_t28x_s_ss;
  var_t28x_s_ss = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_294_41;
  goto Label_cons;
  Return_294_41:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_296_17;

Label_join_290_17:
  if (count(1,0), var_t27x_s_ss != 0){
    fprintf(stderr,"\nJoin failure at line 290\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t27x_s_ss);
  var_t27x_s_ss = (tmp);
  tmp = var_t27x_s_ss;
  var_t27x_s_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_t28x_s_ss;
  var_t28x_s_ss = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_294_42;
  goto Label_cons;
  Return_294_42:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_296_17;

Label_x_s_ssconsAll29:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 296\n");
  writeVars(); goto programEnd;
}
  goto Label_join_297_17;

Label_join_296_17:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 296\n");
  writeVars(); goto programEnd;
}
  goto Label_join_297_17;

Label_x_s_ssconsAll27:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 297\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_consAll_entry_3; else goto Label_split_298_8;

Label_join_297_17:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 297\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label_consAll_entry_3; else goto Label_split_298_8;

Label_split_298_8:
  if (count(1,0), (var_A & 3)) goto Label_inv_x_ssconsAll61; else goto Label_split_300_7;

Label_split_300_7:
  if (count(1,0), var_A == 0) goto Label_inv_x_ssconsAll63; else goto Label_split_301_8;

Label_split_301_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_303_43;
  goto Label__cons;
  Return_303_43:
  tmp = var_inv_t_consAll61x_ss;
  var_inv_t_consAll61x_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll62x_ss;
  var_inv_t_consAll62x_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_consAll61x_ss);
  var_inv_t_consAll61x_ss = (tmp);
  if (count(1,0), var_inv_t_consAll61x_ss != 0) goto Label_inv_x_ssconsAll62; else goto Label_join_308_19;

Label_inv_x_ssconsAll63:
  if (count(1,0), !(var_inv_t_consAll62x_ss == 0)){
    fprintf(stderr,"\nJoin failure at line 308\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss;
  var_ss = (var_inv_t_consAll62x_ss);
  var_inv_t_consAll62x_ss = (tmp);
  goto Label_join_310_19;

Label_join_308_19:
  if (count(1,0), var_inv_t_consAll62x_ss == 0){
    fprintf(stderr,"\nJoin failure at line 308\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss;
  var_ss = (var_inv_t_consAll62x_ss);
  var_inv_t_consAll62x_ss = (tmp);
  goto Label_join_310_19;

Label_inv_x_ssconsAll62:
  if (count(1,0), !(var_inv_t_consAll61x_ss != 0)){
    fprintf(stderr,"\nJoin failure at line 310\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll61x_ss);
  var_inv_t_consAll61x_ss = (tmp);
  tmp = var_inv_t_consAll61x_ss;
  var_inv_t_consAll61x_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll62x_ss;
  var_inv_t_consAll62x_ss = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_314_44;
  goto Label_cons;
  Return_314_44:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_316_19;

Label_join_310_19:
  if (count(1,0), var_inv_t_consAll61x_ss != 0){
    fprintf(stderr,"\nJoin failure at line 310\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll61x_ss);
  var_inv_t_consAll61x_ss = (tmp);
  tmp = var_inv_t_consAll61x_ss;
  var_inv_t_consAll61x_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll62x_ss;
  var_inv_t_consAll62x_ss = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_314_45;
  goto Label_cons;
  Return_314_45:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_316_19;

Label_inv_x_ssconsAll61:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 316\n");
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
   stack[stackPointer++] = &&Return_321_46;
  goto Label_consAll;
  Return_321_46:
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
    fprintf(stderr,"\nAssertion failure at line 327\n");
  writeVars(); goto programEnd;
}
  goto Label_join_328_16;

Label_join_316_19:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 316\n");
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
   stack[stackPointer++] = &&Return_321_47;
  goto Label_consAll;
  Return_321_47:
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
    fprintf(stderr,"\nAssertion failure at line 327\n");
  writeVars(); goto programEnd;
}
  goto Label_join_328_16;

Label_consAll_exit_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 328\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_s_x_s_ss1consAll40; else goto Label_split_330_7;

Label_join_328_16:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 328\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label_inv_s_x_s_ss1consAll40; else goto Label_split_330_7;

Label_split_330_7:
  if (count(1,0), var_A == 0) goto Label_inv_s_x_s_ss1consAll42; else goto Label_split_331_8;

Label_split_331_8:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_333_48;
  goto Label__cons;
  Return_333_48:
  tmp = var_inv_t_consAll40s_x_s_ss1;
  var_inv_t_consAll40s_x_s_ss1 = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll41s_x_s_ss1;
  var_inv_t_consAll41s_x_s_ss1 = (var_consD);
  var_consD = (tmp);
  tmp = var_s;
  var_s = (var_inv_t_consAll40s_x_s_ss1);
  var_inv_t_consAll40s_x_s_ss1 = (tmp);
  if (count(1,0), var_inv_t_consAll40s_x_s_ss1 != 0) goto Label_inv_s_x_s_ss1consAll41; else goto Label_join_338_24;

Label_inv_s_x_s_ss1consAll42:
  if (count(1,0), !(var_inv_t_consAll41s_x_s_ss1 == 0)){
    fprintf(stderr,"\nJoin failure at line 338\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_consAll41s_x_s_ss1 & 3)) goto Label_inv_x_s_ss1consAll44; else goto Label_split_339_30;

Label_join_338_24:
  if (count(1,0), var_inv_t_consAll41s_x_s_ss1 == 0){
    fprintf(stderr,"\nJoin failure at line 338\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_consAll41s_x_s_ss1 & 3)) goto Label_inv_x_s_ss1consAll44; else goto Label_split_339_30;

Label_split_339_30:
  if (count(1,0), var_inv_t_consAll41s_x_s_ss1 == 0) goto Label_inv_x_s_ss1consAll46; else goto Label_split_340_31;

Label_split_340_31:
  tmp = var_inv_t_consAll41s_x_s_ss1;
  var_inv_t_consAll41s_x_s_ss1 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_342_49;
  goto Label__cons;
  Return_342_49:
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll45x_s_ss1;
  var_inv_t_consAll45x_s_ss1 = (var_consD);
  var_consD = (tmp);
  if (count(1,0), (var_inv_t_consAll44x_s_ss1 & 3)) goto Label_x_sconsAll47; else goto Label_split_345_28;

Label_split_345_28:
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_347_50;
  goto Label__cons;
  Return_347_50:
  tmp = var_t47x_s;
  var_t47x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_t48x_s;
  var_t48x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_t47x_s);
  var_t47x_s = (tmp);
  if (count(1,0), var_t47x_s != 0) goto Label_x_sconsAll48; else goto Label_split_351_13;

Label_split_351_13:
  if (count(1,0), var_t48x_s != var_s) goto Label_consAll51; else goto Label_split_352_13;

Label_split_352_13:
  tmp = var_s;
  var_s = (var_copyP);
  var_copyP = (tmp);
  tmp = var_t48x_s;
  var_t48x_s = (var_copyQ);
  var_copyQ = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_355_51;
  goto Label__copy;
  Return_355_51:
  tmp = var_s;
  var_s = (var_copyP);
  var_copyP = (tmp);
  goto Label_join_357_11;

Label_consAll51:
  if (count(1,0), !(var_t48x_s != 0)){
    fprintf(stderr,"\nJoin failure at line 357\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t48x_s == 0) goto Label_x_sconsAll49; else goto Label_join_359_14;

Label_join_357_11:
  if (count(1,0), var_t48x_s != 0){
    fprintf(stderr,"\nJoin failure at line 357\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t48x_s == 0) goto Label_x_sconsAll49; else goto Label_join_359_14;

Label_x_sconsAll48:
  if (count(1,0), !(var_t47x_s != 0)){
    fprintf(stderr,"\nJoin failure at line 359\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t47x_s);
  var_t47x_s = (tmp);
  tmp = var_t47x_s;
  var_t47x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_t48x_s;
  var_t48x_s = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_363_52;
  goto Label_cons;
  Return_363_52:
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label_join_365_14;

Label_join_359_14:
  if (count(1,0), var_t47x_s != 0){
    fprintf(stderr,"\nJoin failure at line 359\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t47x_s);
  var_t47x_s = (tmp);
  tmp = var_t47x_s;
  var_t47x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_t48x_s;
  var_t48x_s = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_363_53;
  goto Label_cons;
  Return_363_53:
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label_join_365_14;

Label_x_sconsAll49:
  if (count(1,0), !(var_inv_t_consAll44x_s_ss1 == 0)){
    fprintf(stderr,"\nJoin failure at line 365\n");
  writeVars(); goto programEnd;
}
  goto Label_join_366_14;

Label_join_365_14:
  if (count(1,0), var_inv_t_consAll44x_s_ss1 == 0){
    fprintf(stderr,"\nJoin failure at line 365\n");
  writeVars(); goto programEnd;
}
  goto Label_join_366_14;

Label_x_sconsAll47:
  if (count(1,0), !((var_inv_t_consAll44x_s_ss1 & 3))){
    fprintf(stderr,"\nJoin failure at line 366\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll44x_s_ss1 != 0) goto Label_inv_x_s_ss1consAll45; else goto Label_join_368_22;

Label_join_366_14:
  if (count(1,0), (var_inv_t_consAll44x_s_ss1 & 3)){
    fprintf(stderr,"\nJoin failure at line 366\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll44x_s_ss1 != 0) goto Label_inv_x_s_ss1consAll45; else goto Label_join_368_22;

Label_inv_x_s_ss1consAll46:
  if (count(1,0), !(var_inv_t_consAll45x_s_ss1 == 0)){
    fprintf(stderr,"\nJoin failure at line 368\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss1;
  var_ss1 = (var_inv_t_consAll45x_s_ss1);
  var_inv_t_consAll45x_s_ss1 = (tmp);
  goto Label_join_370_22;

Label_join_368_22:
  if (count(1,0), var_inv_t_consAll45x_s_ss1 == 0){
    fprintf(stderr,"\nJoin failure at line 368\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss1;
  var_ss1 = (var_inv_t_consAll45x_s_ss1);
  var_inv_t_consAll45x_s_ss1 = (tmp);
  goto Label_join_370_22;

Label_inv_x_s_ss1consAll45:
  if (count(1,0), !(var_inv_t_consAll44x_s_ss1 != 0)){
    fprintf(stderr,"\nJoin failure at line 370\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_consAll44x_s_ss1 & 3)) goto Label_inv_x_sconsAll56; else goto Label_split_371_28;

Label_join_370_22:
  if (count(1,0), var_inv_t_consAll44x_s_ss1 != 0){
    fprintf(stderr,"\nJoin failure at line 370\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_consAll44x_s_ss1 & 3)) goto Label_inv_x_sconsAll56; else goto Label_split_371_28;

Label_split_371_28:
  if (count(1,0), var_inv_t_consAll44x_s_ss1 == 0) goto Label_inv_x_sconsAll58; else goto Label_split_372_29;

Label_split_372_29:
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_374_54;
  goto Label__cons;
  Return_374_54:
  tmp = var_inv_t_consAll56x_s;
  var_inv_t_consAll56x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll57x_s;
  var_inv_t_consAll57x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_consAll56x_s);
  var_inv_t_consAll56x_s = (tmp);
  if (count(1,0), var_inv_t_consAll56x_s != 0) goto Label_inv_x_sconsAll57; else goto Label_join_379_18;

Label_inv_x_sconsAll58:
  if (count(1,0), !(var_inv_t_consAll57x_s == 0)){
    fprintf(stderr,"\nJoin failure at line 379\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_inv_t_consAll57x_s);
  var_inv_t_consAll57x_s = (tmp);
  goto Label_join_381_18;

Label_join_379_18:
  if (count(1,0), var_inv_t_consAll57x_s == 0){
    fprintf(stderr,"\nJoin failure at line 379\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_inv_t_consAll57x_s);
  var_inv_t_consAll57x_s = (tmp);
  goto Label_join_381_18;

Label_inv_x_sconsAll57:
  if (count(1,0), !(var_inv_t_consAll56x_s != 0)){
    fprintf(stderr,"\nJoin failure at line 381\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll56x_s);
  var_inv_t_consAll56x_s = (tmp);
  tmp = var_inv_t_consAll56x_s;
  var_inv_t_consAll56x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll57x_s;
  var_inv_t_consAll57x_s = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_385_55;
  goto Label_cons;
  Return_385_55:
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label_join_387_18;

Label_join_381_18:
  if (count(1,0), var_inv_t_consAll56x_s != 0){
    fprintf(stderr,"\nJoin failure at line 381\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll56x_s);
  var_inv_t_consAll56x_s = (tmp);
  tmp = var_inv_t_consAll56x_s;
  var_inv_t_consAll56x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll57x_s;
  var_inv_t_consAll57x_s = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_385_56;
  goto Label_cons;
  Return_385_56:
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label_join_387_18;

Label_inv_x_sconsAll56:
  if (count(1,0), !((var_inv_t_consAll44x_s_ss1 & 3))){
    fprintf(stderr,"\nJoin failure at line 387\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll45x_s_ss1;
  var_inv_t_consAll45x_s_ss1 = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_390_57;
  goto Label_cons;
  Return_390_57:
  tmp = var_inv_t_consAll41s_x_s_ss1;
  var_inv_t_consAll41s_x_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label_join_392_22;

Label_join_387_18:
  if (count(1,0), (var_inv_t_consAll44x_s_ss1 & 3)){
    fprintf(stderr,"\nJoin failure at line 387\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll45x_s_ss1;
  var_inv_t_consAll45x_s_ss1 = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_390_58;
  goto Label_cons;
  Return_390_58:
  tmp = var_inv_t_consAll41s_x_s_ss1;
  var_inv_t_consAll41s_x_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label_join_392_22;

Label_inv_x_s_ss1consAll44:
  if (count(1,0), !((var_inv_t_consAll41s_x_s_ss1 & 3))){
    fprintf(stderr,"\nJoin failure at line 392\n");
  writeVars(); goto programEnd;
}
  goto Label_join_393_24;

Label_join_392_22:
  if (count(1,0), (var_inv_t_consAll41s_x_s_ss1 & 3)){
    fprintf(stderr,"\nJoin failure at line 392\n");
  writeVars(); goto programEnd;
}
  goto Label_join_393_24;

Label_inv_s_x_s_ss1consAll41:
  if (count(1,0), !(var_inv_t_consAll40s_x_s_ss1 != 0)){
    fprintf(stderr,"\nJoin failure at line 393\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_inv_t_consAll40s_x_s_ss1);
  var_inv_t_consAll40s_x_s_ss1 = (tmp);
  tmp = var_inv_t_consAll40s_x_s_ss1;
  var_inv_t_consAll40s_x_s_ss1 = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll41s_x_s_ss1;
  var_inv_t_consAll41s_x_s_ss1 = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_397_59;
  goto Label_cons;
  Return_397_59:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_399_24;

Label_join_393_24:
  if (count(1,0), var_inv_t_consAll40s_x_s_ss1 != 0){
    fprintf(stderr,"\nJoin failure at line 393\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_inv_t_consAll40s_x_s_ss1);
  var_inv_t_consAll40s_x_s_ss1 = (tmp);
  tmp = var_inv_t_consAll40s_x_s_ss1;
  var_inv_t_consAll40s_x_s_ss1 = (var_consA);
  var_consA = (tmp);
  tmp = var_inv_t_consAll41s_x_s_ss1;
  var_inv_t_consAll41s_x_s_ss1 = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_397_60;
  goto Label_cons;
  Return_397_60:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label_join_399_24;

Label_inv_s_x_s_ss1consAll40:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 399\n");
  writeVars(); goto programEnd;
}
  goto Label_consAll_exit_2;

Label_join_399_24:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 399\n");
  writeVars(); goto programEnd;
}
  goto Label_consAll_exit_2;

Label_consAll_entry_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line 404\n");
  writeVars(); goto programEnd;
}
  goto Label_consAll_exit_3;

Label_copy:
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 409\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_copyP & 3) == 0) goto Label_copySymbol; else goto Label_split_410_12;

Label_split_410_12:
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) + (1 + 0));
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
  goto Label_join_415_12;

Label_copySymbol:
  if (count(1,0), !((var_copyP & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 415\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 417\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_415_12:
  if (count(1,0), (var_copyP & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 415\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ + (var_copyP + 0));
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line 417\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_fields:
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 422\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsA = (var_fieldsA + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label_fields1; else goto Label_split_425_14;

Label_split_425_14:
count(1, 0);
  Mem[var_fieldsA] = (count(0,1), (count(0,1), Mem[var_fieldsA]) + (1 + 0));
  goto Label_join_427_9;

Label_fields1:
  if (count(1,0), !((var_fieldsA & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 427\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsD = (var_fieldsD + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label_fields2; else goto Label_split_430_14;

Label_join_427_9:
  if (count(1,0), (var_fieldsA & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 427\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (4 + 0));
count(1, 0);
  var_fieldsD = (var_fieldsD + ((count(0,1), Mem[var_fieldsP]) + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label_fields2; else goto Label_split_430_14;

Label_split_430_14:
count(1, 0);
  Mem[var_fieldsD] = (count(0,1), (count(0,1), Mem[var_fieldsD]) + (1 + 0));
  goto Label_join_432_9;

Label_fields2:
  if (count(1,0), !((var_fieldsD & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 432\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (8 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 434\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_432_9:
  if (count(1,0), (var_fieldsD & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 432\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP - (8 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 434\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_cons:
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 440\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 441\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 442\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 443\n");
  writeVars(); goto programEnd;
}
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 444\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_445_61;
  goto Label_hash;
  Return_445_61:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
count(1, 0);
  var_consP = (var_consP + (var_hashV + 0));
  goto Label_join_448_16;

Label_consSearchSame:
  if (count(1,0), !(var_consP > var_hashV)){
    fprintf(stderr,"\nJoin failure at line 448\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_449_15;

Label_join_448_16:
  if (count(1,0), var_consP > var_hashV){
    fprintf(stderr,"\nJoin failure at line 448\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label_consNext; else goto Label_split_449_15;

Label_split_449_15:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label_consNotA; else goto Label_split_451_19;

Label_split_451_19:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD) goto Label_consFoundSame; else goto Label_split_453_19;

Label_split_453_19:
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_455_10;

Label_consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 455\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_457_10;

Label_join_455_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 455\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label_join_457_10;

Label_consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 457\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_460_17;

Label_join_457_10:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 457\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label_consSearchSame; else goto Label_join_460_17;

Label_consSearchEmpty:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 460\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_462_15;

Label_join_460_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 460\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), var_consP < var_hashV) goto Label_consFail; else goto Label_split_462_15;

Label_split_462_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0) goto Label_consSearchEmpty; else goto Label_split_463_15;

Label_split_463_15:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_465_62;
  goto Label__hash;
  Return_465_62:
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
  goto Label_join_472_9;

Label_consEnd:
  if (count(1,0), !((count(0,1), Mem[var_consP]) > 1)){
    fprintf(stderr,"\nJoin failure at line 472\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 473\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 474\n");
  writeVars(); goto programEnd;
}
  goto Label_join_475_12;

Label_join_472_9:
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1){
    fprintf(stderr,"\nJoin failure at line 472\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 473\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line 474\n");
  writeVars(); goto programEnd;
}
  goto Label_join_475_12;

Label_failedCons:
  if (count(1,0), !(var_failed > 0)){
    fprintf(stderr,"\nJoin failure at line 475\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_join_475_12:
  if (count(1,0), var_failed > 0){
    fprintf(stderr,"\nJoin failure at line 475\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label_consFoundSame:
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_480_63;
  goto Label__hash;
  Return_480_63:
  if (count(1,0), var_consD < var_H) goto Label_consSymbolD; else goto Label_split_481_11;

Label_split_481_11:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) - (1 + 0));
  goto Label_join_483_13;

Label_consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 483\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_486_11;

Label_join_483_13:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 483\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consD = (var_consD - ((count(0,1), Mem[var_consP]) + 0));
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  if (count(1,0), var_consA < var_H) goto Label_consSymbolA; else goto Label_split_486_11;

Label_split_486_11:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) - (1 + 0));
  goto Label_join_488_13;

Label_consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 488\n");
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

Label_join_488_13:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 488\n");
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
    fprintf(stderr,"\nAssertion failure at line 498\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (var_H + 0));
  goto Label_join_500_6;

Label_dump:
  if (count(1,0), !(var_H != var_z)){
    fprintf(stderr,"\nJoin failure at line 500\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_501_10;

Label_join_500_6:
  if (count(1,0), var_H != var_z){
    fprintf(stderr,"\nJoin failure at line 500\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label_used; else goto Label_split_501_10;

Label_split_501_10:
count(1, 0);
  var_y = (var_y + (1 + 0));
  goto Label_join_503_6;

Label_used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 503\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_505_10;

Label_join_503_6:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 503\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z + (12 + 0));
  if (count(1,0), var_z < var_endH) goto Label_dump; else goto Label_split_505_10;

Label_split_505_10:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label_failedCons;

Label_hash:
  if (!(var_hashV == 0 && var_hashT == 366001 && 1)){
    fprintf(stderr,"\nAssertion failure at line 510\n");
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
   stack[stackPointer++] = &&Return_29_64;
  goto Label__subsequences;
  Return_29_64:
  count(2,0);
   stack[stackPointer++] = &&Return_27_65;
  goto Label__build;
  Return_27_65:
  count(2,0);
   stack[stackPointer++] = &&Return_26_66;
  goto Label__initialise;
  Return_26_66:
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
   stack[stackPointer++] = &&Return_47_67;
  goto Label__cons;
  Return_47_67:
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
   stack[stackPointer++] = &&Return_82_68;
  goto Label__cons;
  Return_82_68:
count(1, 0);
  var_consA = (var_consA - (3 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_79_69;
  goto Label__cons;
  Return_79_69:
count(1, 0);
  var_consA = (var_consA - (5 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_76_70;
  goto Label__cons;
  Return_76_70:
count(1, 0);
  var_consA = (var_consA - (7 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_73_71;
  goto Label__cons;
  Return_73_71:
count(1, 0);
  var_consA = (var_consA - (9 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_70_72;
  goto Label__cons;
  Return_70_72:
count(1, 0);
  var_consA = (var_consA - (11 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_67_73;
  goto Label__cons;
  Return_67_73:
count(1, 0);
  var_consA = (var_consA - (13 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_64_74;
  goto Label__cons;
  Return_64_74:
count(1, 0);
  var_consA = (var_consA - (15 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_61_75;
  goto Label__cons;
  Return_61_75:
count(1, 0);
  var_consA = (var_consA - (17 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_58_76;
  goto Label__cons;
  Return_58_76:
count(1, 0);
  var_consA = (var_consA - (19 + 0));
  tmp = var_consP;
  var_consP = (var_consD);
  var_consD = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_55_77;
  goto Label__cons;
  Return_55_77:
count(1, 0);
  var_consA = (var_consA - (21 + 0));
count(1, 0);
  var_consD = (var_consD - (2 + 0));
  goto *stack[--stackPointer];

Label__subsequences_entry_1:
  goto *stack[--stackPointer];

Label__subsequences:
  goto Label__subsequences_exit_1;

Label__subsequences1:
  if (count(1,0), !(var_A != 2)){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
  goto Label__subsequences_entry_1;

Label__split_97_8:
  if (count(1,0), var_A != 2){
    fprintf(stderr,"\nJoin failure at line 97\n");
  writeVars(); goto programEnd;
}
  goto Label__subsequences_entry_1;

Label__join_99_15:
count(1, 0);
  var_A = (var_A + (2 + 0));
  goto Label__split_97_8;

Label__subsequences_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 100\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__subsequences1; else goto Label__join_99_15;

Label__join_103_21:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 100\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__subsequences1; else goto Label__join_99_15;

Label__subsequences2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 105\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__subsequences_exit_2; else goto Label__join_103_21;

Label__split_105_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 105\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__subsequences_exit_2; else goto Label__join_103_21;

Label__join_107_15:
count(1, 0);
  var_A = (var_A - (var_nilnil + 0));
  goto Label__split_105_8;

Label__subsequences_exit_1:
  if (count(1,0), var_A != var_nilnil) goto Label__subsequences2; else goto Label__join_107_15;

Label__x_xssubsequences3:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 114\n");
  writeVars(); goto programEnd;
}
  goto Label__subsequences_entry_2;

Label__split_114_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 114\n");
  writeVars(); goto programEnd;
}
  goto Label__subsequences_entry_2;

Label__x_xssubsequences4:
  if (count(1,0), !(var_t3x_xs != 0)){
    fprintf(stderr,"\nJoin failure at line 120\n");
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
   stack[stackPointer++] = &&Return_116_78;
  goto Label_cons;
  Return_116_78:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_114_7;

Label__split_120_13:
  if (count(1,0), var_t3x_xs != 0){
    fprintf(stderr,"\nJoin failure at line 120\n");
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
   stack[stackPointer++] = &&Return_116_79;
  goto Label_cons;
  Return_116_79:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_114_7;

Label__x_xssubsequences5:
  if (count(1,0), !(var_t4x_xs == 0)){
    fprintf(stderr,"\nJoin failure at line 122\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_t4x_xs);
  var_t4x_xs = (tmp);
  goto Label__split_120_13;

Label__join_123_19:
  if (count(1,0), var_t4x_xs == 0){
    fprintf(stderr,"\nJoin failure at line 122\n");
  writeVars(); goto programEnd;
}
  tmp = var_xs;
  var_xs = (var_t4x_xs);
  var_t4x_xs = (tmp);
  goto Label__split_120_13;

Label__join_129_19:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_127_80;
  goto Label__cons;
  Return_127_80:
  tmp = var_t4x_xs;
  var_t4x_xs = (var_consD);
  var_consD = (tmp);
  tmp = var_t3x_xs;
  var_t3x_xs = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_t3x_xs);
  var_t3x_xs = (tmp);
  if (count(1,0), var_t3x_xs != 0) goto Label__x_xssubsequences4; else goto Label__join_123_19;

Label__join_130_19:
  if (count(1,0), var_A == 0) goto Label__x_xssubsequences5; else goto Label__join_129_19;

Label__subsequences_entry_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 131\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xssubsequences3; else goto Label__join_130_19;

Label__split_131_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 131\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_xssubsequences3; else goto Label__join_130_19;

Label__inv_x_ss0subsequences17:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 141\n");
  writeVars(); goto programEnd;
}
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~140\n");
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
   stack[stackPointer++] = &&Return_136_81;
  goto Label__subsequences;
  Return_136_81:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_x;
  var_x = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  goto Label__split_131_8;

Label__split_141_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 141\n");
  writeVars(); goto programEnd;
}
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~140\n");
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
   stack[stackPointer++] = &&Return_136_82;
  goto Label__subsequences;
  Return_136_82:
count(1, 0);
  var_stackP = (var_stackP - (4 + 0));
  tmp = var_x;
  var_x = ((count(0,1), Mem[var_stackP]));
  Mem[var_stackP] = (count(0,1), tmp);
  tmp = var_xs;
  var_xs = (var_A);
  var_A = (tmp);
  goto Label__split_131_8;

Label__inv_x_ss0subsequences19:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 142\n");
  writeVars(); goto programEnd;
}
  goto Label__split_141_7;

Label__split_142_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 142\n");
  writeVars(); goto programEnd;
}
  goto Label__split_141_7;

Label__inv_x_ss0subsequences18:
  if (count(1,0), !(var_inv_t_subsequences17x_ss0 != 0)){
    fprintf(stderr,"\nJoin failure at line 148\n");
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
   stack[stackPointer++] = &&Return_144_83;
  goto Label_cons;
  Return_144_83:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_142_8;

Label__join_149_25:
  if (count(1,0), var_inv_t_subsequences17x_ss0 != 0){
    fprintf(stderr,"\nJoin failure at line 148\n");
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
   stack[stackPointer++] = &&Return_144_84;
  goto Label_cons;
  Return_144_84:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_142_8;

Label__join_151_25:
  tmp = var_ss0;
  var_ss0 = (var_inv_t_subsequences18x_ss0);
  var_inv_t_subsequences18x_ss0 = (tmp);
  if (count(1,0), var_inv_t_subsequences18x_ss0 == 0) goto Label__inv_x_ss0subsequences19; else goto Label__join_149_25;

Label__join_157_25:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_155_85;
  goto Label__cons;
  Return_155_85:
  tmp = var_inv_t_subsequences18x_ss0;
  var_inv_t_subsequences18x_ss0 = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_subsequences17x_ss0;
  var_inv_t_subsequences17x_ss0 = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_subsequences17x_ss0);
  var_inv_t_subsequences17x_ss0 = (tmp);
  if (count(1,0), var_inv_t_subsequences17x_ss0 != 0) goto Label__inv_x_ss0subsequences18; else goto Label__join_151_25;

Label__join_163_21:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~162\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_159_86;
  goto Label__consAll;
  Return_159_86:
  if (count(1,0), (var_A & 3)) goto Label__inv_x_ss0subsequences17; else goto Label__join_157_25;

Label__subsequences_exit_2:
  tmp = var_ss1;
  var_ss1 = (var_A);
  var_A = (tmp);
  if (count(1,0), var_A != 0) goto Label__subsequences_exit_3; else goto Label__join_163_21;

Label__subsequences_exit_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~170\n");
  writeVars(); goto programEnd;
}
  goto Label__subsequences_entry_3;

Label__consAll_entry_1:
  goto *stack[--stackPointer];

Label__consAll:
  goto Label__consAll_exit_1;

Label__x_s_C2_consAll1:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 181\n");
  writeVars(); goto programEnd;
}
  goto Label__consAll_entry_1;

Label__split_181_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 181\n");
  writeVars(); goto programEnd;
}
  goto Label__consAll_entry_1;

Label__x_s_C2_consAll2:
  if (count(1,0), !(var_t1x_s_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 187\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_s_C2_);
  var_t1x_s_C2_ = (tmp);
  tmp = var_t2x_s_C2_;
  var_t2x_s_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_s_C2_;
  var_t1x_s_C2_ = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_183_87;
  goto Label_cons;
  Return_183_87:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_181_7;

Label__split_187_16:
  if (count(1,0), var_t1x_s_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 187\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t1x_s_C2_);
  var_t1x_s_C2_ = (tmp);
  tmp = var_t2x_s_C2_;
  var_t2x_s_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_s_C2_;
  var_t1x_s_C2_ = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_183_88;
  goto Label_cons;
  Return_183_88:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_181_7;

Label__s_C2_consAll5:
  if (count(1,0), !((var_t2x_s_C2_ & 3))){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
  goto Label__split_187_16;

Label__split_188_15:
  if (count(1,0), (var_t2x_s_C2_ & 3)){
    fprintf(stderr,"\nJoin failure at line 188\n");
  writeVars(); goto programEnd;
}
  goto Label__split_187_16;

Label__s_C2_consAll6:
  if (count(1,0), !(var_t5s_C2_ != 0)){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_t5s_C2_);
  var_t5s_C2_ = (tmp);
  tmp = var_t6s_C2_;
  var_t6s_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_t5s_C2_;
  var_t5s_C2_ = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_190_89;
  goto Label_cons;
  Return_190_89:
  tmp = var_t2x_s_C2_;
  var_t2x_s_C2_ = (var_consP);
  var_consP = (tmp);
  goto Label__split_188_15;

Label__split_194_14:
  if (count(1,0), var_t5s_C2_ != 0){
    fprintf(stderr,"\nJoin failure at line 194\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_t5s_C2_);
  var_t5s_C2_ = (tmp);
  tmp = var_t6s_C2_;
  var_t6s_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_t5s_C2_;
  var_t5s_C2_ = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_190_90;
  goto Label_cons;
  Return_190_90:
  tmp = var_t2x_s_C2_;
  var_t2x_s_C2_ = (var_consP);
  var_consP = (tmp);
  goto Label__split_188_15;

Label__consAll9:
  if (count(1,0), !(var_t6s_C2_ != 2)){
    fprintf(stderr,"\nJoin failure at line 195\n");
  writeVars(); goto programEnd;
}
  goto Label__split_194_14;

Label__split_195_14:
  if (count(1,0), var_t6s_C2_ != 2){
    fprintf(stderr,"\nJoin failure at line 195\n");
  writeVars(); goto programEnd;
}
  goto Label__split_194_14;

Label__join_197_10:
count(1, 0);
  var_t6s_C2_ = (var_t6s_C2_ + (2 + 0));
  goto Label__split_195_14;

Label__s_C2_consAll7:
  if (count(1,0), !(var_t6s_C2_ == 0)){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t6s_C2_ != 0) goto Label__consAll9; else goto Label__join_197_10;

Label__join_199_15:
  if (count(1,0), var_t6s_C2_ == 0){
    fprintf(stderr,"\nJoin failure at line 198\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t6s_C2_ != 0) goto Label__consAll9; else goto Label__join_197_10;

Label__join_205_15:
  tmp = var_t2x_s_C2_;
  var_t2x_s_C2_ = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_203_91;
  goto Label__cons;
  Return_203_91:
  tmp = var_t6s_C2_;
  var_t6s_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_t5s_C2_;
  var_t5s_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_s;
  var_s = (var_t5s_C2_);
  var_t5s_C2_ = (tmp);
  if (count(1,0), var_t5s_C2_ != 0) goto Label__s_C2_consAll6; else goto Label__join_199_15;

Label__join_206_15:
  if (count(1,0), var_t2x_s_C2_ == 0) goto Label__s_C2_consAll7; else goto Label__join_205_15;

Label__x_s_C2_consAll3:
  if (count(1,0), !(var_t2x_s_C2_ == 0)){
    fprintf(stderr,"\nJoin failure at line 207\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t2x_s_C2_ & 3)) goto Label__s_C2_consAll5; else goto Label__join_206_15;

Label__join_208_17:
  if (count(1,0), var_t2x_s_C2_ == 0){
    fprintf(stderr,"\nJoin failure at line 207\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t2x_s_C2_ & 3)) goto Label__s_C2_consAll5; else goto Label__join_206_15;

Label__join_214_17:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_212_92;
  goto Label__cons;
  Return_212_92:
  tmp = var_t2x_s_C2_;
  var_t2x_s_C2_ = (var_consD);
  var_consD = (tmp);
  tmp = var_t1x_s_C2_;
  var_t1x_s_C2_ = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_t1x_s_C2_);
  var_t1x_s_C2_ = (tmp);
  if (count(1,0), var_t1x_s_C2_ != 0) goto Label__x_s_C2_consAll2; else goto Label__join_208_17;

Label__join_215_17:
  if (count(1,0), var_A == 0) goto Label__x_s_C2_consAll3; else goto Label__join_214_17;

Label__consAll_entry_2:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 216\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_s_C2_consAll1; else goto Label__join_215_17;

Label__join_219_16:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 216\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_s_C2_consAll1; else goto Label__join_215_17;

Label__inv_s_x_sconsAll14:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 221\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__consAll_exit_2; else goto Label__join_219_16;

Label__split_221_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 221\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__consAll_exit_2; else goto Label__join_219_16;

Label__inv_s_x_sconsAll16:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 222\n");
  writeVars(); goto programEnd;
}
  goto Label__split_221_7;

Label__split_222_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 222\n");
  writeVars(); goto programEnd;
}
  goto Label__split_221_7;

Label__inv_s_x_sconsAll15:
  if (count(1,0), !(var_inv_t_consAll14s_x_s != 0)){
    fprintf(stderr,"\nJoin failure at line 228\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_inv_t_consAll14s_x_s);
  var_inv_t_consAll14s_x_s = (tmp);
  tmp = var_inv_t_consAll15s_x_s;
  var_inv_t_consAll15s_x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll14s_x_s;
  var_inv_t_consAll14s_x_s = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_224_93;
  goto Label_cons;
  Return_224_93:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_222_8;

Label__join_229_20:
  if (count(1,0), var_inv_t_consAll14s_x_s != 0){
    fprintf(stderr,"\nJoin failure at line 228\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_inv_t_consAll14s_x_s);
  var_inv_t_consAll14s_x_s = (tmp);
  tmp = var_inv_t_consAll15s_x_s;
  var_inv_t_consAll15s_x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll14s_x_s;
  var_inv_t_consAll14s_x_s = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_224_94;
  goto Label_cons;
  Return_224_94:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_222_8;

Label__inv_x_sconsAll18:
  if (count(1,0), !((var_inv_t_consAll15s_x_s & 3))){
    fprintf(stderr,"\nJoin failure at line 230\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll15s_x_s == 0) goto Label__inv_s_x_sconsAll16; else goto Label__join_229_20;

Label__split_230_26:
  if (count(1,0), (var_inv_t_consAll15s_x_s & 3)){
    fprintf(stderr,"\nJoin failure at line 230\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll15s_x_s == 0) goto Label__inv_s_x_sconsAll16; else goto Label__join_229_20;

Label__inv_x_sconsAll20:
  if (count(1,0), !(var_inv_t_consAll15s_x_s == 0)){
    fprintf(stderr,"\nJoin failure at line 231\n");
  writeVars(); goto programEnd;
}
  goto Label__split_230_26;

Label__split_231_27:
  if (count(1,0), var_inv_t_consAll15s_x_s == 0){
    fprintf(stderr,"\nJoin failure at line 231\n");
  writeVars(); goto programEnd;
}
  goto Label__split_230_26;

Label__inv_x_sconsAll19:
  if (count(1,0), !(var_inv_t_consAll18x_s != 0)){
    fprintf(stderr,"\nJoin failure at line 237\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll18x_s);
  var_inv_t_consAll18x_s = (tmp);
  tmp = var_inv_t_consAll19x_s;
  var_inv_t_consAll19x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll18x_s;
  var_inv_t_consAll18x_s = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_233_95;
  goto Label_cons;
  Return_233_95:
  tmp = var_inv_t_consAll15s_x_s;
  var_inv_t_consAll15s_x_s = (var_consP);
  var_consP = (tmp);
  goto Label__split_231_27;

Label__join_238_18:
  if (count(1,0), var_inv_t_consAll18x_s != 0){
    fprintf(stderr,"\nJoin failure at line 237\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll18x_s);
  var_inv_t_consAll18x_s = (tmp);
  tmp = var_inv_t_consAll19x_s;
  var_inv_t_consAll19x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll18x_s;
  var_inv_t_consAll18x_s = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_233_96;
  goto Label_cons;
  Return_233_96:
  tmp = var_inv_t_consAll15s_x_s;
  var_inv_t_consAll15s_x_s = (var_consP);
  var_consP = (tmp);
  goto Label__split_231_27;

Label__consAll22:
  if (count(1,0), !(var_inv_t_consAll19x_s != 0)){
    fprintf(stderr,"\nJoin failure at line 239\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll19x_s == 0) goto Label__inv_x_sconsAll20; else goto Label__join_238_18;

Label__split_239_25:
  if (count(1,0), var_inv_t_consAll19x_s != 0){
    fprintf(stderr,"\nJoin failure at line 239\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll19x_s == 0) goto Label__inv_x_sconsAll20; else goto Label__join_238_18;

Label__join_244_11:
  tmp = var_inv_t_consAll19x_s;
  var_inv_t_consAll19x_s = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_s;
  var_s = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_241_97;
  goto Label__copy;
  Return_241_97:
  tmp = var_s;
  var_s = (var_copyP);
  var_copyP = (tmp);
  goto Label__split_239_25;

Label__join_245_18:
  if (count(1,0), var_inv_t_consAll19x_s != var_s) goto Label__consAll22; else goto Label__join_244_11;

Label__join_251_18:
  tmp = var_inv_t_consAll15s_x_s;
  var_inv_t_consAll15s_x_s = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_249_98;
  goto Label__cons;
  Return_249_98:
  tmp = var_inv_t_consAll19x_s;
  var_inv_t_consAll19x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll18x_s;
  var_inv_t_consAll18x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_consAll18x_s);
  var_inv_t_consAll18x_s = (tmp);
  if (count(1,0), var_inv_t_consAll18x_s != 0) goto Label__inv_x_sconsAll19; else goto Label__join_245_18;

Label__join_252_20:
  if (count(1,0), (var_inv_t_consAll15s_x_s & 3)) goto Label__inv_x_sconsAll18; else goto Label__join_251_18;

Label__join_258_20:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_256_99;
  goto Label__cons;
  Return_256_99:
  tmp = var_inv_t_consAll15s_x_s;
  var_inv_t_consAll15s_x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll14s_x_s;
  var_inv_t_consAll14s_x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_s;
  var_s = (var_inv_t_consAll14s_x_s);
  var_inv_t_consAll14s_x_s = (tmp);
  if (count(1,0), var_inv_t_consAll14s_x_s != 0) goto Label__inv_s_x_sconsAll15; else goto Label__join_252_20;

Label__consAll_exit_1:
  if (count(1,0), (var_A & 3)) goto Label__inv_s_x_sconsAll14; else goto Label__join_258_20;

Label__x_s_ssconsAll27:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 265\n");
  writeVars(); goto programEnd;
}
  goto Label__consAll_entry_2;

Label__split_265_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 265\n");
  writeVars(); goto programEnd;
}
  goto Label__consAll_entry_2;

Label__x_s_ssconsAll28:
  if (count(1,0), !(var_t27x_s_ss != 0)){
    fprintf(stderr,"\nJoin failure at line 271\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t27x_s_ss);
  var_t27x_s_ss = (tmp);
  tmp = var_t28x_s_ss;
  var_t28x_s_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_t27x_s_ss;
  var_t27x_s_ss = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_267_100;
  goto Label_cons;
  Return_267_100:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_265_7;

Label__split_271_16:
  if (count(1,0), var_t27x_s_ss != 0){
    fprintf(stderr,"\nJoin failure at line 271\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t27x_s_ss);
  var_t27x_s_ss = (tmp);
  tmp = var_t28x_s_ss;
  var_t28x_s_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_t27x_s_ss;
  var_t27x_s_ss = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_267_101;
  goto Label_cons;
  Return_267_101:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_265_7;

Label__s_ssconsAll31:
  if (count(1,0), !((var_t28x_s_ss & 3))){
    fprintf(stderr,"\nJoin failure at line 272\n");
  writeVars(); goto programEnd;
}
  goto Label__split_271_16;

Label__split_272_15:
  if (count(1,0), (var_t28x_s_ss & 3)){
    fprintf(stderr,"\nJoin failure at line 272\n");
  writeVars(); goto programEnd;
}
  goto Label__split_271_16;

Label__s_ssconsAll32:
  if (count(1,0), !(var_t31s_ss != 0)){
    fprintf(stderr,"\nJoin failure at line 278\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_t31s_ss);
  var_t31s_ss = (tmp);
  tmp = var_t32s_ss;
  var_t32s_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_t31s_ss;
  var_t31s_ss = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_274_102;
  goto Label_cons;
  Return_274_102:
  tmp = var_t28x_s_ss;
  var_t28x_s_ss = (var_consP);
  var_consP = (tmp);
  goto Label__split_272_15;

Label__split_278_14:
  if (count(1,0), var_t31s_ss != 0){
    fprintf(stderr,"\nJoin failure at line 278\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_t31s_ss);
  var_t31s_ss = (tmp);
  tmp = var_t32s_ss;
  var_t32s_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_t31s_ss;
  var_t31s_ss = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_274_103;
  goto Label_cons;
  Return_274_103:
  tmp = var_t28x_s_ss;
  var_t28x_s_ss = (var_consP);
  var_consP = (tmp);
  goto Label__split_272_15;

Label__s_ssconsAll33:
  if (count(1,0), !(var_t32s_ss == 0)){
    fprintf(stderr,"\nJoin failure at line 280\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss;
  var_ss = (var_t32s_ss);
  var_t32s_ss = (tmp);
  goto Label__split_278_14;

Label__join_281_15:
  if (count(1,0), var_t32s_ss == 0){
    fprintf(stderr,"\nJoin failure at line 280\n");
  writeVars(); goto programEnd;
}
  tmp = var_ss;
  var_ss = (var_t32s_ss);
  var_t32s_ss = (tmp);
  goto Label__split_278_14;

Label__join_287_15:
  tmp = var_t28x_s_ss;
  var_t28x_s_ss = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_285_104;
  goto Label__cons;
  Return_285_104:
  tmp = var_t32s_ss;
  var_t32s_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_t31s_ss;
  var_t31s_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_s;
  var_s = (var_t31s_ss);
  var_t31s_ss = (tmp);
  if (count(1,0), var_t31s_ss != 0) goto Label__s_ssconsAll32; else goto Label__join_281_15;

Label__join_288_15:
  if (count(1,0), var_t28x_s_ss == 0) goto Label__s_ssconsAll33; else goto Label__join_287_15;

Label__x_s_ssconsAll29:
  if (count(1,0), !(var_t28x_s_ss == 0)){
    fprintf(stderr,"\nJoin failure at line 289\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t28x_s_ss & 3)) goto Label__s_ssconsAll31; else goto Label__join_288_15;

Label__join_290_17:
  if (count(1,0), var_t28x_s_ss == 0){
    fprintf(stderr,"\nJoin failure at line 289\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_t28x_s_ss & 3)) goto Label__s_ssconsAll31; else goto Label__join_288_15;

Label__join_296_17:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_294_105;
  goto Label__cons;
  Return_294_105:
  tmp = var_t28x_s_ss;
  var_t28x_s_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_t27x_s_ss;
  var_t27x_s_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_t27x_s_ss);
  var_t27x_s_ss = (tmp);
  if (count(1,0), var_t27x_s_ss != 0) goto Label__x_s_ssconsAll28; else goto Label__join_290_17;

Label__join_297_17:
  if (count(1,0), var_A == 0) goto Label__x_s_ssconsAll29; else goto Label__join_296_17;

Label__consAll_entry_3:
  if (count(1,0), !(var_A != 0)){
    fprintf(stderr,"\nJoin failure at line 298\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_s_ssconsAll27; else goto Label__join_297_17;

Label__split_298_8:
  if (count(1,0), var_A != 0){
    fprintf(stderr,"\nJoin failure at line 298\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_A & 3)) goto Label__x_s_ssconsAll27; else goto Label__join_297_17;

Label__inv_x_ssconsAll61:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 300\n");
  writeVars(); goto programEnd;
}
  goto Label__split_298_8;

Label__split_300_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 300\n");
  writeVars(); goto programEnd;
}
  goto Label__split_298_8;

Label__inv_x_ssconsAll63:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 301\n");
  writeVars(); goto programEnd;
}
  goto Label__split_300_7;

Label__split_301_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 301\n");
  writeVars(); goto programEnd;
}
  goto Label__split_300_7;

Label__inv_x_ssconsAll62:
  if (count(1,0), !(var_inv_t_consAll61x_ss != 0)){
    fprintf(stderr,"\nJoin failure at line 307\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll61x_ss);
  var_inv_t_consAll61x_ss = (tmp);
  tmp = var_inv_t_consAll62x_ss;
  var_inv_t_consAll62x_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll61x_ss;
  var_inv_t_consAll61x_ss = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_303_106;
  goto Label_cons;
  Return_303_106:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_301_8;

Label__join_308_19:
  if (count(1,0), var_inv_t_consAll61x_ss != 0){
    fprintf(stderr,"\nJoin failure at line 307\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll61x_ss);
  var_inv_t_consAll61x_ss = (tmp);
  tmp = var_inv_t_consAll62x_ss;
  var_inv_t_consAll62x_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll61x_ss;
  var_inv_t_consAll61x_ss = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_303_107;
  goto Label_cons;
  Return_303_107:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_301_8;

Label__join_310_19:
  tmp = var_ss;
  var_ss = (var_inv_t_consAll62x_ss);
  var_inv_t_consAll62x_ss = (tmp);
  if (count(1,0), var_inv_t_consAll62x_ss == 0) goto Label__inv_x_ssconsAll63; else goto Label__join_308_19;

Label__join_316_19:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_314_108;
  goto Label__cons;
  Return_314_108:
  tmp = var_inv_t_consAll62x_ss;
  var_inv_t_consAll62x_ss = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll61x_ss;
  var_inv_t_consAll61x_ss = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_consAll61x_ss);
  var_inv_t_consAll61x_ss = (tmp);
  if (count(1,0), var_inv_t_consAll61x_ss != 0) goto Label__inv_x_ssconsAll62; else goto Label__join_310_19;

Label__join_328_16:
  if (!(var_A == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~327\n");
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
   stack[stackPointer++] = &&Return_321_109;
  goto Label__consAll;
  Return_321_109:
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
  if (count(1,0), (var_A & 3)) goto Label__inv_x_ssconsAll61; else goto Label__join_316_19;

Label__inv_s_x_s_ss1consAll40:
  if (count(1,0), !((var_A & 3))){
    fprintf(stderr,"\nJoin failure at line 330\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__consAll_exit_3; else goto Label__join_328_16;

Label__split_330_7:
  if (count(1,0), (var_A & 3)){
    fprintf(stderr,"\nJoin failure at line 330\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_A != 0) goto Label__consAll_exit_3; else goto Label__join_328_16;

Label__inv_s_x_s_ss1consAll42:
  if (count(1,0), !(var_A == 0)){
    fprintf(stderr,"\nJoin failure at line 331\n");
  writeVars(); goto programEnd;
}
  goto Label__split_330_7;

Label__split_331_8:
  if (count(1,0), var_A == 0){
    fprintf(stderr,"\nJoin failure at line 331\n");
  writeVars(); goto programEnd;
}
  goto Label__split_330_7;

Label__inv_s_x_s_ss1consAll41:
  if (count(1,0), !(var_inv_t_consAll40s_x_s_ss1 != 0)){
    fprintf(stderr,"\nJoin failure at line 337\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_inv_t_consAll40s_x_s_ss1);
  var_inv_t_consAll40s_x_s_ss1 = (tmp);
  tmp = var_inv_t_consAll41s_x_s_ss1;
  var_inv_t_consAll41s_x_s_ss1 = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll40s_x_s_ss1;
  var_inv_t_consAll40s_x_s_ss1 = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_333_110;
  goto Label_cons;
  Return_333_110:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_331_8;

Label__join_338_24:
  if (count(1,0), var_inv_t_consAll40s_x_s_ss1 != 0){
    fprintf(stderr,"\nJoin failure at line 337\n");
  writeVars(); goto programEnd;
}
  tmp = var_s;
  var_s = (var_inv_t_consAll40s_x_s_ss1);
  var_inv_t_consAll40s_x_s_ss1 = (tmp);
  tmp = var_inv_t_consAll41s_x_s_ss1;
  var_inv_t_consAll41s_x_s_ss1 = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll40s_x_s_ss1;
  var_inv_t_consAll40s_x_s_ss1 = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_333_111;
  goto Label_cons;
  Return_333_111:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  goto Label__split_331_8;

Label__inv_x_s_ss1consAll44:
  if (count(1,0), !((var_inv_t_consAll41s_x_s_ss1 & 3))){
    fprintf(stderr,"\nJoin failure at line 339\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll41s_x_s_ss1 == 0) goto Label__inv_s_x_s_ss1consAll42; else goto Label__join_338_24;

Label__split_339_30:
  if (count(1,0), (var_inv_t_consAll41s_x_s_ss1 & 3)){
    fprintf(stderr,"\nJoin failure at line 339\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll41s_x_s_ss1 == 0) goto Label__inv_s_x_s_ss1consAll42; else goto Label__join_338_24;

Label__inv_x_s_ss1consAll46:
  if (count(1,0), !(var_inv_t_consAll41s_x_s_ss1 == 0)){
    fprintf(stderr,"\nJoin failure at line 340\n");
  writeVars(); goto programEnd;
}
  goto Label__split_339_30;

Label__split_340_31:
  if (count(1,0), var_inv_t_consAll41s_x_s_ss1 == 0){
    fprintf(stderr,"\nJoin failure at line 340\n");
  writeVars(); goto programEnd;
}
  goto Label__split_339_30;

Label__x_sconsAll47:
  if (count(1,0), !((var_inv_t_consAll44x_s_ss1 & 3))){
    fprintf(stderr,"\nJoin failure at line 345\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_consAll45x_s_ss1;
  var_inv_t_consAll45x_s_ss1 = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_342_112;
  goto Label_cons;
  Return_342_112:
  tmp = var_inv_t_consAll41s_x_s_ss1;
  var_inv_t_consAll41s_x_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label__split_340_31;

Label__split_345_28:
  if (count(1,0), (var_inv_t_consAll44x_s_ss1 & 3)){
    fprintf(stderr,"\nJoin failure at line 345\n");
  writeVars(); goto programEnd;
}
  tmp = var_inv_t_consAll45x_s_ss1;
  var_inv_t_consAll45x_s_ss1 = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_342_113;
  goto Label_cons;
  Return_342_113:
  tmp = var_inv_t_consAll41s_x_s_ss1;
  var_inv_t_consAll41s_x_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label__split_340_31;

Label__x_sconsAll48:
  if (count(1,0), !(var_t47x_s != 0)){
    fprintf(stderr,"\nJoin failure at line 351\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t47x_s);
  var_t47x_s = (tmp);
  tmp = var_t48x_s;
  var_t48x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_t47x_s;
  var_t47x_s = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_347_114;
  goto Label_cons;
  Return_347_114:
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label__split_345_28;

Label__split_351_13:
  if (count(1,0), var_t47x_s != 0){
    fprintf(stderr,"\nJoin failure at line 351\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_t47x_s);
  var_t47x_s = (tmp);
  tmp = var_t48x_s;
  var_t48x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_t47x_s;
  var_t47x_s = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_347_115;
  goto Label_cons;
  Return_347_115:
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label__split_345_28;

Label__consAll51:
  if (count(1,0), !(var_t48x_s != var_s)){
    fprintf(stderr,"\nJoin failure at line 352\n");
  writeVars(); goto programEnd;
}
  goto Label__split_351_13;

Label__split_352_13:
  if (count(1,0), var_t48x_s != var_s){
    fprintf(stderr,"\nJoin failure at line 352\n");
  writeVars(); goto programEnd;
}
  goto Label__split_351_13;

Label__join_357_11:
  tmp = var_s;
  var_s = (var_copyP);
  var_copyP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_355_116;
  goto Label_copy;
  Return_355_116:
  tmp = var_t48x_s;
  var_t48x_s = (var_copyQ);
  var_copyQ = (tmp);
  tmp = var_s;
  var_s = (var_copyP);
  var_copyP = (tmp);
  goto Label__split_352_13;

Label__x_sconsAll49:
  if (count(1,0), !(var_t48x_s == 0)){
    fprintf(stderr,"\nJoin failure at line 358\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t48x_s != 0) goto Label__consAll51; else goto Label__join_357_11;

Label__join_359_14:
  if (count(1,0), var_t48x_s == 0){
    fprintf(stderr,"\nJoin failure at line 358\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_t48x_s != 0) goto Label__consAll51; else goto Label__join_357_11;

Label__join_365_14:
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_363_117;
  goto Label__cons;
  Return_363_117:
  tmp = var_t48x_s;
  var_t48x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_t47x_s;
  var_t47x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_t47x_s);
  var_t47x_s = (tmp);
  if (count(1,0), var_t47x_s != 0) goto Label__x_sconsAll48; else goto Label__join_359_14;

Label__join_366_14:
  if (count(1,0), var_inv_t_consAll44x_s_ss1 == 0) goto Label__x_sconsAll49; else goto Label__join_365_14;

Label__inv_x_s_ss1consAll45:
  if (count(1,0), !(var_inv_t_consAll44x_s_ss1 != 0)){
    fprintf(stderr,"\nJoin failure at line 367\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_consAll44x_s_ss1 & 3)) goto Label__x_sconsAll47; else goto Label__join_366_14;

Label__join_368_22:
  if (count(1,0), var_inv_t_consAll44x_s_ss1 != 0){
    fprintf(stderr,"\nJoin failure at line 367\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (var_inv_t_consAll44x_s_ss1 & 3)) goto Label__x_sconsAll47; else goto Label__join_366_14;

Label__join_370_22:
  tmp = var_ss1;
  var_ss1 = (var_inv_t_consAll45x_s_ss1);
  var_inv_t_consAll45x_s_ss1 = (tmp);
  if (count(1,0), var_inv_t_consAll45x_s_ss1 == 0) goto Label__inv_x_s_ss1consAll46; else goto Label__join_368_22;

Label__inv_x_sconsAll56:
  if (count(1,0), !((var_inv_t_consAll44x_s_ss1 & 3))){
    fprintf(stderr,"\nJoin failure at line 371\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll44x_s_ss1 != 0) goto Label__inv_x_s_ss1consAll45; else goto Label__join_370_22;

Label__split_371_28:
  if (count(1,0), (var_inv_t_consAll44x_s_ss1 & 3)){
    fprintf(stderr,"\nJoin failure at line 371\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_inv_t_consAll44x_s_ss1 != 0) goto Label__inv_x_s_ss1consAll45; else goto Label__join_370_22;

Label__inv_x_sconsAll58:
  if (count(1,0), !(var_inv_t_consAll44x_s_ss1 == 0)){
    fprintf(stderr,"\nJoin failure at line 372\n");
  writeVars(); goto programEnd;
}
  goto Label__split_371_28;

Label__split_372_29:
  if (count(1,0), var_inv_t_consAll44x_s_ss1 == 0){
    fprintf(stderr,"\nJoin failure at line 372\n");
  writeVars(); goto programEnd;
}
  goto Label__split_371_28;

Label__inv_x_sconsAll57:
  if (count(1,0), !(var_inv_t_consAll56x_s != 0)){
    fprintf(stderr,"\nJoin failure at line 378\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll56x_s);
  var_inv_t_consAll56x_s = (tmp);
  tmp = var_inv_t_consAll57x_s;
  var_inv_t_consAll57x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll56x_s;
  var_inv_t_consAll56x_s = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_374_118;
  goto Label_cons;
  Return_374_118:
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label__split_372_29;

Label__join_379_18:
  if (count(1,0), var_inv_t_consAll56x_s != 0){
    fprintf(stderr,"\nJoin failure at line 378\n");
  writeVars(); goto programEnd;
}
  tmp = var_x;
  var_x = (var_inv_t_consAll56x_s);
  var_inv_t_consAll56x_s = (tmp);
  tmp = var_inv_t_consAll57x_s;
  var_inv_t_consAll57x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll56x_s;
  var_inv_t_consAll56x_s = (var_consA);
  var_consA = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_374_119;
  goto Label_cons;
  Return_374_119:
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consP);
  var_consP = (tmp);
  goto Label__split_372_29;

Label__join_381_18:
  tmp = var_s;
  var_s = (var_inv_t_consAll57x_s);
  var_inv_t_consAll57x_s = (tmp);
  if (count(1,0), var_inv_t_consAll57x_s == 0) goto Label__inv_x_sconsAll58; else goto Label__join_379_18;

Label__join_387_18:
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_385_120;
  goto Label__cons;
  Return_385_120:
  tmp = var_inv_t_consAll57x_s;
  var_inv_t_consAll57x_s = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll56x_s;
  var_inv_t_consAll56x_s = (var_consA);
  var_consA = (tmp);
  tmp = var_x;
  var_x = (var_inv_t_consAll56x_s);
  var_inv_t_consAll56x_s = (tmp);
  if (count(1,0), var_inv_t_consAll56x_s != 0) goto Label__inv_x_sconsAll57; else goto Label__join_381_18;

Label__join_392_22:
  tmp = var_inv_t_consAll41s_x_s_ss1;
  var_inv_t_consAll41s_x_s_ss1 = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_390_121;
  goto Label__cons;
  Return_390_121:
  tmp = var_inv_t_consAll45x_s_ss1;
  var_inv_t_consAll45x_s_ss1 = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll44x_s_ss1;
  var_inv_t_consAll44x_s_ss1 = (var_consA);
  var_consA = (tmp);
  if (count(1,0), (var_inv_t_consAll44x_s_ss1 & 3)) goto Label__inv_x_sconsAll56; else goto Label__join_387_18;

Label__join_393_24:
  if (count(1,0), (var_inv_t_consAll41s_x_s_ss1 & 3)) goto Label__inv_x_s_ss1consAll44; else goto Label__join_392_22;

Label__join_399_24:
  tmp = var_A;
  var_A = (var_consP);
  var_consP = (tmp);
  count(2,0);
   stack[stackPointer++] = &&Return_397_122;
  goto Label__cons;
  Return_397_122:
  tmp = var_inv_t_consAll41s_x_s_ss1;
  var_inv_t_consAll41s_x_s_ss1 = (var_consD);
  var_consD = (tmp);
  tmp = var_inv_t_consAll40s_x_s_ss1;
  var_inv_t_consAll40s_x_s_ss1 = (var_consA);
  var_consA = (tmp);
  tmp = var_s;
  var_s = (var_inv_t_consAll40s_x_s_ss1);
  var_inv_t_consAll40s_x_s_ss1 = (tmp);
  if (count(1,0), var_inv_t_consAll40s_x_s_ss1 != 0) goto Label__inv_s_x_s_ss1consAll41; else goto Label__join_393_24;

Label__consAll_exit_2:
  if (count(1,0), (var_A & 3)) goto Label__inv_s_x_s_ss1consAll40; else goto Label__join_399_24;

Label__consAll_exit_3:
  if (!(var_A != var_A && 1)){
    fprintf(stderr,"\nAssertion failure at line ~404\n");
  writeVars(); goto programEnd;
}
  goto Label__consAll_entry_3;

Label__copySymbol:
  if (count(1,0), !((var_copyP & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 410\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~409\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_410_12:
  if (count(1,0), (var_copyP & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 410\n");
  writeVars(); goto programEnd;
}
  if (!(var_copyP > 0 && var_copyQ == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~409\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_415_12:
count(1, 0);
  var_ttt = (var_ttt + ((count(0,1), Mem[var_copyP]) + 0));

if (A < var_ttt) A = var_ttt;
count(1, 0);
  var_ttt = (var_ttt - ((count(0,1), Mem[var_copyP]) + 0));
count(1, 0);
  Mem[var_copyP] = (count(0,1), (count(0,1), Mem[var_copyP]) - (1 + 0));
  goto Label__split_410_12;

Label__copy:
  if (!(var_copyP > 0 && var_copyQ == var_copyP && 1)){
    fprintf(stderr,"\nAssertion failure at line ~417\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_copyQ = (var_copyQ - (var_copyP + 0));
  if (count(1,0), (var_copyP & 3) == 0) goto Label__copySymbol; else goto Label__join_415_12;

Label__fields1:
  if (count(1,0), !((var_fieldsA & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 425\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsA = (var_fieldsA - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~422\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__split_425_14:
  if (count(1,0), (var_fieldsA & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 425\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsA = (var_fieldsA - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (!(var_fieldsP > 0 && var_fieldsA == 0 && var_fieldsD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~422\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__join_427_9:
count(1, 0);
  Mem[var_fieldsA] = (count(0,1), (count(0,1), Mem[var_fieldsA]) - (1 + 0));
  goto Label__split_425_14;

Label__fields2:
  if (count(1,0), !((var_fieldsD & 3) == 0)){
    fprintf(stderr,"\nJoin failure at line 430\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsD = (var_fieldsD - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label__fields1; else goto Label__join_427_9;

Label__split_430_14:
  if (count(1,0), (var_fieldsD & 3) == 0){
    fprintf(stderr,"\nJoin failure at line 430\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsD = (var_fieldsD - ((count(0,1), Mem[var_fieldsP]) + 0));
count(1, 0);
  var_fieldsP = (var_fieldsP - (4 + 0));
  if (count(1,0), (var_fieldsA & 3) == 0) goto Label__fields1; else goto Label__join_427_9;

Label__join_432_9:
count(1, 0);
  Mem[var_fieldsD] = (count(0,1), (count(0,1), Mem[var_fieldsD]) - (1 + 0));
  goto Label__split_430_14;

Label__fields:
  if (!(var_fieldsP > 0 && var_fieldsA > 0 && var_fieldsD > 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~434\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_fieldsP = (var_fieldsP + (8 + 0));
  if (count(1,0), (var_fieldsD & 3) == 0) goto Label__fields2; else goto Label__join_432_9;

Label__join_448_16:
count(1, 0);
  var_consP = (var_consP - (var_hashV + 0));
count(1, 0);
  var_segEnd = (var_segEnd - (var_hashV + var_segSize));
  count(2,0);
   stack[stackPointer++] = &&Return_445_123;
  goto Label__hash;
  Return_445_123:
  if (!(var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~444\n");
  writeVars(); goto programEnd;
}
  if (!(var_hashV == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~443\n");
  writeVars(); goto programEnd;
}
  if (!(var_consP == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~442\n");
  writeVars(); goto programEnd;
}
  if (!(var_consD != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~441\n");
  writeVars(); goto programEnd;
}
  if (!(var_consA != 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~440\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];

Label__consNext:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == 0)){
    fprintf(stderr,"\nJoin failure at line 449\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_448_16;

Label__split_449_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0){
    fprintf(stderr,"\nJoin failure at line 449\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_consP > var_hashV) goto Label__consSearchSame; else goto Label__join_448_16;

Label__consNotA:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != var_consA)){
    fprintf(stderr,"\nJoin failure at line 451\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_449_15;

Label__split_451_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA){
    fprintf(stderr,"\nJoin failure at line 451\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_449_15;

Label__consFoundSame:
  if (count(1,0), !((count(0,1), Mem[var_consP]) == var_consD)){
    fprintf(stderr,"\nJoin failure at line 453\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_451_19;

Label__split_453_19:
  if (count(1,0), (count(0,1), Mem[var_consP]) == var_consD){
    fprintf(stderr,"\nJoin failure at line 453\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (4 + 0));
  goto Label__split_451_19;

Label__join_455_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  goto Label__split_453_19;

Label__join_457_10:
count(1, 0);
  var_consP = (var_consP + (4 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) != var_consA) goto Label__consNotA; else goto Label__join_455_10;

Label__consSearchSame:
  if (count(1,0), !(var_consP <= var_segEnd)){
    fprintf(stderr,"\nJoin failure at line 459\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_457_10;

Label__join_460_17:
  if (count(1,0), var_consP <= var_segEnd){
    fprintf(stderr,"\nJoin failure at line 459\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_consP]) == 0) goto Label__consNext; else goto Label__join_457_10;

Label__consFail:
  if (count(1,0), !(var_consP < var_hashV)){
    fprintf(stderr,"\nJoin failure at line 462\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_460_17;

Label__split_462_15:
  if (count(1,0), var_consP < var_hashV){
    fprintf(stderr,"\nJoin failure at line 462\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (12 + 0));
  if (count(1,0), var_consP <= var_segEnd) goto Label__consSearchEmpty; else goto Label__join_460_17;

Label__consSearchEmpty:
  if (count(1,0), !((count(0,1), Mem[var_consP]) != 0)){
    fprintf(stderr,"\nJoin failure at line 463\n");
  writeVars(); goto programEnd;
}
  goto Label__split_462_15;

Label__split_463_15:
  if (count(1,0), (count(0,1), Mem[var_consP]) != 0){
    fprintf(stderr,"\nJoin failure at line 463\n");
  writeVars(); goto programEnd;
}
  goto Label__split_462_15;

Label__join_472_9:
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
   stack[stackPointer++] = &&Return_465_124;
  goto Label_hash;
  Return_465_124:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__split_463_15;

Label__join_475_12:
  if (!(var_hashV == 0 && var_segEnd == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~474\n");
  writeVars(); goto programEnd;
}
  if (!((var_consP & 3) == 0 && var_consP >= var_H && var_consA == 0 && var_consD == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~473\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), (count(0,1), Mem[var_consP]) > 1) goto Label__consEnd; else goto Label__join_472_9;

Label__cons:
  if (count(1,0), var_failed > 0) goto Label__failedCons; else goto Label__join_475_12;

Label__consSymbolD:
  if (count(1,0), !(var_consD < var_H)){
    fprintf(stderr,"\nJoin failure at line 481\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_480_125;
  goto Label_hash;
  Return_480_125:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__split_481_11:
  if (count(1,0), var_consD < var_H){
    fprintf(stderr,"\nJoin failure at line 481\n");
  writeVars(); goto programEnd;
}
  count(2,0);
   stack[stackPointer++] = &&Return_480_126;
  goto Label_hash;
  Return_480_126:
count(1, 0);
  var_segEnd = (var_segEnd + (var_hashV + var_segSize));
  goto Label__consFoundSame;

Label__join_483_13:
count(1, 0);
  Mem[var_consD] = (count(0,1), (count(0,1), Mem[var_consD]) + (1 + 0));
  goto Label__split_481_11;

Label__consSymbolA:
  if (count(1,0), !(var_consA < var_H)){
    fprintf(stderr,"\nJoin failure at line 486\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_483_13;

Label__split_486_11:
  if (count(1,0), var_consA < var_H){
    fprintf(stderr,"\nJoin failure at line 486\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_consP = (var_consP + (4 + 0));
count(1, 0);
  var_consD = (var_consD + ((count(0,1), Mem[var_consP]) + 0));
  if (count(1,0), var_consD < var_H) goto Label__consSymbolD; else goto Label__join_483_13;

Label__join_488_13:
count(1, 0);
  Mem[var_consA] = (count(0,1), (count(0,1), Mem[var_consA]) + (1 + 0));
  goto Label__split_486_11;

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
  if (count(1,0), var_consA < var_H) goto Label__consSymbolA; else goto Label__join_488_13;

Label__join_500_6:
count(1, 0);
  var_z = (var_z - (var_H + 0));
  if (!(var_z == 0 && 1)){
    fprintf(stderr,"\nAssertion failure at line ~498\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_failed = (var_failed - (1 + 0));
  goto Label__consFail;

Label__used:
  if (count(1,0), !((count(0,1), Mem[var_z]) > 0)){
    fprintf(stderr,"\nJoin failure at line 501\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_500_6;

Label__split_501_10:
  if (count(1,0), (count(0,1), Mem[var_z]) > 0){
    fprintf(stderr,"\nJoin failure at line 501\n");
  writeVars(); goto programEnd;
}
  if (count(1,0), var_H != var_z) goto Label__dump; else goto Label__join_500_6;

Label__join_503_6:
count(1, 0);
  var_y = (var_y - (1 + 0));
  goto Label__split_501_10;

Label__dump:
  if (count(1,0), !(var_z < var_endH)){
    fprintf(stderr,"\nJoin failure at line 505\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_503_6;

Label__split_505_10:
  if (count(1,0), var_z < var_endH){
    fprintf(stderr,"\nJoin failure at line 505\n");
  writeVars(); goto programEnd;
}
count(1, 0);
  var_z = (var_z - (12 + 0));
  if (count(1,0), (count(0,1), Mem[var_z]) > 0) goto Label__used; else goto Label__join_503_6;

Label__failedCons:
fprintf(stderr," free nodes: %d,", var_y);
  goto Label__split_505_10;

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
    fprintf(stderr,"\nAssertion failure at line ~510\n");
  writeVars(); goto programEnd;
}
  goto *stack[--stackPointer];


}