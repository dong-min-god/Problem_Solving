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
	int count = 0;
	int temp = 0;

	int num[1001] = { 0, };
	int dp[1001] = { 0, };

	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> num[i];

	for (int i = 0; i < N; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (num[i] > num[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		count = max(count, dp[i]);
	}
	cout << count;
}