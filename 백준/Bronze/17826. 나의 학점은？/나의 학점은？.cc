#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int grade[51];
	int score;
	int order;
	for (int i = 1; i <=50; i++)
		scanf("%d", &grade[i]);
	scanf(" %d", &score);

	for (int i = 1; i <= 50; i++) {
		if (score == grade[i])
			order = i;
	}
	if (order >= 1 && order <= 5)
		printf("A+");
	else if (order >= 6 && order <= 15)
		printf("A0");
	else if (order >= 16 && order <= 30)
		printf("B+");
	else if (order >= 31 && order <= 35)
		printf("B0");
	else if (order >= 36 && order <= 45)
		printf("C+");
	else if (order >= 46 && order <= 48)
		printf("C0");
	else if (order >= 49 && order <= 50)
		printf("F");
}