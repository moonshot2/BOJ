#include <stdio.h>

int main() {
	int N;
	int max = 0;
	int x, y;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &N);
			if (max < N)
			{
				y = i;
				x = j;
				max = N;
			}
		}
	}
	printf("%d\n%d %d\n", max, y+1, x+1);
}