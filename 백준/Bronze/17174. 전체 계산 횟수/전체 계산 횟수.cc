#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int N = 0, M = 0;
	int count = 0;
	scanf("%d%d", &N, &M);

	count += N; // 1달러씩

	while (1) {
		count += (N / M);
		if (N / M != 0)
			N /= M;
		else
			break;
	}

	printf("%d", count);
}