#include <stdio.h>

int a, b;

int gcd(int a, int b) {
	if (a%b == 0)
	{
		return b;
	}
	else
		return gcd(b, a%b);
}
int main() {
	scanf("%d %d", &a, &b);
	int g = a > b ? gcd(a, b) : gcd(b, a);
	printf("%d %d", g, a*b / g);
	return 0;
}