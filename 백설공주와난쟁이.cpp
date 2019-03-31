#include <stdio.h>

int main() {
	int N[7],i,M1=0,M2=0;
	
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &N[i]);
		if (M1 < N[i])
		{
			M1 = N[i];
		}
		else if (M2 < N[i])
		{
			if (M1 > N[i])
				M2 = N[i];
		}
	}
	printf("\n%d\n%d\n", M1, M2);
}