#include<stdio.h>

#include<stdlib.h>
#define N 6 //���� �� �ϴ� 6 (0~5����)

static int i, k, n, u, v, j, ss, s, min, jj;

struct NODE {

	int v;
	NODE * next;
};

NODE * matrix[N]; //matrix��� �̸����� ����ü�� �Ŵ� �� �ִ� �迭 ����(������ ����)

void main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	for (j = 0; j < N; j++) { //�� �ʱ�ȭ

		matrix[j] = new NODE; //���� ����

		matrix[j]->v = -1; //�濡 ���� ���� ����. �׳� ���ǹ��� -1

		matrix[j]->next = NULL; //���� �ּҸ� ����ų ���� NULL(������,�� �߿�)

	}
	scanf("%d", &n); //n�� ���� ��
	for (j = 1; j <= n; j++) {

		scanf("%d%d ", &u, &v); //�� ���ȣ, v�� ���� �ѹ�

		NODE * temp = new NODE; //�ӽ� temp���� ��������

		temp->next = matrix[u]->next; //matrix�濡 �Ŵ� ������ temp�� �ϴ� �Ŵܴ�

		temp->v = v; //temp �� ���� ���� ���� (������� ���� ����)

		matrix[u]->next = temp; //temp�� matrix�� �Ŵܴ�. ��, �Ŵ� ������ �ȴ�.
	}
		NODE * jj;

	for (j = 1; j < N; j++) {

		for (jj = matrix[j]->next; jj; jj = jj->next) {

			printf("% d - % dn", j, jj->v); //��� j�濡 v ���� ���

		}

	}

}