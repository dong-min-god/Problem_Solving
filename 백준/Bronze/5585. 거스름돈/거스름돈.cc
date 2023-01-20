#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	int n, sum = 0, count = 0;

	cin >> n;

	sum = 1000 - n;

	while (1) {
		if (sum >= 500) {
			sum -= 500;
			count++;
		}
		else if (sum >= 100) {
			sum -= 100;
			count++;
		}
		else if (sum >= 50) {
			sum -= 50;
			count++;
		}
		else if (sum >= 10) {
			sum -= 10;
			count++;
		}
		else if (sum >= 5) {
			sum -= 5;
			count++;
		}
		else {
			sum --;
			count++;
		}
		if (sum == 0)
			break;
	}
	cout << count;
}
