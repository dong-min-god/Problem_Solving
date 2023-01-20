#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int n, m;
string a, b;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	for (int i = 0; i < n;i++) {
		map<string, int> clothes;
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> a >> b;
			clothes[b]++;
		}
		long long ans = 1;
		for (auto c : clothes) {
			ans *= ((long long)c.second + 1);
		}
		ans--;
		cout << ans << "\n";
	}
	return 0;
}