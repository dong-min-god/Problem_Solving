#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int ten(int a) {
	int res = 0;
	while (a != 0) {
		res += (a % 10);
		a /= 10;
	}
	return res;
}

int tentwo(int b) {
	int res = 0;
	while (b != 0) {
		res += (b % 12);
		b /= 12;
	}
	return res;
}

int tensix(int c) {
	int res = 0;
	while (c != 0) {
		res += (c % 16);
		c /= 16;
	}
	return res;

}
int main()
{	
	for (int i = 1000; i < 10000; i++) {
		if (ten(i) == tentwo(i) && tentwo(i) == tensix(i))
			printf("%d\n", i);
	}
}