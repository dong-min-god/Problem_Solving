#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	int time[1001];
	int res = 0;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> time[i];
	}
	sort(time, time + T);

	for (int i = 1; i <= T; i++) {
		res += time[i - 1] * (T - i + 1);
	}

	cout << res;
}