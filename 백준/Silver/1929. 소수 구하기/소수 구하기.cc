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
	int m, n;
	int num;

	cin >> m >> n;

	for (int i = m; i <= n; i++) {
		num = sqrt(i);

		if (num == 1 && i != 1) {
			cout << i << endl;
			continue;
		}

		if (i % 2 == 1) {
			for (int j = 2; j <= num; j++) {
				if (!(i % j))
					break;
				if (j == num)
					cout << i << '\n';
			}
		}
	}
}

