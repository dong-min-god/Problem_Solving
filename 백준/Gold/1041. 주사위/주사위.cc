#include <iostream>
#include <algorithm>
using namespace std;

long long N;
long long ans = 0;
int dice[6];
int max_num;

int main()
{
	

	cin >> N;
	for (int i = 0; i < 6;i++)
		cin >> dice[i];
	
	if (N == 1) { // 가장 큰 숫자의 한 면을 제외한 나머지 다섯 면의 합
		for (int i = 0; i < 6; i++) {
			ans += dice[i];
			max_num = max(max_num, dice[i]);
		}
		cout << ans - max_num;
	}
	else {
		dice[0] = min(dice[0], dice[5]);
		dice[1] = min(dice[1], dice[4]);
		dice[2] = min(dice[2], dice[3]);

		sort(dice, dice + 3);
		int dice_1 = dice[0]; // 1면만 보이는 주사위
		int dice_2 = dice[0] + dice[1]; // 2면이 보이는 주사위
		int dice_3 = dice[0] + dice[1] + dice[2]; // 3면이 보이는 주사위

		ans += (dice_3 * 4) + (dice_2 * (4 * (N - 2) + 4 * (N - 1))) + (dice_1 * (4 * (N - 1) * (N - 2) + (N - 2) * (N - 2)));
		cout << ans;
	}
}
