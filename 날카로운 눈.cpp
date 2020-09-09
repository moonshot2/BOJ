// https://jovialcode.tistory.com/22
// 1637 날카로운 눈
// 입력 값이 홀수인게 있다.
// 이분 탐색으로 풀이.
// mid 기준으로 다 더해서 홀수인쪽으로 쪼개 내려감.
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