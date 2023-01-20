#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int N, num, flag = 0;
	int decode[53] = { 0, };
	char ch[100001] = { NULL };

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		decode[num]++;
	}
	scanf(" %[^\n]s", ch);
	for (int i = 0; i < N; i++) {
		if (ch[i] == ' ')
			decode[0]--;
		else if (65 <= ch[i] && ch[i] <= 90)
			decode[ch[i] - 64]--;
		else
			decode[ch[i] - 70]--;
	}
	for (int i = 0; i < 53; i++) {
		if (decode[i] != 0) {
			flag = 1;
			break;
		}
	}
	if (flag)
		printf("n");
	else
		printf("y");
}