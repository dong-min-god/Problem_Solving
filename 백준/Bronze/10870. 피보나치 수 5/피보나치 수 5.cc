#include <iostream>

using namespace std;

int fib(int a)
{
	if (a <= 1)
		return 0;
	else if (a == 2)
		return 1;
	else
		return fib(a - 1) + fib(a - 2);
}

int main()
{
	int n;
	cin >> n;
	cout << fib(n+1);
}