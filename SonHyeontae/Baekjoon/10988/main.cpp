#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;

	bool flag = 1;

	for (int i = 0; i < s.length() / 2; i++) {
		if (s[i] != s[s.length() - i - 1]) flag = 0;
	}

	cout << flag;

	return 0;
}