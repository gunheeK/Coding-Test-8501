#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;

	if (str[0] == 'N') cout << "North London Collegiate School";
	if (str[0] == 'B') cout << "Branksome Hall Asia";
	if (str[0] == 'K') cout << "Korea International School";
	if (str[0] == 'S') cout << "St. Johnsbury Academy";

	return 0;
}