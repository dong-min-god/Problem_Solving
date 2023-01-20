#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	while (1) {
		string stc;
		stack <char> txt;
		bool flag = true;

		getline(cin, stc);
		int len = stc.length();

		if (len == 1 && stc[0] == '.')
			break;

		for (int i = 0; i < len; i++) {
			if (stc[i] == '(')
				txt.push('(');
			else if (stc[i] == '[')
				txt.push('[');
			else if (stc[i] == ')') {
				if (!txt.empty() && txt.top() == '(')
					txt.pop();
				else {
					flag = false;
					break;
				}
			}
			else if (stc[i] == ']') {
				if (!txt.empty() && txt.top() == '[')
					txt.pop();
				else {
					flag = false;
					break;
				}
			}
		}

		if (flag && txt.empty())
			cout << "yes\n";
		else
			cout << "no\n";
	}
}