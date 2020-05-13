#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> map;
vector<bool>visit;
int res = 0;
void dfs(int x) {
	res++;
	visit[x] = true;
	for (int k = 0; k < map[x].size(); k++) {
		if (!visit[map[x][k]]) {
			dfs(map[x][k]);
		}
	}
}

int main() {
	int n, m;
	int from, to;
	cin >> n >> m;
	visit.resize(n + 1);
	map.resize(n + 1);
	for (int i = 0; i < m; i++) {
		cin >> from >> to;
		map[from].push_back(to);
		map[to].push_back(from);
	}
	dfs(1);
	cout << res - 1;
}