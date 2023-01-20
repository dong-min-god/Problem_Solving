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
	int score_1[5] = { 0, }, sum1 = 0;
	int score_2[5] = { 0, }, sum2 = 0;

	for (int i = 0; i < 4; i++) {
		scanf("%d", &score_1[i]);
		sum1 += score_1[i];
	}

	for (int i = 0; i < 4; i++) {
		scanf("%d", &score_2[i]);
		sum2 += score_2[i];
	}
	if (sum1 >= sum2)
		printf("%d", sum1);
	else
		printf("%d", sum2);
}