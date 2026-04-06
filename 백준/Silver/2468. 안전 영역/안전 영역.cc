#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	int N;
	cin >> N;
	vector<vector<int>> area(N);
	int m = 0, cnt = 0;

	for (int i = 0; i < N; i++) {
		for (int s = 0; s < N; s++) {
			int k;
			cin >> k;
			area[i].push_back(k);
			if (k > m) {
				m = k;
			}
		}
	}

	for (int i = 0; i <= m; i++) {
		vector<vector<bool>> visited(N, vector<bool>(N, false));
		for (int s = 0; s < N; s++) {
			for (int k = 0; k < N; k++) {
				if (area[s][k] <= i) visited[s][k] = true;
			}
		}
		
		int c = 0;
		
		for (int s = 0; s < N; s++) {
			for (int k = 0; k < N; k++) {
				if (visited[s][k]) continue;
				c++;
				queue<pair<int, int>> q;
				q.push({ s, k });
				visited[s][k] = true;

				while (!q.empty()) {
					auto cur = q.front();
					q.pop();

					for (int d = 0; d < 4; d++) {
						int nx = cur.first + dx[d];
						int ny = cur.second + dy[d];

						if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
						if (visited[nx][ny]) continue;
						q.push({ nx, ny });
						visited[nx][ny] = true;
					}
				}
			}
			
		}
		if (c > cnt) {
				cnt = c;
		}

	}
	cout << cnt;

}