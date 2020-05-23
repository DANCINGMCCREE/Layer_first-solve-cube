#include <stdio.h>
#include "cubestruct.h"
#include "step1.h"
#include "step2.h"
#include "step3.h"
#include "step4.h"
#include "step5.h"
#include "step6.h"
#include "step7.h"
#include "cubecheck.h"

Cube CU;
int flag = 0;
int operate[300] = { 0 };
int clockwise_angle_div90[300] = { 0 };

int main() {
	int a, b, c, d, e, f, g, h, i, j, k;
	int mark_angle = 0;
	int mark;
	int triger = 1;
	//int mark = 0;
	//white=0 yellow=1 blue=2 green=3 red=4 orange=5
	CU.down[0][0] = 0;
	CU.down[0][1] = 0;
	CU.down[0][2] = 0;
	CU.down[1][0] = 0;
	CU.down[1][1] = 0;
	CU.down[1][2] = 0;
	CU.down[2][0] = 0;
	CU.down[2][1] = 0;
	CU.down[2][2] = 0;

	CU.up[0][0] = 2;
	CU.up[0][1] = 1;
	CU.up[0][2] = 1;
	CU.up[1][0] = 1;
	CU.up[1][1] = 1;
	CU.up[1][2] = 2;
	CU.up[2][0] = 3;
	CU.up[2][1] = 3;
	CU.up[2][2] = 1;

	CU.front[0][0] = 4;
	CU.front[0][1] = 1;
	CU.front[0][2] = 3;
	CU.front[1][0] = 2;
	CU.front[1][1] = 2;
	CU.front[1][2] = 2;
	CU.front[2][0] = 2;
	CU.front[2][1] = 2;
	CU.front[2][2] = 2;

	CU.back[0][0] = 2;
	CU.back[0][1] = 4;
	CU.back[0][2] = 4;
	CU.back[1][0] = 3;
	CU.back[1][1] = 3;
	CU.back[1][2] = 3;
	CU.back[2][0] = 3;
	CU.back[2][1] = 3;
	CU.back[2][2] = 3;

	CU.right[0][0] = 5;
	CU.right[0][1] = 1;
	CU.right[0][2] = 5;
	CU.right[1][0] = 4;
	CU.right[1][1] = 4;
	CU.right[1][2] = 4;
	CU.right[2][0] = 4;
	CU.right[2][1] = 4;
	CU.right[2][2] = 4;

	CU.left[0][0] = 1;
	CU.left[0][1] = 5;
	CU.left[0][2] = 1;
	CU.left[1][0] = 5;
	CU.left[1][1] = 5;
	CU.left[1][2] = 5;
	CU.left[2][0] = 5;
	CU.left[2][1] = 5;
	CU.left[2][2] = 5;


	down_cross();
	a = CU.down[0][1];
	b = CU.down[1][0];
	c = CU.down[1][2];
	d = CU.down[2][1];
	e = CU.front[2][1];
	f = CU.right[2][1];
	g = CU.back[2][1];
	h = CU.left[2][1];
	printf("\n");

	//printf("%d, %d, %d, %d, %d, %d, %d, %d", a, b, c, d, e, f, g, h);
	completedown();
	a = CU.down[0][0];
	b = CU.down[0][1];
	c = CU.down[0][2];
	d = CU.down[1][0];
	e = CU.down[1][2];
	f = CU.down[2][0];
	g = CU.down[2][1];
	h = CU.down[2][2];
	printf("\n");

	//printf("%d, %d, %d, %d, %d, %d, %d, %d", a, b, c, d, e, f, g, h);
	secondlayer();
	printf("\n");
	topcross();
	printf("\n");
	topcorner();
	printf("\n");
	topcomplete();
	printf("\n");
	finishcube();
	printf("\n");
	checkcube();
	//合并多步转同一个面的操作

	while (triger) {
		for (i = 0; i < flag; i++) {
			mark_angle = clockwise_angle_div90[i];
			for (j = 1; j <= flag - i; j++)
				if (operate[i] != operate[i + j]) { j--; break; }
			if (j != 0) {
				for (k = 1; k <= j; k++)
				{
					mark_angle += clockwise_angle_div90[i + k];
					operate[i + k] = 0;
					clockwise_angle_div90[i + k] = 0;
				}
				clockwise_angle_div90[i] = mark_angle % 4;
			}
		}
		//去掉数组里的0；
		mark = 0;
		for (i = 0; i <= flag; i++) {
			if (clockwise_angle_div90[i] != 0) {
				operate[mark] = operate[i];
				clockwise_angle_div90[mark] = clockwise_angle_div90[i];
				mark++;
			}

		}
		flag = mark - 1;
		triger = 0;
		for (i = 0; i < flag; i++)
		{
			if (operate[i] == operate[i + 1]) { triger = 1; break; }
		}
	}
	printf("steps: %d\n", mark);
	for (i = 0; i < mark; i++) {
		printf("%d : ", i);
		switch (operate[i]) {
		case 1: {
			if (clockwise_angle_div90[i] == 1) { printf("D "); }
			else if (clockwise_angle_div90[i] == 2) { printf("D2 "); }
			else if (clockwise_angle_div90[i] == 3) { printf("ANTI_D "); }
			break;
		}
		case 2: {
			if (clockwise_angle_div90[i] == 1) { printf("U "); }
			else if (clockwise_angle_div90[i] == 2) { printf("U2 "); }
			else if (clockwise_angle_div90[i] == 3) { printf("ANTI_U "); }
			break;
		}
		case 3: {
			if (clockwise_angle_div90[i] == 1) { printf("F "); }
			else if (clockwise_angle_div90[i] == 2) { printf("F2 "); }
			else if (clockwise_angle_div90[i] == 3) { printf("ANTI_F "); }
			break;
		}
		case 4: {
			if (clockwise_angle_div90[i] == 1) { printf("B "); }
			else if (clockwise_angle_div90[i] == 2) { printf("B2 "); }
			else if (clockwise_angle_div90[i] == 3) { printf("ANTI_B "); }
			break;
		}
		case 5: {
			if (clockwise_angle_div90[i] == 1) { printf("R "); }
			else if (clockwise_angle_div90[i] == 2) { printf("R2 "); }
			else if (clockwise_angle_div90[i] == 3) { printf("ANTI_R "); }
			break;
		}
		case 6: {
			if (clockwise_angle_div90[i] == 1) { printf("L "); }
			else if (clockwise_angle_div90[i] == 2) { printf("L2 "); }
			else if (clockwise_angle_div90[i] == 3) { printf("ANTI_L "); }
			break;
		}
		default: break;

		}
		printf("\n");
	}

	//if ((4 % 4) == 4) printf("asdasdad");

	return 0;
}