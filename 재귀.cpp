#include <stdio.h>
#define N 10
int n;
int A[N], check[N];
void print() {
	for (int i = 1; i <= n; i++) {
		printf("%d", A[i]);
	}
	printf("\n");
}

void run(int num, int L) {
	if (check[num])return;
	A[L] = num;
	check[num] = 1;
	if (L == n) {
		print();
		check[num] = 0;
		return;
	}
	for (int i = 0; i <= n; i++) {
		run(i, L + 1); 
	}
	check[num] = 0; //ÃÊ±âÈ­
}

int main() {
	scanf("%d", &n);
	run(0, 0);
}