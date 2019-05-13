#include <stdio.h>
#define N 10
int A[N][N], R[N][N], n;
void input() {
	int i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &A[i][j]);
		}
	}
}
int main() {
	freopen("input.txt", "r", stdin);
}