#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

int main()
{
	printf("n e\n");
	printf("- -----------\n");
	double fac[10] = { 0, };

	fac[0] = 1;

	for (int i = 1; i < 10; i++) {
		fac[i] = fac[i - 1] * i;
	}
	double e = 0;
	for (int i = 0; i < 3; i++) {
		e += 1 / fac[i];
		printf("%d %.9g\n", i, e);
	}
	for (int i = 3; i < 10; i++) {
		e += 1 / fac[i];
		printf("%d %.9f\n", i, e);
	}
}
