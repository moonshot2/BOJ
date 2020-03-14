#include <stdio.h>

int main() {
	int s, t, d;
	int res = 0, temp = 0;

	scanf("%d %d %d", &s, &t, &d);
	temp = d / (s * 2);
	res = temp * t;
	printf("%d", res);
}