#include <stdio.h>

int main() {
	int n, c = 0;
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &n);
		c += n;
	}
	switch (c)
	{
	case 0:
		puts("E");
		break;
	case 1:
		puts("A");
		break;
	case 2:
		puts("B");
		break;
	case 3:
		puts("C");
		break;
	case 4:
		puts("D");
		break;
	}

}
