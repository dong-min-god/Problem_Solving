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
	int N;
	int num[100] = { 0, };
	
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		scanf("%d", &num[i]);
		num[i] *= i;
	}
	for (int i = 1; i <= N; i++) {
		printf("%d ", num[i] - num[i - 1]);
	}

}