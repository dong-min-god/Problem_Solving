#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <queue>
#include <stdlib.h>

using namespace std;


int main()
{
	int score[8] = { 0, };
	int score_1[8] = { 0, };
	int score_2[5] = { 0, };
	int sum = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &score[i]);
		score_1[i] = score[i];
	}

	sort(score_1, score_1 + 8);
	sum = score_1[3] + score_1[4] + score_1[5] + score_1[6] + score_1[7];
	printf("%d\n", sum);

	score_2[0] = score_1[3];
	score_2[1] = score_1[4];
	score_2[2] = score_1[5];
	score_2[3] = score_1[6];
	score_2[4] = score_1[7];

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 5; j++) {
			if (score[i] == score_2[j])
				printf("%d ", i + 1);
		}
	}
}