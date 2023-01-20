#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int day = 0, num = 0, count = 0;

	scanf("%d", &day);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num);
		if (num % 10 == day)
			count++;
	}

	printf("%d", count);
}
