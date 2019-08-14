#include <stdio.h>
#define N 100
int n,A[N][N];

void f(int h,int w, int L) { //높이 너비 레벨
	if (w>n || h>n)return; // 끝에가면 리턴
	A[h][w] = L; //h,w 에 L값 넣기
	if (h == n && w == n) { // 끝에 도착했을때
		for (int i = 1; i <= n; i++) { 
			for (int j = 1; j <= n; j++) {
				printf("%3d", A[i][j]); // 출력
			}
			printf("\n");
		}
		printf("\n");
		A[h][w] = 0; // 초기화
	}
	f(h, w+1, L+1); // 가로
	f(h+1, w, L+1); // 세로
	A[h][w] = 0; // 초기화
}

int main() {
	scanf("%d", &n);
	f(1, 1, 1);
}