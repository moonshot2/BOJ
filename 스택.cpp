#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<int>s;
string str;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	while (n--) {
		cin >> str;
		if (str == "push") {
			int a;
			cin >> a;
			s.push(a);
		}
		if (str == "top") {
			if (!s.empty()) {
				cout << s.top() << endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
		if (str == "size") {
			cout << s.size() << endl;
		}
		if (str == "empty") {
			if (!s.empty()) {
				cout << "0" << endl;
			}
			else {
				cout << "1" << endl;
			}
		}
		if (str == "pop") {
			if (s.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << s.top() << endl;
				s.pop();
			}
		}
		if (n == 0) {
			return 0;
		}
	}
}