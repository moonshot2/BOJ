#include <iostream>
#include <vector>
#define N 20
using namespace std;
int B[N];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	B[0] = 987654321;
	int i, j, k;
	int n;
	cin >> n;
	for (i = 1; i <= n; i++) {
		for (j = i - 1, k = 2; j >= 0; j--, k += 2) {
			if (B[j] < k) break;
		}
		B[i] = i - j;
	}

	return 0;
}