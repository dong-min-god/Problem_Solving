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
	int T;

	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int dp[15] = { 0, };
		dp[0] = 1;

		int k;
		scanf("%d", &k);

		for (int i = 1; i <= k; i++) {
			if (i - 1 >= 0)
				dp[i] += dp[i - 1];
			if (i - 2 >= 0)
				dp[i] += dp[i - 2];
			if (i - 3 >= 0)
				dp[i] += dp[i - 3];
		}

		printf("%d\n", dp[k]);
	}
}