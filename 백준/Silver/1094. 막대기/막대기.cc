#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	int num = 64;
	int count = 0, a = 0;

	cin >> a;

	while (1) {
		if (num > a)
			num /= 2;
		else if (num < a) {
			count++;
			int num1 = num;
			int num2 = num;

			while (num1 != a) {
				num2 /= 2;
				if (num1 + num2 <= a) {
					num1 += num2;
					count++;
				}
			}
			break;

		}
		else {
			count++;
			break;
		}
	}
	cout << count;
}
