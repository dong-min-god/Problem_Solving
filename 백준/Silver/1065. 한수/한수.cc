#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int n;
	int num = 0;
	int i, j;
	int arr[3];
	int diff1, diff2;
	int temp;

	scanf("%d", &n);

	if (n < 100)
		num = n;
	else {
		for (j = 100; j <= n; j++) {
			temp = j;
			for (i = 2; i >= 0; i--) {
				arr[i] = temp % 10;
				temp /= 10;
			}
			diff1 = arr[1] - arr[0];
			diff2 = arr[2] - arr[1];
			if (diff1 == diff2)
				num++;
		}
		num += 99;
		if (n == 1000)
			num--;
	}
	printf("%d", num);
}
