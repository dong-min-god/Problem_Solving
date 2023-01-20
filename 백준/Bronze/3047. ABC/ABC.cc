#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector <int> Num;
	for (int i = 0; i < 3; i++) {
		int num;
		cin >> num;
		Num.push_back(num);
	}

	sort(Num.begin(), Num.end());

	string str;
	cin >> str;

	for (int i = 0; i < 3; i++)
		cout << Num[str[i] - 'A'] << " ";
}