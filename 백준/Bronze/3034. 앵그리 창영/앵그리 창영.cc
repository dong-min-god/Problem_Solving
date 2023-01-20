#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <queue>
#include <stdlib.h>

using namespace std;

int main() 
{
	int N, W, H, len;

	scanf("%d%d%d", &N, &W, &H);

	for (int i = 0; i < N; i++) {
		scanf("%d", &len);
		if (len*len <= W * W + H * H)
			printf("DA\n");
		else
			printf("NE\n");
	}
}