#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() 
{
	int num, score = 0, sum = 0;
	char ox[80] = { 0, };
	
	cin >> num;
	for (int i = 0; i < num; i++) {
		scanf("%s", &ox);
		for (int j = 0; ox[j] != NULL; j++) {
			if (ox[j] == 'O') {
				score++;
				sum += score;
				if (ox[j + 1] == 'O') {
					continue;
				}
				else
					score = 0;
			}
			else {
				score = 0;
				sum += score;
			}
		}
		cout << sum << endl;
		score = 0;
		sum = 0;
	}
}