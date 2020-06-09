#include <iostream>
#include <string>
#include <deque>
using namespace std;
int main() {
	deque<char> dq;
	int n, m;
	cin >> n >> m;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		while (m && !dq.empty() && dq.back() < s[i]) {
			dq.pop_back();
			m--;
		}
		dq.push_back(s[i]);
	}
	for (int i = 0; i < dq.size() - m; i++) {
		cout << dq[i];
	}
}