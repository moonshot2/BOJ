// 배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.
// 첫째 줄에 정렬하고자하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.
// C++ Sort 를 사용한 정렬
// 백준 소트인사이드

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	reverse(s.begin(), s.end());
	cout << s;
}