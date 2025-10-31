#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    vector<int> arr(100, 0);
    int answer = 0;
    for(string s : strArr) {
        arr[s.size()] += 1;
    }
    answer = *max_element(arr.begin(), arr.end());
    return answer;
}