#include <iostream>
#include <stdio.h>
using namespace std;

int map[1001][1001];
int dp[1001][1001];

int main() {
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> map[i][j];
		}
	}
	cin >> n;
	while (n-- > 0) {
		int a, b, c, d;
		int sum = 0;
		cin >> a >> b >> c >> d;
		for (int i = a; i <= c; i++) {
			for (int j = b; j <= d; j++) {
				sum += map[i][j];
			}
		}
		cout << sum << "\n";
	}
	return 0;
}