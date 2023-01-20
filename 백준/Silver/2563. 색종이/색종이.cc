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
	int arr[100][100] = { 0, };

	int N;
	int x = 0, y = 0, area = 0;
	int max_x = 0, max_y = 0;
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d%d", &x, &y);

		if (x > max_x)
			max_x = x;
		if (y > max_y)
			max_y = y;

		for (int i = x; i < x+10; i++) {
			for (int j = y; j < y+10; j++) {
				arr[i][j]++;
			}
		}
	}

	for (int i = 0; i < max_x + 10; i++) {
		for (int j = 0; j < max_y + 10; j++) {
			if (arr[i][j])
				area++;
		}
	}

	printf("%d", area);

}