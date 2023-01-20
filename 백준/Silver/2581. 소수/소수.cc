#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	int a = 0, b = 0, sum = 0, min = 10001, count = 0;
	cin >> a >> b;
	for (a; a <= b; a++) {
		for (int i = 2; i < a; i++) {
			if (a%i == 0)
				count++;
		}
		if (count == 0 && a != 1) {
			sum += a;
			if (min > a)
				min = a;
		}
		count = 0;
	}

	if (min == 10001)
		cout << "-1\n";
	else
		cout << sum << endl << min << endl;
}
