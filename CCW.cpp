#include <stdio.h>

int ccw(int x1, int y1, int x2, int y2, int x3, int y3) {
	int temp = x1 * y2 + x2 * y3 + x3 * y1;
	temp = temp - y1 * x2 - y2 * x3 - y3 * x1;
	if (temp > 0) {
		return 1;
	}
	else if (temp < 0) {
		return -1;
	}
	else {
		return 0;
	}
}


int main() {
	int a, aa, b, bb, c, cc;
	scanf("%d %d %d %d %d %d", &a, &aa, &b, &bb, &c, &cc);
	printf("%d", ccw(a, aa, b, bb, c, cc));
}