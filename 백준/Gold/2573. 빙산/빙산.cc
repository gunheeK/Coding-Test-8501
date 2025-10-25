#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct pos {
	int y, x;
};

int dy[] = { 1, -1, 0, 0 };
int dx[] = { 0, 0, 1, -1 };

int main() {
	int n, m;
	cin >> n >> m;

	vector<vector<int>> ice(n);
	int mtime = 0;

	for (int i = 0; i < n; i++) {
		for(int k = 0; k < m; k++) {
			int v;
			cin >> v;
			ice[i].push_back(v);

			if (v > mtime) {
				mtime = v;
			}
		}
	}

	int time = 0;
	while (true) {
		vector<vector<bool>> visited(n, vector<bool>(m, false));
		vector<vector<int>> melt(n, vector<int>(m, 0));
		int tc = 0;
		for (int k = 0; k < n; k++) {
			for (int g = 0; g < m; g++) {
				if (ice[k][g] <= 0) continue;
				if (visited[k][g]) continue;
				tc++;
				if (tc == 2) {
					cout << time;
					return 0;
				}
				queue<pos> q;
				visited[k][g] = true;
				q.push({ k, g });
				while (!q.empty()) {
					pos cur = q.front();
					q.pop();

					for (int h = 0; h < 4; h++) {
						int ny = cur.y + dy[h];
						int nx = cur.x + dx[h];
						if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
						if (ice[ny][nx] <= 0) continue;
						if (visited[ny][nx]) continue;
						visited[ny][nx] = true;
						q.push({ ny, nx });
					}
				}
			}
		}

		if (tc == 0) {
			cout << 0;
			return 0;
		}

		for (int k = 0; k < n; k++) {
			for (int g = 0; g < m; g++) {
				if (ice[k][g] <= 0) continue;
				int water = 0;
				for (int h = 0; h < 4; h++) {
					int ny = k + dy[h];
					int nx = g + dx[h];
					if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
					if (ice[ny][nx] == 0) water++;
				}
				melt[k][g] = water;
			}
		}

		for (int k = 0; k < n; k++) {
			for (int g = 0; g < m; g++) {
				if (ice[k][g] > 0) {
					ice[k][g] = max(0, ice[k][g] - melt[k][g]);
				}
			}
		}
		time++;
	}

	cout << time;


}