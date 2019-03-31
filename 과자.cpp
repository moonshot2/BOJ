#include <stdio.h>

int main() {
	int K, N, M, A, sum;
	scanf("%d %d %d", &K, &N, &M);
	sum = K * N;
	sum = M - sum;
	if (sum > 0) {
		printf("µ· ÃæºÐÇØ!\n");
	}
	else {
		printf("%d\n", sum*-1);
	}
}