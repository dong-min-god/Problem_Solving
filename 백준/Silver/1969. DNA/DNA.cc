#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

char dna[1001][51];

int main()
{
	int N, M;
	int max_dna;
	int res = 0;
	cin >> N >> M;

	int count[50][4];

	for (int i = 0; i < N; i++) {
		cin >> dna[i];
	}

	for (int i = 0; i < M; i++) {
		int a = 0, c = 0, g = 0, t = 0;
		
		for (int j = 0; j < N; j++) {
			switch (dna[j][i]) {
			case 'A' :
				a++;
				break;
			case 'C' :
				c++;
				break;
			case 'G':
				g++;
				break;
			case 'T':
				t++;
				break;
			}
		}
		max_dna = max(a, max(c, (max(t, g))));
		res += (N - max_dna);
		if (max_dna == a)
			cout << 'A';
		else if (max_dna == c)
			cout << 'C';
		else if (max_dna == g)
			cout << 'G';
		else if (max_dna == t)
			cout << 'T';
	}
	cout << '\n' << res;
}

