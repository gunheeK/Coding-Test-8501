#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	string str;
	cin >> str;

	stringstream ss(str);
	string token;
	vector<int> kda;

	while (getline(ss, token, '/')) kda.push_back(stoi(token));
	
	if ((kda[0] + kda[2] < kda[1]) || (kda[1] == 0)) cout << "hasu";
	else cout << "gosu";
	
	return 0;
}