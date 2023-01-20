#include <iostream>

using namespace std;

int main()
{
	int A, B, V;
	int count = 0;
	int height = 0;
	cin >> A >> B >> V;

	cout << (V - B - 1) / (A - B) + 1;
}