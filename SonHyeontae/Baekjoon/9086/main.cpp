#include <string>
#include <iostream>

int main() {
	int n;
	std::string s;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> s;
		
		std::cout << s.front() << s.back() << '\n';
	}


	return 0;
}