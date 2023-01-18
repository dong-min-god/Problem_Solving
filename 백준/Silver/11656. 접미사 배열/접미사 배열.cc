#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string input;
	string res[1000];

	cin >> input;
	int len = input.length();

	for (int i = 0; i < len; i++) {
		for (int j = i; j < len; j++) {
			res[i] += input[j];
		}
	}
	sort(res, res + len);

	for (int i = 0; i < len; i++)
		cout << res[i] << "\n";
}