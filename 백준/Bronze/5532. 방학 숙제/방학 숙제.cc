#include <stdio.h>
#include <math.h>
int main(void)
{
	int a, b, c, d, e;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

	if (b / d >= c / e) {
		if (b%d == 0)
			printf("%d", a - (b / d));
		else
			printf("%d", a - (b / d) - 1);
	}
	else {
		if(c%e==0)
			printf("%d", a - (c / e));
		else
			printf("%d", a - (c / e)-1);
	}
}
