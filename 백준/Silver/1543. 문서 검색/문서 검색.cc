#include <iostream>
#include <vector>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	string input;
	string cmp;

	int count = 0;
	int input_size = 0;
	int cmp_size = 0;

	getline(cin, input);
	getline(cin, cmp);

	input_size = input.size();
	cmp_size = cmp.size();

	for (int i = 0; i < input_size; i++) {
		bool flag = true;
		for (int j = 0; j < cmp_size; j++) {
			if (input[i + j] != cmp[j]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			count++;
			i += cmp_size - 1;
		}
	}
	cout << count;
}
