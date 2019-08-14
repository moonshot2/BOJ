#include <stdio.h>
#define N 100
int m, n, A[N];

void run(int num,int L) {
	A[L] = num;
	if (L == n) { 
		for (int i = 1; i <= n; i++) {
			if (A[i] >= 10) {
				printf(" %c", A[i] + 55); // 아스키코드
			}
			else {
				printf("%2d", A[i]);
			}
		}
		printf("\n");
		return;
	}
	for (int i = 0; i < m; i++) { // -1    
		run(i, L + 1);
	}
}

int main() {
	scanf("%d %d", &n, &m);
	run(-1, 0);
}