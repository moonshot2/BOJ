#include <iostream>
using namespace std;

int n;
int arr[100];
int lotto[100];

void a(int idx1, int idx2) {
	if (idx2 == 6) {
		for (int i = 0; i < 6; i++) {
			cout << lotto[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = idx1; i < n; i++) {
		lotto[idx2] = arr[i];
		a(i + 1, 1 + idx2);
	}
}

int main() {
	while (1) {
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		a(0, 0);
		cout << endl;
	}
	return 0;
}