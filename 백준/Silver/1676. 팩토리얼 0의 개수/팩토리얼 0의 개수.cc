#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int N, cnt;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N;
	for (int i = 5; i <= N; i*=5) {
		cnt += N / i;
	}
	cout << cnt;
}