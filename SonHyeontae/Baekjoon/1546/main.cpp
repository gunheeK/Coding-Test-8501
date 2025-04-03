#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	double* arr = new double[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	double max = *max_element(arr, arr + n);

	double sum = 0;

	for (int i = 0; i < n; i++) {
		arr[i] = arr[i] / max * 100;
		sum += arr[i];
	}

	double avg = sum / n;

	cout << avg;

	return 0;
}