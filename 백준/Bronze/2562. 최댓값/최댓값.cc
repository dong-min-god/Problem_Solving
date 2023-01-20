#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int num[9];
	int res[9];
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
		res[i] = num[i];
	}

	sort(res, res + 9);
	cout << res[8] << "\n";

	for (int i = 0; i < 9; i++) {
		if (res[8] == num[i]) {
			cout << i+1;
			break;
		}
	}

	return 0;
}