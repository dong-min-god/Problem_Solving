#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector <int> height;
vector <int> width;
vector <int> h_length;
vector <int> w_length;

int main()
{
	int w, h;
	int num;
	
	cin >> w >> h;
	cin >> num;

	for (int i = 0; i < num; i++) {
		int a, b;
		cin >> a >> b;
		if (a == 0)
			height.push_back(b);
		else if (a == 1)
			width.push_back(b);
	}
	height.push_back(h);
	width.push_back(w);

	sort(height.begin(), height.end());
	sort(width.begin(), width.end());

	for (int i = 0; i < height.size(); i++) {
		if (i == 0)
			h_length.push_back(height[i]);
		else
			h_length.push_back(height[i] - height[i - 1]);
	}
	
	for (int i = 0; i < width.size(); i++) {
		if (i == 0)
			w_length.push_back(width[i]);
		else
			w_length.push_back(width[i] - width[i - 1]);
	}
	sort(h_length.begin(), h_length.end());
	sort(w_length.begin(), w_length.end());

	cout << (h_length[h_length.size() - 1])*(w_length[w_length.size() - 1]);

}