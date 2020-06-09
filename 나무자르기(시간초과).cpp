#include <iostream>
using namespace std;

long long tree[1000001];

int main() {
	cin.tie();
	cout.tie();
	long long start = 0;
	long long max = 0;
	long long n, m;
	long long res = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> tree[i];
		if (max < tree[i])
			max = tree[i];
	}
	long long end = max;
	while (start <= end) {
		long long mid = (start + end) / 2;
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			if (mid < tree[i]) {
				sum += tree[i] - mid;
			}
			if (sum >= m) {
				if (res < mid)
					res = mid;
				start = mid + 1;
			}
			else {
				end = mid - 1;
			}
		}
	}
	cout << res;
	return 0;
}