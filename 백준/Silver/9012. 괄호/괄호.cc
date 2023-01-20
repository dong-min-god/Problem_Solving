#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <string>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

bool check(string str)
{
	int len = str.length();
	stack<char> st;

	for (int i = 0; i < len; i++) {
		char c = str[i];

		if (c == '(') {
			st.push(str[i]);
		}
		else {
			if (!st.empty()) {
				st.pop();
			}
			else
				return false;
		}
	}
	return st.empty();
}


int main()
{	
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		string str;
		cin >> str;

		if (check(str)) {
			printf("YES\n");
		}
		else
			printf("NO\n");
	}
}