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
	unsigned long long n;
	scanf("%lld", &n);

	int dp[1500001];
	dp[0] = 0, dp[1] = 1;
	for (int i = 2; i < 1500001; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000;
	}
	printf("%d", dp[n%1500000]);
}