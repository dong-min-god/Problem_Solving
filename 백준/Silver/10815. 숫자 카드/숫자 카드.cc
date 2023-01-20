#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> num;

int search(int low, int high, int point)
{
	if (low > high)
		return 0;
	else {
		int mid = (low + high) / 2;
		if (num[mid] == point)
			return 1;
		else if (num[mid] > point)
			return search(low, mid - 1, point);
		else
			return search(mid + 1, high, point);
	}
}

int main()
{
	int N;
	scanf(" %d", &N);

	for (int i = 0; i < N; i++) {
		int Num;
		scanf(" %d", &Num);
		num.push_back(Num);
	}
	sort(num.begin(), num.end());

	int M;
	scanf(" %d", &M);
	for (int i = 0; i < M; i++) {
		int Num;
		scanf(" %d", &Num);
		printf("%d ", search(0, N - 1, Num));
	}

}