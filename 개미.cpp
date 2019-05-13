#include <stdio.h>

int main() {
	int w, h, x, y, t;
	int p, q;
	scanf("%d %d", &w, &h);
	scanf("%d %d", &p, &q);
	scanf("%d", &t);
	
	x = (p + t) / w;
	y = (q + t) / w;

	if (x % 2 == 0)
	{
		p = (p + t) % w;
	}
	else
	{
		p = w - ((p + t) % w);
	}
	
	if (y % 2 == 0)
	{
		q = (q + t) % h;
	}
	else
	{
		q = h - ((q + t) % w);
	}
	printf("%d %d", p, q);
}