#include <iostream>
using namespace std;

int N;
int num[11];
int cnt[4];
int mymin = 1000000001;
int mymax = -1000000001;

void solve(int result, int idx)
{
    if (idx == N)
    {
        if (result > mymax)
            mymax = result;
        if (result < mymin)
            mymin = result;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (cnt[i] > 0)
        {
            cnt[i]--; 
            if (i == 0)
                solve(result + num[idx], idx + 1);
            else if (i == 1)
                solve(result - num[idx], idx + 1);
            else if (i == 2)
                solve(result * num[idx], idx + 1);
            else
                solve(result / num[idx], idx + 1);
            cnt[i]++; 
        }
    }
    return;
}
int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> num[i];
    for (int i = 0; i < 4; i++)
        cin >> cnt[i];
    solve(num[0], 1);
    cout << mymax << '\n';
    cout << mymin;
}