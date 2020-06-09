#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long sum;

int main() {
	cin.tie();
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	for (int i = 1; i <= n; i++) {
		sum += abs(i - v[i - 1]);
	}
	cout << sum;
}