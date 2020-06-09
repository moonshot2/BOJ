#include <iostream>
using namespace std;

int main() {
	int A[100000];
	int n, m;
	int box = 0;
	int size = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}

	for (int i = 0; i < n; i++) {
		int a = A[i];
		if (size + a <= m) {
			size += a;
		}
		else {
			box++;
			size = 0;
			i--;
		}
	}
	if (size != 0) box++;
	cout << box;
}