#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

int main()
{
	int N;
	int flag;
	int res = 0;
	stack<pair<int, int>> score;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> flag;
		if (flag) {
			int a, b;
			cin >> a >> b;
			score.push(make_pair(a, b));
		}
		if (!score.empty()) {
			score.top().second--;
			if (score.top().second == 0) {
				res += score.top().first;
				score.pop();
			}
		}
	}
	cout << res << endl;
}