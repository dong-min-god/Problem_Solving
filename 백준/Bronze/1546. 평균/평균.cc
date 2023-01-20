#include <stdio.h>

int main()
{
	int num, max = 0;
	int grade[1000] = { 0, };
	double sum = 0;

	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		scanf("%d", &grade[i]);
		max < grade[i] ? (max = grade[i]) : max;
	}

	for (int i = 0; i < num; i++) {
		sum += (double)grade[i] / (double)max*100.0;
	}

	printf("%.2f", sum/(double)num);
}