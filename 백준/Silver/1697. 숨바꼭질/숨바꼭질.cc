#include <iostream>
#include <cstdio>
#include <queue>

#define MAX 100001

using namespace std;

int N, K;
bool visit[MAX];

int bfs(int N, int K) {
	queue<pair <int, int>> q;
	q.push(make_pair(N, 0));
	visit[N] = true;

	while (!q.empty()) {
		int line = q.front().first;
		int location = q.front().second;
		q.pop();

		if (line == K)
			return location;
		if (line + 1 < MAX && !visit[line + 1]) {
			q.push(make_pair(line + 1, location + 1));
			visit[line + 1] = true;
		}
		if (line - 1 >= 0 && !visit[line - 1]) {
			q.push(make_pair(line - 1, location + 1));
			visit[line - 1] = true;
		}
		if (line * 2 < MAX && !visit[line * 2]) {
			q.push(make_pair(line * 2, location + 1));
			visit[line * 2] = true;
		}
	}
}

int main()
{
	cin >> N >> K;
	cout << bfs(N, K) << endl;

	return 0;
	
}