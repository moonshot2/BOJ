#include <stdio.h>

int main() {
	int n, m;
	int sum = 0;
	int A[101];
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = i + 2; k < n; k++)
			{
				if (A[i] + A[j] + A[k] <= m && m - (A[i] + A[j] + A[k]) < m - sum)
				{
					sum = A[i] + A[j] + A[k];
				}
			}
		}
	}
	printf("%d", sum);
}