#include <iostream>
#include <algorithm>
using namespace std;

int dp[501][501] = { 0 };
int map[501][501] = { 0 };
int xy[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
int n, m;

int dfs(int y, int x) {
	if (dp[y][x]) {
		return dp[y][x];
	}
	dp[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + xy[i][1];
		int nx = x + xy[i][0];
		if (ny < 0 || ny >= n || nx < 0 || nx >= n) {
			continue;
		}
		if (map[y][x] >= map[ny][nx]) {
			continue;
		}
		dp[y][x] = max(dp[y][x], dfs(ny, nx) + 1);
	}
	return dp[y][x];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}
	int res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			res = max(res, dfs(i, j));
		}
	}
	cout << res;
}