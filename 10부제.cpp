// ���� 10���� 
// n�� �ް� A�迭 ����
// sum�� ������ ���

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