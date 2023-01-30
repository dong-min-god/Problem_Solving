#include <iostream>
#include <string>
#include <stack>

using namespace std;
int t;

void check_str(string str) {
	int str_size = str.length();
	stack<int> s;
	for (int i = 0; i < str_size; i++) {
		if (s.empty()) s.push(str[i]);
		else {
			if (s.top() == '(' && str[i] == ')') s.pop();
			else s.push(str[i]);
		}
	}
	if (s.empty()) cout << "YES" << "\n";
	else cout << "NO" << "\n";
}
int main()
{
	cin >> t;
	while (t--) {
		string input;
		cin >> input;
		check_str(input);
	}

	return 0;
}