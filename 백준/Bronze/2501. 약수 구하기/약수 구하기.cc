#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, K;
	int count = 0;
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			count++;
			if (K == count) {
				cout << i;
				break;
			}
		}
	}
	if (count < K)
		cout << "0";
}