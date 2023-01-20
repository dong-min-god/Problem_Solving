#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	string s;
	
	while (1) {
		cin >> s;
		int a = 0;
		if (s == "0")break;
		for (int i = 0; i < s.size(); i++)
			a += s.at(i) - '0';
		while (a > 9) {
			int b = a;
			a = 0;
			for (; b != 0; b /= 10)
				a += b % 10;
		}
		cout << a << endl;
	}
}