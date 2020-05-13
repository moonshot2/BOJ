#include <iostream>
#include <algorithm>
#include <stdio.h>
#define N 100001
using namespace std;
int n;
struct abc {
	int start, end;
}ROOM[100001];

bool cmp(const abc& a, const abc& b) {
	if (a.end == b.end) return a.start < b.start;
	return a.end < b.end;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ROOM[i].start >> ROOM[i].end;
	}
	sort(ROOM, ROOM + n, cmp);
	int cnt = 1;
	int tmp;
	tmp = ROOM[0].end;
	for (int i = 1; i < n; i++) {
		if (ROOM[i].start >= tmp) {
			tmp = ROOM[i].end;
			cnt++;
		}
	}
	cout << cnt;
}