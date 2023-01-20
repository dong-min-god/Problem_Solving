#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int n, a = 1;
	long long count = 0;
	scanf("%d", &n);

	while (pow(10, a) <= n) {
		count += a * (pow(10, a) - pow(10, a - 1));
		a++;
	}
	if (pow(10, a) - n >= 0)
		count += a * (n - pow(10, a - 1) + 1);
	printf("%d", count);
}