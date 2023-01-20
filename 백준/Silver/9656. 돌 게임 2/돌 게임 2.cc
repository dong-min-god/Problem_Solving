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
	int stone;
	scanf("%d", &stone);

	if (stone % 2 == 0) {
		printf("SK");
	}
	else
		printf("CY");
}