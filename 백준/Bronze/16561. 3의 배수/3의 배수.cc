#include <stdio.h>

int main()
{
	int n;
	int count = 1;
	int res = 0;
	scanf("%d", &n);

	for (int i = 9; i <= n; i += 3) {
		res += count;
		count++;
	}
	printf("%d", res);
}