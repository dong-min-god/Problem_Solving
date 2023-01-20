#include <stdio.h>

int main()
{
	long long N;
	int three[100] = { NULL };
	int flag = 1;
	int count = 0;
	scanf("%lld", &N);
	if (N == 0)
		flag = 0;
	for (int i = 0; N > 0; i++) {
		three[i] = N % 3;
		N /= 3;
		count++;
	}

	for (int j = 0; j < count; j++) {
		if (three[j] == 0)
			continue;
		else if (three[j] == 1)
			continue;
		else {
			flag = 0;
			break;
		}
	}
	if (flag == 0)
		printf("NO");
	else if (flag == 1)
		printf("YES");
}