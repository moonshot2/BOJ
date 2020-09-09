#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int arr[2001];
int palindrome[2001][2001];

int main() {
	int n, m;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	int gap = 0;
	for (int start = 1; start + gap <= n; start++) { // ³ªÀÚ½Å
		int end = start + gap;
		palindrome[start][end] = 1;
	}
	gap = 1;
	for (int start = 1; start + gap <= n; start++) { //1,2
		int end = start + gap;
		if (arr[start] == arr[end]) {
			palindrome[start][end] = 1;
		}
	}
	for (int gap = 2; gap <= n; gap++) {
		for (int start = 1; start + gap <= n; start++) {
			int end = start + gap;
			if (palindrome[start + 1][end - 1] && arr[start] == arr[end]) {
				palindrome[start][end] = 1;
			}
		}
	}
	scanf("%d", &m);
	while (m--) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", palindrome[a][b]);
	}
	return 0;
}