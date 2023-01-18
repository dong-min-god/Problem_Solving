#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string res;
	string tmp;
	cin >> res;
	for (int i = 1; i < n; i++) {
		cin >> tmp;

		for (int i = 0; i < res.length(); i++) {
			if (res[i] == tmp[i]) continue;
			else res[i] = '?';
		}
	}
	cout << res;
}