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
	int num[4] = { 0, };

	for (int i = 0; i < 4; i++) {
		scanf("%d", &num[i]);
	}
	sort(num, num + 4);

	printf("%d", num[0] * num[2]);
}