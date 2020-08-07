#include <iostream>
#include <climits>
using namespace std;

int arr[10001];

int main() {
	cin.tie();
	cout.tie();
	int n, m;
	long long left = 0;
	long long right = LLONG_MAX;
	long long max = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	while (left <= right) {
		long long mid = (left + right) / 2;
		int res = 0;
		for (int i = 0; i < n; i++) {
			res += arr[i] / mid;
		}
		if (res >= m) {
			left = mid + 1;
			if (mid > max) {
				max = mid;
			}
		}
		else {
			right = mid - 1;
		}
	}
	cout << max;
}