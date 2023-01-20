#include <iostream>

using namespace std;

int main()
{
	int T;
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	cin >> T;

	while (T--) {
		int num, max;
		int temp;
		cin >> num;
		temp = max = num;
		while (temp != 1) {
			if (max < temp)
				max = temp;
			if (temp % 2 == 0)
				temp /= 2;
			else
				temp = temp * 3 + 1;
		}
		cout << max << "\n";
	}
}