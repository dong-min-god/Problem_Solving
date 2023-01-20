#include <iostream>

using namespace std;

void hanoi(int a, int b, int c, int d)
{
	if (a == 1)
		cout << b << " " << c <<"\n";

	else {
		hanoi(a - 1, b, d, c);
		hanoi(1, b, c, d);
		hanoi(a - 1, d, c, b);
	}
}
int main()
{
	int N;
	int count = 1;
	cin >> N;

	for (int i = 1; i <= N; i++)
		count *= 2;

	cout << count - 1 << "\n";
	hanoi(N, 1, 3, 2);
}