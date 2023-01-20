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
	long n;
	scanf("%d", &n);
	long num[1000000];
	for (long i = 0; i < n; i++) {
		scanf("%ld", &num[i]);
	}
	sort(num, num + n);
	for (long i = 0; i < n; i++) {
		printf("%ld\n", num[i]);
	}
}