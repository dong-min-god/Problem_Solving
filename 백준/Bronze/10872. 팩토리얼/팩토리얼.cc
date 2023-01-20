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
	int mul = 1;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		mul *= i;
	}

	printf("%d", mul);
}
