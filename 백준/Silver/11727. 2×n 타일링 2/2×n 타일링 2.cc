#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int dp[1001] = { 0, };
	dp[1] = 1, dp[2] = 3, dp[3] = 5, dp[4] = 11;

	for (int i = 5; i <= n; i++)
		dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;

	cout << dp[n];
}