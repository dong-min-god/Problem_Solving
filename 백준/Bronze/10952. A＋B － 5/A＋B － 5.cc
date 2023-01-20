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
	int a, b;

	while (1) {
		scanf("%d%d", &a, &b);
		if (a == 0 && b == 0)
			break;
		else
			printf("%d\n", a + b);
	}
}