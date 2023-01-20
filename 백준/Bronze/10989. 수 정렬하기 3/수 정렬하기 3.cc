#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int num[10001];

int main()
{
	int N;
	scanf(" %d", &N);
	for (int i = 0; i < N; i++) {
		int number = 0;
		scanf(" %d", &number);
		num[number - 1]++;
	}

	for (int i = 0; i < 10000; i++) {
		if (num[i] != 0) {
			for (int j = 0; j < num[i]; j++) {
				printf("%d\n", i + 1);
			}
		}
	}
}