#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int graph[1001][1001] = { 0 };
bool visited[1001] = { false };

void dfs(int vertex, int V) {
    visited[vertex] = true;
    cout << vertex << " ";

    for (int i = 1; i <= V; i++) {
        if (visited[i] || graph[vertex][i] == 0)
            continue;
        dfs(i, V);
    }
}

void bfs(int start, int V) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int vertex = q.front();
        q.pop();
        printf("%d ", vertex);
        for (int i = 1; i <= V; i++) {
            if (visited[i] || graph[vertex][i] == 0)
                continue;
            q.push(i);
            visited[i] = true;
        }
    }
    cout << endl;
}

int main(void) {
    int v, e, start;
    cin >> v >> e >> start;

    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        graph[a][b] = graph[b][a] = 1;
    }

    dfs(start, v);
    for (int i = 0; i <= v; i++)
        visited[i] = false;

    cout << endl;
    bfs(start, v);
    return 0;
}

