#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	printf("%c%d", (n + 8) % 12 + 'A', (n + 6) % 10);
}