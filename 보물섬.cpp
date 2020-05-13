#include <iostream>
#include <algorithm>
#include <string.h>
#include <queue>
#include <utility>
#define N 51
using namespace std;

int h, w;
char map[N][N];
int save_map[N][N];
int xy[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };

int max(int x, int y) {
	if (x > y)return x;
	return y;
}

int bfs(int y, int x) {
	memset(save_map, 0, sizeof(save_map));
	queue<pair<int, int>> q;
	int result = 0;
	q.push(make_pair(y, x));
	save_map[y][x] = 1;
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + xy[i][0];
			int ny = y + xy[i][1];
			result = max(result, save_map[y][x]);
			if (y < h || y>0 || x < w || x>0) {
				if (map[ny][nx] == 'L' && save_map[ny][nx] == 0) {
					q.push(make_pair(ny, nx));
					save_map[ny][nx] = save_map[y][x] + 1;
				}
			}
		}
	}
	return result - 1;
}

int main() {
	cin >> h >> w;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> map[i][j];
		}
	}
	int res = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (map[i][j] == 'L') {
				res = max(res, bfs(i, j));
			}
		}
	}
	cout << res;
}