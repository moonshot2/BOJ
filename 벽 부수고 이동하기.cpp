#include <iostream>
#include <queue>
#include <utility>
#include <string>
using namespace std;

int N, M;
int map[1001][1001];
int check[1001][1001][2];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

int BFS() {
	queue<pair<pair<int, int>, int>>q;
	q.push(make_pair(make_pair(0, 0), 1));
	while (!q.empty()) {
		int y = q.front().first.first;
		int x = q.front().first.second;
		int block = q.front().second;
		q.pop();
		if (y == N - 1 && x == M - 1) {
			return check[y][x][block];
		}
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (ny >= 0 && ny < N && nx >= 0 && nx < M) {
				//안갔고, 벽없고
				if (map[ny][nx] == 0 && check[ny][nx][block] == 0) {
					q.push(make_pair(make_pair(ny, nx), block));
					check[ny][nx][block] = check[y][x][block] + 1;
				}
				//부신적없는데 벽이야
				else if (map[ny][nx] == 1 && block) {
					check[ny][nx][block - 1] = check[y][x][block] + 1;
					q.push(make_pair(make_pair(ny, nx), block - 1));
				}
			}
		}
	}
	return -1;
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	cout << BFS();
}