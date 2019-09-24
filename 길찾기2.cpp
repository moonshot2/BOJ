#include <stdio.h>
int n, A[20][20];

void print() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%3d", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

bool check(int h,int w) {
	if (h > n || w > n || h < 1 || w < 1 || A[h][w] != 0)return true;
	else return false;
}

void run(int h,int w,int L) {
	if (check(h, w)) return;
	A[h][w] = L;
	if (h == n && w == n) {
		print();
		A[h][w] = 0;
		return;
	}
	run(h + 1, w, L + 1);
	run(h, w + 1, L + 1);
	run(h - 1, w, L + 1);
	run(h, w - 1, L + 1);
	A[h][w] = 0;

	return;
}

void input() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &A[i][j]);
		}
	}
}

int main() {
	freopen("input,txt", "r", stdin);
	input();
	run(1,1,1);
	return 0;
}