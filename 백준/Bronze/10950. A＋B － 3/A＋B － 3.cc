#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#include <stdlib.h>

using namespace std;


int main()
{
	int t;
	int a, b;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d%d", &a, &b);
		printf("%d\n", a + b);
	}
}