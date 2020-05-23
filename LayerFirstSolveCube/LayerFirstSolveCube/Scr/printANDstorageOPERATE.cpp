#include <stdio.h>
#include "printANDstorageOPERATE.h"

extern int flag;
extern int operate[300] ;
extern int clockwise_angle_div90[300];

void P_D() { printf("D "); operate[flag] = 1; clockwise_angle_div90[flag] = 1; flag++; return; }
void P_U() { printf("U "); operate[flag] = 2; clockwise_angle_div90[flag] = 1; flag++; return; }
void P_F() { printf("F "); operate[flag] = 3; clockwise_angle_div90[flag] = 1; flag++; return; }
void P_B() { printf("B "); operate[flag] = 4; clockwise_angle_div90[flag] = 1; flag++; return; }
void P_R() { printf("R "); operate[flag] = 5; clockwise_angle_div90[flag] = 1; flag++; return; }
void P_L() { printf("L "); operate[flag] = 6; clockwise_angle_div90[flag] = 1; flag++; return; }

void P_D2() { printf("D2 "); operate[flag] = 1; clockwise_angle_div90[flag] = 2; flag++; return; }
void P_U2() { printf("U2 "); operate[flag] = 2; clockwise_angle_div90[flag] = 2; flag++; return; }
void P_F2() { printf("F2 "); operate[flag] = 3; clockwise_angle_div90[flag] = 2; flag++; return; }
void P_B2() { printf("B2 "); operate[flag] = 4; clockwise_angle_div90[flag] = 2; flag++; return; }
void P_R2() { printf("R2 "); operate[flag] = 5; clockwise_angle_div90[flag] = 2; flag++; return; }
void P_L2() { printf("L2 "); operate[flag] = 6; clockwise_angle_div90[flag] = 2; flag++; return; }

void P_ANTI_D() { printf("ANTI_D "); operate[flag] = 1; clockwise_angle_div90[flag] = 3; flag++; return; }
void P_ANTI_U() { printf("ANTI_U "); operate[flag] = 2; clockwise_angle_div90[flag] = 3; flag++; return; }
void P_ANTI_F() { printf("ANTI_F "); operate[flag] = 3; clockwise_angle_div90[flag] = 3; flag++; return; }
void P_ANTI_B() { printf("ANTI_B "); operate[flag] = 4; clockwise_angle_div90[flag] = 3; flag++; return; }
void P_ANTI_R() { printf("ANTI_R "); operate[flag] = 5; clockwise_angle_div90[flag] = 3; flag++; return; }
void P_ANTI_L() { printf("ANTI_L "); operate[flag] = 6; clockwise_angle_div90[flag] = 3; flag++; return; }
