#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.pop();
	q.pop();
	q.pop();
	cout << "front : " << q.front() << '\n';
	cout << "back : " << q.back() << '\n';
	cout << "size : " << q.size() << '\n';
	cout << "empty :" << (q.empty() ? "yes" : "no") << "\n";
	return 0;

}
