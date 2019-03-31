#include <stdio.h>
#define MAX_SIZE 15
char str[5][MAX_SIZE];

int main() {
	int i, j;
	for (i = 0; i < 5; i++) {
		scanf("%s", str[i]);
	}
	for (j = 0; j < MAX_SIZE; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (str[i][j] == NULL)
			{
				continue;
			}
			else
				printf("%c", str[i][j]);
		}
	}
}