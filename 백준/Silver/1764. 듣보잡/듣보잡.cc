#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;
	vector <string> str1;
	vector <string> str2;

	cin >> N >> M;

	str1.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> str1[i];
	}

	sort(str1.begin(), str1.end());

	for (int i = 0; i < M; i++) {
		string str;
		cin >> str;

		if (binary_search(str1.begin(), str1.end(), str)) {
			str2.push_back(str);
		}
	}

	sort(str2.begin(), str2.end());

	cout << (int)str2.size() << "\n";
	for (int i = 0; i < (int)str2.size(); i++)
		cout << str2[i].c_str() << "\n";
}