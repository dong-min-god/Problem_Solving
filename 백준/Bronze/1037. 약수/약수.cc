#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N = 0;
	int a = 0;
	vector<int> num(100);
	num.clear();

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf(" %d", &a);
		num.push_back(a);
	}
	sort(num.begin(), num.end());
	
	printf("%d", num.front() * num.back());
}