// a>b && b>c => a>c
#include <iostream>
#define N 101
using namespace std;

int map[N][N];

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		map[a][b] = 1;
	}
	for (int k = 1; k <= n; k++) {
		for (int j = 1; j <= n; j++) {
			for (int i = 1; i <= n; i++) {
				if (map[i][k] && map[k][j]) {
					map[i][j] = 1;
				}
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		for (int j = 1; j <= n; j++) {
			if (!map[i][j] && !map[j][i]) {
				cnt++;
			}
		}
		cout << cnt - 1 << "\n";
	}
}