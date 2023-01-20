#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int n, m;
int result;
int parent[100001];

int get_parent(int x) {
    if (parent[x] == x) {
        return x;
    }
    else {
        return parent[x] = get_parent(parent[x]);
    }
}
void Union(int a, int b) {
    a = get_parent(a);
    b = get_parent(b);
    if (a < b) {
        parent[b] = a;
    }
    else {
        parent[a] = b;
    }
}
bool find_parent(int a, int b) {
    a = get_parent(a);
    b = get_parent(b);
    if (a == b)
        return true;
    else
        return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    vector<pair<int, pair<int, int>>> edge(m);

    for (int i = 0; i < m; i++) {
        int cost, a, b;
        cin >> a >> b >> cost;
        edge[i] = { cost, {a,b} };
    }

    for (int i = 1; i <= n; i++)
        parent[i] = i;

    sort(edge.begin(), edge.end());
    
    int Max = 0;
    
    for (int i = 0; i < m; i++) {
        int cost = edge[i].first;
        int a = edge[i].second.first;
        int b = edge[i].second.second;
        if (!find_parent(a, b)) {
            Max = max(Max, cost);
            result += cost;
            Union(a, b);
        }
    }

    cout << result - Max << "\n";
    return 0;
}