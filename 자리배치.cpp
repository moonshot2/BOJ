#include <stdio.h>
#define N 7
int n,A[N],check[N];
void print() {
	for (int i = 1; i <= n; i++)
	{
		printf("%d", A[i]);
	} 
	printf("\n");
}
void run(int num,int L) {
	int i;
	if (check[num])return;
	A[L] = num; // 발생했으면
	check[num] = 1;
	if (L == n) {
		print();
		check[num] = 0;
		return;
	}
	for (i = 1; i <= n; i++) {
		run(i,L+1);
	}
	check[num] = 0; // check reset
}

int main() {
	scanf("%d", &n);
	run(0,0);
	return 0;
	
}
