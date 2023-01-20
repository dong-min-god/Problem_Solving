#include <iostream>

using namespace std;

int main()
{
	int N, sum = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j <= i; j++)
			sum += j + i;
	}

	cout << sum;
}