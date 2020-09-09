// https://jovialcode.tistory.com/22
// 1637 ��ī�ο� ��
// �Է� ���� Ȧ���ΰ� �ִ�.
// �̺� Ž������ Ǯ��.
// mid �������� �� ���ؼ� Ȧ���������� �ɰ� ������.
#include <iostream>
#include <algorithm>
#define MAXvalue 20002
#define INF 2147483647
#define ll long long
using namespace std;
ll A[MAXvalue];
ll B[MAXvalue];
ll C[MAXvalue];
int n;

ll res(ll num) {
	ll sum = 0;
	for (int i = 0; i < n; i++) {
		if (num >= A[i]) {
			sum += (min(C[i], num) - A[i]) / B[i] + 1;
		}
	}
	return sum;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%lld%lld%lld", &A[i], &C[i], &B[i]);
	}
	ll left = 1, right = INF;
	while (left < right) {
		ll mid = (left + right) / 2;
		if (res(mid) % 2 == 0) {
			left = mid + 1;
		}
		else {
			right = mid;
		}
	}
	if (left == INF) {
		cout << "NOTHING";
	}
	else {
		cout << left << " " << res(left) - res(left - 1);
	}
}