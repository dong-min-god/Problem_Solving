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

int car[10000][2];

int main()
{
	int n, m;
	scanf("%d", &n);
	scanf(" %d", &m);
	int max = m;
	int count = n;
	int flag = 0;
	for (int i = 0; i < count; i++) {
		scanf(" %d%d", &car[i][0], &car[i][1]);
		m = m + car[i][0] - car[i][1];
		if (m < 0) {
			flag = 1;
			break;
		}
		else {
			if (max < m)
				max = m;
		}
	}
	if (flag == 1)
		printf("0");
	else
		printf("%d", max);

}
