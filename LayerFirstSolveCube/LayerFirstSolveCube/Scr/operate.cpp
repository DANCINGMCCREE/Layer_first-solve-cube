#include "operate.h"
#include "cubestruct.h"

extern Cube CU;

void D() {
	Cube temp;
	temp = CU;
	temp.front[2][0] = CU.left[2][0];
	temp.front[2][1] = CU.left[2][1];
	temp.front[2][2] = CU.left[2][2];
	temp.left[2][0] = CU.back[2][0];
	temp.left[2][1] = CU.back[2][1];
	temp.left[2][2] = CU.back[2][2];
	temp.back[2][0] = CU.right[2][0];
	temp.back[2][1] = CU.right[2][1];
	temp.back[2][2] = CU.right[2][2];
	temp.right[2][0] = CU.front[2][0];
	temp.right[2][1] = CU.front[2][1];
	temp.right[2][2] = CU.front[2][2];
	temp.down[0][0] = CU.down[2][0];
	temp.down[0][1] = CU.down[1][0];
	temp.down[0][2] = CU.down[0][0];
	temp.down[1][0] = CU.down[2][1];
	temp.down[1][2] = CU.down[0][1];
	temp.down[2][0] = CU.down[2][2];
	temp.down[2][1] = CU.down[1][2];
	temp.down[2][2] = CU.down[0][2];

	CU = temp;
	return;

}

void U() {
	Cube temp;
	temp = CU;
	temp.front[0][0] = CU.right[0][0];
	temp.front[0][1] = CU.right[0][1];
	temp.front[0][2] = CU.right[0][2];
	temp.left[0][0] = CU.front[0][0];
	temp.left[0][1] = CU.front[0][1];
	temp.left[0][2] = CU.front[0][2];
	temp.back[0][0] = CU.left[0][0];
	temp.back[0][1] = CU.left[0][1];
	temp.back[0][2] = CU.left[0][2];
	temp.right[0][0] = CU.back[0][0];
	temp.right[0][1] = CU.back[0][1];
	temp.right[0][2] = CU.back[0][2];
	temp.up[0][0] = CU.up[2][0];
	temp.up[0][1] = CU.up[1][0];
	temp.up[0][2] = CU.up[0][0];
	temp.up[1][0] = CU.up[2][1];
	temp.up[1][2] = CU.up[0][1];
	temp.up[2][0] = CU.up[2][2];
	temp.up[2][1] = CU.up[1][2];
	temp.up[2][2] = CU.up[0][2];

	CU = temp;
	return;


}

void F() {
	Cube temp;
	temp = CU;
	temp.left[0][2] = CU.down[0][0];
	temp.left[1][2] = CU.down[0][1];
	temp.left[2][2] = CU.down[0][2];
	temp.up[2][0] = CU.left[2][2];
	temp.up[2][1] = CU.left[1][2];
	temp.up[2][2] = CU.left[0][2];
	temp.right[0][0] = CU.up[2][0];
	temp.right[1][0] = CU.up[2][1];
	temp.right[2][0] = CU.up[2][2];
	temp.down[0][0] = CU.right[2][0];
	temp.down[0][1] = CU.right[1][0];
	temp.down[0][2] = CU.right[0][0];
	temp.front[0][0] = CU.front[2][0];
	temp.front[0][1] = CU.front[1][0];
	temp.front[0][2] = CU.front[0][0];
	temp.front[1][0] = CU.front[2][1];
	temp.front[1][2] = CU.front[0][1];
	temp.front[2][0] = CU.front[2][2];
	temp.front[2][1] = CU.front[1][2];
	temp.front[2][2] = CU.front[0][2];

	CU = temp;
	return;

}

