#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int k;
	int width = 1;
	int total = 0;

	pair<int, int> line[6];

	cin >> k;
	for (int i = 0; i < 6; i++) 
		cin >> line[i].first >> line[i].second;

	for (int i = 0; i < 6; i++) {
		int num = line[i].second * line[(i + 1) % 6].second;
		if (width == 1 || num > width) {
			width = num;
			total = (width - line[(i + 3) % 6].second * line[(i + 4) % 6].second) * k;
		}
	}
	cout << total;
}