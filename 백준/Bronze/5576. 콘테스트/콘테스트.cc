#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int W_score[10] = { 0, }, K_score[10] = { 0, };

	for (int i = 0; i < 10; i++) {
		scanf("%d", &W_score[i]);
	}
	for (int i = 0; i < 10; i++) {
		scanf("%d", &K_score[i]);
	}

	sort(W_score, W_score + 10);
	sort(K_score, K_score + 10);

	printf("%d %d", (W_score[7] + W_score[8] + W_score[9]), (K_score[7] + K_score[8] + K_score[9]));
}