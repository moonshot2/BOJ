#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int map[101][101];
int visit[101][101];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int n, depth;
int mx = 0;

void dfs(int y, int x) {
	visit[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
			if (!visit[ny][nx]) {
				dfs(ny, nx);
			}
		}
	}
}

int main() {
	int max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
			if (map[i][j] > max) {
				max = map[i][j];
			}
		}
	}
	depth = 0;
	while (1) {
		if (depth == max) break;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (map[i][j] <= depth) {
					visit[i][j] = 1;
				}
			}
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (!visit[i][j]) {
					cnt++;
					dfs(i, j);
				}
			}
		}
		if (mx < cnt) {
			mx = cnt;
		}
		depth++;
		memset(visit, 0, sizeof(visit));
	}
	cout << mx;

}