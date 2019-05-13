#include <stdio.h>

#define N 110

int m, n, h, rear, front;
int A[N][N][N];
int Q[N*N*N][4];
int B[6] = { 0,0,0,0,-1,+1 };
int C[6] = { -1,+1,0,0,0,0 };
int D[6] = { 0,0,1,-1,0,0 };

int check(int a,int b,int c) {
	if (a > 0 && a <= h && b > 0 && b <= n && c > 0 && c <= m)
	{
		return 1;
	}
	else
		return 0;
}

void BFS() {
	int i, j, k, q,temp,ch;
	while (1) {
		if (front == rear)
			break;
		front++;
		i = Q[front][0];
		j = Q[front][1];
		k = Q[front][2];
		for (q = 0; q <= 5; q++) // 위 아래 오른쪽 왼쪽 앞 뒤
		{
			temp = A[i + B[q]][j + C[q]][k + D[q]];
			ch = check(i + B[q], j + C[q], k + D[q]);
			if (temp == 0 && ch == 1)
			{
				rear++; // 번호표를 뽑고
				Q[rear][0] = i + B[q];
				Q[rear][1] = j + C[q];
				Q[rear][2] = k + D[q];
				Q[rear][3] = Q[front][3] + 1;
				A[i + B[q]][j + C[q]][k + D[q]] = 1; // 토마토가 익었다

			}
		}
	}
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k;
	scanf("%d %d %d", &m, &n, &h);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			for (k = 1; k <= m; k++)
			{
				scanf("%d", &A[i][j][k]);
				if (A[i][j][k] == 1)
				{
					rear++;
					Q[rear][0] = i;
					Q[rear][1] = j;
					Q[rear][2] = k;
					Q[rear][3] = 1;
				}
			}
		}
	}
	BFS();
	for (i = 1; i <= rear; i++)
	{
		printf("h:%d n:%d m:%d count:%d\n", Q[i][0], Q[i][1], Q[i][2], Q[i][3]);
	}
	for (i = 1; i < h; i++)
	{
		for (j = 1; j <= n; j++)
		{
			for (k = 1; k <= m; k++)
			{
				if (A[i][j][k] == 0)
				{
					printf("-1");
					return 0;
				}
			}
		}
	}
	printf("%d", Q[rear][3] - 1);
	return 0;
}