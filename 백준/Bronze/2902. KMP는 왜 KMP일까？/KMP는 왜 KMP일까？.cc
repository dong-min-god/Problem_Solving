#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
using namespace std;


int main()
{
	char name[101] = { 0, };

	scanf("%s", name);

	for (int i = 0; name[i] != NULL; i++) {
		if (name[i] >= 65 && name[i] <= 90) {
			printf("%c", name[i]);
		}
		else
			continue;
	}
	
}
