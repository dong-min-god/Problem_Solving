#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() 
{
	int n, arr[100] = { 0, }, flag = 1, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] == 1)
			flag--;
		for (int j = 2; j < arr[i]; j++) {
			if (arr[i] % j == 0) {
				flag--;
				break;
			}
			else
				continue;
		}
		if (flag == 1)
			count++;
		flag = 1;
	}
	cout << count;
}