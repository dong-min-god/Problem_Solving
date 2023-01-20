#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	int N;
	long long arr[27] = { 0, };
	vector<int> v;
	string s;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		int count = 1;
		for (int j = s.size() - 1; j >= 0; j--) {
			arr[s[j] - 'A'] += count;
			count *= 10;
		}
	}

	for (int i = 0; i < 27; i++) {
		if (arr[i] != 0)
			v.push_back(arr[i]);
	}
	sort(v.begin(), v.end());

	int num = 9;
	int size = v.size();
	long long ans = 0;
	for (int i = size - 1; i >= 0; i--) {
		ans += v[i] * num;
		num--;
	}
	cout << ans << "\n";
}
