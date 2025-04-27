#include <iostream>

int main() {
	int info, math, sci, eng;

	std::cin >> info >> math >> sci >> eng;
	int S = (info + math + sci + eng);

	std::cin >> info >> math >> sci >> eng;
	int T = (info + math + sci + eng);

	int result = (S >= T) ? (S) : (T);
	std::cout << result;

	return 0;
}