#include <iostream>
using namespace std;

int DP[1010];

int main() {
	int n;
	cin >> n;
	DP[1] = 1;
	for (int i = 1; i <= n; ++i) {
		int num;
		cin >> num;

		if (DP[i] == 0) {
			cout << "-1";
			return 0;
		}

		for (int j = 1; j <= num; ++j) {
			if (i + j > 1000) {
				break;
			}
			if (DP[i + j] > DP[i] + 1 || DP[i + j] == 0) {
				DP[i + j] = DP[i] + 1;
			}
		}
	}
	cout << DP[n] - 1 << "\n";
}