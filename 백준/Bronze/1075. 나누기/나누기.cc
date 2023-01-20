#include <stdio.h>

int main()
{
	int N, F;
	scanf(" %d%d", &N, &F);
	N = (N / 100) * 100;

	while (1) {
		if (N % F == 0)
			break;
		else
			N++;
	}
	int num = N % 100;
	
	if (num < 10)
		printf("0%d", num);
	else
		printf("%d", num);
}