// �迭�� �����ϴ� ���� ����. ���� �־�����, �� ���� �� �ڸ����� ������������ �����غ���.
// ù° �ٿ� �����ϰ����ϴ� �� N�� �־�����. N�� 1,000,000,000���� �۰ų� ���� �ڿ����̴�.
// C++ Sort �� ����� ����
// ���� ��Ʈ�λ��̵�

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