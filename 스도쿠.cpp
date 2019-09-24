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
	H = DATA[L].h;  //�� ���� �� ��ġ
	W = DATA[L].w;  // �� ���� ���� ��ġ
	for (i = 1; i <= 9; i++) {
		if (num == A[i][W])return;  //���� �࿡ num �� �ִ�?
		if (num == A[H][i])return;  //���� ���� num�� �ִ�?
	}
	for (i = H - (H - 1) % 3; i <= H - (H - 1) % 3 + 2; i++) {  //�Ҽӵ� 3X3 ��  num�� �ִ�?
		for (j = W - (W - 1) % 3; j <= W - (W - 1) % 3 + 2; j++) {
			if (num == A[i][j])return;
		}
	}
	A[H][W] = num; // �� ������ ���� num �� ���´�.
	if (L == count) { //�� ������ �� ä����.
		print();
		A[H][W] = 0;
		return;
	}
	for (i = 1; i <= 9; i++) { //����
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
