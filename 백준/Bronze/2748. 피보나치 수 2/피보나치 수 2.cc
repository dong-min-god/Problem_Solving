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
	int n;
	scanf("%d", &n);

	long long dp[91] = { 0, };
	dp[0] = 0, dp[1] = 1;
	for (int i = 2; i < 91; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	printf("%lld", dp[n]);
}