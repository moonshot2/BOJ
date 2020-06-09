#include <iostream>
#include <vector>
#include <utility>
#include <math.h>
#include <algorithm>
using namespace std;

vector<pair<double, int>> arr;

int main() {
	int x, y, v, n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y >> v;
		double distance = sqrt(pow(x, 2) + pow(y, 2));
		double time = distance / (double)v;
		pair<double, int> time_pair = make_pair(time, i + 1);
		arr.push_back(time_pair);
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n; i++) {
		cout << arr[i].second << "\n";
	}
	return 0;
}