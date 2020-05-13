#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
char map[51][51];
int graph[51][51];

int main() {
	queue<pair<int, int>> q;
	queue<pair<int, int>> wt;
	int h, w;
	cin >> h >> w;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> map[i][j];
			if (map[i][j] == '*') {
				wt.push(make_pair(i, j));
			}
			else if (map[i][j] == 'S') {
				q.push(make_pair(i, j));
				graph[i][j] = 1;
			}
			else if (map[i][j] == 'D') {
				graph[i][j] = -1;
			}
		}
	}
	while (!q.empty()) {
		/*int qsize = q.size();
		for (int i = 0; i < qsize; i++) {
			int x = q.front().first;
			int y = q.front().second;
			q.pop();
			for (int j = 0; j < 4; j++) {
				int nx = x + dx[i];
				int ny = y + dy[i];
				if (nx < h && nx >= 0 && ny < w && ny >= 0) {
					if (map[nx][ny] == 'D') {
						cout << graph[x][y];
						return 0;
					}
				}
			}
			q.push(make_pair(x, y));
		}*/
		int nx, ny, wnx, wny;
		int line = wt.size();
		while (line-- > 0) {
			int wx = wt.front().first;
			int wy = wt.front().second;
			for (int i = 0; i < 4; i++) { // ¹°
				wnx = wx + dx[i];
				wny = wy + dy[i];
				if (wnx < h && wnx >= 0 && wny < w && wny >= 0) {
					if (map[wnx][wny] == '.') {
						wt.push(make_pair(wnx, wny));
						map[wnx][wny] = '*';
					}
					if (map[wnx][wny] == 'S') {
						wt.push(make_pair(wnx, wny));
						map[wnx][wny] = '*';
					}
				}
			}
			wt.pop();
		}
		int qq = q.size();
		while (qq-- > 0) {
			int x = q.front().first;
			int y = q.front().second;
			for (int i = 0; i < 4; i++) {
				nx = x + dx[i];
				ny = y + dy[i];
				if (nx < h && nx >= 0 && ny < w && ny >= 0) {
					if (map[nx][ny] == '.') {
						q.push(make_pair(nx, ny));
						map[nx][ny] = 'S';
						graph[nx][ny] = graph[x][y] + 1;
					}
					if (map[nx][ny] == 'D') {
						cout << graph[x][y];
						return 0;
					}
				}
			}
			q.pop();
		}
	}
	cout << "KAKTUS" << "\n";
}