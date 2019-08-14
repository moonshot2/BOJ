#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int w[101][101];
int n, m;
bool check[100];

deque<int> deq;

int bfs() {
	int cnt = -1;
	while (deq.size() != 0) {
		int visit = deq.front();
		deq.pop_front();
		cnt++;
		for (int j = 1; j <= n; j++) {
			if (w[visit][j] != 0 && check[j] == 0)
			{
				check[j] = 1;
				deq.push_back(j);
			}
		}
	}
	return cnt;
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		w[x][y] = 1;
		w[y][x] = 1;
	}
	
	deq.push_back(1);
	check[1] = 1;

	cout << bfs();
	return 0;
}