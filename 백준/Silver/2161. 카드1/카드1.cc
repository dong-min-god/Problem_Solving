#include <iostream>
using namespace std;
 
int main() {
    int n, num[1001];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        num[i] = i;
    }
    while (1) {
        if (n < 1) {
            break;
        }
        cout << num[1] << " ";
        int tmp = num[2];
        for (int i = 1; i <= n-2; i++) {
            num[i] = num[i + 2];
        }
        num[n - 1] = tmp;
        n--;
    }
    return 0;
}