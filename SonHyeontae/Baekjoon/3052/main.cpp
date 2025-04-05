#include <iostream>

using namespace std;

int main() {
	int arr[42] = { 0 };

	int tmp;

	for (int i = 0; i < 10; i++) {
		cin >> tmp;
		arr[tmp % 42]++;
	}

	int count = 0;

	for (int i = 0; i < 42; i++) {
		if (arr[i]) count++;
	}

	cout << count << endl;

	return 0;
}
