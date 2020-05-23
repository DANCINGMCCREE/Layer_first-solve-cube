#include "step3.h"
#include "cubestruct.h"
#include "operate.h"
#include "printANDstorageOPERATE.h"

extern Cube CU;

void secondlayer() {
	//white=0 yellow=1 blue=2 green=3 red=4 orange=5
	//y-b 1*2=2
	//y-g 1*3=3 
	//y-r 1*4=4 
	//y-o 1*5=5
	//b-r 2*4=8
	//r-g 4*3=12
	//g-o 3*5=15
	//o-b 5*2=10
	//step 1 find blue-red
	if (CU.front[1][2] * CU.right[1][0] == 8) {
		if (CU.front[1][2] == 2) { ; }
		else {
			ANTI_F(); U(); F(); U(); R(); ANTI_U(); ANTI_R(); P_ANTI_F(); P_U(); P_F(); P_U(); P_R(); P_ANTI_U(); P_ANTI_R();
		}
	}
	else if (CU.right[1][2] * CU.back[1][0] == 8) {
		ANTI_R(); U(); R(); U(); B(); ANTI_U(); ANTI_B(); P_ANTI_R(); P_U(); P_R(); P_U(); P_B(); P_ANTI_U(); P_ANTI_B();
	}
	else if (CU.back[1][2] * CU.left[1][0] == 8) {
		ANTI_B(); U(); B(); U(); L(); ANTI_U(); ANTI_L(); P_ANTI_B(); P_U(); P_B(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L();
	}
	else if (CU.left[1][2] * CU.front[1][0] == 8) {
		ANTI_L(); U(); L(); U(); F(); ANTI_U(); ANTI_F(); P_ANTI_L(); P_U(); P_L(); P_U(); P_F(); P_ANTI_U(); P_ANTI_F();
	}
	if (CU.front[0][1] * CU.up[2][1] == 8)
	{
		if (CU.front[0][1] == 2) { U(); R(); ANTI_U(); ANTI_R(); ANTI_U(); ANTI_F(); U(); F(); P_U(); P_R(); P_ANTI_U(); P_ANTI_R(); P_ANTI_U(); P_ANTI_F(); P_U(); P_F(); }
		else { U2(); ANTI_F(); U(); F(); U(); R(); ANTI_U(); ANTI_R();  P_U2(); P_ANTI_F(); P_U(); P_F(); P_U(); P_R(); P_ANTI_U(); P_ANTI_R(); }
	}
	else if (CU.right[0][1] * CU.up[1][2] == 8)
	{
		if (CU.right[0][1] == 2) { U2(); R(); ANTI_U(); ANTI_R(); ANTI_U(); ANTI_F(); U(); F(); P_U2(); P_R(); P_ANTI_U(); P_ANTI_R(); P_ANTI_U(); P_ANTI_F(); P_U(); P_F(); }
		else { ANTI_U(); ANTI_F(); U(); F(); U(); R(); ANTI_U(); ANTI_R(); P_ANTI_U(); P_ANTI_F(); P_U(); P_F(); P_U(); P_R(); P_ANTI_U(); P_ANTI_R(); }

	}
	else if (CU.back[0][1] * CU.up[0][1] == 8)
	{
		if (CU.back[0][1] == 2) { ANTI_U(); R(); ANTI_U(); ANTI_R(); ANTI_U(); ANTI_F(); U(); F(); P_ANTI_U(); P_R(); P_ANTI_U(); P_ANTI_R(); P_ANTI_U(); P_ANTI_F(); P_U(); P_F(); }
		else { ANTI_F(); U(); F(); U(); R(); ANTI_U(); ANTI_R(); P_ANTI_F(); P_U(); P_F(); P_U(); P_R(); P_ANTI_U(); P_ANTI_R(); }
	}
	else if (CU.left[0][1] * CU.up[1][0] == 8)
	{
		if (CU.left[0][1] == 2) {
			R(); ANTI_U(); ANTI_R(); ANTI_U(); ANTI_F(); U(); F(); P_R(); P_ANTI_U(); P_ANTI_R(); P_ANTI_U(); P_ANTI_F(); P_U(); P_F();
		}
		else { U(); ANTI_F(); U(); F(); U(); R(); ANTI_U(); ANTI_R(); P_U(); P_ANTI_F(); P_U(); P_F(); P_U(); P_R(); P_ANTI_U(); P_ANTI_R(); }
	}
	//step 2 find red-green

/*	if (CU.front[1][2] * CU.right[1][0] == 8) {
		if (CU.front[1][2] == 2) { ; }
		else {
			ANTI_F(); U(); F(); U(); R(); ANTI_U(); ANTI_R(); P_ANTI_F(); P_U(); P_F(); P_U(); P_R(); P_ANTI_U(); P_ANTI_R();
		}
	}*/
	if (CU.right[1][2] * CU.back[1][0] == 12) {
		if (CU.right[1][2] == 4) { ; }
		else { ANTI_R(); U(); R(); U(); B(); ANTI_U(); ANTI_B(); P_ANTI_R(); P_U(); P_R(); P_U(); P_B(); P_ANTI_U(); P_ANTI_B(); }
	}
	else if (CU.back[1][2] * CU.left[1][0] == 12) {
		ANTI_B(); U(); B(); U(); L(); ANTI_U(); ANTI_L(); P_ANTI_B(); P_U(); P_B(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L();
	}
	else if (CU.left[1][2] * CU.front[1][0] == 12) {
		ANTI_L(); U(); L(); U(); F(); ANTI_U(); ANTI_F(); P_ANTI_L(); P_U(); P_L(); P_U(); P_F(); P_ANTI_U(); P_ANTI_F();
	}
	if (CU.front[0][1] * CU.up[2][1] == 12)
	{
		if (CU.front[0][1] == 4) { B(); ANTI_U(); ANTI_B(); ANTI_U(); ANTI_R(); U(); R(); P_B(); P_ANTI_U(); P_ANTI_B(); P_ANTI_U(); P_ANTI_R(); P_U(); P_R(); }
		else { U(); ANTI_R(); U(); R(); U(); B(); ANTI_U(); ANTI_B(); P_U(); P_ANTI_R(); P_U(); P_R(); P_U(); P_B(); P_ANTI_U(); P_ANTI_B(); }
	}
	else if (CU.right[0][1] * CU.up[1][2] == 12)
	{
		if (CU.right[0][1] == 4) { U(); B(); ANTI_U(); ANTI_B(); ANTI_U(); ANTI_R(); U(); R(); P_U(); P_B(); P_ANTI_U(); P_ANTI_B(); P_ANTI_U(); P_ANTI_R(); P_U(); P_R(); }
		else { U2(); ANTI_R(); U(); R(); U(); B(); ANTI_U(); ANTI_B(); P_U2(); P_ANTI_R(); P_U(); P_R(); P_U(); P_B(); P_ANTI_U(); P_ANTI_B(); }

	}
	else if (CU.back[0][1] * CU.up[0][1] == 12)
	{
		if (CU.back[0][1] == 4) { U2(); B(); ANTI_U(); ANTI_B(); ANTI_U(); ANTI_R(); U(); R(); P_U2(); P_B(); P_ANTI_U(); P_ANTI_B(); P_ANTI_U(); P_ANTI_R(); P_U(); P_R(); }
		else { ANTI_U(); ANTI_R(); U(); R(); U(); B(); ANTI_U(); ANTI_B(); P_ANTI_U(); P_ANTI_R(); P_U(); P_R(); P_U(); P_B(); P_ANTI_U(); P_ANTI_B(); }
	}
	else if (CU.left[0][1] * CU.up[1][0] == 12)
	{
		if (CU.left[0][1] == 4) { ANTI_U(); B(); ANTI_U(); ANTI_B(); ANTI_U(); ANTI_R(); U(); R(); P_ANTI_U(); P_B(); P_ANTI_U(); P_ANTI_B(); P_ANTI_U(); P_ANTI_R(); P_U(); P_R(); }
		else { ANTI_R(); U(); R(); U(); B(); ANTI_U(); ANTI_B(); P_ANTI_R(); P_U(); P_R(); P_U(); P_B(); P_ANTI_U(); P_ANTI_B(); }
	}
	//step 3 find green-orange
	/*if (CU.right[1][2] * CU.back[1][0] == 12) {
		ANTI_R(); U(); R(); U(); B(); ANTI_U(); ANTI_B(); P_ANTI_R(); P_U(); P_R(); P_U(); P_B(); P_ANTI_U(); P_ANTI_B();
	}*/
	if (CU.back[1][2] * CU.left[1][0] == 15) {
		if (CU.back[1][2] == 3) { ; }
		else {
			ANTI_B(); U(); B(); U(); L(); ANTI_U(); ANTI_L(); P_ANTI_B(); P_U(); P_B(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L();
		}
	}
	else if (CU.left[1][2] * CU.front[1][0] == 15) {
		ANTI_L(); U(); L(); U(); F(); ANTI_U(); ANTI_F(); P_ANTI_L(); P_U(); P_L(); P_U(); P_F(); P_ANTI_U(); P_ANTI_F();
	}

	if (CU.front[0][1] * CU.up[2][1] == 15)
	{
		if (CU.front[0][1] == 3) { ANTI_U(); L(); ANTI_U(); ANTI_L(); ANTI_U(); ANTI_B(); U(); B(); P_ANTI_U(); P_L(); P_ANTI_U(); P_ANTI_L(); P_ANTI_U(); P_ANTI_B(); P_U(); P_B(); }
		else { ANTI_B(); U(); B(); U(); L(); ANTI_U(); ANTI_L();  P_ANTI_B(); P_U(); P_B(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L(); }
	}
	else if (CU.right[0][1] * CU.up[1][2] == 15)
	{
		if (CU.right[0][1] == 3) { L(); ANTI_U(); ANTI_L(); ANTI_U(); ANTI_B(); U(); B();  P_L(); P_ANTI_U(); P_ANTI_L(); P_ANTI_U(); P_ANTI_B(); P_U(); P_B(); }
		else { U(); ANTI_B(); U(); B(); U(); L(); ANTI_U(); ANTI_L(); P_U();  P_ANTI_B(); P_U(); P_B(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L(); }

	}
	else if (CU.back[0][1] * CU.up[0][1] == 15)
	{
		if (CU.back[0][1] == 3) { U(); L(); ANTI_U(); ANTI_L(); ANTI_U(); ANTI_B(); U(); B(); P_U();  P_L(); P_ANTI_U(); P_ANTI_L(); P_ANTI_U(); P_ANTI_B(); P_U(); P_B(); }
		else { U2(); ANTI_B(); U(); B(); U(); L(); ANTI_U(); ANTI_L(); P_U2();  P_ANTI_B(); P_U(); P_B(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L(); }
	}
	else if (CU.left[0][1] * CU.up[1][0] == 15)
	{
		if (CU.left[0][1] == 3) { U2(); L(); ANTI_U(); ANTI_L(); ANTI_U(); ANTI_B(); U(); B(); P_U2();  P_L(); P_ANTI_U(); P_ANTI_L(); P_ANTI_U(); P_ANTI_B(); P_U(); P_B(); }
		else { ANTI_U(); ANTI_B(); U(); B(); U(); L(); ANTI_U(); ANTI_L(); P_ANTI_U();  P_ANTI_B(); P_U(); P_B(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L(); }
	}
	//step 4 find orange-blue
	/*if (CU.back[1][2] * CU.left[1][0] == 15) {
		ANTI_B(); U(); B(); U(); L(); ANTI_U(); ANTI_L(); P_ANTI_B(); P_U(); P_B(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L();
	}*/
	if (CU.left[1][2] * CU.front[1][0] == 10) {
		if (CU.left[1][2] == 5) { ; }
		else {
			ANTI_L(); U(); L(); U(); F(); ANTI_U(); ANTI_F(); P_ANTI_L(); P_U(); P_L(); P_U(); P_F(); P_ANTI_U(); P_ANTI_F();
		}
	}

	if (CU.front[0][1] * CU.up[2][1] == 10)
	{
		if (CU.front[0][1] == 5) { U2(); F(); ANTI_U(); ANTI_F(); ANTI_U(); ANTI_L(); U(); L(); P_U2(); P_F(); P_ANTI_U(); P_ANTI_F(); P_ANTI_U(); P_ANTI_L(); P_U(); P_L(); }
		else { ANTI_U(); ANTI_L(); U(); L(); U(); F(); ANTI_U(); ANTI_F(); P_ANTI_U(); P_ANTI_L(); P_U(); P_L(); P_U(); P_F(); P_ANTI_U(); P_ANTI_F(); }
	}
	else if (CU.right[0][1] * CU.up[1][2] == 10)
	{
		if (CU.right[0][1] == 5) { ANTI_U(); F(); ANTI_U(); ANTI_F(); ANTI_U(); ANTI_L(); U(); L(); P_ANTI_U(); P_F(); P_ANTI_U(); P_ANTI_F(); P_ANTI_U(); P_ANTI_L(); P_U(); P_L(); }
		else { ANTI_L(); U(); L(); U(); F(); ANTI_U(); ANTI_F(); P_ANTI_L(); P_U(); P_L(); P_U(); P_F(); P_ANTI_U(); P_ANTI_F(); }

	}
	else if (CU.back[0][1] * CU.up[0][1] == 10)
	{
		if (CU.back[0][1] == 5) { F(); ANTI_U(); ANTI_F(); ANTI_U(); ANTI_L(); U(); L(); P_F(); P_ANTI_U(); P_ANTI_F(); P_ANTI_U(); P_ANTI_L(); P_U(); P_L(); }
		else { U(); ANTI_L(); U(); L(); U(); F(); ANTI_U(); ANTI_F(); P_U(); P_ANTI_L(); P_U(); P_L(); P_U(); P_F(); P_ANTI_U(); P_ANTI_F(); }
	}
	else if (CU.left[0][1] * CU.up[1][0] == 10)
	{
		if (CU.left[0][1] == 5) { U(); F(); ANTI_U(); ANTI_F(); ANTI_U(); ANTI_L(); U(); L(); P_U(); P_F(); P_ANTI_U(); P_ANTI_F(); P_ANTI_U(); P_ANTI_L(); P_U(); P_L(); }
		else { U2(); ANTI_L(); U(); L(); U(); F(); ANTI_U(); ANTI_F(); P_U2(); P_ANTI_L(); P_U(); P_L(); P_U(); P_F(); P_ANTI_U(); P_ANTI_F(); }
	}
	return;
}