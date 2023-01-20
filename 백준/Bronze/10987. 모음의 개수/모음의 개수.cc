#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string word;
	cin >> word;

	int count = 0;
	int len = word.length();
	for (int i = 0; i < len; i++) {
		if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
			count++;
	}

	cout << count;
	
}