#include <stdio.h>

int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	while (true) {
		if (n % 5 == 0) {
			cnt += n / 5;
			printf("%d", cnt);
			return 0;
		}
		if (n < 0) {
			printf("-1");
			return 0;
		}
		n = n - 3;
		cnt++;
	}
}