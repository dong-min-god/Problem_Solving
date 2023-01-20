#include<iostream>
#include<string>
#include<vector>

using namespace std;

string input, bomb;
vector<char> v;

int main() 
{
	cin >> input >> bomb;
	int input_size = input.size();
	int bomb_size = bomb.size();

	for (int i = 0; i < input_size; i++) {
		v.push_back(input[i]);
		if (v.back() == bomb.back()) {
			bool check = true;
			for (int j = 1; j <= bomb_size; j++) {
				if (v[v.size() - j] != bomb[bomb_size - j])
					check = false;
			}
			if (check) {
				for (int j = 0; j < bomb_size; j++)
					v.pop_back();
			}
		}
	}
	if (v.empty())
		cout << "FRULA";
	else{
		for (int i = 0; i < v.size(); i++)
			cout << v[i];
	}
}