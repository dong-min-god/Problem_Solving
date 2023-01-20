#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int start_h, start_m, start_s;
	int end_h, end_m, end_s;
	int res_h, res_m, res_s;
	for (int i = 0; i < 3; i++) {
		scanf("%d%d%d%d%d%d", &start_h, &start_m, &start_s, &end_h, &end_m, &end_s);
		res_h = ((end_h * 3600 + end_m * 60 + end_s) - (start_h * 3600 + start_m * 60 + start_s)) / 3600;
		res_m = ((end_h * 3600 + end_m * 60 + end_s) - (start_h * 3600 + start_m * 60 + start_s) - res_h*3600) / 60;
		res_s = (end_h * 3600 + end_m * 60 + end_s) - (start_h * 3600 + start_m * 60 + start_s) - res_h * 3600 - res_m * 60;
		printf("%d %d %d\n", res_h, res_m, res_s);
	}


}