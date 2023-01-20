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
	int k, c;
	cin >> k >> c;

	for (int i = 0; i < c; i++) {
		int a, b;
		cin >> a >> b;

		int flag = k - max(a, b);
		if ((a < b && b - flag - a >1) || (a >= b && a - flag - b > 2))
			cout << 0 << "\n";
		else
			cout << 1 << "\n";
	}
}