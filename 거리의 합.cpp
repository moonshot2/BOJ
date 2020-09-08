#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int arr[10001];

int main() {
	int n;
	long long sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			sum += abs(arr[i] - arr[j]);
		}
	}
	cout << sum;
}