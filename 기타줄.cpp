#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
#include <queue>
#include <deque>
#include <string>
#define mp make_pair
using namespace std;

int main() {
	int n, m;
	int sum = 0;
	int c = 0, d = 0;
	cin >> n >> m;
	int a[1001];
	int b[1001];
	for (int i = 0; i < m; i++) {
		cin >> a[i] >> b[i];
	}
	sort(a, a + m);
	sort(b, b + m);
	int e;
	sum = n / 6 * a[0] + n % 6 * b[0];
	d = n * b[0];
	c = n / 6 * a[0] + a[0];
	e = min(c, d);
	cout << min(sum, e);
}
