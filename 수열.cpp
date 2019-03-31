#include <stdio.h>
#define N 100010
int A[N], n, i, count = 1, MAX = 0;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	for (i = 0; i <= n; i++)
	{
		if (A[i] <= A[i + 1])
		{
			count++;
		}
		else {
			if (MAX < count)
			{
				MAX = count;
				
			}
			count = 1;
		}
	}
	if (MAX < count)
	{
		MAX = count;
	}
	count = 1;
	for (i = 0; i <= n; i++)
	{
		if (A[i] >= A[i + 1])
		{
			count++;
		}
		else
		{
			if (MAX < count)
			{
				MAX = count;
			}
			count = 1;
		}
	}
	if (MAX < count)
	{
		MAX = count;
	}
	printf("%d", MAX);
}