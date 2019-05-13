#include <stdio.h>

int main() {

	int D;
	int K;
	int A, B;
	int a = 1, b = 1;
	scanf("%d %d", &D, &K);
	
	for (int d = 3; d < D; ++d)
	{
		int temp = b;
		b = a + b;
		a = temp;
	}
	for (A = 1; a*A <= K; A++)
	{
		for (B = 1; b*B <= K; B++)
		{
			if (a*A + b * B == K)
			{
				printf("%d %d", A, B);
				return 0;
			}
		}
	}
}













