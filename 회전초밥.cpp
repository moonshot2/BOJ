#include <iostream>
#include <deque>
#include <algorithm>
#define N 3000001
using namespace std;

int n, d, k, c;
int s[N];
int check[3001] = { 0 };
int res = 0;
deque<int> dq;

int main() {
	int n, d, k, c;
	cin >> n >> d >> k >> c;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	int cnt = 0;
	for (int i = 0; i < k; i++) {
		dq.push_back(s[i]);
		if (!check[s[i]]++) {
			cnt++;
		}
		res = max(res, cnt);
	}
	for (int i = 0; i < n - 1; i++) {
		dq.pop_front();
		if (!(--check[s[i]])) {
			cnt--;
		}
		dq.push_back(s[i + k] % n); // �ٽ� ���ϱ�
		if (!(check[s[(i + k) % n]])++) {
			cnt++;
		}
		if (!check[c]) { // ������ ���°�
			res = max(res, cnt + 1);
		}
		else { // �ִ°�
			res = max(res, cnt);
		}
	}
	cout << res;
	return 0;
}