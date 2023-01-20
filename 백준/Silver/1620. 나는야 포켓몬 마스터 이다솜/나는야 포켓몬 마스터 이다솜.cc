#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int n, m;
string s;
map<string, int> map_1;
map<int, string> map_2;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> s;
		map_1[s] = i + 1;
		map_2[i + 1] = s;
	}
	for (int i = 0; i < m; i++) {
		cin >> s;
		if (atoi(s.c_str()) == 0)
			cout << map_1[s] << "\n";
		else
			cout << map_2[atoi(s.c_str())] << "\n";
	}
	return 0;
}