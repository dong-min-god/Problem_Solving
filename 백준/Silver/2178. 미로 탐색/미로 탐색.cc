#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int N, M;
int maze[100][100] = { 0, };
int visited[100][100] = { 0, };
int dist[101][101];
queue<pair<int, int>>q;

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void bfs(int start_x, int start_y) {
	visited[start_x][start_y] = 1;
	q.push(make_pair(start_x, start_y));
	dist[start_x][start_y]++;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int new_x = x + dx[i];
			int new_y = y + dy[i];

			if ((0 <= new_x && new_x < N) && (0 <= new_y && new_y < M) && !visited[new_x][new_y] && maze[new_x][new_y] == 1) {
				visited[new_x][new_y] = 1;
				q.push(make_pair(new_x, new_y));
				dist[new_x][new_y] = dist[x][y] + 1;
			}
		}
	}
}

int main()
{
	cin >> N >> M;
	
	for (int i = 0; i < N; i++) {
		string row;
		cin >> row;
		for (int j = 0; j < M; j++) {
			maze[i][j] = row[j] - '0';
		}
	}
	bfs(0, 0);
	cout << dist[N - 1][M - 1];
}