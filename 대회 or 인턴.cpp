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
	int n, m, k;
	int sum = 0;
	cin >> n >> m >> k;
	while (true) {
		if (k <= (n - 2 + m - 1) && n >= 2 && m >= 1) {
			n -= 2;
			m -= 1;
			sum++;
		}
		else break;
	}
	cout << sum;
}