#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <string>

using namespace std;

int N, score, P;
int score_rank = 1, score_p = 1;
int num[50];
int main()
{
	cin >> N >> score >> P;
	
	for (int i = 0; i < N; i++) {
		cin >> num[i];
		if (num[i] > score)
			score_rank++;
		if (num[i] >= score)
			score_p++;
	}

	if (score_rank > P)
		cout << -1;
	else if (score_p > P)
		cout << -1;
	else
		cout << score_rank;
	return 0;
}