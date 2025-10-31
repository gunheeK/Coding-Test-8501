#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int i;

bool cmp(int a, int b) {
    int v1 = abs(i - a);
    int v2 = abs(i - b);
    
    if(v1 != v2) {
        return v1 < v2;
    }
    return a > b;
}

vector<int> solution(vector<int> numlist, int n) {
    i = n;
    vector<int> answer;
    sort(numlist.begin(), numlist.end(), cmp);
    answer = numlist;
    return answer;
}