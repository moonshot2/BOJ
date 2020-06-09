#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	int z = 0, o = 0;
	cin >> s;
	if (s[0] == '0') z++;
	else o++;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] != s[i - 1]) {
			if (s[i] == '0') {
				z++;
			}
			else {
				o++;
			}
		}
	}
	int res;
	res = min(z, o);
	cout << res;
}