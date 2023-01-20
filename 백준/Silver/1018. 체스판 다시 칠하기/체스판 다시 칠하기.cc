#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	char chess[51][51];
	int chess_count[51][51] = { 0, };

	int count = 0;
	int min = 0;
	int garo, saero;

	scanf(" %d%d", &saero, &garo);
	for (int i = 0; i < saero; i++) {
		scanf(" %s", chess[i]);
	}
	if (chess[0][0] == 'W') {
		for (int i = 0; i < saero; i++) {
			for (int j = 0; j < garo; j++) {
				if ((i + j) % 2 == 0) {
					if (chess[i][j] == 'W')
						continue;
					else if (chess[i][j] == 'B') {
						count++;
						chess_count[i][j] = 1;
					}

				}
				else {
					if (chess[i][j] == 'B')
						continue;
					else if (chess[i][j] == 'W') {
						count++;
						chess_count[i][j] = 1;
					}
				}
			}
		}
	}
	else if (chess[0][0] == 'B') {
		for (int i = 0; i < saero; i++) {
			for (int j = 0; j < garo; j++) {
				if ((i + j) % 2 == 0) {
					if (chess[i][j] == 'B')
						continue;
					else if (chess[i][j] == 'W') {
						count++;
						chess_count[i][j] = 1;
					}
				}
				else {
					if (chess[i][j] == 'W')
						continue;
					else if (chess[i][j] == 'B') {
						count++;
						chess_count[i][j] = 1;
					}
				}
			}
		}
	} // 마킹 끝
	
	int res = garo * saero;
	for (int i = 0; i + 7<saero; i++) {
		for (int j = 0; j + 7<garo; j++) {
			int cnt = 0;
			for (int y = 0; y<8; y++) {
				for (int x = 0; x<8; x++) {
					cnt += chess_count[i + y][j + x];
				}
			}
			cnt = cnt > 64 - cnt ? 64 - cnt : cnt;
			res = res > cnt ? cnt : res;
		}
	}
	printf("%d", res);
}