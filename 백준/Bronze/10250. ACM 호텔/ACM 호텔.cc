#include <iostream>

using namespace std;

int main()
{
	int T, H, W, N;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		int temp_H, temp_W;
		temp_H = N % H;
		temp_W = N / H;

		if (temp_H > 0)
			temp_W++;
		else
			temp_H = H;

		cout << temp_H * 100 + temp_W << endl;
	}
}