#include <iostream>
using namespace std;

int dp[12];

int main() {
	int n;
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 0; i < n; i++) {
		int in;
		cin >> in;
		for (int j = 4; j <= in; j++) {
			dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
		}
		cout << dp[in] << "\n";
	}
	return 0;
}