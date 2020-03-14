#include <iostream>
#include <stdio.h>
#include <deque>
#include <string>
using namespace std;
deque<int> d;
int n;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		if (a == "push_back") {
			int b;
			cin >> b;
			d.push_back(b);
		}
		else if (a == "push_front") {
			int b;
			cin >> b;
			d.push_front(b);
		}
		else if (a == "pop_back") {
			if (!d.empty()) {
				cout << d.back() << "\n";
				d.pop_back();
			}
			else {
				cout << "-1" << "\n";
			}
		}
		else if (a == "pop_front") {
			if (!d.empty()) {
				cout << d.front() << "\n";
				d.pop_front();
			}
			else {
				cout << "-1" << "\n";
			}
		}
		else if (a == "size") {
			cout << d.size() << "\n";
		}
		else if (a == "empty") {
			if (d.empty()) {
				cout << "1" << "\n";
			}
			else {
				cout << "0" << "\n";
			}
		}
		else if (a == "front") {
			if (!d.empty()) {
				cout << d.front() << "\n";
			}
			else {
				cout << "-1" << "\n";
			}
		}
		else if (a == "back") {
			if (!d.empty()) {
				cout << d.back() << "\n";
			}
			else {
				cout << "-1" << "\n";
			}
		}
	}
	return 0;
}