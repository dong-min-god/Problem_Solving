#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

using namespace std;

int main()
{
	int temp;

	for (int i = 1; i < 10000; i++) {
		for (int j = 0; j < i; j++) {
			temp = j;
			for (int k = j; k != 0; k /= 10)
				temp += k % 10;
			if (temp == i)
				break;
			if (j == i - 1)
				cout << i << endl;
		}
	}
}