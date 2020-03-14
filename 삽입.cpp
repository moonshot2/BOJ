//�������� ���� �� ��ȣ ���߱�
//n���� �������� ���� �� ���� n�� ������ 1~100000
//��������

#include <stdio.h>

void Insertion_sort(int list[], int n) {
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = list[i]; 
		for (j = i - 1; j >= 0 && list[j] > key; j--) {
			list[j + 1] = list[j]; 
		}

		list[j + 1] = key;
	}
}

int main() {
	int i;
	int n;
	int A[100000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	Insertion_sort(A, n);
	for (int i = 0; i < n; i++) {
		printf("%d", A[i]);
	}
}