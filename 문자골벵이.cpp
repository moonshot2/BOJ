#include <stdio.h>
int n;
int A[101][101];
void print() {
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%3c", A[i][j] + 64);
		}
		printf("\n");
	}
	return;
}

void run() {
	int i, k, h=0, w=1,sw=1,cnt;
	scanf("%d", &n);
	k = n;
	while (1) {
		for (i = 1; i <= k; i++) {
			w = w + sw;
			cnt = (cnt % 26) + 1;
			A[h][w] = cnt;
		}
		k = k - 1;
		if (k == 0) { 
			print(); 
		}
		for (i = 1; i <= k; i++) {
			h = h + sw;
			cnt = (cnt % 26) + 1;
			A[h][w] = cnt;
		}
		sw = sw * -1;
	}
}
int main() {
	run();
}