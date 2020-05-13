#include <iostream>
#include <queue>
#define INF 987654321
using namespace std;

queue<int> q;
int map[10][10] = { 0, };
int visit[10] = { 0, };
int res = 0;
int MIN = INF;
int min2 = INF;
int start, ed;
int n, m;

void dfs(int x) {
	for (int i = 0; i < n; i++) {
		if (!visit[x] && map[x][i] != 0) {
			res += map[x][i];
			visit[x] = 1;
			dfs(i);
		}
	}
}

int main() {
	freopen("input.txt", "r", stdin);
	while (true) {
		cin >> n >> m;
		if (n == 0 && m == 0) break;
		cin >> start >> ed;
		for (int i = 0; i < m; i++) {
			int x, y, z;
			cin >> x >> y >> z;
			map[x][y] = z;
		}
		for (int i = 0; i < n; i++) {
			if (map[0][i] != 0) {
				res = map[0][i];
				visit[0] = 1;
				dfs(i);
				q.push(res);
				res = 0;
				memset(visit, 0, sizeof(visit));
			}

		}
		for (int i = 0; i < q.size(); i++) {
			int a;
			a = q.front();
			q.pop();
			cout << a << "\n";
		}
	}
	return 0;
}