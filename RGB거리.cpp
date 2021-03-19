#define _CRT_SECURE_NO_WARNINGS
#define _INT_MAX_ 2147483647
#include <iostream>
#include <algorithm>
using namespace std;
int arr[1001][3];
int dp[1001][3];

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	dp[0][0] = arr[0][0];
	dp[0][1] = arr[0][1];
	dp[0][2] = arr[0][2];
	for (int i = 1; i < n; i++) {
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + arr[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + arr[i][1];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + arr[i][2];
	}
	int m = _INT_MAX_;
	for (int i = 0; i < 3; i++) {
		if (dp[n - 1][i] < m) m = dp[n - 1][i];
	}
	printf("%d\n", m);
	return 0;
}