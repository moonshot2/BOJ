// https://twpower.github.io/75-how-to-use-stack-in-cpp

#include <iostream>
#include <string>
#include <stack>
using namespace std;

string str;
int pipe(const string& str) {
	stack<char> st;
	int result = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(') {
			st.push(str[i]);
		}
		else {
			st.pop();
			if (str[i - 1] == '(') {
				result += st.size();
			}
			else {
				result++;
			}
		}
	}
	return result;
}

int main() {
	cin >> str;
	cout << pipe(str);
}