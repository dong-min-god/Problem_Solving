#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <queue>
#include <stdlib.h>

using namespace std;

int a[246913], n;
int main() {
	a[1] = 1;
	for (int i = 2; i <= 246912; i++) {
		if (a[i] == 1)
			continue;
		for (int j = i + i; j <= 246912; j += i)
			a[j] = 1;
	}

	while (1) {
		cin >> n;
		if (!n)
			break;
		int c = 0;
		for (int i = n + 1; i <= 2 * n; i++)
			if (!a[i])
				c++;
		cout << c << '\n';
	}

	return 0;
}
