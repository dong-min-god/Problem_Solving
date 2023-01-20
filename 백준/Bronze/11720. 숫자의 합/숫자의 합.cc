#include <stdio.h>

int main()
{
	char num[100] = { 0, };
	int a, sum = 0;

	scanf("%d", &a);
	scanf("%s", num);

	for (int i = 0; i < a; i++)
		sum += num[i] - '0';

	printf("%d", sum);
}