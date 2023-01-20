#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	char input[1000000];
	int alphabet[26] = { 0, };
	int max = 0, top = 0;
	int a = 0;
	
	scanf("%s", &input);

	for (int i = 0; input[i] != NULL; i++) {
		if(input[i]<91)
			alphabet[input[i] - 65]++;
		else
			alphabet[input[i] - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] > max) {
			max = alphabet[i];
			top = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (max == alphabet[i]) a++;
	}

	if (a >= 2)
		printf("?");
	else
		printf("%c", top + 65);
}