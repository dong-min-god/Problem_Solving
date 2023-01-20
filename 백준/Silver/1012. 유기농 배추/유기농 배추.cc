// bfs로 풀어야 한다.
// queue를 사용한다.

#include <iostream>
#include <queue>

using namespace std;

int arr[51][51];
int cnt = 0;
int T;
int M, N, K;
void bfs(int x, int y) {
	queue<pair<int, int>>q;

	int dx[4] = { -1, 1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };

	q.push(make_pair(x, y));

	arr[x][y] = 0;

	while (!q.empty()) {
		int cabbage_x = q.front().first;
		int cabbage_y = q.front().second;
		
		q.pop();

		for (int i = 0; i < 4; i++) {
			int new_x = cabbage_x + dx[i];
			int new_y = cabbage_y + dy[i];


			if (new_x >= 0 && new_x < M && new_y >= 0 && new_y < N) {
				if (arr[new_x][new_y] == 1) {
					arr[new_x][new_y] = 0;
					q.push(make_pair(new_x, new_y));
				}
			}
		}
	}
}
int main()
{
	
	cin >> T;
	for (int i = 0; i < T; i++) {
		
		cin >> M >> N >> K;
		for (int j = 0; j < K; j++) {
			int X, Y;
			cin >> X >> Y;
			arr[X][Y] = 1;
		}
		int worm = 0;

		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (arr[i][j] == 1) {
					bfs(i, j);
					worm++;
				}
			}
		}
		cout << worm << endl;
	}
}