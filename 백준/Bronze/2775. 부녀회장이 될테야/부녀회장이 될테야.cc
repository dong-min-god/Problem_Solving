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
	int num;
	int k, n;
	int num1[15][15] = { 0, };
	scanf("%d", &num);

	for (int i = 0; i <= 14; i++) {
		num1[0][i] = i + 1;
	}
	for (int i = 0; i <= 14; i++) {
		num1[i][0] = 1;
	}

	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			num1[i][j] = num1[i - 1][j] + num1[i][j - 1];
		}
	}

	for (int i = 0; i < num; i++) {
		scanf("%d%d", &k, &n);
		printf("%d\n", num1[k][n - 1]);
	}
}