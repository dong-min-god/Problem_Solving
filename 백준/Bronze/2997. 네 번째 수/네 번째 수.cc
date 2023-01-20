#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int num[3];
	
	for (int i = 0; i < 3; i++) {
		cin >> num[i];
	}

	sort(num, num + 3);

	int d1, d2;
	d1 = num[1] - num[0];
	d2 = num[2] - num[1];

	if (d1 == d2)
		cout << num[2] + d2;
	else if (d1 > d2)
		cout << num[0] + d1 - d2;
	else if (d1 < d2)
		cout << num[1] + d2 - d1;
}