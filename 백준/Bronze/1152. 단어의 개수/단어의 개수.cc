#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

using namespace std;

void count()
{
	char str[1000001];
	fgets(str, 1000001, stdin);
	
	int cnt = 0;
	for (int i=0; str[i]; i++)
	{
		if (str[i] == ' '&&str[i + 1] != '\n')
			cnt++;
	}
	if (str[0] == '\n' || str[0] == ' ')
		cnt--;
	
	if (str[strlen(str) - 1] == ' ')
		cnt--;
	
	cout << cnt + 1;
}
int main()
{
	count();
}
