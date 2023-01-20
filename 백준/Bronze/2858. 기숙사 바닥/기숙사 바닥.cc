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
	int R, B;
	int L = 0, W = 0;
	int sum = 0;
	int count_R = 0;
	int count_B = 0;
	scanf("%d%d", &R, &B);

	for (int i = 3; i < 10000; i++) {
		for (int j = 3; j < 10000; j++) {
			sum = i * j;
			count_B = (i - 2) * (j - 2);
			count_R = sum - count_B;

			if (count_R == R && count_B == B) {
				if (i > j) {
					L = i;
					W = j;
				}
				else {
					L = j;
					W = i;
				}
				printf("%d %d", L, W);
				return 0;
			}
		}
	}
}
