#include <iostream>
#include <algorithm>
using namespace std;

int a[100001];

int main() {
	cin.tie();
	int n;
	int res = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		res = max(res, a[i] * (n - i));
	}
	cout << res;
}