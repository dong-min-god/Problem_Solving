#include <iostream>
#include <stack>
#include <string>

using namespace std;

string str;
stack<int> s;
bool flag = false;
int len = 0;
int tmp = 1, ans = 0;
int main()
{
	cin >> str;
	len = str.length();

	for (int i = 0; i < len; i++) {
		if (str[i] == '(') {
			tmp *= 2;
			s.push(str[i]);
		}
		else if (str[i] == '[') {
			tmp *= 3;
			s.push(str[i]);
		}
		else if (str[i] == ')') {
			if (s.empty()) {
				flag = true;
				break;
			}
			if (s.top() == '(') {
				if(str[i-1] == '(')
					ans += tmp;
				s.pop();
				tmp /= 2;
			}
			else {
				flag = true;
				break;
			}
		}
		else if (str[i] == ']') {
			if (s.empty()) {
				flag = true;
				break;
			}
			if (s.top() == '[') {
				if (str[i - 1] == '[')
					ans += tmp;
				s.pop();
				tmp /= 3;
			}
			else {
				flag = true;
				break;
			}
		}
	}
	if (flag == true or !s.empty())
		cout << 0;
	else
		cout << ans;
}