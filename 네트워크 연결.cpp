#include <stdio.h>
#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <string>
#include <algorithm>
#define mp make_pair
#define N 100001
using namespace std;

int parant[1001];

int unionfind(int node) {
	if (node == parant[node]) {
		return node;
	}
	else {
		return parant[node] = unionfind(parant[node]);
	}
}

struct abc {
	int start, end, value;
}arr[N];

bool cmp(abc avalue, abc bvalue) {
	return avalue.value < bvalue.value;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int n, m;
	long long res = 0;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> arr[i].start >> arr[i].end >> arr[i].value;
	}
	for (int i = 1; i <= n; i++) {
		parant[i] = i;
	}
	sort(arr + 1, arr + m + 1, cmp);
	for (int i = 1; i <= m; i++) {
		if (arr[i].start == arr[i].end) continue;
		if (unionfind(arr[i].start) != unionfind(arr[i].end)) {
			parant[unionfind(arr[i].start)] = parant[unionfind(arr[i].end)];
			res += arr[i].value;
		}
	}
	cout << res;
}