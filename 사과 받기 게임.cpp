#include <iostream>
using namespace std;
int main() {
	int n, m, k, cur;
	int res = 0;
	cin >> n >> m;
	cur = 1;
	cin >> k;
	int a, b;
	int r = cur + m - 1;
	for (int i = 0; i < k; i++) {
		cin >> a;
		if (a < cur) {
			b = cur - a;
			cur = a;
			r = cur + m - 1;
			res += b;
		}
		else if (r < a) {
			b = a - r;
			cur += b;
			r = a;
			res += b;
		}
	}
	cout << res;
}