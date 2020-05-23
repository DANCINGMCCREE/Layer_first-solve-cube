#include "step2.h"
#include "cubestruct.h"
#include "operate.h"
#include "printANDstorageOPERATE.h"

extern Cube CU;

void completedown() {

	//step0 find all white corner by white=0
	int flag_corner[9] = { 0 };
	int color_corner[4] = { 0 };//in order bwr bwo gwr gwo
	int i;
	int j = 0;
	/*each corner's place:
	1:up-left-back
	2:up-right-back
	3:up-left-front
	4:up-right-front
	5:down-left-back
	6:down-right-back
	7:down-left-front
	8:down-right-front
	*/
	if (CU.up[0][0] * CU.back[0][2] * CU.left[0][0] == 0) { flag_corner[1] = 1; }
	if (CU.up[0][2] * CU.back[0][0] * CU.right[0][2] == 0) { flag_corner[2] = 1; }
	if (CU.up[2][0] * CU.front[0][0] * CU.left[0][2] == 0) { flag_corner[3] = 1; }
	if (CU.up[2][2] * CU.front[0][2] * CU.right[0][0] == 0) { flag_corner[4] = 1; }
	if (CU.down[2][0] * CU.back[2][2] * CU.left[2][0] == 0) { flag_corner[5] = 1; }
	if (CU.down[2][2] * CU.back[2][0] * CU.right[2][2] == 0) { flag_corner[6] = 1; }
	if (CU.down[0][0] * CU.front[2][0] * CU.left[2][2] == 0) { flag_corner[7] = 1; }
	if (CU.down[0][2] * CU.front[2][2] * CU.right[2][0] == 0) { flag_corner[8] = 1; }

	/*for (i = 1; i++; i <= 8)
	{
		if (flag_corner[i] == 1) { white_corner[j] = i; j++; }
	}*/
	//j = 0;
	//i = 1;
	//step1 find blue-white-red 0+2+4=6,2*4=8,2*4*0=0
	if ((flag_corner[1] == 1) && (CU.up[0][0] + CU.back[0][2] + CU.left[0][0] == 6))
	{
		//color_corner[0] = 1;
		if (CU.up[0][0] == 0) { U2(); R(); U2(); ANTI_R(); U2(); ANTI_F(); U(); F(); P_U2(); P_R(); P_U2(); P_ANTI_R(); P_U2(); P_ANTI_F(); P_U(); P_F(); }
		else if (CU.left[0][0] == 0) { ANTI_F(); U2(); F(); P_ANTI_F(); P_U2(); P_F(); }
		else if (CU.back[0][2] == 0) { R(); U2(); ANTI_R(); P_R(); P_U2(); P_ANTI_R(); }
	}
	else if ((flag_corner[2] == 1) && (CU.up[0][2] + CU.back[0][0] + CU.right[0][2] == 6))
	{
		//color_corner[0] = 2;
	/*	if(CU.up[0][2]==0){ U(); R(); U2(); ANTI_R(); U2(); ANTI_F(); U(); F(); P_U(); P_R(); P_U2(); P_ANTI_R(); P_U2(); P_ANTI_F(); P_U(); P_F();}
		else if (CU.back[0][0] == 0) { ANTI_F(); U(); F(); }
		else if
		*/
		ANTI_U();
		P_ANTI_U();
		if (CU.up[0][0] == 0) { U2(); R(); U2(); ANTI_R(); U2(); ANTI_F(); U(); F(); P_U2(); P_R(); P_U2(); P_ANTI_R(); P_U2(); P_ANTI_F(); P_U(); P_F(); }
		else if (CU.left[0][0] == 0) { ANTI_F(); U2(); F(); P_ANTI_F(); P_U2(); P_F(); }
		else if (CU.back[0][2] == 0) { R(); U2(); ANTI_R(); P_R(); P_U2(); P_ANTI_R(); }
	}
	else if ((flag_corner[3] == 1) && (CU.up[2][0] + CU.front[0][0] + CU.left[0][2] == 6))
	{
		U();
		P_U();
		if (CU.up[0][0] == 0) { U2(); R(); U2(); ANTI_R(); U2(); ANTI_F(); U(); F(); P_U2(); P_R(); P_U2(); P_ANTI_R(); P_U2(); P_ANTI_F(); P_U(); P_F(); }
		else if (CU.left[0][0] == 0) { ANTI_F(); U2(); F(); P_ANTI_F(); P_U2(); P_F(); }
		else if (CU.back[0][2] == 0) { R(); U2(); ANTI_R(); P_R(); P_U2(); P_ANTI_R(); }
	}
	else if ((flag_corner[4] == 1) && (CU.up[2][2] + CU.front[0][2] + CU.right[0][0] == 6))
	{
		U2();
		P_U2();
		if (CU.up[0][0] == 0) { U2(); R(); U2(); ANTI_R(); U2(); ANTI_F(); U(); F(); P_U2(); P_R(); P_U2(); P_ANTI_R(); P_U2(); P_ANTI_F(); P_U(); P_F(); }
		else if (CU.left[0][0] == 0) { ANTI_F(); U2(); F(); P_ANTI_F(); P_U2(); P_F(); }
		else if (CU.back[0][2] == 0) { R(); U2(); ANTI_R(); P_R(); P_U2(); P_ANTI_R(); }
	}
	else if ((flag_corner[5] == 1) && (CU.down[2][0] + CU.back[2][2] + CU.left[2][0] == 6))
	{
		ANTI_B();
		U();
		B();
		P_ANTI_B();
		P_U();
		P_B();
		if (CU.up[0][0] == 0) { U2(); R(); U2(); ANTI_R(); U2(); ANTI_F(); U(); F(); P_U2(); P_R(); P_U2(); P_ANTI_R(); P_U2(); P_ANTI_F(); P_U(); P_F(); }
		else if (CU.left[0][0] == 0) { ANTI_F(); U2(); F(); P_ANTI_F(); P_U2(); P_F(); }
		else if (CU.back[0][2] == 0) { R(); U2(); ANTI_R(); P_R(); P_U2(); P_ANTI_R(); }

	}
	else if ((flag_corner[6] == 1) && (CU.down[2][2] + CU.back[2][0] + CU.right[2][2] == 6))
	{
		//color_corner[0] = 6;
		ANTI_R();
		ANTI_U();
		R();
		P_ANTI_R();
		P_ANTI_U();
		P_R();
		if (CU.up[0][0] == 0) { U2(); R(); U2(); ANTI_R(); U2(); ANTI_F(); U(); F(); P_U2(); P_R(); P_U2(); P_ANTI_R(); P_U2(); P_ANTI_F(); P_U(); P_F(); }
		else if (CU.left[0][0] == 0) { ANTI_F(); U2(); F(); P_ANTI_F(); P_U2(); P_F(); }
		else if (CU.back[0][2] == 0) { R(); U2(); ANTI_R(); P_R(); P_U2(); P_ANTI_R(); }

	}
	else if ((flag_corner[7] == 1) && (CU.down[0][0] + CU.front[2][0] + CU.left[2][2] == 6))
	{
		//color_corner[0] = 7;
		F();
		U();
		ANTI_F();
		P_F();
		P_U();
		P_ANTI_F();
		if (CU.up[0][0] == 0) { U2(); R(); U2(); ANTI_R(); U2(); ANTI_F(); U(); F(); P_U2(); P_R(); P_U2(); P_ANTI_R(); P_U2(); P_ANTI_F(); P_U(); P_F(); }
		else if (CU.left[0][0] == 0) { ANTI_F(); U2(); F(); P_ANTI_F(); P_U2(); P_F(); }
		else if (CU.back[0][2] == 0) { R(); U2(); ANTI_R(); P_R(); P_U2(); P_ANTI_R(); }

	}
	else if ((flag_corner[8] == 1) && (CU.down[0][2] + CU.front[2][2] + CU.right[2][0] == 6))
	{
		if (CU.down[0][2] == 0) { ; }
		else {
			ANTI_F();
			U2();
			F();
			P_ANTI_F();
			P_U2();
			P_F();
			if (CU.up[0][0] == 0) { U2(); R(); U2(); ANTI_R(); U2(); ANTI_F(); U(); F(); P_U2(); P_R(); P_U2(); P_ANTI_R(); P_U2(); P_ANTI_F(); P_U(); P_F(); }
			else if (CU.left[0][0] == 0) { ANTI_F(); U2(); F(); P_ANTI_F(); P_U2(); P_F(); }
			else if (CU.back[0][2] == 0) { R(); U2(); ANTI_R(); P_R(); P_U2(); P_ANTI_R(); }
		}
	}
	for (i = 1; i < 9; i++)
	{
		flag_corner[i] = 0;
	}
	if (CU.up[0][0] * CU.back[0][2] * CU.left[0][0] == 0) { flag_corner[1] = 1; }
	if (CU.up[0][2] * CU.back[0][0] * CU.right[0][2] == 0) { flag_corner[2] = 1; }
	if (CU.up[2][0] * CU.front[0][0] * CU.left[0][2] == 0) { flag_corner[3] = 1; }
	if (CU.up[2][2] * CU.front[0][2] * CU.right[0][0] == 0) { flag_corner[4] = 1; }
	if (CU.down[2][0] * CU.back[2][2] * CU.left[2][0] == 0) { flag_corner[5] = 1; }
	if (CU.down[2][2] * CU.back[2][0] * CU.right[2][2] == 0) { flag_corner[6] = 1; }
	if (CU.down[0][0] * CU.front[2][0] * CU.left[2][2] == 0) { flag_corner[7] = 1; }
	if (CU.down[0][2] * CU.front[2][2] * CU.right[2][0] == 0) { flag_corner[8] = 1; }
	//step2 find blue-white-orange 0+2+5=7,0*2*5=0£¬2*5=10,xy+yz+zx=10
	if ((flag_corner[1] == 1) && (CU.up[0][0] * CU.back[0][2] + CU.left[0][0] * CU.back[0][2] + CU.left[0][0] * CU.up[0][0] == 10))
	{
		if (CU.up[0][0] == 0) { F(); U2(); ANTI_F(); U(); F(); ANTI_U(); ANTI_F(); P_F(); P_U2(); P_ANTI_F(); P_U(); P_F(); P_ANTI_U(); P_ANTI_F(); }
		else if (CU.left[0][0] == 0) { ANTI_U(); F(); U(); ANTI_F(); P_ANTI_U(); P_F(); P_U(); P_ANTI_F(); }
		else if (CU.back[0][2] == 0) { F(); ANTI_U(); ANTI_F();  P_F(); P_ANTI_U(); P_ANTI_F(); }
	}
	else if ((flag_corner[2] == 1) && (CU.up[0][2] * CU.back[0][0] + CU.back[0][0] * CU.right[0][2] + CU.right[0][2] * CU.up[0][2] == 10))
	{
		ANTI_U();
		P_ANTI_U();
		if (CU.up[0][0] == 0) { F(); U2(); ANTI_F(); U(); F(); ANTI_U(); ANTI_F(); P_F(); P_U2(); P_ANTI_F(); P_U(); P_F(); P_ANTI_U(); P_ANTI_F(); }
		else if (CU.left[0][0] == 0) { ANTI_U(); F(); U(); ANTI_F(); P_ANTI_U(); P_F(); P_U(); P_ANTI_F(); }
		else if (CU.back[0][2] == 0) { F(); ANTI_U(); ANTI_F();  P_F(); P_ANTI_U(); P_ANTI_F(); }
	}
	else if ((flag_corner[3] == 1) && (CU.up[2][0] * CU.front[0][0] + CU.front[0][0] * CU.left[0][2] + CU.left[0][2] * CU.up[2][0] == 10))
	{
		U();
		P_U();
		if (CU.up[0][0] == 0) { F(); U2(); ANTI_F(); U(); F(); ANTI_U(); ANTI_F(); P_F(); P_U2(); P_ANTI_F(); P_U(); P_F(); P_ANTI_U(); P_ANTI_F(); }
		else if (CU.left[0][0] == 0) { ANTI_U(); F(); U(); ANTI_F(); P_ANTI_U(); P_F(); P_U(); P_ANTI_F(); }
		else if (CU.back[0][2] == 0) { F(); ANTI_U(); ANTI_F();  P_F(); P_ANTI_U(); P_ANTI_F(); }
	}
	else if ((flag_corner[4] == 1) && (CU.up[2][2] * CU.front[0][2] + CU.front[0][2] * CU.right[0][0] + CU.right[0][0] * CU.up[2][2] == 10))
	{
		U2();
		P_U2();
		if (CU.up[0][0] == 0) { F(); U2(); ANTI_F(); U(); F(); ANTI_U(); ANTI_F(); P_F(); P_U2(); P_ANTI_F(); P_U(); P_F(); P_ANTI_U(); P_ANTI_F(); }
		else if (CU.left[0][0] == 0) { ANTI_U(); F(); U(); ANTI_F(); P_ANTI_U(); P_F(); P_U(); P_ANTI_F(); }
		else if (CU.back[0][2] == 0) { F(); ANTI_U(); ANTI_F();  P_F(); P_ANTI_U(); P_ANTI_F(); }
	}
	else if ((flag_corner[5] == 1) && (CU.down[2][0] * CU.back[2][2] + CU.back[2][2] * CU.left[2][0] + CU.left[2][0] * CU.down[2][0] == 10))
	{
		ANTI_B();
		U();
		B();
		P_ANTI_B();
		P_U();
		P_B();
		if (CU.up[0][0] == 0) { F(); U2(); ANTI_F(); U(); F(); ANTI_U(); ANTI_F(); P_F(); P_U2(); P_ANTI_F(); P_U(); P_F(); P_ANTI_U(); P_ANTI_F(); }
		else if (CU.left[0][0] == 0) { ANTI_U(); F(); U(); ANTI_F(); P_ANTI_U(); P_F(); P_U(); P_ANTI_F(); }
		else if (CU.back[0][2] == 0) { F(); ANTI_U(); ANTI_F();  P_F(); P_ANTI_U(); P_ANTI_F(); }
	}
	else if ((flag_corner[6] == 1) && (CU.down[2][2] * CU.back[2][0] + CU.back[2][0] * CU.right[2][2] + CU.right[2][2] * CU.down[2][2] == 10))
	{
		ANTI_R();
		ANTI_U();
		R();
		P_ANTI_R();
		P_ANTI_U();
		P_R();
		if (CU.up[0][0] == 0) { F(); U2(); ANTI_F(); U(); F(); ANTI_U(); ANTI_F(); P_F(); P_U2(); P_ANTI_F(); P_U(); P_F(); P_ANTI_U(); P_ANTI_F(); }
		else if (CU.left[0][0] == 0) { ANTI_U(); F(); U(); ANTI_F(); P_ANTI_U(); P_F(); P_U(); P_ANTI_F(); }
		else if (CU.back[0][2] == 0) { F(); ANTI_U(); ANTI_F();  P_F(); P_ANTI_U(); P_ANTI_F(); }
	}
	else if ((flag_corner[7] == 1) && (CU.down[0][0] * CU.front[2][0] + CU.front[2][0] * CU.left[2][2] + CU.left[2][2] * CU.down[0][0] == 10))
	{
		if (CU.down[0][0] == 0) { ; }
		else {
			F();
			U();
			ANTI_F();
			P_F();
			P_U();
			P_ANTI_F();
			if (CU.up[0][0] == 0) { F(); U2(); ANTI_F(); U(); F(); ANTI_U(); ANTI_F(); P_F(); P_U2(); P_ANTI_F(); P_U(); P_F(); P_ANTI_U(); P_ANTI_F(); }
			else if (CU.left[0][0] == 0) { ANTI_U(); F(); U(); ANTI_F(); P_ANTI_U(); P_F(); P_U(); P_ANTI_F(); }
			else if (CU.back[0][2] == 0) { F(); ANTI_U(); ANTI_F();  P_F(); P_ANTI_U(); P_ANTI_F(); }
		}
	}
	else if ((flag_corner[8] == 1) && (CU.down[0][2] * CU.front[2][2] + CU.front[2][2] * CU.right[2][0] + CU.right[2][0] * CU.down[0][2] == 10))
	{
		ANTI_F();
		U2();
		F();
		P_ANTI_F();
		P_U2();
		P_F();
		if (CU.up[0][0] == 0) { F(); U2(); ANTI_F(); U(); F(); ANTI_U(); ANTI_F(); P_F(); P_U2(); P_ANTI_F(); P_U(); P_F(); P_ANTI_U(); P_ANTI_F(); }
		else if (CU.left[0][0] == 0) { ANTI_U(); F(); U(); ANTI_F(); P_ANTI_U(); P_F(); P_U(); P_ANTI_F(); }
		else if (CU.back[0][2] == 0) { F(); ANTI_U(); ANTI_F();  P_F(); P_ANTI_U(); P_ANTI_F(); }
	}
	for (i = 1; i < 9; i++)
	{
		flag_corner[i] = 0;
	}
	if (CU.up[0][0] * CU.back[0][2] * CU.left[0][0] == 0) { flag_corner[1] = 1; }
	if (CU.up[0][2] * CU.back[0][0] * CU.right[0][2] == 0) { flag_corner[2] = 1; }
	if (CU.up[2][0] * CU.front[0][0] * CU.left[0][2] == 0) { flag_corner[3] = 1; }
	if (CU.up[2][2] * CU.front[0][2] * CU.right[0][0] == 0) { flag_corner[4] = 1; }
	if (CU.down[2][0] * CU.back[2][2] * CU.left[2][0] == 0) { flag_corner[5] = 1; }
	if (CU.down[2][2] * CU.back[2][0] * CU.right[2][2] == 0) { flag_corner[6] = 1; }
	if (CU.down[0][0] * CU.front[2][0] * CU.left[2][2] == 0) { flag_corner[7] = 1; }
	if (CU.down[0][2] * CU.front[2][2] * CU.right[2][0] == 0) { flag_corner[8] = 1; }
	//step3 find green-white-red 0+3+4=7,0*3*4=0£¬3*4=12

	if ((flag_corner[1] == 1) && (CU.up[0][0] * CU.back[0][2] + CU.left[0][0] * CU.back[0][2] + CU.left[0][0] * CU.up[0][0] == 12))
	{
		if (CU.up[0][0] == 0) { U(); B(); U2(); ANTI_B(); U2(); ANTI_R(); U(); R(); P_U(); P_B(); P_U2(); P_ANTI_B(); P_U2(); P_ANTI_R(); P_U(); P_R(); }
		else if (CU.left[0][0] == 0) { ANTI_R(); U(); R(); P_ANTI_R(); P_U(); P_R(); }
		else if (CU.back[0][2] == 0) { U2(); B(); ANTI_U(); ANTI_B(); P_U2(); P_B(); P_ANTI_U(); P_ANTI_B(); }
	}
	else if ((flag_corner[2] == 1) && (CU.up[0][2] * CU.back[0][0] + CU.back[0][0] * CU.right[0][2] + CU.right[0][2] * CU.up[0][2] == 12))
	{
		ANTI_U();
		P_ANTI_U();
		if (CU.up[0][0] == 0) { U(); B(); U2(); ANTI_B(); U2(); ANTI_R(); U(); R(); P_U(); P_B(); P_U2(); P_ANTI_B(); P_U2(); P_ANTI_R(); P_U(); P_R(); }
		else if (CU.left[0][0] == 0) { ANTI_R(); U(); R(); P_ANTI_R(); P_U(); P_R(); }
		else if (CU.back[0][2] == 0) { U2(); B(); ANTI_U(); ANTI_B(); P_U2(); P_B(); P_ANTI_U(); P_ANTI_B(); }
	}
	else if ((flag_corner[3] == 1) && (CU.up[2][0] * CU.front[0][0] + CU.front[0][0] * CU.left[0][2] + CU.left[0][2] * CU.up[2][0] == 12))
	{
		U();
		P_U();
		if (CU.up[0][0] == 0) { U(); B(); U2(); ANTI_B(); U2(); ANTI_R(); U(); R(); P_U(); P_B(); P_U2(); P_ANTI_B(); P_U2(); P_ANTI_R(); P_U(); P_R(); }
		else if (CU.left[0][0] == 0) { ANTI_R(); U(); R(); P_ANTI_R(); P_U(); P_R(); }
		else if (CU.back[0][2] == 0) { U2(); B(); ANTI_U(); ANTI_B(); P_U2(); P_B(); P_ANTI_U(); P_ANTI_B(); }
	}
	else if ((flag_corner[4] == 1) && (CU.up[2][2] * CU.front[0][2] + CU.front[0][2] * CU.right[0][0] + CU.right[0][0] * CU.up[2][2] == 12))
	{
		U2();
		P_U2();
		if (CU.up[0][0] == 0) { U(); B(); U2(); ANTI_B(); U2(); ANTI_R(); U(); R(); P_U(); P_B(); P_U2(); P_ANTI_B(); P_U2(); P_ANTI_R(); P_U(); P_R(); }
		else if (CU.left[0][0] == 0) { ANTI_R(); U(); R(); P_ANTI_R(); P_U(); P_R(); }
		else if (CU.back[0][2] == 0) { U2(); B(); ANTI_U(); ANTI_B(); P_U2(); P_B(); P_ANTI_U(); P_ANTI_B(); }
	}
	else if ((flag_corner[5] == 1) && (CU.down[2][0] * CU.back[2][2] + CU.back[2][2] * CU.left[2][0] + CU.left[2][0] * CU.down[2][0] == 12))
	{
		ANTI_B();
		U();
		B();
		P_ANTI_B();
		P_U();
		P_B();
		if (CU.up[0][0] == 0) { U(); B(); U2(); ANTI_B(); U2(); ANTI_R(); U(); R(); P_U(); P_B(); P_U2(); P_ANTI_B(); P_U2(); P_ANTI_R(); P_U(); P_R(); }
		else if (CU.left[0][0] == 0) { ANTI_R(); U(); R(); P_ANTI_R(); P_U(); P_R(); }
		else if (CU.back[0][2] == 0) { U2(); B(); ANTI_U(); ANTI_B(); P_U2(); P_B(); P_ANTI_U(); P_ANTI_B(); }
	}
	else if ((flag_corner[6] == 1) && (CU.down[2][2] * CU.back[2][0] + CU.back[2][0] * CU.right[2][2] + CU.right[2][2] * CU.down[2][2] == 12))
	{
		if (CU.down[2][2] == 0) { ; }
		else {
			ANTI_R();
			ANTI_U();
			R();
			P_ANTI_R();
			P_ANTI_U();
			P_R();
			if (CU.up[0][0] == 0) { U(); B(); U2(); ANTI_B(); U2(); ANTI_R(); U(); R(); P_U(); P_B(); P_U2(); P_ANTI_B(); P_U2(); P_ANTI_R(); P_U(); P_R(); }
			else if (CU.left[0][0] == 0) { ANTI_R(); U(); R(); P_ANTI_R(); P_U(); P_R(); }
			else if (CU.back[0][2] == 0) { U2(); B(); ANTI_U(); ANTI_B(); P_U2(); P_B(); P_ANTI_U(); P_ANTI_B(); }
		}
	}
	else if ((flag_corner[7] == 1) && (CU.down[0][0] * CU.front[2][0] + CU.front[2][0] * CU.left[2][2] + CU.left[2][2] * CU.down[0][0] == 12))
	{

		F();
		U();
		ANTI_F();
		P_F();
		P_U();
		P_ANTI_F();
		if (CU.up[0][0] == 0) { U(); B(); U2(); ANTI_B(); U2(); ANTI_R(); U(); R(); P_U(); P_B(); P_U2(); P_ANTI_B(); P_U2(); P_ANTI_R(); P_U(); P_R(); }
		else if (CU.left[0][0] == 0) { ANTI_R(); U(); R(); P_ANTI_R(); P_U(); P_R(); }
		else if (CU.back[0][2] == 0) { U2(); B(); ANTI_U(); ANTI_B(); P_U2(); P_B(); P_ANTI_U(); P_ANTI_B(); }

	}
	else if ((flag_corner[8] == 1) && (CU.down[0][2] * CU.front[2][2] + CU.front[2][2] * CU.right[2][0] + CU.right[2][0] * CU.down[0][2] == 12))
	{
		ANTI_F();
		U2();
		F();
		P_ANTI_F();
		P_U2();
		P_F();
		if (CU.up[0][0] == 0) { U(); B(); U2(); ANTI_B(); U2(); ANTI_R(); U(); R(); P_U(); P_B(); P_U2(); P_ANTI_B(); P_U2(); P_ANTI_R(); P_U(); P_R(); }
		else if (CU.left[0][0] == 0) { ANTI_R(); U(); R(); P_ANTI_R(); P_U(); P_R(); }
		else if (CU.back[0][2] == 0) { U2(); B(); ANTI_U(); ANTI_B(); P_U2(); P_B(); P_ANTI_U(); P_ANTI_B(); }
	}
	for (i = 1; i < 9; i++)
	{
		flag_corner[i] = 0;
	}
	if (CU.up[0][0] * CU.back[0][2] * CU.left[0][0] == 0) { flag_corner[1] = 1; }
	if (CU.up[0][2] * CU.back[0][0] * CU.right[0][2] == 0) { flag_corner[2] = 1; }
	if (CU.up[2][0] * CU.front[0][0] * CU.left[0][2] == 0) { flag_corner[3] = 1; }
	if (CU.up[2][2] * CU.front[0][2] * CU.right[0][0] == 0) { flag_corner[4] = 1; }
	if (CU.down[2][0] * CU.back[2][2] * CU.left[2][0] == 0) { flag_corner[5] = 1; }
	if (CU.down[2][2] * CU.back[2][0] * CU.right[2][2] == 0) { flag_corner[6] = 1; }
	if (CU.down[0][0] * CU.front[2][0] * CU.left[2][2] == 0) { flag_corner[7] = 1; }
	if (CU.down[0][2] * CU.front[2][2] * CU.right[2][0] == 0) { flag_corner[8] = 1; }

	//step4 find green-white-orange 0+3+5=8£¬3*5=15,0*3*5=0
	if ((flag_corner[1] == 1) && (CU.up[0][0] + CU.back[0][2] + CU.left[0][0] == 8))
	{
		//color_corner[0] = 1;
		if (CU.up[0][0] == 0) { L(); ANTI_U(); ANTI_L(); ANTI_B(); U2(); B(); P_L(); P_ANTI_U(); P_ANTI_L(); P_ANTI_B(); P_U2(); P_B(); }
		else if (CU.left[0][0] == 0) { ANTI_U(); ANTI_B(); U(); B(); P_ANTI_U(); P_ANTI_B(); P_U(); P_B(); }
		else if (CU.back[0][2] == 0) { U(); L(); ANTI_U(); ANTI_L(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L(); }
	}
	else if ((flag_corner[2] == 1) && (CU.up[0][2] + CU.back[0][0] + CU.right[0][2] == 8))
	{
		//color_corner[0] = 2;
	/*	if(CU.up[0][2]==0){ U(); R(); U2(); ANTI_R(); U2(); ANTI_F(); U(); F(); P_U(); P_R(); P_U2(); P_ANTI_R(); P_U2(); P_ANTI_F(); P_U(); P_F();}
		else if (CU.back[0][0] == 0) { ANTI_F(); U(); F(); }
		else if
		*/
		ANTI_U();
		P_ANTI_U();
		if (CU.up[0][0] == 0) { L(); ANTI_U(); ANTI_L(); ANTI_B(); U2(); B(); P_L(); P_ANTI_U(); P_ANTI_L(); P_ANTI_B(); P_U2(); P_B(); }
		else if (CU.left[0][0] == 0) { ANTI_U(); ANTI_B(); U(); B(); P_ANTI_U(); P_ANTI_B(); P_U(); P_B(); }
		else if (CU.back[0][2] == 0) { U(); L(); ANTI_U(); ANTI_L(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L(); }
	}
	else if ((flag_corner[3] == 1) && (CU.up[2][0] + CU.front[0][0] + CU.left[0][2] == 8))
	{
		U();
		P_U();
		if (CU.up[0][0] == 0) { L(); ANTI_U(); ANTI_L(); ANTI_B(); U2(); B(); P_L(); P_ANTI_U(); P_ANTI_L(); P_ANTI_B(); P_U2(); P_B(); }
		else if (CU.left[0][0] == 0) { ANTI_U(); ANTI_B(); U(); B(); P_ANTI_U(); P_ANTI_B(); P_U(); P_B(); }
		else if (CU.back[0][2] == 0) { U(); L(); ANTI_U(); ANTI_L(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L(); }
	}
	else if ((flag_corner[4] == 1) && (CU.up[2][2] + CU.front[0][2] + CU.right[0][0] == 8))
	{
		U2();
		P_U2();
		if (CU.up[0][0] == 0) { L(); ANTI_U(); ANTI_L(); ANTI_B(); U2(); B(); P_L(); P_ANTI_U(); P_ANTI_L(); P_ANTI_B(); P_U2(); P_B(); }
		else if (CU.left[0][0] == 0) { ANTI_U(); ANTI_B(); U(); B(); P_ANTI_U(); P_ANTI_B(); P_U(); P_B(); }
		else if (CU.back[0][2] == 0) { U(); L(); ANTI_U(); ANTI_L(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L(); }
	}
	else if ((flag_corner[5] == 1) && (CU.down[2][0] + CU.back[2][2] + CU.left[2][0] == 8))
	{
		if (CU.down[2][0] == 0) { ; }
		else {
			ANTI_B();
			U();
			B();
			P_ANTI_B();
			P_U();
			P_B();
			if (CU.up[0][0] == 0) { L(); ANTI_U(); ANTI_L(); ANTI_B(); U2(); B(); P_L(); P_ANTI_U(); P_ANTI_L(); P_ANTI_B(); P_U2(); P_B(); }
			else if (CU.left[0][0] == 0) { ANTI_U(); ANTI_B(); U(); B(); P_ANTI_U(); P_ANTI_B(); P_U(); P_B(); }
			else if (CU.back[0][2] == 0) { U(); L(); ANTI_U(); ANTI_L(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L(); }
		}
	}
	else if ((flag_corner[6] == 1) && (CU.down[2][2] + CU.back[2][0] + CU.right[2][2] == 8))
	{
		//color_corner[0] = 6;
		ANTI_R();
		ANTI_U();
		R();
		P_ANTI_R();
		P_ANTI_U();
		P_R();
		if (CU.up[0][0] == 0) { L(); ANTI_U(); ANTI_L(); ANTI_B(); U2(); B(); P_L(); P_ANTI_U(); P_ANTI_L(); P_ANTI_B(); P_U2(); P_B(); }
		else if (CU.left[0][0] == 0) { ANTI_U(); ANTI_B(); U(); B(); P_ANTI_U(); P_ANTI_B(); P_U(); P_B(); }
		else if (CU.back[0][2] == 0) { U(); L(); ANTI_U(); ANTI_L(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L(); }

	}
	else if ((flag_corner[7] == 1) && (CU.down[0][0] + CU.front[2][0] + CU.left[2][2] == 8))
	{
		//color_corner[0] = 7;
		F();
		U();
		ANTI_F();
		P_F();
		P_U();
		P_ANTI_F();
		if (CU.up[0][0] == 0) { L(); ANTI_U(); ANTI_L(); ANTI_B(); U2(); B(); P_L(); P_ANTI_U(); P_ANTI_L(); P_ANTI_B(); P_U2(); P_B(); }
		else if (CU.left[0][0] == 0) { ANTI_U(); ANTI_B(); U(); B(); P_ANTI_U(); P_ANTI_B(); P_U(); P_B(); }
		else if (CU.back[0][2] == 0) { U(); L(); ANTI_U(); ANTI_L(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L(); }

	}
	else if ((flag_corner[8] == 1) && (CU.down[0][2] + CU.front[2][2] + CU.right[2][0] == 8))
	{
		if (CU.down[0][2] == 0) { ; }
		else {
			ANTI_F();
			U2();
			F();
			P_ANTI_F();
			P_U2();
			P_F();
			if (CU.up[0][0] == 0) { L(); ANTI_U(); ANTI_L(); ANTI_B(); U2(); B(); P_L(); P_ANTI_U(); P_ANTI_L(); P_ANTI_B(); P_U2(); P_B(); }
			else if (CU.left[0][0] == 0) { ANTI_U(); ANTI_B(); U(); B(); P_ANTI_U(); P_ANTI_B(); P_U(); P_B(); }
			else if (CU.back[0][2] == 0) { U(); L(); ANTI_U(); ANTI_L(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L(); }
		}
	}

	return;
}