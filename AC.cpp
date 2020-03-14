#include <Stdio.h>
#include <iostream>
#include <deque>
#include <string>
using namespace std;
deque<int> dq;
string s;
int t, n;

void input() {
	int a;
	scanf("%d", &t);
	cin >> s;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		dq.push_back(a);
	}
}

int main() {
	freopen("input.txt", "r", stdin);
	input();
	int cnt = 0;
	bool flag = true;
	// true ¾Õ false µÚ
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'R') {
			if (flag == true) {
				flag = false;
			}
			else {
				flag = true;
			}
		}
		if (s[i] == 'D') {
			if (flag == true) {
				dq.pop_front();
			}
			else {
				dq.pop_back();
			}
		}
	}
	if (flag == true) {
		for (int i = 0; i < dq.size(); i++) {
			printf("%d ", dq[i]);
		}
	}
	else {
		for (int i = dq.size() - 1; i >= 0; i--) {
			printf("%d ", dq[i]);
		}
	}
}