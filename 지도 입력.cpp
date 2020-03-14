#include <stdio.h>
#define N 10
int A[N][N], n;
int main() {
	freopen("input.txt", "r", stdin);



	/*int h, w;
	scanf("%d", &n);
	for (h = 1; h <= n; h++) {
		for (w = 1; w <= n; w++) {
			scanf("%1d", &A[h][w]);
		}
	}
	for (h = 1; h <= n; h++) {
		for (w = 1; w <= n; w++) {
			printf("%3d", A[h][w]);
		}
	}
	return 0;*/
}
/*#include <stdio.h>
#include <string>
#define N 20
int A[N][N];
int h, w;
int main() {
	int n;
	char TEST[N];
	scanf("%d", &n);
	for (h = 1; h <= n; h++) {
		scanf("%s", TEST);
		for (int i = 0; i < strlen(TEST); i++) {
			A[h][i + 1] = TEST[i] - '0';
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}*/