#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>

using namespace std;


int main()
{
	int N;
	int count = 0;

	cin >> N;

	while (N--) {
		stack<char> stack;
		string str;
		cin >> str;

		for (int i = 0; i < str.length(); i++) {
			if (stack.empty()) 
				stack.push(str[i]);
			else {
				if (stack.top() == str[i])
					stack.pop();
				else {
					stack.push(str[i]);
				}
			}
		}
		if (stack.empty())
			count++;
	}

	cout << count;
}