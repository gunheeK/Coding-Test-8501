#include <iostream>

int main() {
	int n;
	std::cin >> n;

	//int year[5] = { 2024, 2025, 2025, 2026, 2026};
	//int month[5] = { 8, 3, 10, 5, 12 };
	// std::cout << year[n - 1] << ' ' << month[n - 1];

	int totalMonths = 8 + (n - 1) * 7;
	int year = 2024 + (totalMonths - 1) / 12;
	int month = totalMonths % 12;
	if (month == 0) month = 12;

	std::cout << year << ' ' << month;

	return 0;
}