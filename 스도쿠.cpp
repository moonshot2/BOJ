#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int A[11][11], count;
struct abc {
	int h, w;
}DATA[90];
void print() {
	int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%3d", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return;
}
void run(int num, int L) {
	int i, j, H, W;
	H = DATA[L].h;  //빈 공간 행 위치
	W = DATA[L].w;  // 빈 공간 열의 위치
	for (i = 1; i <= 9; i++) {
		if (num == A[i][W])return;  //같은 행에 num 이 있니?
		if (num == A[H][i])return;  //같은 열에 num이 있니?
	}
	for (i = H - (H - 1) % 3; i <= H - (H - 1) % 3 + 2; i++) {  //소속된 3X3 에  num이 있니?
		for (j = W - (W - 1) % 3; j <= W - (W - 1) % 3 + 2; j++) {
			if (num == A[i][j])return;
		}
	}
	A[H][W] = num; // 빈 공간에 현재 num 을 적는다.
	if (L == count) { //빈 공간을 다 채웠다.
		print();
		A[H][W] = 0;
		return;
	}
	for (i = 1; i <= 9; i++) { //엔진
		run(i, L + 1);
	}
	A[H][W] = 0;
}
void input() {
	int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			scanf("%d", &A[i][j]);
			if (A[i][j] == 0) {
				count++;
				DATA[count].h = i;
				DATA[count].w = j;
			}
		}
	}
}
int main() {
	freopen("input.txt", "r", stdin);
	input();
	for (int i = 1; i <= 9; i++) {
		run(i, 1);
	}
	return 0;
}
