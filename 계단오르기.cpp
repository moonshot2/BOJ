#include <stdio.h>

int stair[10001];
int dp[10001];

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &stair[i]);
	}
	dp[0] = stair[0];
	dp[1] = max(stair[0], stair[0] + stair[1]);
	dp[2] = max(stair[0] + stair[2], stair[1] + stair[2]);

	for (int i = 3; i < n; i++) {
		dp[i] = max(stair[i - 1] + stair[i] + dp[i - 3], dp[i - 2] + stair[i]);
	}
	printf("%d\n", dp[n - 1]);
}