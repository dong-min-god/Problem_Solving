#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
	int T;
	int x1, y1, x2, y2;
	int n, cx, cy, r;

	cin >> T;

	while (T--) {
		cin >> x1 >> y1 >> x2 >> y2;
		int count = 0;
		cin >> n;
		while (n--) {
			cin >> cx >> cy >> r;
			if (((x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy)) < r * r && ((x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy)) > r * r)
				count++;
			if (((x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy)) < r * r && ((x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy)) > r * r)
				count++;

		}
		cout << count << "\n";
	}
}