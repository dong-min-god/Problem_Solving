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
	int N;
	int day[16] = { 0, };
	int pay[16] = { 0, };
	int dp[16] = { 0, };

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> day[i] >> pay[i];
		for (int j = 0; j < i; j++) {
			if (day[j] + j <= i && i + day[i] <= N + 1)
				dp[i] = max(dp[i], dp[j] + pay[i]);
		}
	}
	int sum = 0;
	for (int i = 0; i <= N; i++) {
		sum = max(sum, dp[i]);
	}

	cout << sum;
}