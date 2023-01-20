#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

using namespace std;

int main()
{
	int a = 0, b = 0, max = 0, sum = 0;

	for (int i = 0; i < 4; i++) {
		cin >> a >> b;
		sum += b;
		sum -= a;
		if (sum >= max)
			max = sum;
	}
	cout << max;
}