#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <queue>
#include <stdlib.h>

using namespace std;



int main()
{
	int t, n, i;

	scanf("%d", &t);
	for (int j = 0; j < t; j++) {
		scanf("%d", &n);
		for (i = 1; i*i <= n; i++);
		printf("%d\n", i - 1);
	}
}