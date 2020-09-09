#include <stdio.h>
#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <string>
#include <algorithm>
#define mp make_pair
#define N 100001
#define MOD 1000000000
using namespace std;
int dp[201][201];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int n, m;
	cin >> n >> m;
	for (int i = 0; i <= n; i++) dp[1][i] = 1;
	for (int i = 0; i <= m; i++) dp[i][0] = 1;
	for (int i = 2; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % MOD;
		}
	}
	cout << dp[m][n] << "\n";
}