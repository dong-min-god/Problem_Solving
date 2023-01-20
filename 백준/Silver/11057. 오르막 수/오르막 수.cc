#include <iostream>

using namespace std;

int main()
{
	int N;
	int num[1001][10] = { 0, };
	int count = 0;

	cin >> N;

	for (int i = 0; i < 10; i++)
		num[1][i] = 1;

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = j; k < 10; k++) {
				num[i][j] = (num[i][j] + num[i - 1][k]) % 10007;
			}
		}
	}

	for (int i = 0; i < 10; i++)
		count = (count + num[N][i]) % 10007;

	cout << count;
}