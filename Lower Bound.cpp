/*#include <stdio.h>
#define N 20
int n, k;
int A[N];
void input() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &A[i]);
	}
	scanf("%d", &k);
}

int run(int s, int e) {
	int m;
	while (e - s > 0) {
		m = (s + e) / 2;
		if (A[m] < k) {
			s = m + 1;
		}
		else {
			e = m;
		}
	}
	return s;
}

int main() {
	freopen("input.txt", "r", stdin);
	input();
	printf("%d",run(1,n+1));
}*/

#include <stdio.h>
#define N 20
int n, k;
int A[N];

int run(int s, int e) {
	int m;
	while (e - s < 0) {
		m = (s + e) / 2;
		if (A[m] < k) s = m + 1;
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
	printf("%d",run(1, n + 1));
}