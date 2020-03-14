#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s;

	cin >> s;
	cin >> n;

	list<char> edi(s.begin(), s.end());
	auto cur = edi.end();

	while (n--) {
		char c;
		cin >> c;
		if (c == 'L') {
			if (cur != edi.begin()) {
				cur--;
			}
		}
		else if (c == 'D') {
			if (cur != edi.end()) {
				cur++;
			}
		}
		else if (c == 'B') {
			if (cur != edi.begin()) {
				cur--;
				cur = edi.erase(cur);
			}
		}
		else if (c == 'P') {
			char a;
			cin >> a;
			edi.insert(cur, a);
		}
	}
	for (list<char>::iterator i = edi.begin(); i != edi.end(); i++) {
		cout << *i;
	}
}