#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 7
int n, A[N], check[N], A1[N][N], A2[N][N],cnt,sum;
int MIN = 9999;
struct a {  //구조체 배열
	int h, w; 
}B[N],R[N];
int abs(int a,int b){ // 
	if (a > b) return a - b;
	else return b - a;
}
void print() { //
	int i;
	sum = 0;
	for (i = 1; i <= cnt; i++) {
		sum += abs(B[i].h, R[A[i]].h);
		sum += abs(B[i].w, R[A[i]].w);
	}
	if (sum < MIN)MIN = sum;
}
void run(int num, int L) {
	int i;
	if (check[num])return;
	A[L] = num;  //발생 했으면
	check[num] = 1; //체킹
	if (L == cnt) {
		print();
		check[num] = 0;
		return;
	}
	for (i = 1; i <= n; i++) {
		run(i, L + 1);
	}
	check[num] = 0; //체킹을 reset
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char a, i, j;
	scanf("%d", &n); 
	for (j = 1; j <= n; j++) {   
		scanf("\n");
		for (i = 1; i <= n; i++) {
			scanf("%c", &a);
			A1[j][i] = a - '0';
		}
	}
	for (j = 1; j <= n; j++) {
		scanf("\n");
		for (i = 1; i <= n; i++) {
			scanf("%c", &a);
			A2[j][i] = a - '0';
		}
	}
	//reset
	for (j = 1; j <= n; j++) {
		for (i = 1; i <= n; i++) {
			if (A1[j][i] == A2[j][i]) {
				A1[j][i] = A2[j][i] = 0;
			}
		}
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (A1[i][j]) {
				cnt++;
				B[cnt].h = i;
				B[cnt].w = j;
			}

		}
	}
	cnt = 0;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (A2[i][j]) {
				cnt++;
				R[cnt].h = i;
				R[cnt].w = j;
			}

		}
	}
	run(0, 0);

	printf("%d", MIN);
	return 0;
}