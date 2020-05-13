#include <iostream>
#include <vector>
#define N 1001
using namespace std;
vector<int>map[N];
bool visit[N] = { false, };

void dfs(int a) {
	int next;
	visit[a] = true;
	for (int i = 0; i < map[a].size(); i++) {
		next = map[a][i];
		if (visit[next] == false) {
			dfs(next);
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		map[a].push_back(b);
		map[b].push_back(a);
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (visit[i] == false) {
			cnt++;
			dfs(i);
		}
	}
	cout << cnt;
}