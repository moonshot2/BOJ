#include <stdio.h>
#define N 1010
int dp[N];

int main() {
	int n;
	scanf("%d", &n);
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
	}
	printf("%d", dp[n]);
}