#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;	
	long long num[10000];
	long long sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> num[i];

	sort(num, num+n);

	for (int i = 0; i < n; i++){ 
		for (int j = i + 1; j < n; j++)
			sum += num[j] - num[i];
	}

	cout << sum * 2;
}