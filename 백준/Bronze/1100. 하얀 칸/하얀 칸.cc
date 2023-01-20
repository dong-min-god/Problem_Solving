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
	char chess[9][9];
	int sum = 0;
	for (int i = 0; i < 8; i++)
		scanf("%s", chess[i]);
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0 && chess[i][j] == 'F') 
					sum++;
		}
	}
	printf("%d", sum);
}