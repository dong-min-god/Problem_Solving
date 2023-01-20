#include <iostream>
using namespace std;

int gcd(int x, int y) {
	while (y != 0) {
		int r = x % y;
		x = y;
		y = r;
	}
	return x;
}
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int a, b, c, d;
	int div = 0;
	int numerator = 0, denominator = 0;
	cin >> a >> b >> c >> d;

	denominator = b * d;
	numerator = a * d + b * c;
	div = gcd(numerator, denominator);

	cout << numerator / div << " " << denominator / div;
}