#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

int main() {
	int flag = 0;
	string str;
	cin >> str;
	
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'P') {
			flag++;
			continue; 
		}
		if (flag >= 2 && str[i + 1] == 'P') {
			flag--;
			i++;
		}
		else {
			cout << "NP" << endl;
			return 0;
		}
	}
	if (flag == 1) 
		cout << "PPAP" << endl;
	else 
		cout << "NP" << endl;

	return 0;
}