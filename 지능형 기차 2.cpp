#include <stdio.h>

int main() {
	int a, b, MAX = 0, sum = 0;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d %d", &a, &b);
		sum += b - a;
		if (MAX < sum) {
			MAX = sum;
		}
	}
	printf("%d", MAX);
}
