#include <iostream>
#include <queue>
#define MAX 1000001
using namespace std;

int n;
int idx = 9;
queue<long long> q;
long long arr[MAX];

void add(void) {
	while (idx <= n) {
		if (q.empty()) return;
		long long num = q.front();
		q.pop();
		int lastnum = num % 10;
		for (int i = 0; i < lastnum; i++) {
			q.push(num * 10 + i);
			arr[++idx] = num * 10 + i;
		}
	}
}

int main() {
	cin >> n;
	for (int i = 0; i <= 9; i++) {
		q.push(i);
		arr[i] = i;
	}
	add();
	if (!arr[n] && n) {
		cout << "-1" << "\n";
	}
	else {
		cout << arr[n] << "\n";
	}
	return 0;
}