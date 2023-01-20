#include <iostream>

using namespace std;

int main()
{
	int num[42] = { 0, };
	for (int i = 0; i < 10; i++) {
		int Num;
		cin >> Num;
		num[Num % 42]++;
	}
	int count = 0;
	for (int i = 0; i < 42; i++) {
		if (num[i] != 0)
			count++;
	}

	cout << count;
}