#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	string s;
	long long sum = 0;
	bool flag = false;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		int temp = s[i] - '0';
		if (temp == 0) flag = true;
		sum += temp;
		v.push_back(temp);
	}
	if (flag != true || sum % 3 != 0) cout << "-1";
	else {
		sort(v.begin(), v.end());
		for (int i = v.size() - 1; i >= 0; i--) cout << v[i];
	}
	return 0;
}