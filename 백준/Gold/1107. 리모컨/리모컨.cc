#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <string>

using namespace std;

int N, M, count = 0;
bool arr[11];
int sol(int input) {
	if (input == 0) {
		if (arr[0])
			return 0;
		else
			return 1;
	}
	int len = 0;
	while (input > 0) {
		if (arr[input % 10])
			return 0;
		input /= 10;
		len++;
	}
	return len;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	
	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;
		arr[num] = true;
	}
	int ans = N - 100;
	if (ans < 0)
		ans = -ans;
	for (int i = 0; i <= 10000000; i++) {
		int a = i;
		int len = sol(a);
		if (len > 0) {
			int tmp = abs(a - N);
			if (ans > tmp + len)
				ans = tmp + len;
		}
	}
	cout << ans;
}