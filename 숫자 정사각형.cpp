#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int map[51][51];
int n, m;

int maxsq(void) {
	int res = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 1; k < min(n, m); k++) {
				if (i + k < n && j + k < m && map[i + k][j] == map[i][j] && map[i][j + k] == map[i][j] && map[i + k][j + k] == map[i][j]) {
					res = max(res, k + 1);
				}
			}
		}
	}
	return res * res;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		for (int j = 0; j < m; j++) {
			map[i][j] = tmp[j] - '0';
		}
	}
	cout << maxsq() << "\n";
	return 0;
}