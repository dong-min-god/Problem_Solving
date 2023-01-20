#include <iostream>
#include <queue>
#define MAX 100000
using namespace std;

int N,num;
int arr[MAX];

int main()
{
	cin >> N;
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < N; i++) {
		cin >> num;
		pq.push(num);
	}
	
	int ans = 0;
	int a, b;
	while (pq.size() > 1) {
		a = pq.top();
		pq.pop();
		b = pq.top();
		pq.pop();
		ans += (a + b);
		pq.push(a + b);
	}
	cout << ans;
}
