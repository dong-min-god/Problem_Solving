#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 65 && str[i] <= 90) 
			str[i] = tolower(str[i]);
		else if (str[i] >= 97 && str[i] <= 122) 
			str[i] = toupper(str[i]);
	}
	cout << str;
}