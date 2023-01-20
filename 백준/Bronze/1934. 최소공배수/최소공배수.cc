#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

int cal(int a, int b) 
{
	if (a%b == 0)
		return b;
	else
		cal(b, a%b);
}


int main()
{
	int a = 0, b = 0;
	int num = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d%d", &a, &b);
		int div = a > b ? cal(a, b) : cal(b, a);
		printf("%d\n", a*b / div);
	}
}
