#include <iostream>

using namespace std;

long long num1[1000001];

int main()
{
	long long min, max;
	int count = 0;

	
	cin >> min >> max;

	for (long long i = 2; i * i <= max; i++) {
		long long num = min / (i * i);
		
		if (min % (i * i) != 0)
			num++;

		while (num * (i * i) <= max) {
			num1[num * (i * i) - min] = 1;
			num++;
		}
	}

	for (long long i = 0; i <= max - min; i++) {
		if (num1[i] == 0)
			count++;
	}

	cout << count;
}