#include <iostream>
#include <queue>
#include <algorithm>
#define INT_MAX 2147483647
using namespace std;

int dp[100001];

int main() {
	int n, k, i, j;
	cin >> n >> k;
	int coins[101] = { 0, };
	for (int i = 0; i < n; i++) {
		cin >> coins[i];
	}
	dp[0] = 1;
	for (i = 0; i < n; i++) {
		for (j = coins[i]; j <= k; j++) {
			if (j - coins[i] >= 0) dp[j] += dp[j - coins[i]];
		}
	}
	cout << dp[k];
	return 0;
}