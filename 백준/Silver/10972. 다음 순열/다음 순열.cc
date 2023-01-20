#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int m;

int main()
{
	cin >> m;
	vector<int> a(m);
	for (int i = 0; i < m; i++)
		cin >> a[i];

	if (next_permutation(a.begin(), a.end())) {
		for (int i = 0; i < m; i++) {
			cout << a[i] << ' ';
		}
	}
	else
		cout << -1;
	cout << '\n';
}