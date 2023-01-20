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
	int total = 0;
	int price[9] = { 0, };
	int sum = 0;

	scanf("%d", &total);

	for (int i = 0; i < 9; i++) {
		scanf("%d", &price[i]);
		sum += price[i];
	}

	printf("%d", total - sum);
}
