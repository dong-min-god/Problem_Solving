#include <iostream>

using namespace std;

int main()
{
	int T;
	long long dp[101] = { 1,1,1,1,2,2, };

	cin >> T;
	for (int i = 6; i < 101; i++) {
		dp[i] = dp[i - 1] + dp[i - 5];
	}
	while (T--) {
		int N;
		cin >> N;
		cout << dp[N] << "\n";
	}
}