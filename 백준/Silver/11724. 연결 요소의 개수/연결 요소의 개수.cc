#include <iostream>
using namespace std;

const int MAX = 1001;
bool map[MAX][MAX];
bool check[MAX];
int n, m, u, v;
int result;

void dfs(int num) {
	check[num] = true;
	for (int i = 1; i <= n; i++) {
		if (map[num][i] && !check[i])
			dfs(i);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		map[u][v] = true;
		map[v][u] = true;
	}

	for (int i = 1; i <= n; i++) {
		if (!check[i]) {
			result++;
			dfs(i);
		}
	}
	cout << result;

	return 0;
}