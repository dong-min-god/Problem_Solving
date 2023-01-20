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
	int A, B, C, D, P;
	int price_X = 0, price_Y = 0;

	scanf("%d%d%d%d%d", &A, &B, &C, &D, &P);

	price_X = A * P;

	if (C >= P)
		price_Y = B;
	else
		price_Y = B + (P - C)*D;

	if (price_X >= price_Y)
		printf("%d", price_Y);
	else
		printf("%d", price_X);

}
