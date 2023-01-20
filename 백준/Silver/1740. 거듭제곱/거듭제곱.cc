#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int main() {
	long long N;
	long long result = 0;
	long long add = 1;
	queue<bool> num;
	
	scanf("%lld", &N);
	
	while (N > 0) {
		num.push(N % 2);
		N /= 2;
	}

	while (!num.empty()) {
		result += num.front() * add;
		add *= 3;
		num.pop();
	}
	printf("%lld", result);
}
