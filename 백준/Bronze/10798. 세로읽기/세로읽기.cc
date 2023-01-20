#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

string name[5];

int main()
{
	for (int i = 0; i < 5; i++)
		cin >> name[i];

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (i < name[j].size())
				cout << name[j][i];
		}
	}
}