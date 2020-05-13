#include <iostream>
#define N 101
using namespace std;

int n, m;
int map1[N][N];
int map2[N][N];
bool visit1[N];
bool visit2[N];
int res[N];

void dfs1(int a) {
	visit1[a] = true;
	for (int i = 1; i <= n; i++) {
		if (map1[a][i] == 1 && !visit1[i]) {
			dfs1(i);
		}
	}
}

void dfs2(int a) {
	visit2[a] = true;
	for (int i = 1; i <= n; i++) {
		if (map2[a][i] == 1 && !visit2[i]) {
			dfs2(i);
		}
	}
}

void reset() {
	for (int i = 1; i <= n; i++) {
		visit1[i] = false;
	}
	for (int i = 1; i <= n; i++) {
		visit2[i] = false;
	}
}

int main() {
	int a, b;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		map1[a][b] = 1;
		map2[b][a] = 1;
	}
	for (int i = 1; i <= n; i++) {
		reset();
		dfs1(i);
		dfs2(i);
		int cnt = 0;
		for (int j = 1; j <= n; j++) {
			if (visit1[j] || visit2[j]) {
				cnt++;
			}
		}
		res[i] = n - cnt;
	}
	for (int i = 1; i <= n; i++) {
		cout << res[i] << "\n";
	}
}