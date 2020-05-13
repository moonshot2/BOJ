#include <iostream>
#include <vector>
using namespace std;
vector<int> v[20001];
int color[20001];
void dfs(int x, int c) {
	color[x] = c;
	for (int i = 0; i < v[x].size(); i++) {
		int next = v[x][i];
		if (color[next] == 0) {
			dfs(next, 3 - c);
		}
	}
}

int main() {
	cin.tie(0);
	int n;
	int spot, line;
	cin >> n;
	while (n--) {
		cin >> spot >> line;
		for (int i = 1; i <= spot; i++) {
			v[i].clear();
			color[i] = 0;
		}
		for (int i = 0; i < line; i++) {
			int a, b;
			cin >> a >> b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		for (int i = 1; i <= spot; i++) {
			if (color[i] == 0) {
				dfs(i, 1);
			}
		}
		bool check = true;
		for (int i = 1; i <= spot; i++) {
			for (int j = 0; j < v[i].size(); j++) {
				int k = v[i][j];
				if (color[i] == color[k]) {
					check = false;
				}
			}
		}
		if (check) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}
	return 0;
}