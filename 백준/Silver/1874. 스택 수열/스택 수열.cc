#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int input[100001];

int main()
{
	int n;
	int count = 0;
	vector<int> v;
	vector<char> res;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> input[i];

	for (int i = 1; i <= n; i++) {
		v.push_back(i);
		res.push_back('+');

		while (!v.empty() && v.back() == input[count]) {
			v.pop_back();
			res.push_back('-');
			count++;
		}
	}
	if (!v.empty())
		cout << "NO";
	else {
		for (int i = 0; i < res.size(); i++)
			cout << res[i] << "\n";
	}

}