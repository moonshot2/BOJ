#include <iostream>
#define N 1001
using namespace std;
int dp[N];
int n;
int arr[N];

int max(int i, int j) {
	if (i > j) return i;
	else return j;
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	dp[0] = 0;
	arr[0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i], dp[i - j] + arr[j]); // 1장부터 n장까지
		}
	}
	cout << dp[n] << "\n";
}


