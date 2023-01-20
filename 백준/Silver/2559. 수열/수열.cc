#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

int N, K, tmp, ans=-10000001;
int psum[100001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		cin >> tmp;
		psum[i] = psum[i - 1] + tmp;
	}
	for (int i = K; i <= N;i++) {
		ans = max(ans, psum[i] - psum[i - K]);
	}

	cout << ans;
	return 0;
}