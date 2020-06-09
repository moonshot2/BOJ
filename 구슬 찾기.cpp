#include <iostream>
#include <vector>
#define MAX_INT 101
using namespace std;

vector<int> v[MAX_INT];
vector<int>	r[MAX_INT];

int n, m, rcnt, cnt;
bool check[MAX_INT], rcheck[MAX_INT];
int res = 0;

void dfs(int node) {
	check[node] = true;
	for (int i = 0; i < v[node].size(); i++) {
		int next = v[node][i];
		if (!check[next]) {
			cnt++;
			dfs(next);
		}
	}
}

void rdfs(int node) {
	rcheck[node] = true;
	for (int i = 0; i < r[node].size(); i++) {
		int next = r[node][i];
		if (!rcheck[next]) {
			rcnt++;
			rdfs(next);
		}
	}
}

void clear() {
	cnt = 0;
	rcnt = 0;
	for (int i = 1; i <= n; i++) {
		check[i] = false;
		rcheck[i] = false;
	}
}

int main() {
	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d%d", &a, &b);
		v[a].push_back(b);
		r[b].push_back(a);
	}
	int base = (n + 1) / 2;
	for (int i = 1; i <= n; i++) {
		clear();
		dfs(i);
		rdfs(i);
		if (cnt >= base || rcnt >= base) {
			res++;
		}
	}
	cout << res << "\n";
}