#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int str_len = str.length();
	int left, right;
	int add = 0;

	for (int i = 0; i < str_len - 1; i++) {
		if (str[i] == str[str_len - 1]) {
			left = i;
			right = str_len - 1;
			for (int j = 0; j < (str_len - i) / 2; j++) {
				if (str[left] == str[right]) {
					left++;
					right--;
				}
				else {
					add++;
					break;
				}
				if (left > right || left == right) {
					i = str_len - 1;
					break;
				}
			}
		}
		else
			add++;
	}
	cout << str_len + add;
}