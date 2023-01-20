#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

int n, m, k, x, z;
vector <int> map[300001];
int road[300001] = { 0, };
vector<int> res;

void bfs(int x) {
	queue <int> q;
	q.push(x);

	while (!q.empty()) {
		int a = q.front();
		q.pop();

		for (int i = 0; i < map[a].size(); i++) {
			int b = map[a][i];
			if (road[b] == 0 && b != x) { 
				road[b] = road[a] + 1;
				q.push(b);
			}
		}
	}
}

int main() 
{
	cin >> n >> m >> k >> x;

	int num1, num2;
	for (int i = 0; i < m; i++) {
		cin >> num1 >> num2;
		map[num1].push_back(num2);
	}
	
	bfs(x);

	for (int i = 1; i <= n; i++) {
		if (road[i] == k)
			res.push_back(i);
	}

	if (res.size() == 0)
		cout << -1 << endl;
	else {
		sort(res.begin(), res.end());
		for (int i = 0; i < res.size(); i++) {
			cout << res[i] << endl;
		}
	}
}