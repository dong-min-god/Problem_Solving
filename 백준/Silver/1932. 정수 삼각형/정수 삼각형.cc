#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int Max = 0;
	int dp[501][501] = { 0, };

	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> dp[i][j];
			if (j == 1)
				dp[i][j] = dp[i - 1][j] + dp[i][j];
			else if (j == i)
				dp[i][j] = dp[i - 1][j - 1] + dp[i][j];
			else
				dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + dp[i][j];
			if (Max < dp[i][j])
				Max = dp[i][j];
		}
	}
	cout << Max;
}