#include <iostream>
#include <algorithm>
using namespace std;

long long DATA[100001];

int main() {
	long long m1, m2, m3;
	long long N, n1, n2, n3 = 4, sum = 0;
	cin >> N;
	for (int i = 0; i < 6; ++i) {
		cin >> DATA[i];
	}
	if (N == 1) {
		sort(DATA, DATA + 6);
		for (int i = 0; i < 5; ++i) sum += DATA[i];
		cout << sum;
		return 0;
	}
	DATA[0] = min(DATA[0], DATA[5]);
	DATA[1] = min(DATA[1], DATA[4]);
	DATA[2] = min(DATA[2], DATA[3]);
	sort(DATA, DATA + 3);
	m3 = DATA[0] + DATA[1] + DATA[2];
	m2 = DATA[0] + DATA[1];
	m1 = DATA[0];
	n1 = (N - 1) * (N - 2) * 4 + (N - 2) * (N - 2);
	n2 = (N - 1) * 4 + (N - 2) * 4;
	sum += m1 * n1;
	sum += m2 * n2;
	sum += m3 * n3;
	cout << sum;
}