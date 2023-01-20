#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int button;
	int butt[101];
	
	cin >> button;

	for (int i = 1; i <= button; i++) {
		scanf(" %d", &butt[i]);
	}

	int T;
	int i;
	cin >> T;

	for (i = 1; i <= T; i++) {
		int gender;
		int index;
		cin >> gender;
		cin >> index;

		if (gender == 1) {
			for (int i = index; i <= button; i += index)
				butt[i] = butt[i] == 0 ? 1 : 0;
		}
		else {
			butt[index] = butt[index] == 0 ? 1 : 0;
			int k = 1;
			while (index - k > 0 && index + k <= button) {
				if (butt[index - k] == butt[index + k]) {
					butt[index-k] = butt[index-k] == 0 ? 1 : 0;
					butt[index+k] = butt[index+k] == 0 ? 1 : 0;
					k++;
				}
				else
					break;
			}
		}	
	}
	for (int k = 1; k <= button; k++) {
		if (k % 20 == 0)
			cout << butt[k] << '\n';
		else
			cout << butt[k] << ' ';
	}
}