#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <queue>
#include <stdlib.h>

using namespace std;

int number[100000] = { 0, };
long long dp[100000] = { 0, };

long long max(long long a, long long b) {
	if (a > b) 
		return a;
	else
		return b;
}
int main()
{
	
	int num;
	long long temp;

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &number[i]);
	}

	dp[0] = number[0];
	temp = number[0];

	for (int i = 1; i < num; i++) {
		dp[i] = max(dp[i - 1] + number[i], number[i]);
		temp = max(dp[i], temp);
	}

	printf("%d", temp);
}