#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int N, M;
int input[15001];

int main()
{
	int count = 0;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> input[i];
	}
	sort(input, input + N);
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N;j++) {
			if (input[i] + input[j] == M) {
				count++;
				break;
			}
			else
				continue;
		}
	}
	cout << count;
}