#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int map[5][5];
int cnt = 0, len = 5;
set<int> s;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

void dfs(int y, int x, int cnt, int sum) {
	if (cnt == len) {
		s.insert(sum);
		return;
	}
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5) continue;
		dfs(ny, nx, cnt + 1, sum * 10 + map[ny][nx]);
	}
}

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			dfs(i, j, cnt, map[i][j]);
		}
	}
	cout << s.size();
}