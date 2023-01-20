#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

typedef long long ll;

ll a, b, c;
ll divide(ll a, ll b) {
	if (b == 1)
		return a % c;
	ll _c = divide(a, b / 2);
	_c = (_c * _c) % c;
	if (b % 2 == 1)
		_c = (_c * a) % c;
	return _c;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	cin >> a >> b >> c;

	cout << divide(a, b);
}