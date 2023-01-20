#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int cup[4] = { 1,0,0 };

	int num = 0;
	int a, b, temp;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d%d", &a, &b);
		temp = cup[a-1];
		cup[a-1] = cup[b-1];
		cup[b-1] = temp;
	}
	for (int i = 0; i < 3; i++) {
		if (cup[i] == 1)
			printf("%d", i + 1);
	}
}
