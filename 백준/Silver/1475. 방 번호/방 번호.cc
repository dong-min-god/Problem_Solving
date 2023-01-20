#include <stdio.h>

int main()
{
	int N;
	int sum = 0;
	int tmp;
	int count[10] = { 0, };
	int max;
	scanf("%d", &N);
	while (N > 0) {
		tmp = N % 10;
		count[tmp]++;
		N /= 10;
	}

	tmp = ((count[6] + count[9]) + 1) / 2;
	count[6] = tmp;
	count[9] = tmp;
	max = count[0];
	for (int i = 1; i < 10; i++) {
		if (count[i] >= max)
			max = count[i];
		else
			continue;
	}
	printf("%d", max);
}