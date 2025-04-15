#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	if (str[0] == 'S') cout << "HIGHSCHOOL";
	else if (str[0] == 'C') cout << "MASTER";
	else if (str[0] == '2') cout << "0611";
	else if (str[0] == 'A') cout << "CONTEST";

	return 0;
}