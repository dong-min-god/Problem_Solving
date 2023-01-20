#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int sum[5] = { 0, };
	int score[5];
	int max = 0;
	int index_max = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> score[j];
			sum[i] += score[j];
		}
	}
	max = sum[0];

	for (int i = 1; i < 5; i++) {
		if (sum[i] > max) {
			max = sum[i];
			index_max = i;
		}
	}
	printf("%d %d", index_max + 1, max);
}