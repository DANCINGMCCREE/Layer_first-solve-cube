#include "step6.h"
#include "cubestruct.h"
#include "operate.h"
#include "printANDstorageOPERATE.h"

extern Cube CU;

void topcomplete() {
	// case 1: complete
	if (CU.up[0][0] + CU.up[0][2] + CU.up[2][0] + CU.up[2][2] == 4) { return; }
	//case 2: no yellow in corner
	if ((CU.up[0][0] != 1) && (CU.up[0][2] != 1) && (CU.up[2][0] != 1) && (CU.up[2][2] != 1))
	{
		ANTI_R(); ANTI_U(); R(); ANTI_U(); ANTI_R(); U2(); R(); U2(); P_ANTI_R(); P_ANTI_U(); P_R(); P_ANTI_U(); P_ANTI_R(); P_U2(); P_R(); P_U2();
	}
	//case 3: 1 yellow in corner
	if ((CU.up[0][0] == 1) && (CU.up[0][2] != 1) && (CU.up[2][0] != 1) && (CU.up[2][2] != 1)) { ; }
	else if ((CU.up[0][0] != 1) && (CU.up[0][2] == 1) && (CU.up[2][0] != 1) && (CU.up[2][2] != 1)) { ANTI_U(); P_ANTI_U(); }
	else if ((CU.up[0][0] != 1) && (CU.up[0][2] != 1) && (CU.up[2][0] == 1) && (CU.up[2][2] != 1)) { U(); P_U(); }
	else if ((CU.up[0][0] != 1) && (CU.up[0][2] != 1) && (CU.up[2][0] != 1) && (CU.up[2][2] == 1)) { U2(); P_U2(); }

	if (CU.front[0][0] == 1) { ANTI_R(); ANTI_U(); R(); ANTI_U(); ANTI_R(); U2(); R(); U2(); P_ANTI_R(); P_ANTI_U(); P_R(); P_ANTI_U(); P_ANTI_R(); P_U2(); P_R(); P_U2(); return; }
	else if (CU.front[0][2] == 1) { ANTI_U(); R(); U(); ANTI_R(); U(); R(); U2(); ANTI_R(); U2(); P_ANTI_U(); P_R(); P_U(); P_ANTI_R(); P_U(); P_R(); P_U2(); P_ANTI_R(); P_U2(); return; }
	//case 4 2 yellow in corner
	if (CU.up[0][0] + CU.up[0][2] == 2) { ; }
	else if (CU.up[0][2] + CU.up[2][2] == 2) { ANTI_U(); P_ANTI_U(); }
	else if (CU.up[0][0] + CU.up[2][0] == 2) { U(); P_U(); }
	else if (CU.up[2][0] + CU.up[2][2] == 2) { U2(); P_U2(); }
	else if (CU.up[0][2] + CU.up[2][0] == 2) {
		if (CU.right[0][0] == 1) {
			ANTI_R(); ANTI_U(); R(); ANTI_U(); ANTI_R(); U2(); R(); U2(); P_ANTI_R(); P_ANTI_U(); P_R(); P_ANTI_U(); P_ANTI_R(); P_U2(); P_R(); P_U2();
			U(); P_U();
			R(); U(); ANTI_R(); U(); R(); U2(); ANTI_R(); U2(); P_R(); P_U(); P_ANTI_R(); P_U(); P_R(); P_U2(); P_ANTI_R(); P_U2();
			return;
		}
		else {
			U2(); P_U2();
			ANTI_R(); ANTI_U(); R(); ANTI_U(); ANTI_R(); U2(); R(); U2(); P_ANTI_R(); P_ANTI_U(); P_R(); P_ANTI_U(); P_ANTI_R(); P_U2(); P_R(); P_U2();
			U(); P_U();
			R(); U(); ANTI_R(); U(); R(); U2(); ANTI_R(); U2(); P_R(); P_U(); P_ANTI_R(); P_U(); P_R(); P_U2(); P_ANTI_R(); P_U2();
			return;

		}
	}
	else if (CU.up[0][0] + CU.up[2][2] == 2) {
		U(); P_U();
		if (CU.right[0][0] == 1) {
			ANTI_R(); ANTI_U(); R(); ANTI_U(); ANTI_R(); U2(); R(); U2(); P_ANTI_R(); P_ANTI_U(); P_R(); P_ANTI_U(); P_ANTI_R(); P_U2(); P_R(); P_U2();
			U(); P_U();
			R(); U(); ANTI_R(); U(); R(); U2(); ANTI_R(); U2(); P_R(); P_U(); P_ANTI_R(); P_U(); P_R(); P_U2(); P_ANTI_R(); P_U2();
			return;
		}
		else {
			U2(); P_U2();
			ANTI_R(); ANTI_U(); R(); ANTI_U(); ANTI_R(); U2(); R(); U2(); P_ANTI_R(); P_ANTI_U(); P_R(); P_ANTI_U(); P_ANTI_R(); P_U2(); P_R(); P_U2();
			U(); P_U();
			R(); U(); ANTI_R(); U(); R(); U2(); ANTI_R(); U2(); P_R(); P_U(); P_ANTI_R(); P_U(); P_R(); P_U2(); P_ANTI_R(); P_U2();
			return;

		}

	}
	//
	if (CU.up[0][0] + CU.up[0][2] == 2)
	{
		if (CU.front[0][0] == 1) {
			R(); U(); ANTI_R(); U(); R(); U2(); ANTI_R(); U2(); P_R(); P_U(); P_ANTI_R(); P_U(); P_R(); P_U2(); P_ANTI_R(); P_U2();
			U2(); P_U2();
			ANTI_R(); ANTI_U(); R(); ANTI_U(); ANTI_R(); U2(); R(); U2(); P_ANTI_R(); P_ANTI_U(); P_R(); P_ANTI_U(); P_ANTI_R(); P_U2(); P_R(); P_U2();
		}
		else {
			U(); P_U();
			ANTI_R(); ANTI_U(); R(); ANTI_U(); ANTI_R(); U2(); R(); U2(); P_ANTI_R(); P_ANTI_U(); P_R(); P_ANTI_U(); P_ANTI_R(); P_U2(); P_R(); P_U2();
			R(); U(); ANTI_R(); U(); R(); U2(); ANTI_R(); U2(); P_R(); P_U(); P_ANTI_R(); P_U(); P_R(); P_U2(); P_ANTI_R(); P_U2();
		}
		return;
	}
}