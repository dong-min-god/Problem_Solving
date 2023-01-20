#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

using namespace std;

int main() {
	int N;
	cin >> N;

	if (N % 2 == 1)
		cout << "SK";
	else
		cout << "CY";
}