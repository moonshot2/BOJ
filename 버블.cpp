//�������� ���� �� ��ȣ ���߱�
//n���� �������� ���� �� ���� n�� ������ 1~100000
//��������


#include <stdio.h>

void bubblesort(int A[], int n) {
	int i, j, tmp;
	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (A[j] < A[j + 1]) {
				tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;
			}
		}
	}
}

int main() {
	int A[100000];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	bubblesort(A, n);
	for (int i = 0; i < n; i++) {
		printf("%d", A[i]);
	}
}