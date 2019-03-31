#include <stdio.h>
#include <string.h>

int main() {
	int A, B, C, result;
	int array[10] = { 0 };

	scanf("%d %d %d", &A, &B, &C);
	result = A * B * C;
	while (result != 0)
	{
		array[result % 10] += 1;
		result = result / 10;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", array[i]);
	}
}