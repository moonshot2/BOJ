// https://www.acmicpc.net/problem/2611
#include <stdio.h>
#define N 1010

int A[N][N], n, k;

struct abc {
	int count, v;
}check[N];

struct def {
	int node, v;
}Q[N];

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, cnt, a, b, c;
	scanf("%d %d", &n, &k);// n : ������ ���� K : ������ ����
	for (i = 1; i <= k; i++) {
		scanf("%d %d %d", &a, &b, &c);
		A[a][b] = c;//��� ����ġ �Է�
	}
	for (i = 1; i <= n; i++) {
		cnt = 0;
		for (j = 1; j <= n; j++) {
			if (A[j][i] != 0) {
				cnt++;
			}
		}
		check[i].count = cnt;//check�迭�� ī��Ʈ�� �Է�
	}
	//run
	int work = 0, bun = 1;
	int snode, sv;
	Q[bun].node = 1;
	while (1) {
		if (work == bun)break;
		work++;
		snode = Q[work].node;
		sv = Q[work].v;

		for (i = 1; i <= n; i++) {
			if (A[snode][i] != 0) { // ���� ������
							   // �̺�Ʈ
				if (check[i].v < sv + A[snode][i]) {
					check[i].v = sv + A[snode][i];
				}
				// ���� Ƚ�� -
				check[i].count -= 1;
				if (check[i].count == 0) {
					bun++; //rear
					Q[bun].node = i; // check�� idx ��ġ
					Q[bun].v = check[i].v;
				}
			}
		}
	}
	printf("%d ", Q[n + 1].v);
}
