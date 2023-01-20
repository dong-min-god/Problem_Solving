#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	int count = 0;
	int num = 665;
	string str;

	cin >> N;

	while (num++) {
		str = to_string(num);

		if (str.find("666") != -1) {
			count++;
		}

		if (count == N) {
			cout << num << endl;
			break;
		}
	}
}