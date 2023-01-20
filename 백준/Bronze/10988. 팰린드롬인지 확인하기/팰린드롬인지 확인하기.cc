#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int flag = 1;
	int len = s.length();
	int num = len / 2;
	for (int i = 0; i < num; i++) {
		if (s[i] == s[len - i - 1])
			continue;
		else {
			flag = 0;
			break;
		}
	}

	cout << flag;
}