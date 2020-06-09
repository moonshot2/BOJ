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

bool cmp(pair<int, int>& a, pair<int, int>& b) {
	return a.first < b.first;
}

int main() {
	vector<pair<int, int>> v;
	int T;
	cin >> T;
	while (T--) {
		int n;
		v.clear();
		cin >> n;
		for (int i = 0; i < n; i++) {
			int a, b;
			cin >> a >> b;
			v.push_back(mp(a, b));
		}
		sort(v.begin(), v.end(), cmp);
		int value = v[0].second;
		int cnt = n;
		for (int k = 1; k < n; k++) {
			if (v[k].second > value) cnt--;
			value = min(value, v[k].second);
		}
		cout << cnt << "\n";
	}
	return 0;
}