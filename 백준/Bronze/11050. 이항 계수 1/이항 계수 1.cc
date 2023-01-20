#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

using namespace std;


int main() 
{
	int n, k, mul = 1;
	cin >> n >> k;

	for (int i = n; i > n - k; i--) {
		mul *= i;
	}
	for (int j = 1; j <= k; j++) {
		mul /= j;
	}

	cout << mul;
}