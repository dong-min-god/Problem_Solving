#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence;
	getline(cin, sentence);

	for (int i = 0; i < sentence.length(); i++) {
		if ((sentence[i] >= 'A' && sentence[i] <= 'A' + 12) || (sentence[i] >= 'a' && sentence[i] <= 'a' + 12))
			cout << (char)(sentence[i] + 13);
		else if ((sentence[i] >= '0' && sentence[i] <= '9') || sentence[i] == ' ')
			cout << sentence[i];
		else
			cout << (char)(sentence[i] - 13);
	}
}
