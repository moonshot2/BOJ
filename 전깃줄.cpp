#include <stdio.h>
#include <algorithm>
#include <iostream>
#define N 100001
using namespace std;
int dp[N];

typedef struct {
	int s, e;
}se;

se line[102];
bool compare(se a, se b) {
	return a.s < b.s;
}
int main() {
	int n;
	int res = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d%d", &line[i].s, &line[i].e);
	}
	sort(line, line + n + 1, compare);
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			if (line[i].e > line[j].e) {
				if (dp[j] >= dp[i]) {
					dp[i] = dp[j] + 1;
				}
			}
		}
		res = max(res, dp[i]);
	}
	printf("%d", n - res);
}