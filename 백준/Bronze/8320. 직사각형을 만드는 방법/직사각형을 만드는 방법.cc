#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

vector<int> ack;

void cal(int num) {
	int root = sqrt(num);

	for (int i = 1; i <= root; i++) {
		if (num%i == 0) {
			ack.push_back(i);
		}
	}

	int _size = ack.size();
	/*if (root*root == num) {
		_size--;
	}*/

	for (int i = _size - 1; i > -1; i--) {
		ack.push_back(num / ack[i]);
	}
}
int main()
{
	int num;
	int arr[10001] = { 0, };
	cin >> num;

	arr[1] = 1;
	for (int i = 2; i <=num; i++) {
		cal(i);
		arr[i] = arr[i - 1] + (ack.size() / 2);
		ack.clear();
	}
	cout<<arr[num];
}
