#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <string>
#include <stdlib.h>
#include <time.h>
#define mp make_pair
using namespace std;

int main() {
	int n, m;
	int sum = 0;
	vector<int> v;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	if (abs(v.front()) > abs(v.back())) {
		sum += abs(v.front());
		for (int i = m; v[i] < 0 && i < v.size(); i += m) {
			sum += abs(v[i]) * 2;
		}
		for (int i = v.size() - 1; v[i] > 0 && i >= 0; i -= m) {
			sum += v[i] * 2;
		}
	}
	else {
		sum += abs(v.back());
		for (int i = 0; v[i] < 0 && v.size(); i += m) {
			sum += abs(v[i]) * 2;
		}
		for (int i = (v.size() - 1) - m; v[i] > 0 && i >= 0; i -= m) {
			sum += v[i] * 2;
		}
	}
	cout << sum << "\n";
}