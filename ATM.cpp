#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int arr[1001];
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			sum += arr[j];
		}
		sum += arr[i];
	}
	cout << sum;
}