#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<pair<int, int>> graph[801];
int dist[801];
int INF = 1e9;

struct Node
{
	int cost, u;

	bool operator>(const Node& other) const {
		return cost > other.cost;
	}
};

void dijkstra(int start, int N) {
	priority_queue<Node, vector<Node>, greater<Node>> pq;
	fill(dist, dist + 801, INF);
	dist[start] = 0;
	pq.push({ 0, start });

	while (!pq.empty()) {
		auto cur = pq.top();
		pq.pop();

		int d = cur.cost;
		int u = cur.u;

		if (d > dist[u]) continue;

		for (auto next : graph[u]) {
			int v = next.first;
			int w = next.second;
			if (dist[v] > dist[u] + w) {
				dist[v] = dist[u] + w;
				pq.push({ dist[v], v });
			}
		}

	}
}


int main() {
	int N, E;
	cin >> N >> E;
	for (int i = 0; i < E; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].push_back({ b, c });
		graph[b].push_back({ a, c });
	}

	int v1, v2;
	cin >> v1 >> v2;

	dijkstra(1, N);
	long long sum1 = dist[v1];
	long long sum2 = dist[v2];

	dijkstra(v1, N);
	sum1 += dist[v2];
	sum2 += dist[v2] + dist[N];

	dijkstra(v2, N);
	sum1 += dist[N];

	if (sum1 >= INF && sum2 >= INF) cout << -1;
	else {
		int ans = min(sum1, sum2);
		cout << ans;
	}


}