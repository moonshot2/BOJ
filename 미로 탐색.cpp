#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int map[101][101];
int check[101][101];
queue<pair<int, int>> q;
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	int nx, ny;
	q.push(make_pair(0, 0));
	check[0][0] = 1;
	while (!q.empty()) {
		int xx = q.front().first;
		int yy = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			nx = xx + dx[i];
			ny = yy + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
				if (map[nx][ny] != 0 && !check[nx][ny]) {
					q.push(make_pair(nx, ny));
					check[nx][ny] = check[xx][yy] + 1;
				}
			}
		}
	}
	cout << check[n - 1][m - 1];
}