#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <queue>
#include <stdlib.h>

using namespace std;

bool check[31];

int main()
{
	for (int i = 0; i < 28; i++) {
		int num;
		scanf("%d", &num);
		check[num] = true;
	}

	for (int i = 1; i <= 30; i++) {
		if (!check[i]) {
			printf("%d\n", i);
		}
	}
}