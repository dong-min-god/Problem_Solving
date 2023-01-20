#include <iostream>

using namespace std;

int dp[41];

int fib(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n < 0)
		return 1;
	else {
		if (dp[n] > 0)
			return dp[n];
		dp[n] = fib(n - 1) + fib(n - 2);
		return dp[n];
	}
}

int main()
{
	int T;
	cin >> T;

	while (T--) {
		int n;
		cin >> n;
		cout << fib(n-1) << " " << fib(n) << "\n";
	}
}