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
	int n;
	int sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
		sum += i;

	cout << sum;
}