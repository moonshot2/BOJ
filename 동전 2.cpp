#include <iostream>
#include <queue>
#include <algorithm>
#define INT_MAX 2147483647
using namespace std;

int coin[101];
int dp[100001];

int main() {
	int n, m;
	cin >> n >> m;
	dp[0] = 0;
	for (int i = 1; i <= m; i++) {
		dp[i] = INT_MAX;
	}
	for (int i = 0; i < n; i++) {
		cin >> coin[i];
		dp[coin[i]] = 1;
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 0; j < n; j++) {
			if (dp[i] == 1) break;
			else if (i - coin[j] < 0 || dp[i - coin[j]] == INT_MAX) continue;
			else dp[i] = min(dp[i], 1 + dp[i - coin[j]]);
		}
	}
	if (dp[m] == INT_MAX) cout << "-1";
	else cout << dp[m];
	return 0;
}