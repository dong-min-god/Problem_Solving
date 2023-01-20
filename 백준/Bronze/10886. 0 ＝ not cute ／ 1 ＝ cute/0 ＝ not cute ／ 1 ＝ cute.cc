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
	int num[101] = { 0, };
	int person = 0;
	int yes = 0, no = 0;
	scanf("%d", &person);

	for (int i = 0; i < person; i++) {
		scanf("%d", &num[i]);
		if (num[i] == 1)
			yes++;
		else
			no++;
	}
	
	if (yes > no)
		printf("Junhee is cute!");
	else
		printf("Junhee is not cute!");
}
