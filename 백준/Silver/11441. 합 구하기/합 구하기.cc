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
	int n, num;
	scanf("%d", &n);

	int sum[100001] = { 0, };
	sum[0] = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		sum[i + 1] = sum[i] + num;
	}

	int count = 0;
	scanf("%d", &count);

	for (int i = 0; i < count; i++) {
		int head, rear;
		scanf("%d%d", &head, &rear);
		printf("%d\n", sum[rear] - sum[head - 1]);
	}
}