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
	int N;
	scanf("%d", &N);
	int dp[50] = { 0, };
	dp[0] = 1, dp[1] = 1;
	for (int i = 2; i < N + 1; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2] + 1) % 1000000007;
	}
	printf("%d", dp[N]);
}