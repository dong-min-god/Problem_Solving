#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n, d, p, tmp, sum = 0;
priority_queue<int, vector<int>, greater<int>> money;
vector<pair<int, int>> v;
int main()
{
	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> p >> d;
		v.push_back({ d,p });
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n;i++) {
		money.push(v[i].second);
		sum += v[i].second;

		if (money.size() > v[i].first) {
			sum -= money.top();
			money.pop();
		}
	}
	cout << sum;
}
