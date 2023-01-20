#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char L[11], R[11];
	int count = 0;
	int len;
	cin >> L >> R;

	if (strlen(L) != strlen(R))
		cout << "0";
	else {
		len = strlen(L);
		for (int i = 0; i < len; i++) {
			if (L[i] == R[i])
				count += (L[i] == '8');
			else
				break;
		}
		cout << count;
	}

}