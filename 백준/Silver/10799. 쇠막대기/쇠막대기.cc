#include <iostream>
#include <string>
#include <stack>

using namespace std;

void check_str(string str) {
	int sum = 0;
	int str_size = str.length();
	stack<int> s;

	for (int i = 0; i < str_size; i++) {
		if (str[i] == '(') s.push(str[i]);
		else if (str[i] == ')' && str[i - 1] == '(') {
			s.pop();
			sum += s.size();
		}
		else {
			sum++;
			s.pop();
		}
	}
	cout << sum;
}
int main()
{
	string input;
	cin >> input;
	check_str(input);

	return 0;
}