#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001];
int box[1001];

int main() {
	int n;
	int res = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> box[i];
	}
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (box[j] < box[i] && dp[i] < dp[j] + 1) {
				dp[i] = dp[j] + 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		res = max(dp[i], res);
	}
	cout << res;
}