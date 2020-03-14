//시험지를 걷을 때 번호 맞추기
//n명의 시험지를 걷은 후 정렬 n의 범위는 1~100000
//버블정렬

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