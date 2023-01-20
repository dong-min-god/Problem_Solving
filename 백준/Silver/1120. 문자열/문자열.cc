#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;

	int res = 50;

	for (int i = 0; i <= b.length() - a.length(); i++) {
		int count = 0;
		for (int j = 0; j < a.length(); j++) {
			if (a[j] != b[i + j])
				count++;
		}

		res = min(res, count);
	}

	cout << res;
}