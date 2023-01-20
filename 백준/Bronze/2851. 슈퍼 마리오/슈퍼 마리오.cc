#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main()
{	
	int num[10];
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < 10; i++) {
		if (abs(sum + num[i] - 100) <= abs(sum - 100)) {
			sum += num[i];
		}
		else
			break;
	}

	printf("%d", sum);
}