#include <iostream>
#include <string>
using namespace std;

bool flag = true;
int arr[101];

int main() {
	int sum = 0;
	int temp = 0;
	int cur = 0;
	int res = 0;
	string s;
	cin >> s;
	int len = s.length();
	for (int i = 0; i < s.length(); i++) {
		if (flag == true) {
			if (s[i] == '+') {
				sum += temp;
				temp = 0;
			}
			else if (s[i] == '-') {
				sum += temp;
				arr[cur] = sum;
				cur++;
				temp = 0;
				sum = 0;
			}
			else {
				temp *= 10;
				temp += (s[i] - '0');
			}
		}
	}
	sum += temp;
	arr[cur] = sum;
	res = arr[0];
	for (int i = 1; i < len; i++) {
		res -= arr[i];
	}
	cout << res;
}