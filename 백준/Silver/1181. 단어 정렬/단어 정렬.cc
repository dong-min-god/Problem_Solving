#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(string a, string b)
{
	if (a.size() == b.size())
		return a < b;
	else
		return a.size() < b.size();
}

int main()
{
	int N;
	string str;
	vector <string> s;

	cin >> N;
	
	for (int i = 0; i < N; i++) {
		string word;
		cin >> word;
		s.push_back(word);
	}

	sort(s.begin(), s.end(), cmp);

	for (int i = 0; i < N; i++) {
		if (str == s[i])
			continue;
		cout << s[i] << "\n";
		str = s[i];
	}
}