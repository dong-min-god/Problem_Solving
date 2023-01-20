#include <iostream>
using namespace std;

int num[1001];

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int a, b;
	int k = 1;
	for (int i = 1; i <= 1000; i++) {
		for (int j = 1; j <= i; j++) {
			num[k] = i;
			if (k > 1000)
				break;
			k++;
		}
	}
	cin >> a >> b;

	int sum = 0;
	for (int i = a; i <= b; i++)
		sum += num[i];
	cout << sum;
}