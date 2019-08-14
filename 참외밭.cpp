#include <stdio.h>

int main() {
	int n, i, j;
	int a[6];
	int b[6];
	int max = 0;
	int result = 0;
	scanf("%d", &n);
	for (i = 0; i < 6; i++) {
		scanf("%d %d", &a[i], &b[i]);
	}
	for (i = 0; i < 6; i++) {
		if (max < b[i] * b[(i + 1) % 6]) {
			max = b[i] * b[(i + 1) % 6];
			j = i;
		}
	}
	result = b[(j + 3) % 6] * b[(j + 4) % 6];
	max = max - result;
	printf("%d", max * n);
}