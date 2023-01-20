#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

using namespace std;

int main()
{
	for (int i = 2; i <= 100; ++i) {
		for (int j = 2; j < i; ++j) {
			for (int k = j + 1; k < i; ++k) {
				for (int l = k + 1; l < i; ++l) {
					if ((i*i*i) == (j*j*j) + (k*k*k) + (l*l*l))
						printf("Cube = %d, Triple = (%d,%d,%d)\n", i, j, k, l);
				}
			}
		}
	}
}