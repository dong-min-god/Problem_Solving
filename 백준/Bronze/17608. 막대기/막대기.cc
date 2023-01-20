#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int N;
	int count = 0;
	int top_v = 0;

	stack <int> a;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		a.push(num);
	}
	top_v = a.top();
	a.pop();
	count++;

	while (!a.empty()) {
		int temp;
		temp = a.top();
		if (temp > top_v) {
			count++;
			top_v = temp;
		}
		a.pop();
	}
	cout << count;
}