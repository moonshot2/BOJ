// 차량 10부제 
// n값 받고 A배열 대조
// sum값 증가후 출력

#include <stdio.h>

int main() {
	int n, i, sum = 0;
	int A[5];
	scanf("%d", &n);
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &A[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (n == A[i])
		{
			sum++;
		}
	}
	printf("%d", sum);
}