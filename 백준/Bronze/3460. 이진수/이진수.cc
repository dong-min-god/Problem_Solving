#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int T, n, num;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	cin >> T;

	while (T--) {
		cin >> n;
		int count = 0;
		while (n > 0) {
			num = n % 2;
			n /= 2;
			if (num == 1)
				cout << count << " ";
			count++;
		}
	}
}