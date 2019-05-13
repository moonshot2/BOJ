#include <stdio.h>
#define MAX 100000
#define max(X,Y) ((X) > (Y) ? (X) : (Y)) 

int N; // 보석의 갯수
int W; // 배낭무게 (용량)
int wi[MAX]; // 보석 무게
int pi[MAX]; // 보석 가치
int D[MAX]; // 배열

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

