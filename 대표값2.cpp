#include<stdio.h>

int main() {
	
	int i, j, sum = 0;
	int check, temp;
	int N[5];

	for (i = 0; i<5; i++) {
		scanf("%d", &N[i]);
		if (N[i] % 10 != 0)
			i--;
		else
			sum += N[i];
	}
	for (i = 0; i<5; i++)
		for (j = 0; j<5; j++)
		{
			if (N[j - 1]>N[j])
			{
				temp = N[j - 1];
				N[j - 1] = N[j];
				N[j] = temp;
			}
		}
	printf("%d\n", sum / 5);
	printf("%d\n", N[2]);
	return 0;

}