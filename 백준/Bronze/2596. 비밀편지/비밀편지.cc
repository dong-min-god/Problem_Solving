#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	string ch[] = { "000000","001111","010011","011100","100110","101001","110101","111010" };
	string mes;
	string real_mes;
	
	int num;

	cin >> num;
	cin >> mes;

	for (int i = 0; i < num; i++) {
		string tmp;
		for (int j = 0; j < 6; j++) {
			tmp += mes[i * 6 + j];
		}
		for (int k = 0; k < 8; k++) {
			int count = 0;
			for (int l = 0; l < 6; l++) {
				if (ch[k][l] != tmp[l])
					count++;
			}
			if (count <= 1)
				real_mes += 'A' + k;
		}
		if (real_mes.size() - 1 != i) {
			cout << i + 1;
			return 0;
		}
	}
	cout << real_mes;
}
