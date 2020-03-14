#include <iostream>
#include <algorithm>
#include <stack>
#define N 200001
using namespace std;
int n;
int	colorball[N];
int sum;

struct ball {
	int idx, col, val;
	int res;
}Ba[N];

stack<ball> same_value;

bool cmp(const ball& a, const ball& b) {
	return a.val < b.val;
}

bool cmp2(const ball& a, const ball& b) {
	return a.idx < b.idx;
}

int main() {
	// freopen("input.txt", "r", stdin);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> Ba[i].col >> Ba[i].val;
		Ba[i].idx = i;
	}
	sort(Ba, Ba + n, cmp);
	for (int i = 0; i < n; i++) {
		if (Ba[i].val != Ba[i + 1].val) {
			Ba[i].res = sum - colorball[Ba[i].col];
			sum += Ba[i].val;
			colorball[Ba[i].col] += Ba[i].val;
			while (!same_value.empty()) {
				int v = same_value.top().val;
				int c = same_value.top().col;

				sum += v;
				colorball[c] += v;

				same_value.pop();
			}
		}
		else {
			Ba[i].res = sum - colorball[Ba[i].col];
			same_value.push(Ba[i]);
		}
	}
	sort(Ba, Ba + n, cmp2);
	for (int i = 0; i < n; i++) {
		cout << Ba[i].res << "\n";
	}
}