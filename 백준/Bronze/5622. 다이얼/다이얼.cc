#include <iostream>

using namespace std;

int main()
{
	int num[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	char text[16] = { NULL };
	int count = 0;

	cin >> text;

	for (int i = 0; text[i] != NULL; i++) {
		count += num[int(text[i]) - 65];
	}

	cout << count;
}