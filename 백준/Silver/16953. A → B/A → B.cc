#include <iostream>

using namespace std;

int main()
{
	int A, B;
	int count = 0;
	cin >> A >> B;
	while (B > A) {
		if (B % 10 == 1) {
			B /= 10;
			count++;
		}
		else if (B % 2 == 1) {
			cout << "-1";
			return 0;
		}
		else {
			B /= 2;
			count++;
		}
		if (A == B) {
			cout << count + 1;
			return 0;
		}
	}
	cout << "-1";
}
