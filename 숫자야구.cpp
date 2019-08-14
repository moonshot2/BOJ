#include <stdio.h>
#define N 110
int n, cnt = 0;
int NUM[N], S[N], B[N];

int check(int a,int b,int c) {
	if (a == b || b == c || a == c) return 1;
	else return 0;
}

int q(int o1, int o2, int o3, int t1, int t2, int t3,int j) {
	int s = 0, b = 0;
	if (o1 == t1) s++;
	if (o2 == t2) s++;
	if (o3 == t3) s++;
	if (o1 == t2 || o1 == t3) b++;
	if (o2 == t1 || o2 == t3) b++;
	if (o3 == t1 || o3 == t2) b++;
	if (S[j] == s && B[j] == b) return 1;
	else return 0;
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, o1, o2, o3, t1, t2, t3,temp;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d %d %d", &NUM[i], &S[i], &B[i]);
	}
	for (i = 123; i <= 987; i++) {
		o1 = i / 100;
		o2 = i / 10 % 10;
		o3 = i % 10;
		if (check(o1, o2, o3)) continue;
		for (j = 1; j <= n; j++) {
			t1 = NUM[j] / 100;
			t2 = NUM[j] / 10 % 10;
			t3 = NUM[j] % 10;
			temp = q(o1, o2, o3, t1, t2, t3, j);
			if (temp == 0)break;
		}
		if (j == n + 1) {
			cnt++;
		}
	}
	printf("%d", cnt);
}
