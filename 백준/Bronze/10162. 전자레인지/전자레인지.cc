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
	int T;
	int count_A = 0, count_B = 0, count_C = 0;
	scanf("%d", &T);
	
	if (T % 10 != 0)
		printf("-1");
	else {
		count_A = T / 300;
		T %= 300;
		count_B = T / 60;
		T %= 60;
		count_C = T / 10;
		printf("%d %d %d", count_A, count_B, count_C);
		return 0;
	}
}
