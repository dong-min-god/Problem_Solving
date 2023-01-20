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
	int n, sum = 0;
	long long tab = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &tab);
		sum += tab;
	}

	printf("%d", sum + 1 - n);

}