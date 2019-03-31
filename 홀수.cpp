#include <stdio.h>

int main() {
	int n, i, min=101, sum=0;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &n);
		if (n % 2 == 1)
		{
			sum = sum + n;
			if (min > n)
			{
				min = n;
			}
		}
	}
	printf("%d %d", sum, min);

}