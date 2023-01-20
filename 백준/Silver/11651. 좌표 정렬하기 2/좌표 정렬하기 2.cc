#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int, int>a, pair<int, int>b) 
{
	if (a.second < b.second)
		return true;
	else if (a.second == b.second) {
		if (a.first < b.first)
			return true;
	}
	return false;
}

int main()
{
	int N = 0;
	scanf("%d", &N);
	vector<pair<int, int>> num(N);
	for (int i = 0; i < N; i++) {
		scanf(" %d%d", &num[i].first, &num[i].second);
	}

	sort(num.begin(), num.end(), cmp);

	for (int i = 0; i < N; i++) {
		printf("%d %d\n", num[i].first, num[i].second);
	}

}