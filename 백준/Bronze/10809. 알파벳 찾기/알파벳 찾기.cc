#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	string word;
	cin >> word;

	int index;
	for (int i = 'a'; i <= 'z'; i++) {

		index = word.find(i);
		cout << index << " ";
	}
}