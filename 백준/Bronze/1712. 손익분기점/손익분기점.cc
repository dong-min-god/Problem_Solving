#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#include <stack>
using namespace std;


int main()
{
	long a, b, c;
	long count = 0;
	scanf("%ld %ld %ld", &a, &b, &c);
	if (b >= c)
		printf("-1");
	else {
		count = a / (c - b);
		printf("%ld", count + 1);
	}
}