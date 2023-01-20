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

int coin[101] = { 0, };
int dp[10001] = { 0, };

int main() 
{
	int n, k;
	

	scanf("%d%d", &n, &k);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &coin[i]);
	}
	dp[0] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = coin[i]; j <= k; j++) {
			dp[j] += dp[j - coin[i]];
		}
	}

	printf("%d", dp[k]);
}
