#include <iostream>
#include <queue>
using namespace std;

queue <int> q;
int map[101][101];
bool visit[101];
int dep[101];
int n, m, t, k;
int a, b;

void bfs(int s) {
	visit[s] = true;
	q.push(s);
	int tmp;
	while (!q.empty()) {
		tmp = q.front();
		q.pop();
		for (int i = 1; i <= t; i++) {
			if (map[tmp][i] == 1 && !visit[i]) {
				visit[i] = true;
				dep[i] = dep[tmp] + 1;
				q.push(i);
			}
		}
	}
}

int main() {
	cin >> t;
	cin >> n >> m;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> a >> b;
		map[a][b] = 1;
		map[b][a] = 1;
	}
	bfs(n);

	if (dep[m] != 0) {
		cout << dep[m] << "\n";
	}
	else {
		cout << "-1" << "\n";
	}
	return 0;

}