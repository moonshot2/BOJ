#include <stdio.h>
int A[20], n, k;

int run(int s, int e) {
	int m;
	while (e - s > 0) {
		m = (e + s) / 2;
		if (A[m] <= k) s = m + 1;
		else e = m;
	}
	return e;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &A[i]);
	}
	scanf("%d", &k);
	printf("%d", run(1, n + 1));
}