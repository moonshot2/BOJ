#include <stdio.h>

int main() {
	int input;
	int sc=1;
	int pri=0;
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &input);
		if (input == 0)
		{
			sc = 1;
		}
		else if (input == 1) {
			pri = pri + sc;
			sc++;
		}
	}
	printf("%d", pri);

}