#include <stdio.h>

int main() {
	int N, a, b, c;
	int sum = 0, sum1 = 0, sum2 = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		sum = sum + a;
		sum1 = sum1 + b;
		sum2 = sum2 + c;
	}
	if (sum > sum1 || sum > sum2)
	{
		printf("1 ");
		printf("%d\n", sum);
	}
	else if (sum1 > sum || sum1 > sum2)
	{
		printf("2 ");
		printf("%d\n", sum1);
	}
	else
	{
		printf("%3 ");
		printf("%d\n", sum2);
	}

	
	



}