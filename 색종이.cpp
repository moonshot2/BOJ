#include <stdio.h>
#define MAX 101
int map[MAX][MAX];

int main() {
	int x,y,n;
	scanf("%d", &n);
	while (n--) { // ����
		scanf("%d %d", &x, &y);
		
		for (int i = y; i < y + 10; i++)
		{
			for (int j = x; j < x + 10; j++)
			{
				map[i][j]++;
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i <= MAX; i++) // ã��
	{
		for (int j = 0; j <= MAX; j++)
		{
			if (map[i][j])
			{
				cnt++;
			}
		}
	}
	printf("%d", cnt);
}	