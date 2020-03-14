#include <stdio.h>

int dp[1000001];

int min(int a, int b) {
	return a > b ? b : a;
}

int main() {
	int n;
	scanf("%d", &n);
	dp[1] = 0;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1; //3��
		if (i % 2 == 0) { //1��
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}
		if (i % 3 == 0) { //2��
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}
	}
	printf("%d", dp[n]);
}