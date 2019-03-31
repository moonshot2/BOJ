#include <stdio.h>

int main() {
	int	N, A, B, C;
	int prize[1000];
	int Max = 0;
	int Max_prize = 0;
	
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d %d", &A, &B, &C);
		if (A == B && A == C && B == C)
		{
			prize[i] = 10000 + A * 1000;
		}
		else if (A == B || A == C)
		{
			prize[i] = 1000 + A * 100;
		}
		else if (B == C)
		{
			prize[i] = 1000 + A * 100;
		}
		else
		{
			if (A > B && A > C)
			{
				Max = A;
			}
			else if (B > A && B > C)
			{
				Max = B;
			}
			else if (C > A && C > B)
			{
				Max = C;
			}
			prize[i] = Max * 100;
		}
		if (prize[i] > Max_prize)
		{
			Max_prize = prize[i];
		}
	}
	printf("\n%d\n", Max_prize);
}