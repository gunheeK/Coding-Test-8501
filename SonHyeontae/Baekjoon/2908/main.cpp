#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

//int main() {
//	int a, b;
//	cin >> a >> b;
//
//	string s1, s2, s3, s4;
//	s1 = to_string(a);
//	for (int i = 2; i >= 0; i--) {
//		s2.push_back(s1[i]);
//	}
//	s3 = to_string(b);
//	for (int i = 2; i >= 0; i--) {
//		s4.push_back(s3[i]);
//	}
//
//	if (stoi(s2) > stoi(s4)) {
//		cout << s2;
//	}
//	else {
//		cout << s4;
//	}
//
//	return 0;
//}


int main() {
	std::string s1, s2;

	std::cin >> s1 >> s2;

	std::reverse(s1.begin(), s1.end());
	std::reverse(s2.begin(), s2.end());

	if (stoi(s1) > stoi(s2)) {
		cout << s1;
	}
	else {
		cout << s2;
	}

	return 0;
}
