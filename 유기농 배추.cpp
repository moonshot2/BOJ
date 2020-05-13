#include <iostream>
#include <string>
#define N 51
using namespace std;
int n;
int h, w, k;
bool map[N][N] = { false, };
int xy[4][2] = { {0,1},{1,0},{-1,0},{0,-1} };
bool visit[N][N] = { false, };

void dfs(int a, int b) {
	visit[a][b] = true;
	for (int i = 0; i < 4; i++) {
		int ax = a + xy[i][0];
		int ay = b + xy[i][1];
		if (ax > h || ax<0 || ay>w || ay < 0) continue;
		if (!map[ax][ay] || visit[ax][ay]) continue;
		dfs(ax, ay);
	}
}
int main() {
	cin >> n;
	while (n--) {
		cin >> h >> w >> k;
		for (int i = 0; i < k; i++) {
			int a, b;
			cin >> a >> b;
			map[a][b] = true;
		}
		int cnt = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (!visit[i][j] && map[i][j] == 1) {
					cnt++;
					dfs(i, j);
				}
			}
		}
		cout << cnt << "\n";
		memset(map, 0, sizeof(map));
		memset(visit, 0, sizeof(visit));
	}
	return 0;
}