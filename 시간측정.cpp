#include <stdio.h>
#include <time.h>

int main() {
	int start = clock();
	int a = 0;
	int b = 0;
	for (int i = 0; i < 1000000; i++) {
		a += 1;
		b += 1;
	}
	printf("%.3lf", (double)(clock() - start) / CLOCKS_PER_SEC);
	return 0;
}