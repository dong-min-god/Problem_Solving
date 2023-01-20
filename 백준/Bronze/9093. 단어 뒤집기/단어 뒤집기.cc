#include <iostream>
#include <string>

using namespace std;

int main()
{
	int T;
	cin >> T;
	cin.ignore();

	while (T--) {
		string sent;
		getline(cin, sent);
		int temp = 0;
		int size = sent.size();

		for (int i = 0; i < size; i++) {
			if (sent[i] == ' ') {
				for (int j = i - 1; j >= temp; j--)
					cout << sent[j];
				cout << " ";
				temp = i + 1;
			}
		}
		for (int i = size - 1; i >= temp; i--)
			cout << sent[i];
		cout << "\n";
	}
}