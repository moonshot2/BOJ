#include <iostream>
using namespace std;

int dp[20];
int T[15];
int P[15];

int max(int a, int b) {
	return a > b ? a : b;	
}

int main() {
	int n;
	int next;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> T[i] >> P[i];
	}
	for (int i = n; i>0; i--) {
		next = i + T[i];
		if (next > n + 1) {
			dp[i] = dp[i + 1];
		}
		else {
			dp[i] = max(dp[i + 1], dp[next] + P[i]);
		}
	}
	cout << dp[1];
	return 0;
}