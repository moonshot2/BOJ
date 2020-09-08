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
	int n, m;
	cin >> n >> m;
	if (n == 1) { // 못움직임
		cout << "1" << "\n";
	}
	else if (n == 2) { // 2,3만 가능 2 3 2 3
		cout << min(4, (m + 1) / 2) << "\n";
	}
	// 1234 한번씩은 다 나와야함
	else if (n >= 3) {
		if (m <= 6) {
			cout << min(4, m) << "\n";
		}
		else {
			cout << m - 2 << "\n";
		}
	}
	return 0;
}