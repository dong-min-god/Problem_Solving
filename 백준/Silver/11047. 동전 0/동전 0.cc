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

int main() 
{
	int N, K;
	scanf("%d%d", &N, &K);
	int coin[10] = { NULL };
	int count[10] = { 0, };
	int sum = 0;
	for (int i = 0; i < N; i++) {
		scanf("%d", &coin[N - i - 1]);
	}
	for (int j = 0; j < N; j++) {
		count[j] = K / coin[j];
		K %= coin[j];
		sum += count[j];
	}
	printf("%d", sum);

	
}
