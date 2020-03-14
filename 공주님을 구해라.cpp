#include <stdio.h>
#include <queue>
#include <utility>
using namespace std;

#define N 5000

int xy[4][4] = { {0,1},{0,-1},{1,0},{-1,0} };
int check1[N][N];
int check2[N][N];
int map[N][N];

queue<pair<int, int>> q;

void bfs(int a, int b) {
	int nxn, nxm;
	q.push(pair<int, int>(a, b));
	while (!q.empty()) {
		int nn = q.front().first;
		int mm = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			nxn = nn + xy[i][0];
			nxm = mm + xy[i][1];
			if (map[nxn][nxm] != -1) {
				q.push(pair<int, int>(nxn, nxm));
				check1[nxn][nxm] = check1[nn][mm] + 1;
			}
		}
	}
}

int main() {
	freopen("input.txt", "r", stdin);
	int n, m, t;
	int cnt = 0;
	scanf("%d %d %d", &n, &m, &t);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	bfs(0, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (cnt < check1[i][j]) {
				cnt = check1[i][j];
			}
		}
	}
	printf("%d", cnt);