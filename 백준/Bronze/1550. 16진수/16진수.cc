#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num = 0;
	string str;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		num *= 16;

		if (str[i] >= 'A' && str[i] <= 'F')
			num += str[i] - 'A' + 10;
		else
			num += str[i] - '0';
	}

	cout << num;
}