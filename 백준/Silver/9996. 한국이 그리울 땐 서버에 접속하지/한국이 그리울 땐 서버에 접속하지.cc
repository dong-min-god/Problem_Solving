#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int N;
string input, cmp, pre, suf;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	cin >> input;
	int pos = input.find('*');
	pre = input.substr(0, pos);
	suf = input.substr(pos + 1);
	for (int i = 0; i < N; i++) {
		cin >> cmp;
		if (pre.size() + suf.size() > cmp.size()) 
			cout << "NE\n";
		else {
			if (pre == cmp.substr(0, pre.size()) && suf == cmp.substr(cmp.size() - suf.size()))
				cout << "DA\n";
			else
				cout << "NE\n";
		}
	}
	return 0;
}