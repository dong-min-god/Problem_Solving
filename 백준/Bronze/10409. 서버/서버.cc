#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <queue>
#include <stdlib.h>

using namespace std;

int main() 
{
	int n, T;
	int num[101] = { 0, };
	int sum = 0;
	int count = 0;
	scanf("%d%d", &n, &T);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		sum += num[i];
		if (sum > T)
			break;
		else
			count++;
	}
	printf("%d", count);
}