// 1�� �ڸ���
// 2�� �ڸ� ����

#include <stdio.h>
#define N 1010
int DP[N][N];

int main() {
	int i, j, k;
	int n, sum = 0;
	scanf("%d", &n);
	for (i = 0; i < 10; ++i) { // �ʱ�ȭ
		DP[1][i] = 1;
	}

	for (i = 2; i <= n; ++i) { // 1 <= N <= 1000
		for (j = 0; j <= 9; ++j) { // ���ڸ�
			for (k = j; k <= 9; ++k) { // ���ڸ�
				DP[i][k] += DP[i - 1][j];
				DP[i][k] %= 10007;
			}
		}
	}

	for (i = 0; i <= 9; i++) {
		sum += DP[n][i];
	}
	printf("%d", sum % 10007);
}