#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <string>
#include <vector>
#include <queue>
#include <stdlib.h>

using namespace std;


int main()
{
	string code;

	while (1) {
		getline(cin, code);

		if (code == "END")
			break;
		else
			for (int i = code.size()-1; i >= 0; i--) {
				printf("%c", code[i]);
			}
		printf("\n");
	}
}