#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	int N, K;
	cin >> N >> K;
	vector<vector<int>> people(N, vector<int>(2, 0));
	vector<vector<int>> cnt(7, vector<int>(2, 0));

	for (int i = 0; i < N; i++) {
		int s, y;
		cin >> s >> y;
		people[i][0] = s;
		people[i][1] = y;
		cnt[y][s] += 1;
	}

	int need = 0;

	for (int i = 0; i < 7; i++) {
		for (int s = 0; s < 2; s++) {
			need += cnt[i][s] / K;
			if (cnt[i][s] % K > 0) {
				need += 1;
			}
		}
	}

	cout << need;
}