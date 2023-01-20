#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int height[9];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 9; i++) {
		cin >> height[i];
	}
	sort(height, height+9);
	do {
		int sum = 0;
		for (int i = 0;i < 7; i++)
			sum += height[i];
		if (sum == 100)
			break;
	} while (next_permutation(height, height + 9));
	for (int i = 0; i < 7; i++)
		cout << height[i] << "\n";
	return 0;
}
