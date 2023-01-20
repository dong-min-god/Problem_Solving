#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x1, y1, r1, x2, y2, r2, T;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double rds = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

		if (x1 == x2 && y1 == y2) {
			if (r1 == r2)
				cout << "-1" << "\n";
			else
				cout << "0" << "\n";
		}
		else if (abs(r1 - r2) < rds && rds < (r1 + r2))
			cout << "2" << "\n";
		else if (abs(r1 - r2) == rds || (r1 + r2) == rds)
			cout << "1" << "\n";
		else
			cout << "0" << "\n";
	}
}