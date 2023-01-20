#include <iostream>
using namespace std;

int a, b, c;
int h, m;
int main() 
{
	cin >> a >> b >> c;
	h = a;
	m = b + c;
	if (m >= 60) {
		h += (m / 60);
		m %= 60;
	}
	if (h >= 24) {
		h %= 24;
	}
	cout << h << " " << m;
}