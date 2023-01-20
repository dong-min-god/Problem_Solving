#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int num[5], res;

	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}
	sort(num, num + 5);

	for (int i = num[0];; i++) {
		int count = 0;
		for (int j = 0; j < 5; j++) {
			if (i % num[j] == 0)
				count++;
		}
		if (count >= 3) {
			res = i;
			break;
		}
	}
	cout << res;
}