void B() {
	Cube temp;
	temp = CU;
	temp.left[0][0] = CU.up[0][2];
	temp.left[1][0] = CU.up[0][1];
	temp.left[2][0] = CU.up[0][0];
	temp.up[0][0] = CU.right[0][2];
	temp.up[0][1] = CU.right[1][2];
	temp.up[0][2] = CU.right[2][2];
	temp.right[0][2] = CU.down[2][2];
	temp.right[1][2] = CU.down[2][1];
	temp.right[2][2] = CU.down[2][0];
	temp.down[2][0] = CU.left[0][0];
	temp.down[2][1] = CU.left[1][0];
	temp.down[2][2] = CU.left[2][0];
	temp.back[0][0] = CU.back[2][0];
	temp.back[0][1] = CU.back[1][0];
	temp.back[0][2] = CU.back[0][0];
	temp.back[1][0] = CU.back[2][1];
	temp.back[1][2] = CU.back[0][1];
	temp.back[2][0] = CU.back[2][2];
	temp.back[2][1] = CU.back[1][2];
	temp.back[2][2] = CU.back[0][2];

	CU = temp;
	return;

}

void R() {
	Cube temp;
	temp = CU;
	temp.front[0][2] = CU.down[0][2];
	temp.front[1][2] = CU.down[1][2];
	temp.front[2][2] = CU.down[2][2];
	temp.down[0][2] = CU.back[2][0];
	temp.down[1][2] = CU.back[1][0];
	temp.down[2][2] = CU.back[0][0];
	temp.back[0][0] = CU.up[2][2];
	temp.back[1][0] = CU.up[1][2];
	temp.back[2][0] = CU.up[0][2];
	temp.up[0][2] = CU.front[0][2];
	temp.up[1][2] = CU.front[1][2];
	temp.up[2][2] = CU.front[2][2];
	temp.right[0][0] = CU.right[2][0];
	temp.right[0][1] = CU.right[1][0];
	temp.right[0][2] = CU.right[0][0];
	temp.right[1][0] = CU.right[2][1];
	temp.right[1][2] = CU.right[0][1];
	temp.right[2][0] = CU.right[2][2];
	temp.right[2][1] = CU.right[1][2];
	temp.right[2][2] = CU.right[0][2];

	CU = temp;
	return;

}

void L() {
	Cube temp;
	temp = CU;
	temp.front[0][0] = CU.up[0][0];
	temp.front[1][0] = CU.up[1][0];
	temp.front[2][0] = CU.up[2][0];
	temp.down[0][0] = CU.front[0][0];
	temp.down[1][0] = CU.front[1][0];
	temp.down[2][0] = CU.front[2][0];
	temp.back[0][2] = CU.down[2][0];
	temp.back[1][2] = CU.down[1][0];
	temp.back[2][2] = CU.down[0][0];
	temp.up[0][0] = CU.back[2][2];
	temp.up[1][0] = CU.back[1][2];
	temp.up[2][0] = CU.back[0][2];
	temp.left[0][0] = CU.left[2][0];
	temp.left[0][1] = CU.left[1][0];
	temp.left[0][2] = CU.left[0][0];
	temp.left[1][0] = CU.left[2][1];
	temp.left[1][2] = CU.left[0][1];
	temp.left[2][0] = CU.left[2][2];
	temp.left[2][1] = CU.left[1][2];
	temp.left[2][2] = CU.left[0][2];

	CU = temp;
	return;

}

void D2() {
	D();
	D();
	return;
}
void U2() {
	U();
	U();
	return;
}
void F2() {
	F();
	F();
	return;
}
void B2() {
	B();
	B();
	return;
}
void R2() {
	R();
	R();
	return;
}
void L2() {
	L();
	L();
	return;
}

void ANTI_D() {
	D();
	D();
	D();
	return;
}
void ANTI_U() {
	U();
	U();
	U();
	return;
}
void ANTI_F() {
	F();
	F();
	F();
	return;
}
void ANTI_B() {
	B();
	B();
	B();
	return;
}
void ANTI_R() {
	R();
	R();
	R();
	return;
}
void ANTI_L() {
	L();
	L();
	L();
	return;
}