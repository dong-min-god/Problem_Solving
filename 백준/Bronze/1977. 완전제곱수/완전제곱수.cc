#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

using namespace std;

int main() {
	int n, m, sum = 0, min = 0;
	int flag = 0;
	scanf("%d%d", &n, &m);

	for (int i = m; i >= n; i--) {
		for (int j =100; j > 0 ; j--) {
			if (i == (j * j)) {
				sum += i;
				min = i;
				flag++;
			}
		}
	}
	if (flag == 0)
		cout << "-1";
	if (flag > 0)
		cout << sum << endl << min;
}