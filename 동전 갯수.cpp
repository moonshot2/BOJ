#include <stdio.h>
#define N 100
int dp[N], A[N];
int n, k;
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &A[i]);
	}
	scanf("%d", &k);

	for (int i = 1; i <= k; i++) {
		dp[i] = -1;
		for (int j = 0; j < n; j++) {
			if (A[j] <= i) {
				if (dp[i - A[j]] < 0) continue; // 음수면 지나가고
				if (dp[i] < 0) dp[i] = dp[i - A[j]] + 1;
				else if (dp[i - A[j]] + 1 < dp[i]) dp[i] = dp[i - A[j]] + 1;
			}
		}
	}
	printf("%d", dp[k]);
}