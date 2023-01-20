#include <stdio.h>

int main() 
{
	int num[4];
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &num[j]);
			sum += num[j];
		}
		switch (sum) {
			case 0: printf("D\n");
				break;
			case 1: printf("C\n"); 
				break;
			case 2: printf("B\n"); 
				break;
			case 3: printf("A\n"); 
				break;
			case 4: printf("E\n"); 
				break;
		}
		sum = 0;
	}
}