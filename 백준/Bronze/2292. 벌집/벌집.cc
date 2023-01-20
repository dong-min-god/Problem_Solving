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
	int num = 1, count = 1, input;
	scanf("%d", &input);

	while (1) {
		if (num >= input) {
			printf("%d", count);
			break;
		}
		num += (6 * count);
		count++;
	}
}
