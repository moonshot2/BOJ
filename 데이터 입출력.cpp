#include <stdio.h>
#define N 10
int A[N][N], n;
int main() {
	freopen("input.txt", "r", stdin);
	int h, w;
	scanf("%d", &n);
	for (h = 1; h <= n; h++) {
		for (w = 1; w <= n; w++) {
			scanf("%d", &A[h][w]);
		}
	}
	for (h = 1; h <= n; h++) {
		for (w = 1; w <= n; w++) {
			printf("%d", A[h][w]);
		}
	}
	return 0;
}
