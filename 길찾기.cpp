#include <stdio.h>
#define N 100
int n,A[N][N];

void f(int h,int w, int L) { //���� �ʺ� ����
	if (w>n || h>n)return; // �������� ����
	A[h][w] = L; //h,w �� L�� �ֱ�
	if (h == n && w == n) { // ���� ����������
		for (int i = 1; i <= n; i++) { 
			for (int j = 1; j <= n; j++) {
				printf("%3d", A[i][j]); // ���
			}
			printf("\n");
		}
		printf("\n");
		A[h][w] = 0; // �ʱ�ȭ
	}
	f(h, w+1, L+1); // ����
	f(h+1, w, L+1); // ����
	A[h][w] = 0; // �ʱ�ȭ
}

int main() {
	scanf("%d", &n);
	f(1, 1, 1);
}