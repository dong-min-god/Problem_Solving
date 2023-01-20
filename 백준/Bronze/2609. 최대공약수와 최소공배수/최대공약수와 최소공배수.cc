#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int cal(int a, int b) {
	if (a%b == 0)
		return b;
	else
		return cal(b, a%b);
}

int main()
{
	int a = 0, b = 0;
	cin >> a >> b;
	int div = a > b ? cal(a, b) : cal(b, a);
	cout << div << endl << (a*b) / div;
}
