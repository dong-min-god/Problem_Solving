#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;
	int max = 0;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int w;
		cin >> w;
		v.push_back(w);
	}
	sort(v.rbegin(), v.rend());
	for (int i = 0; i < v.size(); i++) {
		int tmp = 0;
		tmp = v[i] * (i + 1);
		if (tmp > max)
			max = tmp;
	}
	cout << max;
}