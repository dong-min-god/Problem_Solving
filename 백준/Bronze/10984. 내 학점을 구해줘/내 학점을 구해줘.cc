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
	int T = 0, N = 0, C = 0, sum_C = 0;
	double G = 0.0, sum_G = 0.0;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%d%lf", &C, &G);
			sum_C += C;
			sum_G += (C*G);
		}
		printf("%d %.1lf\n", sum_C, sum_G / (float)sum_C);

		sum_C = 0;
		sum_G = 0.0;
	}
}