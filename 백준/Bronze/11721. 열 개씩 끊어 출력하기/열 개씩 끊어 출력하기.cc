#include <stdio.h>

int main()
{
	char word[100] = { 0, };
	scanf("%s", word);

	for (int i = 0; word[i]!=NULL; i++) {
		if ((i+1) % 10 == 0)
			printf("%c\n", word[i]);
		else if (word[i] == NULL)
			break;
		else
			printf("%c", word[i]);
	}
}