#include <stdio.h>

int main() {
	int stu[1001] = { 0, };
	int	n, temp = 0;
	int tk;
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		stu[i] = i + 1;
		scanf("%d", &tk);
		for (j = i; j > i - tk; j--)
		{
			temp = stu[j];
			stu[j] = stu[j - 1];
			stu[j - 1] = temp;
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", stu[i]);
	}
}	