#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int N, L;
	int x, k = -1, num = -1;
	cin >> N >> L;

	for (int i = L; i <= 100; i++) {
		x = (i - 1) * i / 2;
		if ((N - x) % i == 0 && (N - x) / i >= 0) {
			k = (N - x) / i;
			num = i;
			break;
		}
	}
	if (k == -1)
		cout << -1;
	else
		for (int i = 0; i < num; i++)
			cout << k + i << " ";
	return 0;
}