#include <iostream>
#include <queue>
#define N 1001
using namespace std;
int n, m, k;
int map[N][N];
bool visit[N];

void dfs(int a) {
	cout << a << ' ';
	visit[a] = true;
	for (int i = 1; i <= n; i++) {
		if (visit[i] == true || map[a][i] == 0) continue;
		dfs(i);
	}
}

void bfs(int a) {
	queue<int> q;
	q.push(a);
	visit[a] = false;
	while (!q.empty()) {
		a = q.front();
		cout << q.front() << ' ';
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (visit[i] == false || map[a][i] == 0) continue;
			q.push(i);
			visit[i] = false;
		}
	}
}

int main() {
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		map[a][b] = map[b][a] = 1;
	}
	dfs(k);
	cout << "\n";
	bfs(k);
	return 0;
}