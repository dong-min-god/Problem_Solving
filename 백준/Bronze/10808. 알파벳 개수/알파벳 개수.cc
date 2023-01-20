#include <iostream>

using namespace std;

int main()
{
	char text[100] = { NULL };
	int alphabet[26] = { 0, };

	cin >> text;

	for (int i = 0; text[i] != NULL; i++) {
		alphabet[int(text[i]) - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << " ";
	}
}