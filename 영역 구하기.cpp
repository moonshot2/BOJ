#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int map[101][101];
int visit[101][101];
int cnt;
int n, m, k;
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

void dfs(int y, int x) {
	visit[y][x] = 1;
	cnt++;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (0 <= nx && nx < n && 0 <= ny && ny < m) {
			if (map[ny][nx] == 0 && !visit[ny][nx]) {
				dfs(ny, nx);
			}
		}
	}
}

int main() {
	cin >> m >> n >> k;
	for (int i = 0; i < k; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int y = y1; y < y2; y++) {
			for (int x = x1; x < x2; x++) {
				map[y][x] = 1;
			}
		}
	}
	vector<int> res;
	for (int y = 0; y < m; y++) {
		for (int x = 0; x < n; x++) {
			if (map[y][x] == 0 && !visit[y][x]) {
				cnt = 0;
				dfs(y, x);
				res.push_back(cnt);
			}
		}
	}
	cout << res.size() << "\n";
	sort(res.begin(), res.end());
	for (int i = 0; i < res.size(); i++) {
		printf("%d ", res[i]);
	}
	return 0;
}