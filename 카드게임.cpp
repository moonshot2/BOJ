#include <stdio.h>
#define MAX 10
int A[MAX];
int B[MAX];

int main() {
	int Acnt = 0;
	int Bcnt = 0;

	for (int i = 0; i < MAX; i++)
	{
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < MAX; i++)
	{
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < MAX; i++)
	{
		if (A[i] == B[i])
		{
			continue;
		}
		else if (A[i] > B[i]) 
		{
			Acnt++;
		}
		else
		{
			Bcnt++;
		}
	}
	
	if (Acnt > Bcnt)
	{
		printf("A");
	}
	else if (Bcnt > Acnt)
	{
		printf("B");
	}
	else if (Acnt == Bcnt);
	{
		printf("D");
	}
}