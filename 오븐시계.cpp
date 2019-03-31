#include <stdio.h>

int main() {
	int A, B, C, Temp = 0;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);

	Temp = B + C;
	if (Temp > 60) {
		B = 60 - Temp;
		A = A + 1;
	}
	else {
		B = B + C;
	}
	if (B == 60 || B == -60)
	{
		B = 0;
		A = A + 1;
	}
	printf("%d %d", A, B);
}