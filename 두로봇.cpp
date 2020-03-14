#include <stdio.h>
#include <algorithm>
using namespace std;
int n, startA, startB;

struct abc {
	int node, v;
	abc* next;
};
abc* BOX[11];
int check[15];
void dfs(int s, int sum, int MAX) {
	abc* jj = new abc;
	if (check[s])return;
	check[s] = 1;
	if (s == startB) {
		sum - MAX;
		return;
	}
	for (jj = BOX[s]->next; jj; jj->next) {
		dfs(jj->node, sum + (jj->v), max(MAX, jj->v));
	}
}

void input() {
	int s, e, v;
	scanf("%d %d %d", &n, &startA, &startB);
	for (int i = 1; i <= n; i++) {
		scanf("%d %d %d", &s, &e, &v);
		abc* temp = new abc;
		temp->node = e;
		temp->v = e;
		temp->next = BOX[s]->next;
		BOX[s]->next = temp;

		temp = new abc;
		temp->v = s;
		temp->v = v;
		temp->next = BOX[s]->next;
		BOX[e]->next = temp;
	}
}

int main() {
	freopen("input.txt", "w", stdin);
	for (int i = 0; i <= 10; i++) {
		BOX[i] = new abc;
		BOX[i]->v = -1;
		BOX[i]->node = -1;
		BOX[i]->next = NULL;
	}
	input();
	dfs(startA, 0, 0);
	return 0;
}
