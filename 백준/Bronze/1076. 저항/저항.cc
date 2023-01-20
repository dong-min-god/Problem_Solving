#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string color[10] = { "black", "brown","red","orange","yellow","green","blue","violet","grey","white" };
	string input;
	long long sum = 0;
	int num[3];

	for (int i = 0; i < 3; i++) {
		cin >> input;
		for (int j = 0; j < 10; j++) {
			if (color[j] == input)
				num[i] = j;
		}
	}

	sum = num[0] * 10 + num[1];
	for (int i = 0; i < num[2]; i++) {
		sum *= 10;
	}
	cout << sum;
}