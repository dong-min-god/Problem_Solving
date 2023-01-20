#include <stdio.h>
#include <algorithm>

using namespace std;
long long location[200000];

int main()
{
	long long n, c;
	long long result = 0;

	scanf("%lld%lld", &n, &c);
	
	for (int i = 0; i < n; i++)
		scanf("%lld", &location[i]);
	
	sort(location, location + n);

	long long left = 0;
	long long right = location[n-1] - location[0];

	while (left <= right) {
		long long mid = (left + right) / 2;
		long long start = location[0];
		long long count = 1;

		for (int i = 1; i < n; i++) {
			if (location[i] - start >= mid) {
				count++;
				start = location[i];
			}
		}

		if (count < c) 
			right = mid - 1;
		else {
			if (mid > result)
				result = mid;
			left = mid + 1;
		}
	}
	printf("%lld", result);
}