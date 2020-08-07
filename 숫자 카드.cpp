#include <iostream>
#include <algorithm>
using namespace std;

int arr[500001];
int n, m;
bool flag = false;

int main() {
	ios_base::sync_with_stdio(false);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	int left, right, mid, tmp;
	sort(arr, arr + n);
	for (int i = 0; i < m; i++) {
		scanf("%d", &tmp);
		left = 0, right = n - 1;
		flag = false;
		while (left <= right) {
			mid = (left + right) / 2;
			if (arr[mid] > tmp) {
				right = mid - 1;
			}
			else if (arr[mid] < tmp) {
				left = mid + 1;
			}
			else {
				flag = true;
				break;
			}
		}
		if (flag == true) cout << "1 ";
		else cout << "0 ";
	}
	return 0;
}