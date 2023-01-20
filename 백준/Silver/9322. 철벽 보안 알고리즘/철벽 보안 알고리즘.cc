#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int main() {
	int T,n;
	int index[1001];
	string word[3][1001];
	
	scanf("%d",&T);

	while (T--) {
		scanf("%d", &n);
		for (int j = 0; j < 3; j++) {
			for (int i = 0; i < n; i++) 
				cin >> word[j][i];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (word[0][i] == word[1][j])
					index[j] = i;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (index[j] == i) 
					cout << word[2][j] << " ";
			}
		}
		printf("\n");
	}
}
