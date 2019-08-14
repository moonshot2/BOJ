#include <stdio.h>
#define N 10
int n;
int A[N][N], check1[N], check2[N * 2], check3[N * 2];
void print() {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (A[i][j] == 0) {
				printf("бр");
			}
			else {
				printf("бс");
			}
		}
		printf("\n");
	}
	printf("\n\n");
	return;
}

void q(int x, int L) {
	int i;
	if (check1[x] == 1)return;
	if (check2[L + x] == 1)return;
	if (check3[L - x + n] == 1)return;
	A[L][x] = 1;
	check1[x] = 1;
	check2[L + x] = 1;
	check3[L - x+n] = 1;
	if (L == n) {
		print();
		A[L][x] = 0;
		check1[x] = 0;
		check2[L + x] = 0;
		check3[L - x + n] = 0;
		return;
	}
	for (int i = 1; i <= n; i++) {
		q(i, L + 1);
	}
	A[L][x] = 0;
	check1[x] = 0;
	check2[L + x] = 0;
	check3[L - x + n] = 0;
	return;
}

int main() {
	freopen("output.txt", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		q(i, 1);
	}
	return 0;
}
