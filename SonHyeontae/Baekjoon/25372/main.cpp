#include <iostream>
#include <string>

int main() {
	int n;
	std::cin >> n;

	std::string str;
	for (int i = 0; i < n; i++) {
		std::cin >> str;
		if ((6 <= str.size()) && (str.size() <= 9)) std::cout << "yes\n";
		else std::cout << "no\n";
	}
	
	return 0;
}