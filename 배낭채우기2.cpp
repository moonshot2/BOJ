#include <stdio.h>
#define MAX 100000
#define max(X,Y) ((X) > (Y) ? (X) : (Y)) 

int N; // ������ ����
int W; // �賶���� (�뷮)
int wi[MAX]; // ���� ����
int pi[MAX]; // ���� ��ġ
int D[MAX]; // �迭

int main() {
	scanf("%d %d", &N, &W);

	for (int i = 1; i <= N; i++)
	{
		scanf("%d %d",&wi[i], &pi[i]);
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = W; j >= wi[i]; j--)
		{
			D[j] = max(D[j - wi[i]] + pi[i], D[j]);
		}
	}
	printf("%d", D[W]);
	return 0;
}

