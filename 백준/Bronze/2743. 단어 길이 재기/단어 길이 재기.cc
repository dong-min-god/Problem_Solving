#include <stdio.h>

char word[101] = { NULL };

int main()
{
	scanf("%s", word);
	
	int cnt = 0;
	for (int i = 0; word[i] != NULL; i++)
		cnt++;
	printf("%d", cnt);
}