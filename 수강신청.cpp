#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> v;
vector<int> list;
set<int> s;

int main() {
	int N, M, a;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> a;
		v.push_back(a);
	}
	for (int i = M - 1; i >= 0; i--) {
		int b = v[i];
		if (s.find(b) == s.end()) {
			s.insert(b);
			list.push_back(b);
		}
	}
	int size = list.size();
	cout << "\n";
	for (int i = size - 1; i >= size - N && i >= 0; --i) {
		cout << list[i] << "\n";
	}
}