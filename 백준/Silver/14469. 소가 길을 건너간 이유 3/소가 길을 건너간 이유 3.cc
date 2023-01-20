#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

int n = 0, cnt = 0;
int start, term;
vector<pair<int, int>> arr;

bool cmp(pair<int, int> x, pair<int, int> y) {
    if (x.first == y.first) 
        return x.second < y.second;
    else 
        return x.first < y.first;
}

int main() {
    cin >> n;

    while (n--) {
        cin >> start >> term;
        pair<int, int> temp(start, term);
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end(), cmp);

    for (auto now : arr) {
        if (cnt < now.first) cnt = now.first;
        cnt += now.second;
    }

    cout << cnt;
    return 0;
}