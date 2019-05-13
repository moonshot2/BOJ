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

	dp[0] = stair[0]; // 1ĭ�� �� ���
	dp[1] = Max(stair[0] + stair[1], stair[1]); // 2ĭ�� �� ��� (1+1ĭ,2ĭ)�� �ִ밪 ���� 
	dp[2] = Max(stair[0] + stair[2], stair[1] + stair[2]); // 3ĭ�� �� ��� (1+2ĭ,2+1ĭ)�� �ִ밪 ����

	for (int i = 3; i < n; i++) {
		dp[i] = Max(stair[i - 1] + stair[i] + dp[i - 3], dp[i - 2] + stair[i]);
	}

	cout << '\n' << dp[n - 1] << '\n';
	
}