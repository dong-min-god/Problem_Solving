#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	int arr1[50], arr2[50];
	int S = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr1[i];
	sort(arr1, arr1 + N, greater<int>());
	for (int i = 0; i < N; i++)
		cin >> arr2[i];
	sort(arr2, arr2 + N, less<int>());
	for (int i = 0; i < N; i++)
		S += arr1[i] * arr2[i];

	cout << S << endl;
}