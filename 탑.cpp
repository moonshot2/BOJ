// 스택 문제
// 입력값이 top보다 크다면 수신 가능
// top값 출력
// 스택이 비면 0 출력
// 현재 탑 스택에 push

#include <stdio.h>
#include <stack>
#include <utility>
using namespace std;

stack<pair<int, int>>st;
int n, k;

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &k);
		while (!st.empty()) {
			if (st.top().second > k) {
				printf("%d ", st.top().first);
				break;
			}
			st.pop();
		}
		if (st.empty()) {
			printf("0");
		}
		st.push(make_pair(i, k));
	}
	return 0;
}