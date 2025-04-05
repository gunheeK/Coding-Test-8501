#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string s;
	int n;

	cin >> s >> n;

	int dec = 0;

	for (int i = 0; i < s.length(); i++) {
		int j = (s[i] - 0 > 64 ? s[i] - 55 : s[i] - 48);
		dec += j * pow(n, s.length() - i - 1);
	}

	cout << dec;

	return 0;
}