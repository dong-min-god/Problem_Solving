#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int N;
struct cmp {
	bool operator()(int a, int b) {
		if (abs(a) == abs(b))
			return a > b;
		else
			return abs(a) > abs(b);
	}
};
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	
	priority_queue<int, vector<int>, cmp> pq;
	while (N--) {
		int input;
		cin >> input;

		if (input == 0) {
			if (pq.empty())
				cout << 0 << '\n';
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else
			pq.push(input);
	}
	return 0;
}