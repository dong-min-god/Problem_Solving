#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n)!= EOF) {
		int cnt = 1, ans = 1;
		while (true) {
			if (cnt % n == 0) {
				cout << ans << "\n";
				break;
			}
			else {
				cnt = cnt * 10 + 1;
				cnt %= n;
				ans++;
			}
		}
	}
}