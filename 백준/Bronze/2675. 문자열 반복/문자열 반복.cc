#include <stdio.h>
#include <iostream>

using namespace std;

int main() 
{
	int T, R;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> R;
		char word[20] = { 0, };
		cin.getline(word, 100);

		for (int i = 1; word[i] != '\0'; i++) {
			for (int j = 0; j < R; j++) {
				cout << word[i];
			}
		}
		cout << endl;
	}
}