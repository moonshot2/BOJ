#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, cnt = 1, sum = 0;
	int a[100000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] <= a[i + 1]) {
			cnt++;
		}
		else {
			if (cnt > sum) {
				sum = cnt;
			}
		}
		cnt = 1;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] >= a[i + 1]) {
			cnt++;
		}
		else {
			if (cnt > sum) {
				sum = cnt;
			}
		}
		cnt = 1;
	}
	cout << sum+1;

}