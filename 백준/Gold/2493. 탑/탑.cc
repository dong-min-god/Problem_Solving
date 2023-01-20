#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int N;
int height[500001];
stack<pair<int,int>> tower;
int res[500001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	for (int i = 0; i < N; i++) 
		cin >> height[i];
	for (int i = N - 1; i >= 0; i--) {
		while (!tower.empty() && tower.top().first < height[i]) {
			res[tower.top().second] = i+1;
			tower.pop();
		}
		tower.push({ height[i],i });
	}
	for (int i = 0; i < N; i++)
		cout << res[i] << " ";
}