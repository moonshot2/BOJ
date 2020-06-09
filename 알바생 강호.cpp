#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
#include <queue>
#include <deque>
#include <string>
using namespace std;

int main() {
	vector<int> v;
	long long sum = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end(), greater<int>());
	for (int i = 0; i < n; i++) {
		if (v[i] - i <= 0) break;
		sum += v[i] - i;
	}
	cout << sum;
}