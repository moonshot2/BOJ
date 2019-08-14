#include <stdio.h>
#define N 1000

int main() {
	int a, b, c;
	int T, n;
	int sum = 0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d %d %d", &a, &b, &c);
			if (a < 0 && b < 0 && c < 0) {
				a = 0;
				b-
			}
			if (a > b&&a > c) {
				sum += a;
			}
			else if (b > a&&b > c) {
				sum += b;
			}
			else {
				sum += c;
			}
		}
		printf("%d", sum);
	}
}