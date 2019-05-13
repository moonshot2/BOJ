#include <stdio.h>

int x1s, x1e, y1s, y1e, x2s, x2e, y2s, y2e;
int main() {
	for (int i = 0; i < 4; i++)
	{
		scanf("%d %d %d %d", &x1s, &y1s, &x1e, &y1e);
		scanf("%d %d %d %d", &x2s, &y2s, &x2e, &y2e);
		
		if (x1e >= x2s && x1s <= x2e && y1e >= y2s && y1s <= y2e)
		{
			printf("a");
		}

		else if ((x2e == x1s && y2s == y1e && x1s > x2s) ||
			(y2s == y1s && x1e == x2s && x1e < x2s) ||
			(y1s == y2e && x2e == x1s && x1s > x2s) ||
			(x1e == x2s && y1s == y2e && x1e < x2e)) {
			printf("c");
		}
		else if ((x1s == x2e && y2e > y1s && y1e > y2s) ||
			(x1e == x2s && y2e > y1s && y1e > y2s) ||
			(y1s == y2e && x1s < x2e && x1e > x2s) ||
			(y1e == y2s && x1s < x2e && x1e > x2s))
		{
			printf("b\n");
		}
		else
		{
			printf("d");
		}

	}
}