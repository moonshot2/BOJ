#include <stdio.h>
#define N 1010
int A[N][N];
int n;

void input() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d ", &A[i][j]);
			if (A[i][j]) A[i][j] = -1;
		}
	}
}

void print() {
	int i, j;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void run(int h, int w, int L) {
	if (A[h][w] || h > n || h<1 || w>n || w < 1) return;
	A[h][w] = 1;
	if (h == n && w == n) {
		print();
		A[h][w] = 0;
		return;
	}
	run(h, w - 1, L + 1);
	run(h + 1, w, L + 1);
	run(h, w + 1, L + 1);
	run(h - 1, w, L + 1);
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	input();
	run(1, 1, 1);
	return 0;
}