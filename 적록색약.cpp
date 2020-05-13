#include <iostream>
#include <cstring>
using namespace std;

int map[101][101];
int visit[101][101];
int n;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

void dfs(int y, int x) {
	visit[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
			if (!visit[ny][nx] && map[y][x] == map[ny][nx]) {
				dfs(ny, nx);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	cin >> n;
	char ch;
	//scanf("%*c");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> ch;
			if (ch == 'R') map[i][j] = 1;
			else if (ch == 'G') map[i][j] = 2;
			else map[i][j] = 3;
		}
		//scanf("%*c");
	}
	//정상인
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visit[i][j]) {
				cnt++;
				dfs(i, j);
			}
		}
	}
	cout << cnt << " ";
	memset(visit, 0, sizeof(visit));
	//적록색약
	cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 2) {
				map[i][j] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visit[i][j]) {
				cnt++;
				dfs(i, j);
			}
		}
	}
	cout << cnt << "\n";
	return 0;
}