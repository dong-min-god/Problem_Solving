#include <iostream>

using namespace std;

int main()
{
	while (1) {
		int num[6] = { NULL };
		int number;
		int count = 0;
		int flag = 1;
		cin >> number;
		if (number == 0)
			return 0;
		else {
			int i = 0;
			while (number > 0) {
				num[i] = number % 10;
				number /= 10;
				i++;
				count++;
			}
			int real_count = count / 2;

			for (int j = 0; j < real_count; j++) {
				if (num[j] == num[count - j - 1])
					continue;
				else {
					flag = 0;
					break;
				}
			}
		}
		if (flag == 0)
			cout << "no" << endl;
		else
			cout << "yes" << endl;
	}
}