#include <stdio.h>

int main() {
	int p, q, i;
	scanf("%d", &p);
	scanf("%d", &q);
	for (i = 1; i <= p; i++)
	{
		if (p % i == 0)
		{
			q--;
			if (q == 0)
				break;
		}
	}
	printf("%d", i);
}