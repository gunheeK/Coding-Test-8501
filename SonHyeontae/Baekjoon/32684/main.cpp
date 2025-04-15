#include <iostream>
#include <string>

int main() {
	double cho = 0, han = 0;
	int c, p, m, s, sa, z;

	std::cin >> c >> p >> m >> s >> sa >> z;
	cho += ((c * 13) + (p * 7) + (m * 5) + (s * 3) + (sa * 3) + (z * 2));
	std::cin >> c >> p >> m >> s >> sa >> z;
	han += ((c * 13) + (p * 7) + (m * 5) + (s * 3) + (sa * 3) + (z * 2) + 1.5);

	std::string str;
	str = (cho < han) ? "ekwoo" : "cocjr0208";

	std::cout << str;

	return 0;
}