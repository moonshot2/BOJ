#include <iostream>
#include <memory>
#define N 501
using namespace std;
int map[N][N];
int dp[N][N];
int xy[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
int n, m;

int dfs(int x, int y) {
	if (dp[x][y] != -1) return dp[x][y]; // 중복
	if (x < 0 || x >= n || y < 0 || y >= m) return 0; // 벗어남
	if (x == 0 && y == 0) return 1; // 기저

	dp[x][y] = 0;
	for (int i = 0; i < 4; i++) {
		int nx = x + xy[i][0];
		int ny = y + xy[i][1];

		if (map[nx][ny] > map[x][y]) {
			dp[x][y] += dfs(nx, ny);
		}
	}
	return dp[x][y];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}
	memset(dp, -1, sizeof(dp));
	cout << dfs(n - 1, m - 1);
	return 0;
}
