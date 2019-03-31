#include <stdio.h>

int main() {
	int N[5] = { 0 }, i, sum = 0, Total = 0;
	for (i = 0; i < 5; i++) {
		scanf("%d", &N[i]);
	}
	for (i = 0; i < 5; i++) {
		sum = N[i] * N[i];
		Total = Total + sum;
	}
	printf("%d", Total%10);
}