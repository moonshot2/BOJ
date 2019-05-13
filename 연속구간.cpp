#include <stdio.h>

int main() {
	int N[8];
	int max = 0;
	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &N[i]);
	}
	for (int i = 0; i < 8; i++)
	{
		if (N[i] == N[i + 1])
		{
			cnt++;
		}
		else
		{
			if (max < cnt)
			{
				max = cnt;
				cnt = 0;
			}
		}
	}
	printf("%d\n", max+1);
}