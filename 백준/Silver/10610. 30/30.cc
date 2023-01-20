#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string s;
	vector<int> num;
	int sum = 0;

	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		num.push_back(s[i] - '0');
		sum += num[i];
	}
	sort(num.rbegin(), num.rend());

	if (num[num.size() - 1] == 0 && sum % 3 == 0)
		for (int i = 0; i < num.size(); i++)
			cout << num[i];
	else
		cout << "-1";
}