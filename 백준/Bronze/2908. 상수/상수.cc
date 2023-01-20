#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() 
{
	char num1[3] = { 0, }, num2[3] = { 0, };
	char temp = 0;
	int sum1 = 0, sum2 = 0;

	scanf("%s", &num1);
	scanf("%s", &num2);
	
	temp = num1[0];
	num1[0] = num1[2];
	num1[2] = temp;

	temp = num2[0];
	num2[0] = num2[2];
	num2[2] = temp;

	for (int i = 2; i >= 0; i--) {
		sum1 += (num1[2-i] - '0') * pow(10, i);
		sum2 += (num2[2-i] - '0') * pow(10, i);
	}

	cout << (sum1 >= sum2 ? sum1 : sum2);
}