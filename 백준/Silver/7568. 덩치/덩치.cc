#include <stdio.h>

int main() {

	int N;
	int num[51][3] = { 0, };
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf(" %d%d", &num[i][0], &num[i][1]);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j)
				continue;
			if (num[i][0] < num[j][0] && num[i][1] < num[j][1])
				num[i][2]++;
		}
	}
	for (int i = 0; i < N; i++)
		printf("%d ", num[i][2]+1);
}