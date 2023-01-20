#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() 
{
	int sound[8];
	for (int i = 0; i < 8; i++) {
		cin >> sound[i];
	}
	for (int i = 0; i < 7; i++) {
		if (sound[i] - sound[i + 1] == -1) {
			if (i == 6) {
				if (sound[i] - sound[i + 1] == -1)
					cout << "ascending";
			}
			continue;
		}
		else if (sound[i] - sound[i + 1] == 1) {
			if (i == 6) {
				if (sound[i] - sound[i + 1] == 1)
					cout << "descending";
			}
			continue;
		}
		else {
			cout << "mixed";
			break;
		}
	}
}