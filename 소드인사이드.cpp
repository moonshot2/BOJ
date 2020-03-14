#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

char A[15];

int main() {
	cin >> A;
	sort(A, A + strlen(A), greater<int>());
	for (int i = 0; i < strlen(A); i++) {
		cout << A[i];
	}
	return 0;
}