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

vector<string> v;
vector<string> vv;
int n, m, cnt;

void f(int x, int y) {
	cnt++;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (v[x + i][y + j] == '0') v[x + i][y + j] = '1';
			else v[x + i][y + j] = '0';
		}
	}
}

int main() {
	cin >> n >> m;
	bool flag = true;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		v.push_back(s);
	}
	for (int i = 0; i < n; i++) {
		cin >> s;
		vv.push_back(s);
	}
	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < m - 2; j++) {
			if (v[i][j] != vv[i][j]) {
				f(i, j);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (flag) {
			for (int j = 0; j < m; j++) {
				if (v[i][j] != vv[i][j]) {
					cout << "-1" << "\n";
					flag = false;
					break;
				}
			}
		}
	}
	if (flag) cout << cnt << "\n";
	return 0;
}