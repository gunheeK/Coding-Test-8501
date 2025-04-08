#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int>& vec, int a, int b) {
	int tmp = vec[a];
	vec[a] = vec[b];
	vec[b] = tmp;
}

int partition(vector<int>& vec, int left, int right) {
	int pivot = vec[left];
	int low = left + 1;
	int high = right;

	while (low <= high) {
		while (low <= right && vec[low] <= pivot) {
			low++;
		}
		while (high >= left && vec[high] > pivot) {
			high--;
		}
		if (low < high) {
			swap(vec, low, high);
		}
	}

	swap(vec, left, high);
	return high;
}

void quick_sort(vector<int>& vec, int left, int right) {
	if (left < right) {
		int q = partition(vec, left, right);
		quick_sort(vec, left, q - 1);
		quick_sort(vec, q + 1, right);
	}
}

int main() {
	int n;
	cin >> n;

	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}

	quick_sort(vec, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << vec[i] << '\n';
	}

	return 0;
}