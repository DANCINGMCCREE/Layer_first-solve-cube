#include "step7.h"
#include "cubestruct.h"
#include "operate.h"
#include "printANDstorageOPERATE.h"

extern Cube CU;

void finishcube() {
	if (CU.front[0][0] != 2) { U(); P_U(); }
	if (CU.front[0][0] != 2) { U(); P_U(); }
	if (CU.front[0][0] != 2) { U(); P_U(); }

	if (CU.front[0][1] != 2)
	{
		if (CU.right[0][1] == 2) {
			R(); U2(); ANTI_R(); ANTI_U(); R(); ANTI_U(); ANTI_R(); ANTI_U(); ANTI_R(); U2(); R(); U(); ANTI_R(); U(); R();
			P_R(); P_U2(); P_ANTI_R(); P_ANTI_U(); P_R(); P_ANTI_U(); P_ANTI_R(); P_ANTI_U(); P_ANTI_R(); P_U2(); P_R(); P_U(); P_ANTI_R(); P_U(); P_R();
			U(); P_U();
		}
		else if (CU.back[0][1] == 2) {
			ANTI_U(); P_ANTI_U();
			ANTI_R(); ANTI_U(); R(); ANTI_U(); ANTI_R(); U2(); R(); U(); R(); U(); ANTI_R(); U(); R(); U2(); ANTI_R();
			P_ANTI_R(); P_ANTI_U(); P_R(); P_ANTI_U(); P_ANTI_R(); P_U2(); P_R(); P_U(); P_R(); P_U(); P_ANTI_R(); P_U(); P_R(); P_U2(); P_ANTI_R();

		}
		else if (CU.left[0][1] == 2) {
			U(); P_U();
			ANTI_R(); ANTI_U(); R(); ANTI_U(); ANTI_R(); U2(); R(); U(); R(); U(); ANTI_R(); U(); R(); U2(); ANTI_R(); ANTI_U();
			P_ANTI_R(); P_ANTI_U(); P_R(); P_ANTI_U(); P_ANTI_R(); P_U2(); P_R(); P_U(); P_R(); P_U(); P_ANTI_R(); P_U(); P_R(); P_U2(); P_ANTI_R(); P_ANTI_U();
			ANTI_U(); P_ANTI_U();
		}
	}
	if (CU.front[0][1] == 2) {
		if (CU.right[0][1] == 4) { return; }
		else if (CU.right[0][1] == 3) {
			ANTI_R(); ANTI_U(); R(); ANTI_U(); ANTI_R(); U2(); R(); U(); R(); U(); ANTI_R(); U(); R(); U2(); ANTI_R(); ANTI_U();
			P_ANTI_R(); P_ANTI_U(); P_R(); P_ANTI_U(); P_ANTI_R(); P_U2(); P_R(); P_U(); P_R(); P_U(); P_ANTI_R(); P_U(); P_R(); P_U2(); P_ANTI_R(); P_ANTI_U();
			return;
		}
		else if (CU.right[0][1] == 5) {
			U(); R(); U2(); ANTI_R(); ANTI_U(); R(); ANTI_U(); ANTI_R(); ANTI_U(); ANTI_R(); U2(); R(); U(); ANTI_R(); U(); R();
			P_U(); P_R(); P_U2(); P_ANTI_R(); P_ANTI_U(); P_R(); P_ANTI_U(); P_ANTI_R(); P_ANTI_U(); P_ANTI_R(); P_U2(); P_R(); P_U(); P_ANTI_R(); P_U(); P_R();
			return;
		}
	}
	return;
}
