#include <iostream>
#define N 1001
using namespace std;

int dp1[N];
int dp2[N];
int value[N];
int res = 0;
int n = 0;
int i;
int j;

int get_max(int x, int y) {
	if (x > y)return x;
	return y;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> value[i];
		dp1[i] = value[i];
	}
	for (i = 0; i < n; i++) {
		dp2[i] = 1;
		for (j = 0; j < i; j++) {
			if (value[i] > value[j] && dp2[j] + 1 > dp2[i]) {
				dp2[i] = dp2[j] + 1;
				dp1[i] = get_max(dp1[i], dp1[j] + value[i]);
			}
			res = get_max(res, dp1[i]);
		}
	}
	cout << res;
}