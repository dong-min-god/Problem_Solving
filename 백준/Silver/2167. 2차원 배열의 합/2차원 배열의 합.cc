#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#include <stdlib.h>

using namespace std;

int arr[301][301] = { 0, };

int main()
{
	int n, m;
	int num;
	scanf("%d%d", &n, &m);

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			scanf("%d", &num);
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1] + num;
		}
	}
	
	int k,a,b,x,y;

	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d%d%d%d", &a, &b, &x, &y);
		printf("%d\n", arr[x][y] - arr[x][b - 1] - arr[a - 1][y] + arr[a - 1][b - 1]);
	}

}