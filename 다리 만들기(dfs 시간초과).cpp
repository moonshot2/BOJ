#include <iostream>
using namespace std;

int n;
int map[101][101];
bool visit[101][101];
int check[101][101];
int xy[4][2] = { {0,1},{1,0},{-1,0},{0,-1} };
int MIN = 9876;
void min(int a, int b) {
	if (a < b)
		MIN = a;
	else
		MIN = b;
}

void dfs(int y, int x, int cnt) {
	visit[y][x] = true;
	map[y][x] = cnt; //몇번 섬인지 표시
	for (int i = 0; i < 4; i++)
	{
		int nextY = y + xy[i][1];
		int nextX = x + xy[i][0];
		if (0 <= nextY && nextY < n && 0 <= nextX && nextX < n)
			if (map[nextY][nextX] == 1 && !visit[nextY][nextX])
				dfs(nextY, nextX, cnt);
	}
}
int line = 0;
void find(int y, int x, int cnt, int s) {
	if (y >= 0 && y < n && x >= 0 && x < n) {
		if (map[y][x] != 0 && map[y][x] != s) {
			min(MIN, cnt);
			return;
		}
		if (map[y][x] != 0 || map[y][x] == s || check[y][x] == 1 || MIN < cnt) {
			return;
		}
		check[y][x] = 1;

		find(y, x + 1, cnt + 1, s);
		find(y, x - 1, cnt + 1, s);
		find(y + 1, x, cnt + 1, s);
		find(y - 1, x, cnt + 1, s);
		check[y][x] = 0;
		return;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 1 && !visit[i][j]) {
				dfs(i, j, cnt++);
			}
		}
	}
	for (int j = 0; j < n; j++) {
		for (int k = 0; k < n; k++) {
			if (map[j][k] != 0) {
				find(j + 1, k, 0, map[j][k]);
				find(j - 1, k, 0, map[j][k]);
				find(j, k + 1, 0, map[j][k]);
				find(j, k - 1, 0, map[j][k]);
			}
		}
	}
	cout << MIN;
}