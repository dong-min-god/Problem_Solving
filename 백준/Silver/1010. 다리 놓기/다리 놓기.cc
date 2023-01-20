#include <iostream>

using namespace std;

int main()
{
	int T, N, M;
	
	int count = 0;

	cin >> T;

	for (int i = 0; i < T; i++) {
		int dp[31][31] = { 0, };
		cin >> N >> M;

		for (int j = 1; j <= M; j++)
			dp[1][j] = j;

		for (int k = 2; k <= N; k++) {
			for (int l = 1; l <= M; l++) {
				for (int m = k - 1; m < l; m++) {
					dp[k][l] += dp[k - 1][m];
				}
			}
		}

		cout << dp[N][M] << "\n";
	}
}