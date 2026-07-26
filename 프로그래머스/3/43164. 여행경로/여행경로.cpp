#include <string>
#include <vector>
#include <unordered_map>
#include <queue>
#include <algorithm>

using namespace std;

unordered_map<string, priority_queue<string, vector<string>, greater<string>>> graph;

vector<string> route;

void dfs(const string& airport) {
    while(!graph[airport].empty()) {
        string next = graph[airport].top();
        graph[airport].pop();
        
        dfs(next);
    }
    
    route.push_back(airport);
}

vector<string> solution(vector<vector<string>> tickets) {
    graph.clear();
    route.clear();
    
    for(const auto& ticket : tickets) {
        string from = ticket[0];
        string to = ticket[1];
        
        graph[from].push(to);
    }
    
    dfs("ICN");
    
    reverse(route.begin(), route.end());
    
    return route;
}