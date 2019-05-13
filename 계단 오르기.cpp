// dp[n] = dp[n - 3] + array[n - 1] + array[n]
// dp[n] = dp[n - 2] + array[n]
// dp[n] = max(dp[n-3] + array[n-1] + array[n], dp[n-2] + array[n]

#include <iostream>

using namespace std;
int n, stair[1001];
int dp[1001];

int Max(int a,int b) {
	return a > b ? a : b;
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> stair[i];
	}

	dp[0] = stair[0]; // 1Ä­À» °£ °æ¿ì
	dp[1] = Max(stair[0] + stair[1], stair[1]); // 2Ä­À» °£ °æ¿ì (1+1Ä­,2Ä­)Áß ÃÖ´ë°ª ÀúÀå 
	dp[2] = Max(stair[0] + stair[2], stair[1] + stair[2]); // 3Ä­À» °£ °æ¿ì (1+2Ä­,2+1Ä­)Áß ÃÖ´ë°ª ÀúÀå

	for (int i = 3; i < n; i++) {
		dp[i] = Max(stair[i - 1] + stair[i] + dp[i - 3], dp[i - 2] + stair[i]);
	}

	cout << '\n' << dp[n - 1] << '\n';
	
}