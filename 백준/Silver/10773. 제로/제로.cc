#include <iostream>
#include <stack>

using namespace std;

stack <int> num;
int cnt,a,k;

int main()
{
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> a;
		if (a != 0)
			num.push(a);
		else
			num.pop();
	}
	while(!num.empty()){
		cnt += num.top();
		num.pop();
	}
	cout << cnt;
}