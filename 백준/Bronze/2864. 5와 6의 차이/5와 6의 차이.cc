#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int tmp_a, tmp_b;
	int min = 0, max = 0;
	int num_a = 0, num_b = 0;
	int i = 1, j = 1;
	cin >> a >> b;
	tmp_a = a;
	tmp_b = b;

	while (a > 0) {
		num_a = a % 10;
		a /= 10;

		if (num_a == 5) {
			min += num_a * i;
			max += (num_a + 1) * i;
		}
		else if (num_a == 6) {
			min += (num_a - 1) * i;
			max += num_a * i;
		}
		else {
			min += num_a * i;
			max += num_a * i;
		}
		i *= 10;
	}
	while (b > 0) {
		num_b = b % 10;
		b /= 10;

		if (num_b == 5) {
			min += num_b * j;
			max += (num_b + 1) * j;
		}
		else if (num_b == 6) {
			min += (num_b - 1) * j;
			max += num_b * j;
		}
		else {
			min += num_b * j;
			max += num_b * j;
		}

		j *= 10;
	}

	cout << min << " " << max;
}