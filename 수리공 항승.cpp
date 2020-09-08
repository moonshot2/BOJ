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

int A[1001];

int main() {
	int n, m;
	int cnt = 0;
	int cur = 1;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	sort(A, A + n);
	int i = 0;
	while (true) {
		if (A[i] == 0) break;
		if (cur <= A[i]) {
			cur = A[i] + m;
			cnt++;
		}
		i++;
	}
	cout << cnt;
}
