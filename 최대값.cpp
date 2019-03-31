#include <stdio.h>

int main() {
	int	N[10] = { 0 };
	int a=0,c;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &N[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (N[i] > a)
		{
			a = N[i];
			c = i;
		}
	}
	printf("%d %d", a, c+1);

}