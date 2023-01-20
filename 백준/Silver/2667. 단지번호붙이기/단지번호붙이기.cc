#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <string>

using namespace std;

int N, cnt = 0;
string map[26];
bool visited[26][26];
vector<int> result;
queue<pair<int, int>> q;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

void bfs(int x, int y) {
	q.push({ x,y });
	visited[x][y] = true;
	cnt++;

	while (!q.empty()) {
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = a + dx[i];
			int ny = b + dy[i];
			if (0 <= nx && 0 <= ny && nx < N && ny < N && visited[nx][ny] == false && map[nx][ny] == '1') {
				q.push({ nx,ny });
				visited[nx][ny] = true;
				cnt++;
			}
		}
	}
}
int main()
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> map[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == '1' && visited[i][j] == false) {
				cnt = 0;
				bfs(i, j);
				result.push_back(cnt);
			}
		}
	}
	sort(result.begin(), result.end());

	cout << result.size() << "\n";
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << "\n";
}