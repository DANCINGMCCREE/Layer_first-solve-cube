#include<stdio.h>
#include "cubestruct.h"

extern Cube CU;

void checkcube() {
	printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n", CU.down[0][0], CU.down[0][1], CU.down[0][2], CU.down[1][0], CU.down[1][1], CU.down[1][2], CU.down[2][0], CU.down[2][1], CU.down[2][2]);
	printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n", CU.up[0][0], CU.up[0][1], CU.up[0][2], CU.up[1][0], CU.up[1][1], CU.up[1][2], CU.up[2][0], CU.up[2][1], CU.up[2][2]);
	printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n", CU.front[0][0], CU.front[0][1], CU.front[0][2], CU.front[1][0], CU.front[1][1], CU.front[1][2], CU.front[2][0], CU.front[2][1], CU.front[2][2]);
	printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n", CU.back[0][0], CU.back[0][1], CU.back[0][2], CU.back[1][0], CU.back[1][1], CU.back[1][2], CU.back[2][0], CU.back[2][1], CU.back[2][2]);
	printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n", CU.right[0][0], CU.right[0][1], CU.right[0][2], CU.right[1][0], CU.right[1][1], CU.right[1][2], CU.right[2][0], CU.right[2][1], CU.right[2][2]);
	printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n", CU.left[0][0], CU.left[0][1], CU.left[0][2], CU.left[1][0], CU.left[1][1], CU.left[1][2], CU.left[2][0], CU.left[2][1], CU.left[2][2]);
	return;
}

