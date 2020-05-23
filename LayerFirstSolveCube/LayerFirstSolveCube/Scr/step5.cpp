#include "step5.h"
#include "cubestruct.h"
#include "operate.h"
#include "printANDstorageOPERATE.h"

extern Cube CU;

void topcorner() {
	//step 1 find y-g-o
	if (CU.up[0][0] * CU.back[0][2] * CU.left[0][0] == 15) { ; }
	else if (CU.up[0][2] * CU.back[0][0] * CU.right[0][2] == 15) { ANTI_U(); P_ANTI_U(); }
	else if (CU.up[2][0] * CU.front[0][0] * CU.left[0][2] == 15) { U(); P_U(); }
	else if (CU.up[2][2] * CU.front[0][2] * CU.right[0][0] == 15) { U2(); P_U2(); }
	//step 2 now there is 6 cases
	//case 1:
	if ((CU.up[0][2] * CU.back[0][0] * CU.right[0][2] == 12) && (CU.up[2][0] * CU.front[0][0] * CU.left[0][2] == 10) && (CU.up[2][2] * CU.front[0][2] * CU.right[0][0] == 8)) { ; }
	//case 2:
	else if ((CU.up[0][2] * CU.back[0][0] * CU.right[0][2] == 12) && (CU.up[2][0] * CU.front[0][0] * CU.left[0][2] == 8) && (CU.up[2][2] * CU.front[0][2] * CU.right[0][0] == 10))
	{
		ANTI_U(); R(); ANTI_L(); U(); ANTI_R(); ANTI_U(); L(); U(); R(); ANTI_U(); ANTI_R(); P_ANTI_U();
		P_R(); P_ANTI_L(); P_U(); P_ANTI_R(); P_ANTI_U(); P_L(); P_U(); P_R(); P_ANTI_U(); P_ANTI_R();
	}
	//case 3:
	else if ((CU.up[0][2] * CU.back[0][0] * CU.right[0][2] == 10) && (CU.up[2][0] * CU.front[0][0] * CU.left[0][2] == 8) && (CU.up[2][2] * CU.front[0][2] * CU.right[0][0] == 12))
	{
		L(); U(); ANTI_L(); ANTI_U(); ANTI_R(); U(); L(); ANTI_U(); R(); ANTI_L(); P_L(); P_U(); P_ANTI_L();
		P_ANTI_U(); P_ANTI_R(); P_U(); P_L(); P_ANTI_U(); P_R(); P_ANTI_L();
	}
	//case 4:
	else if ((CU.up[0][2] * CU.back[0][0] * CU.right[0][2] == 10) && (CU.up[2][0] * CU.front[0][0] * CU.left[0][2] == 12) && (CU.up[2][2] * CU.front[0][2] * CU.right[0][0] == 8))
	{
		L(); ANTI_R(); U(); ANTI_L(); ANTI_U(); R(); U(); L(); ANTI_U(); ANTI_L(); P_L();
		P_ANTI_R(); P_U(); P_ANTI_L(); P_ANTI_U(); P_R(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L();
		ANTI_U(); R(); ANTI_L(); U(); ANTI_R(); ANTI_U(); L(); U(); R(); ANTI_U(); ANTI_R(); 
		P_ANTI_U(); P_R(); P_ANTI_L(); P_U(); P_ANTI_R(); P_ANTI_U(); P_L(); P_U(); P_R(); P_ANTI_U(); P_ANTI_R();
	}
	//case 5:
	else if ((CU.up[0][2] * CU.back[0][0] * CU.right[0][2] == 8) && (CU.up[2][0] * CU.front[0][0] * CU.left[0][2] == 12) && (CU.up[2][2] * CU.front[0][2] * CU.right[0][0] == 10))
	{
		L(); ANTI_R(); U(); ANTI_L(); ANTI_U(); R(); U(); L(); ANTI_U(); ANTI_L(); 
		P_L(); P_ANTI_R(); P_U(); P_ANTI_L(); P_ANTI_U(); P_R(); P_U(); P_L(); P_ANTI_U(); P_ANTI_L();
	}
	//case 6:
	else {
		ANTI_U(); B(); ANTI_F(); U(); ANTI_B(); ANTI_U(); F(); U(); B(); ANTI_U(); ANTI_B();
		P_ANTI_U(); P_B(); P_ANTI_F(); P_U(); P_ANTI_B(); P_ANTI_U(); P_F(); P_U(); P_B(); P_ANTI_U(); P_ANTI_B();
	}
	return;

}