#include <iostream>

using namespace std;

int main() {
	int e1 = -1, e2 = -1, e3 = -1;
	
	while (true) {
		cin >> e1 >> e2 >> e3;

		if ((e1 == 0) && (e2 == 0) && (e3 == 0)) break;

		int length = 0;

		if (e1 >= e2) {
			length += e2;
			if (e1 >= e3) {
				length += e3;
				if (length <= e1) {
					cout << "Invalid\n";
					continue;
				}
			}
			else {
				length += e1;
				if (length <= e3) {
					cout << "Invalid\n";
					continue;
				}
			}
		}
		else {
			length += e1;
			if (e2 >= e3) {
				length += e3;
				if (length <= e2) {
					cout << "Invalid\n";
					continue;
				}
			}
			else {
				length += e2;
				if (length <= e3) {
					cout << "Invalid\n";
					continue;
				}
			}
		}

		if ((e1 == e2) && (e2 == e3) && (e3 == e1)) cout << "Equilateral\n";
		else if ((e1 == e2) || (e2 == e3) || (e3 == e1)) cout << "Isosceles\n";
		else cout << "Scalene\n";
	}

	return 0;
}