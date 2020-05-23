#include "step1.h"
#include "cubestruct.h"
#include "operate.h"
#include "printANDstorageOPERATE.h"

extern Cube CU;

void down_cross() {
	//step 1 white-blue
	//case 1 white is in surface down
	if ((CU.down[0][1] == 0) && (CU.front[2][1] == 2)) { ; }//²»×ö²Ù×÷
	else	if ((CU.down[1][0] == 0) && (CU.left[2][1] == 2)) { D(); P_D(); }
	else	if ((CU.down[1][2] == 0) && (CU.right[2][1] == 2)) { ANTI_D(); P_ANTI_D(); }
	else	if ((CU.down[2][1] == 0) && (CU.back[2][1] == 2)) { D2(); P_D2(); }
	//case 2 white is in surface up
	else	if ((CU.up[0][1] == 0) && (CU.back[0][1] == 2)) { U2(); F2(); P_U2(); P_F2(); }
	else	if ((CU.up[1][0] == 0) && (CU.left[0][1] == 2)) { ANTI_U(); F2(); P_ANTI_U(); P_F2(); }
	else	if ((CU.up[1][2] == 0) && (CU.right[0][1] == 2)) { U(); F2(); P_U(); P_F2(); }
	else	if ((CU.up[2][1] == 0) && (CU.front[0][1] == 2)) { F2(); P_F2(); }
	//case 3 white is in surface f,r,b,l
	else	if ((CU.front[0][1] == 0) && (CU.up[2][1] == 2)) { U(); L(); ANTI_F(); P_U(); P_L(); P_ANTI_F(); }
	else	if ((CU.right[0][1] == 0) && (CU.up[1][2] == 2)) { ANTI_R(); F(); P_ANTI_R(); P_F(); }
	else	if ((CU.back[0][1] == 0) && (CU.up[0][1] == 2)) { U(); ANTI_R(); F(); P_U(); P_ANTI_R(); P_F(); }
	else	if ((CU.left[0][1] == 0) && (CU.up[1][0] == 2)) { L(); ANTI_F(); P_L(); P_ANTI_F(); }


	else	if ((CU.front[2][1] == 0) && (CU.down[0][1] == 2)) { D(); R(); F(); P_D(); P_R(); P_F(); }
	else	if ((CU.right[2][1] == 0) && (CU.down[1][2] == 2)) { R(); F(); P_R(); P_F(); }
	else	if ((CU.back[2][1] == 0) && (CU.down[2][1] == 2)) { D(); ANTI_L(); ANTI_F(); P_D(); P_ANTI_L(); P_ANTI_F(); }
	else	if ((CU.left[2][1] == 0) && (CU.down[1][0] == 2)) { ANTI_L(); ANTI_F(); P_ANTI_L(); P_ANTI_F(); }

	else	if ((CU.front[1][0] == 0) && (CU.left[1][2] == 2)) { L(); D(); P_L(); P_D(); }
	else	if ((CU.right[1][0] == 0) && (CU.front[1][2] == 2)) { F(); P_F(); }
	else	if ((CU.back[1][0] == 0) && (CU.right[1][2] == 2)) { R(); ANTI_D(); P_R(); P_ANTI_D(); }
	else	if ((CU.left[1][0] == 0) && (CU.back[1][2] == 2)) { B(); D2(); P_B(); P_D2(); }

	else	if ((CU.front[1][2] == 0) && (CU.right[1][0] == 2)) { ANTI_R(); ANTI_D(); P_ANTI_R(); P_ANTI_D(); }
	else	if ((CU.right[1][2] == 0) && (CU.back[1][0] == 2)) { ANTI_B(); D2(); P_ANTI_B(); P_D2(); }
	else	if ((CU.back[1][2] == 0) && (CU.left[1][0] == 2)) { ANTI_L(); D(); P_ANTI_L(); P_D(); }
	else	if ((CU.left[1][2] == 0) && (CU.front[1][0] == 2)) { ANTI_F(); P_ANTI_F(); }

	//step 2 white-green
	if ((CU.down[1][0] == 0) && (CU.left[2][1] == 3)) { L2(); U(); B2(); P_L2(); P_U(); P_B2(); }
	else	if ((CU.down[1][2] == 0) && (CU.right[2][1] == 3)) { R2(); ANTI_U(); B2(); P_R2(); P_ANTI_U(); P_B2(); }
	else	if ((CU.down[2][1] == 0) && (CU.back[2][1] == 3)) { ; }


	else	if ((CU.up[0][1] == 0) && (CU.back[0][1] == 3)) { B2(); P_B2(); }
	else	if ((CU.up[1][0] == 0) && (CU.left[0][1] == 3)) { U(); B2(); P_U(); P_B2(); }
	else	if ((CU.up[1][2] == 0) && (CU.right[0][1] == 3)) { ANTI_U(); B2(); P_ANTI_U(); P_B2(); }
	else	if ((CU.up[2][1] == 0) && (CU.front[0][1] == 3)) { U2(); B2(); P_U2(); P_B2(); }

	else	if ((CU.front[0][1] == 0) && (CU.up[2][1] == 3)) { ANTI_U(); R(); ANTI_B(); P_ANTI_U(); P_R(); P_ANTI_B(); }
	else	if ((CU.right[0][1] == 0) && (CU.up[1][2] == 3)) { R(); ANTI_B(); P_R(); P_ANTI_B(); }
	else	if ((CU.back[0][1] == 0) && (CU.up[0][1] == 3)) { U(); R(); ANTI_B(); P_U(); P_R(); P_ANTI_B(); }
	else	if ((CU.left[0][1] == 0) && (CU.up[1][0] == 3)) { ANTI_L(); B(); P_ANTI_L(); P_B(); }

	else	if ((CU.right[2][1] == 0) && (CU.down[1][2] == 3)) { ANTI_R(); ANTI_B(); P_ANTI_R(); P_ANTI_B(); }
	else	if ((CU.back[2][1] == 0) && (CU.down[2][1] == 3)) { B2(); U(); R(); ANTI_B(); P_B2(); P_U(); P_R(); P_ANTI_B(); }
	else	if ((CU.left[2][1] == 0) && (CU.down[1][0] == 3)) { L(); B(); P_L(); P_B(); }

	else	if ((CU.front[1][0] == 0) && (CU.left[1][2] == 3)) { ANTI_L(); U(); B2(); P_ANTI_L(); P_U(); P_B2(); }
	else	if ((CU.right[1][0] == 0) && (CU.front[1][2] == 3)) { D2(); F(); D2(); P_D2(); P_F(); P_D2(); }
	else	if ((CU.back[1][0] == 0) && (CU.right[1][2] == 3)) { ANTI_R(); ANTI_U(); B2(); P_ANTI_R(); P_ANTI_U(); P_B2(); }
	else	if ((CU.left[1][0] == 0) && (CU.back[1][2] == 3)) { B(); P_B(); }

	else	if ((CU.front[1][2] == 0) && (CU.right[1][0] == 3)) { R(); ANTI_U(); B2(); P_R(); P_ANTI_U(); P_B2(); }
	else	if ((CU.right[1][2] == 0) && (CU.back[1][0] == 3)) { ANTI_B(); P_ANTI_B(); }
	else	if ((CU.back[1][2] == 0) && (CU.left[1][0] == 3)) { L(); U(); B2(); P_L(); P_U(); P_B2(); }
	else	if ((CU.left[1][2] == 0) && (CU.front[1][0] == 3)) { D2(); ANTI_F(); D2(); P_D2(); P_ANTI_F(); P_D2(); }

	//step 3 white-red
	if ((CU.down[1][0] == 0) && (CU.left[2][1] == 4)) { L2(); U2(); R2(); P_L2(); P_U2(); P_R2(); }
	else if ((CU.down[1][2] == 0) && (CU.right[2][1] == 4)) { ; }



	else if ((CU.up[0][1] == 0) && (CU.back[0][1] == 4)) { U(); R2(); P_U(); P_R2(); }
	else if ((CU.up[1][0] == 0) && (CU.left[0][1] == 4)) { U2(); R2(); P_U2(); P_R2(); }
	else if ((CU.up[1][2] == 0) && (CU.right[0][1] == 4)) { R2(); P_R2(); }
	else if ((CU.up[2][1] == 0) && (CU.front[0][1] == 4)) { ANTI_U(); R2(); P_ANTI_U(); P_R2(); }

	else if ((CU.front[0][1] == 0) && (CU.up[2][1] == 4)) { F(); ANTI_R(); ANTI_F(); P_F(); P_ANTI_R(); P_ANTI_F(); }
	else if ((CU.right[0][1] == 0) && (CU.up[1][2] == 4)) { U(); F(); ANTI_R(); ANTI_F(); P_U(); P_F(); P_ANTI_R(); P_ANTI_F(); }
	else if ((CU.back[0][1] == 0) && (CU.up[0][1] == 4)) { ANTI_B(); R(); B(); P_ANTI_B(); P_R(); P_B(); }
	else if ((CU.left[0][1] == 0) && (CU.up[1][0] == 4)) { U(); ANTI_B(); R(); B(); U(); P_ANTI_B(); P_R(); P_B(); }

	else if ((CU.right[2][1] == 0) && (CU.down[1][2] == 4)) { R2(); U(); F(); ANTI_R(); ANTI_F(); P_R2(); P_U(); P_F(); P_ANTI_R(); P_ANTI_F(); }
	else if ((CU.left[2][1] == 0) && (CU.down[1][0] == 4)) { L2(); U(); ANTI_B(); R(); B(); P_L2(); P_U(); P_ANTI_B(); P_R(); P_B(); }

	else if ((CU.front[1][0] == 0) && (CU.left[1][2] == 4)) { ANTI_L(); U2(); R2(); P_ANTI_L(); P_U2(); P_R2(); }
	else if ((CU.right[1][0] == 0) && (CU.front[1][2] == 4)) { ANTI_D(); F(); D(); P_ANTI_D(); P_F(); P_D(); }
	else if ((CU.back[1][0] == 0) && (CU.right[1][2] == 4)) { R(); P_R(); }
	else if ((CU.left[1][0] == 0) && (CU.back[1][2] == 4)) { D(); B(); ANTI_D(); P_D(); P_B(); P_ANTI_D(); }

	else if ((CU.front[1][2] == 0) && (CU.right[1][0] == 4)) { ANTI_R(); P_ANTI_R(); }
	else if ((CU.right[1][2] == 0) && (CU.back[1][0] == 4)) { D(); ANTI_B(); ANTI_D(); P_D(); P_ANTI_B(); P_ANTI_D(); }
	else if ((CU.back[1][2] == 0) && (CU.left[1][0] == 4)) { L(); U2(); R2(); P_L(); P_U2(); P_R2(); }
	else if ((CU.left[1][2] == 0) && (CU.front[1][0] == 4)) { ANTI_D(); ANTI_F(); D(); P_ANTI_D(); P_ANTI_F(); P_D(); }

	//step 4 white-orange
	if ((CU.down[1][0] == 0) && (CU.left[2][1] == 5)) { ; }

	else if ((CU.up[0][1] == 0) && (CU.back[0][1] == 5)) { ANTI_U(); L2(); P_ANTI_U(); P_L2(); }
	else if ((CU.up[1][0] == 0) && (CU.left[0][1] == 5)) { L2(); P_L2(); }
	else if ((CU.up[1][2] == 0) && (CU.right[0][1] == 5)) { U2(); L2(); P_U2(); P_L2(); }
	else if ((CU.up[2][1] == 0) && (CU.front[0][1] == 5)) { U(); L2(); P_U(); P_L2(); }

	else if ((CU.front[0][1] == 0) && (CU.up[2][1] == 5)) { ANTI_F(); B(); L(); F(); ANTI_B(); P_ANTI_F(); P_B(); P_L(); P_F(); P_ANTI_B(); }
	else if ((CU.right[0][1] == 0) && (CU.up[1][2] == 5)) { U(); ANTI_F(); B(); L(); F(); ANTI_B(); P_U(); P_ANTI_F(); P_B(); P_L(); P_F(); P_ANTI_B(); }
	else if ((CU.back[0][1] == 0) && (CU.up[0][1] == 5)) { U2(); ANTI_F(); B(); L(); F(); ANTI_B(); P_U2(); P_ANTI_F(); P_B(); P_L(); P_F(); P_ANTI_B(); }
	else if ((CU.left[0][1] == 0) && (CU.up[1][0] == 5)) { ANTI_U(); ANTI_F(); B(); L(); F(); ANTI_B(); P_ANTI_U(); P_ANTI_F(); P_B(); P_L(); P_F(); P_ANTI_B(); }

	else if ((CU.left[2][1] == 0) && (CU.down[1][0] == 5)) { L(); ANTI_D(); B(); D(); P_L(); P_ANTI_D(); P_B(); P_D(); }

	else if ((CU.front[1][0] == 0) && (CU.left[1][2] == 5)) { L(); P_L(); }
	else if ((CU.right[1][0] == 0) && (CU.front[1][2] == 5)) { D(); F(); ANTI_D(); P_D(); P_F(); P_ANTI_D(); }
	else if ((CU.back[1][0] == 0) && (CU.right[1][2] == 5)) { D2(); R(); D2(); P_D2(); P_R(); P_D2(); }
	else if ((CU.left[1][0] == 0) && (CU.back[1][2] == 5)) { ANTI_D(); B(); D(); P_ANTI_D(); P_B(); P_D(); }

	else if ((CU.front[1][2] == 0) && (CU.right[1][0] == 5)) { D2(); ANTI_R(); D2(); P_D2(); P_ANTI_R(); P_D2(); }
	else if ((CU.right[1][2] == 0) && (CU.back[1][0] == 5)) { ANTI_D(); ANTI_B(); D(); P_ANTI_D(); P_ANTI_B(); P_D(); }
	else if ((CU.back[1][2] == 0) && (CU.left[1][0] == 5)) { ANTI_L(); P_ANTI_L(); }
	else if ((CU.left[1][2] == 0) && (CU.front[1][0] == 5)) { D(); ANTI_F(); ANTI_D(); P_D(); P_ANTI_F(); P_ANTI_D(); }
	//CHECK CUBE


	return;


}