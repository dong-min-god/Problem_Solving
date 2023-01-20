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
	int x, y, w, h;
	int step = 0;

	scanf("%d%d%d%d", &x, &y, &w, &h);
	step = min(w - x, x);
	step = min(step, min(h - y, y));

	printf("%d", step);
}