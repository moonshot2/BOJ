#include <iostream>
#include <algorithm>
#include <set>
#define ll long long
using namespace std;

int map[101][101];
ll dp[101][101];
int n;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}
	dp[0][0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (dp[i][j] == 0 || (i == n - 1 && j == n - 1)) continue; // µµÂø && ¾øÀ½
			int value = map[i][j];
			int down = value + i;
			int right = value + j;
			if (down < n) dp[down][j] = dp[down][j] + dp[i][j]; // ´õÇØÁÜ
			if (right < n) dp[i][right] = dp[i][right] + dp[i][j]; // ´õÇØÁÜ
		}
	}
	cout << dp[n - 1][n - 1] << "\n";
}