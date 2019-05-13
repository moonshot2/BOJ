#include <stdio.h>

int main() {
	int i;
	int sum = 0, max = 0;
	int M[101] = { 0, };
	int N;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &N);
		sum += N;
		M[N / 10]++;
	}
	for (i = 0; i < 100; i++)
	{
		if (max < M[i])
		{
			max = M[i];
		}
	}
	printf("%d %d", sum / 10, max * 10);

}