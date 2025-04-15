#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;

	if (str.size() >= 4) cout << 20;
	else if (str.size() >= 3) {
		if (str[1] == '0') cout << 10 + (str[2] - '0');
		else if (str[2] == '0') cout << 10 + (str[0] - '0');
	}
	else cout << (str[0] - '0') + (str[1] - '0');

	return 0;
}