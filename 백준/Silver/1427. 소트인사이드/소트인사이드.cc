#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	char num[10] = { 0, };
	int len = 0;
	scanf("%s", num);

	len = strlen(num);
	sort(num, num + len);
	for (int i = len - 1; i >= 0; i--) {
		printf("%c", num[i]);
	}
}