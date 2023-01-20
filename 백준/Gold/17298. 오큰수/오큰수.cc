#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int N, A;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	cin >> N;
	
	vector<int> v;
	int num;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}
	
	vector<int> ans(N, -1);
	stack<int> s;

	for (int i = 0; i < N; i++) {
		while (!s.empty() && v[s.top()] < v[i]) {
			ans[s.top()] = v[i];
			s.pop();
		}
		s.push(i);
	}
	for (int i = 0; i < N; i++)
		cout << ans[i] << " ";
}