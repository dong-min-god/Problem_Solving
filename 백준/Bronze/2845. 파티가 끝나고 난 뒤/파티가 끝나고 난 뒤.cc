#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int num[5];

	cin >> a >> b;
	
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		num[i] -= (a * b);
	}
	for (int i = 0; i < 5; i++) {
		cout << num[i] << ' ';
	}
}