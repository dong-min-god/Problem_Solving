#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int prime[1001] = { 0, };
	int n, k;

	cin >> n >> k;
	for (int i = 2; i <= n; i++) {
		for (int j = 1; i * j <= n; j++) {
			if (prime[i * j] == 0) {
				v.push_back(i * j);
				prime[i * j] = 1;
			}
		}
	}
	cout << v[k - 1];
}