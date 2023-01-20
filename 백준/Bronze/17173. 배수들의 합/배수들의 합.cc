#include <stdio.h>

int main()
{
	int N = 0, M = 0;
	int num[1000] = { 0, };
	int sum = 0;
	int count = 0;

	scanf("%d%d", &N, &M);

	for (int i = 0; i < M; i++) {
		scanf("%d", &num[i]);
	}

	while (N > 1) {
		for (int i = 0; num[i] != 0; i++) {
			if (N%num[i] == 0) {
				sum += N;
				count++;
			}
		}
		if (count != 0 || count != 1) {
			for (int i = count; i > 1; i--) {
				sum -= N;
			}
		}
		count = 0;
		N--;
	}
	printf("%d", sum);

}