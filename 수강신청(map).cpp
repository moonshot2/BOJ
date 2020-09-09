#include <iostream>
#include <map>
//#include <utility>
#define mp make_pair
using namespace std;

map<string, int> m;
map<int, string> mm;

int main() {
	int s, e;
	string st;
	cin >> s >> e;
	for (int i = 0; i < e; i++) {
		cin >> st;
		m[st] = i;
	}
	for (auto it : m) {
		mm[it.second] = it.first;
	}
	int cnt = 1;
	for (auto i = mm.begin(); i != mm.end() && cnt <= s; i++, cnt++) {
		cout << i->second << '\n';
	}
}