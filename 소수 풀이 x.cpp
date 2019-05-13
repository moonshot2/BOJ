#include <stdio.h>

int main() {
	int sum = 0, min = 999;
	int N, M;
	int i, j;
	scanf("%d %d", &N, &M);
	for (i = M; i >= N; i--)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				continue;
			}
			if (j == i)
			{
				sum += i;
				min = i;
			}
		}
	}
	printf("%d %d", sum, min);
}