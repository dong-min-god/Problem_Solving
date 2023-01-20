#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int main() {

	int n;
	char str[205];
	vector<vector<char>> sent;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str;

		queue<char> temp;

		for (int j = 0; j < strlen(str); j++){
			if ('0' <= str[j] && str[j] <= '9')
				temp.push(str[j]);

			if ((!('0' <= str[j] && str[j] <= '9') || j == (strlen(str) - 1)) && temp.size() != 0){
				while (!temp.empty() && temp.front() == '0')
					temp.pop();

				vector<char> word;
				
				while (!temp.empty()) {
					word.push_back(temp.front());
					temp.pop();
				}
				if (word.size() == 0)
					word.push_back('0');
				sent.push_back(word);
			}
		}
	}

	sort(sent.begin(), sent.end());

	for (int k = 1; k <= 100; k++)
	{
		for (int i = 0; i < sent.size(); i++)
		{
			if (sent[i].size() == k) {
				for (int j = 0; j < sent[i].size(); j++)
					printf("%c", sent[i][j]);
				printf("\n");
			}
		}
	}

	return 0;
}
