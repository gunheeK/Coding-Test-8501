#include <iostream>

int main() {
	int man_age = 0, count_age = 1, year_age = 0;
	
	int birth_year, birth_month, birth_day;
	int today_year, today_month, today_day;

	std::cin >> birth_year >> birth_month >> birth_day;
	std::cin >> today_year >> today_month >> today_day;

	year_age = today_year - birth_year;

	man_age = year_age;
	if (man_age >= 1) {
		if (today_month < birth_month) man_age--;
		else if (today_month == birth_month) {
			if (today_day < birth_day) man_age--;
		}
	}

	count_age += year_age;

	std::cout << man_age << '\n' << count_age << '\n' << year_age;

	return 0;
}