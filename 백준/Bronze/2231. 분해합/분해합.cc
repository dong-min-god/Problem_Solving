#include <iostream>

using namespace std;

int sol(int num)
{
	int sum = num;
	while (num != 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}


int main()
{
	int N;
	cin >> N;
	for (int i = 1; i <= 1000000; i++) {
		if (sol(i) == N) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
}