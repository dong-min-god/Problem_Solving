#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	int N, count = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		bool alphabet[26];
		memset(alphabet, false, sizeof(alphabet));
		string str;
		cin >> str;

		char ch = str[0];
		alphabet[str[0] - 'a'] = true;
		bool word = true;
		int len = str.length();
		for (int j = 1; j < len; j++) {
			if (str[j] != ch) {
				ch = str[j];
				if (alphabet[str[j] - 'a']) {
					word = false;
					break;
				}
				else
					alphabet[str[j] - 'a'] = true;
			}
			else
				continue;
		}
		if (word)
			count++;
	}
	cout << count;
}