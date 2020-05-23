#include "step4.h"
#include "cubestruct.h"
#include "operate.h"
#include "printANDstorageOPERATE.h"

extern Cube CU;
void topcross() {
	//case 1 cross done
	if (CU.up[0][1] + CU.up[1][0] + CU.up[1][2] + CU.up[2][1] == 4) { return; }
	//case 2 half cross done,looks like 'L'
	if (CU.up[0][1] + CU.up[1][0] == 2) {
		ANTI_R(); ANTI_U(); ANTI_F(); U(); F(); R(); P_ANTI_R(); P_ANTI_U(); P_ANTI_F(); P_U(); P_F(); P_R(); return;
	}
	else if (CU.up[1][0] + CU.up[2][1] == 2) {
		U(); ANTI_R(); ANTI_U(); ANTI_F(); U(); F(); R(); P_U(); P_ANTI_R(); P_ANTI_U(); P_ANTI_F(); P_U(); P_F(); P_R(); return;

	}
	else if (CU.up[2][1] + CU.up[1][2] == 2) {
		U2(); ANTI_R(); ANTI_U(); ANTI_F(); U(); F(); R(); P_U2(); P_ANTI_R(); P_ANTI_U(); P_ANTI_F(); P_U(); P_F(); P_R(); return;

	}
	else if (CU.up[1][2] + CU.up[0][1] == 2) {
		ANTI_U(); ANTI_R(); ANTI_U(); ANTI_F(); U(); F(); R(); P_ANTI_U(); P_ANTI_R(); P_ANTI_U(); P_ANTI_F(); P_U(); P_F(); P_R(); return;

	}
	//case 3 a line done,looks like '1'
	if (CU.up[0][1] + CU.up[2][1] == 2) {
		U(); ANTI_R(); ANTI_U(); ANTI_F(); U(); F(); R(); P_U(); P_ANTI_R(); P_ANTI_U(); P_ANTI_F(); P_U(); P_F(); P_R();
		U2(); ANTI_R(); ANTI_U(); ANTI_F(); U(); F(); R(); P_U2(); P_ANTI_R(); P_ANTI_U(); P_ANTI_F(); P_U(); P_F(); P_R(); return;
	}
	else if (CU.up[1][0] + CU.up[1][2] == 2)
	{
		ANTI_R(); ANTI_U(); ANTI_F(); U(); F(); R(); P_ANTI_R(); P_ANTI_U(); P_ANTI_F(); P_U(); P_F(); P_R();
		U2(); ANTI_R(); ANTI_U(); ANTI_F(); U(); F(); R(); P_U2(); P_ANTI_R(); P_ANTI_U(); P_ANTI_F(); P_U(); P_F(); P_R(); return;
	}
	//case 4 only middle is yellow
	ANTI_R(); ANTI_U(); ANTI_F(); U(); F(); R(); P_ANTI_R(); P_ANTI_U(); P_ANTI_F(); P_U(); P_F(); P_R();
	ANTI_R(); ANTI_U(); ANTI_F(); U(); F(); R(); P_ANTI_R(); P_ANTI_U(); P_ANTI_F(); P_U(); P_F(); P_R();
	U2(); ANTI_R(); ANTI_U(); ANTI_F(); U(); F(); R(); P_U2(); P_ANTI_R(); P_ANTI_U(); P_ANTI_F(); P_U(); P_F(); P_R();
	return;



}