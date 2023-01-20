#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


string name, ans;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	char c;
	int count[26] = { 0, };

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> name;
		count[name[0] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
		if (count[i] >= 5)
			ans += i + 'a';
	if (ans.size())
		cout << ans;
	else
		cout << "PREDAJA";
	return 0;
}