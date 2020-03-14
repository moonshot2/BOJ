#include <iostream>
#include <vector>
#include <algorithm>
#define N 100001
using namespace std;

int parent[N];

int unionfind(int Node) {
	if (Node == parent[Node]) {
		return Node;
	}
	else {
		return parent[Node] = unionfind(parent[Node]);
	}
}

struct edge {
	int u, v, w;
	bool operator<(edge const& e) { // 오버로딩
		return w < e.w;
	}
};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	long long res = 0;
	int V, E;
	cin >> V >> E;
	vector<edge> Edvector;
	for (int i = 0; i < E; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		edge temp;
		temp.u = a;
		temp.v = b;
		temp.w = c;
		Edvector.push_back(temp);
	}
	sort(Edvector.begin(), Edvector.end());
	for (int i = 1; i <= V; i++) {
		parent[i] = i;
	}
	int cnt = 0;
	for (int i = 0; i < Edvector.size(); i++) {
		edge e = Edvector[i];
		if (unionfind(e.u) != unionfind(e.v)) {
			parent[unionfind(e.u)] = unionfind(e.v);
			cnt++;
			res += e.w;
		}
		if (cnt == V - 1) {
			break;
		}
	}
	cout << res;
}