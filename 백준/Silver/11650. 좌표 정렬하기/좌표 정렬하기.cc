#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

int main()
{
	int N;
	scanf("%d", &N);

	vector<pair<int, int>> location(N);

	for (int i = 0; i < N; i++) {
		scanf("%d%d", &location[i].first, &location[i].second);
	}

	sort(location.begin(), location.end());

	for (int i = 0; i < N; i++) {
		printf("%d %d\n", location[i].first, location[i].second);
	}

}