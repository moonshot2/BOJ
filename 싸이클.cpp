#include <stdio.h>

int main() {
	int n, p;
	int arr[100];
	int cnt = 0;
	int temp;
	scanf("%d %d", &n, &p);
	arr[cnt] = n;
	temp = n;
	while (true)
	{
		temp = (temp*n) % p;
		for (int i = 0; i < cnt; i++)
		{
			if (arr[i] == temp)
			{
				printf("%d\n", cnt);
				return 0;
			}
		}
		arr[cnt++] = temp;
	}
	return 0;
}

