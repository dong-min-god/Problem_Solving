#include <stdio.h>

int main()
{
	int n = 0, count = 0;
	int a, b, c = 0;

	scanf("%d", &n);
	c = n;

	while (1) {
		a = n / 10;
		b = n % 10;
		
		n = b * 10 + ((a + b) % 10);
		count++;

		if (n == c)
			break;
	}
	printf("%d", count);
}