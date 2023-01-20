#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

	int N, M, a, b, res = 0, a_min = 1000, b_min = 1000;
	
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		cin >> a >> b;

		a_min = min(a_min, a);
		b_min = min(b_min, b);
	}

	if (a_min < b_min * 6)
		res += a_min * (N / 6);
	else
		res += b_min * (N / 6) * 6;
	N %= 6;

	if (a_min > N * b_min)
		res += N * b_min;
	else
		res += a_min;

	cout << res;
}