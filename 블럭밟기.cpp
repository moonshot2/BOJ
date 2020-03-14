#include <stdio.h>
#define N 101
int A[N][N];
int n;
int B[N * N];

void input() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d ", &A[i][j]);
			if (A[i][j]) A[i][j] = -1;
		}
	}
}

void print(int L) {
	int i;
	for (i = 1; i <= L; i++) {
		printf("%3d", B[i]);
	}
	printf("\n");
}

void run(int h, int w, int L) {
	B[L] = A[h][w];
	if (h == n && w == n) {
		print(L);
		return;
	}
	for (int i = w + 1; i <= n; i++) {
		if (A[h][w] > A[h][i]) continue;
		run(h, i, L + 1);
	}
	for (int i = h + 1; i <= n; i++) {
		if (A[h][w] > A[i][w]) continue;
		run(i, w, L + 1);
	}
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	input();
	run(1, 1, 1);
	return 0;
}