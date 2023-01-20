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
	int a = 0, b = 1;
	scanf("%d", &n);

	for (int i = 0; i < n-1; i++) {
		int temp = b;
		b = a + b;
		a = temp;
	}
	printf("%d", b);
}
