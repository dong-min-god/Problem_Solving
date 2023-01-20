#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int N = 0, M = 0;
	int sum = 0, ans = 0;
	int card[101] = { 0, };
	scanf("%d%d", &N, &M);

	for (int i = 0; i < N; i++) {
		scanf("%d", &card[i]);
	}

	for (int i = 0; i < N-2; i++) {
		for (int j = i+1; j < N-1; j++) {
			for (int k = j+1; k < N; k++) {
				sum = card[i] + card[j] + card[k];
				if (ans < sum&&sum <= M)
					ans = sum;
			}
		}
	}
	printf("%d\n", ans);
}
