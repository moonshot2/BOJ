#include <stdio.h>
#define N 110
using namespace std;
int H, W;
int A[N][N], B[N][N];
int flag;
int c1, c2;
void dfs(int h, int w) {
	if (h > H || h<0 || w>W || w < 0 || A[h][w] != 0)return;
	A[h][w] = -1;
	dfs(h + 1, w);
	dfs(h, w + 1);
	dfs(h - 1, W);
	dfs(h, w - 1);
}
void run() {
	int i, j;
	c1 = 0;
	flag = 0;
	for (i = 1; i <= H; i++) {
		for (j = 1; j <= W; j++) {
			if (A[i][j] == 1 && A[i + 1][j] == -1 || A[i][j + 1] == -1 || A[i - 1][j] == -1 || A[i][j - 1] == -1) {
				flag = 1;
				c1++;
				B[i][j] = 1;
			}
		}
	}
	for (i = 0; i <= H; i++) {
		for (j = 0; j <= W; j++) {
			if (B[i][j] == 1) B[i][j] = A[i][j] = 0;
			if (A[i][j] == -1)A[i][j] = 0;
		}
	}
}
int main() {
	int i, j;
	scanf("%d %d", &W, &H);
	for (i = 1; i <= H; i++) {
		for (j = 1; j <= W; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	while (true) {
		dfs(0, 0);
		run();
		if (flag == 0)break;
	}
	printf("%d\n%d", i, c1);
}