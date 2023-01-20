#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char sentence[51];
	int num[25] = { 0, };
	int len = 0, temp = 0, sum = 0;
	int res;
	int j = 0;
	cin >> sentence;
	len = strlen(sentence);

	for (int i = 0; i < len; i++) {
		if (sentence[i] == '+') {
			sum += temp;
			temp = 0;
		}
		else if (sentence[i] == '-') {
			sum += temp;
			num[j] = sum;
			j++;
			sum = 0;
			temp = 0;
		}
		else {
			temp *= 10;
			temp += (sentence[i] - '0');
		}
	}

	sum += temp;
	num[j] = sum;

	res = num[0];

	for (int i = 1; i < 25; i++) {
		res -= num[i];
	}

	cout << res;

	return 0;
}	