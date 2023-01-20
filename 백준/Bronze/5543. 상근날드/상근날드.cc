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
	int price[5] = { 0, };
	int sum = 0, min = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &price[i]);
	}
	min = price[0] + price[3];
	for (int i = 0; i < 3; i++) {
		for (int j = 3; j < 5; j++) {
			sum = price[i] + price[j];
			if (sum <= min)
				min = sum;
		}
	}

	printf("%d", min - 50);
	
}
