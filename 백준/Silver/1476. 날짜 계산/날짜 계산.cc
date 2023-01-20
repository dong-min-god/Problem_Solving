#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

using namespace std;

int cal(int e, int s, int m)
{
	int a = 0, b = 0, c = 0, sum = 0, count=0;
	while (1)
	{
		a++; b++; c++;
		if (a > 15) {
			a = 1;
		}
		if (b > 28) {
			b = 1;
		}
		if (c > 19) {
			c = 1;
		}
		count++;
		if (a == e && b == s && c == m)
			break;
	}
	
	return count;
}

int main() 
{
	int e, s, m;
	cin >> e >> s >> m;
	cout << cal(e, s, m);
}