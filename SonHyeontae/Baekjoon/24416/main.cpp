#include <iostream>

int counter1 = 0, counter2 = 0;

int fib(int n) {
	if ((n == 1) || (n == 2)) {
		counter1++;
		return 1;
	}
	else return (fib(n - 1) + fib(n - 2));
}

int arr[41] = { 0 };

int fibonacci(int n) {
	arr[1] = arr[2] = 1;

	for (int i = 3; i <= n; i++) {
		counter2++;
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	return arr[n];
}

int main() {
	int n;
	std::cin >> n;

	fib(n);	fibonacci(n);

	std::cout << counter1 << ' ' << counter2;
}