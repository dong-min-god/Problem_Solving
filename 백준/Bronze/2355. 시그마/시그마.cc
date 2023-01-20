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
	long long a, b;
	scanf("%lld %lld", &a, &b);
	long long num = abs(b - a) + 1;
	printf("%lld", (num *(a + b) / 2));
}
