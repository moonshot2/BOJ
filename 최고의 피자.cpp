#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	int n, a, b, c, d[10001];
	cin >> n;
	cin >> a >> b;
	cin >> c;
	for (int i = 0; i < n; i++) {
		cin >> d[i];
	}
	sort(d, d + n, cmp);
	for (int i = 0; i < n; ++i) {
		if (c / a < d[i] / b) {
			c += d[i];
			a += b;
		}
	}
	cout << c / a;
}