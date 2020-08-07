#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <utility>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <bitset>
#include <string>
#include <stdlib.h>
#include <time.h>
#define mp make_pair
using namespace std;

int main() {
	vector<int> box;
	vector<int> crane;
	int n, m;
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		crane.push_back(a);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		box.push_back(a);
	}
	sort(box.begin(), box.end(), greater<int>());
	sort(crane.begin(), crane.end(), greater<int>());
	if (crane[0] < box[0]) {
		cout << "-1";
		return 0;
	}
	else {
		while (box.size()) {
			int idx = 0;
			for (int i = 0; i < box.size(); i++) {
				if (idx == crane.size()) {
					break;
				}
				if (crane[idx] >= box[i]) {
					idx++;
					box.erase(box.begin() + i);
					i = i - 1;
				}
			}
			cnt++;
		}
		cout << cnt;
	}
}