#include <string>
#include <vector>
#include <queue>
#include <sstream>
#include <iomanip>

using namespace std;

bool canChange(const string& a, const string& b) {
    int diff = 0;
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            diff++;
        
            if(diff > 1) {
                return false;
            }
        }
    }
    return diff == 1;
}

int solution(string begin, string target, vector<string> words) {
    int n = words.size();
    vector<bool> visited(n, false);
    
    queue<pair<string, int>> q;
    q.push({begin, 0});
    
    while(!q.empty()) {
        auto [cur, cnt] = q.front();
        q.pop();
        
        if(cur == target) return cnt;
        
        for(int i = 0; i < n; i++) {
            if(visited[i]) continue;
            
            if(canChange(cur, words[i])) {
                visited[i] = true;
                q.push({words[i], cnt + 1});
            }
        }
    }
    return 0;
}