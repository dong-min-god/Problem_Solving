#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
	return (a.second < b.second);
}

int main()
{
	int N, tmp, num1, num2;
	int res = 1;
	vector <pair<int, int>> time;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num1 >> num2;
		time.push_back(make_pair(num1, num2));
	}

	sort(time.begin(), time.end());
	sort(time.begin(), time.end(), cmp);

	tmp = time[0].second;
	
	for (int i = 1; i < N; i++) {
		if (time[i].first >= tmp) {
			tmp = time[i].second;
			res++;
		}
	}

	cout << res;
}