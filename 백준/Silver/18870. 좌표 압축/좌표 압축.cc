#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


vector<pair<int, int>> tmp, res;

int main()
{
	int N, num, count = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		tmp.push_back({ num, i });
	}

	sort(tmp.begin(), tmp.end());
	res.push_back({ tmp[0].second, count });

	for (int i = 1; i < N; i++) {
		if (tmp[i - 1].first == tmp[i].first)
			res.push_back({ tmp[i].second, count });
		else
			res.push_back({ tmp[i].second, ++count });
	}
	sort(res.begin(), res.end());
	for (int i = 0; i < N; i++)
		cout << res[i].second << " ";
}