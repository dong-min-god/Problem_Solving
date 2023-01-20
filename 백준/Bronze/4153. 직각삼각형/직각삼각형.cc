#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	while (1) {
		int num[3] = { 0, };
		for (int i = 0; i < 3; i++) {
			scanf("%d", &num[i]);
		}
		if (num[0] != 0 && num[1] != 0 && num[2] != 0) {
			sort(num, num + 3);
			if (num[2] * num[2] == num[0] * num[0] + num[1] * num[1])
				printf("right\n");
			else
				printf("wrong\n");
		}
		else
			break;
	}
}