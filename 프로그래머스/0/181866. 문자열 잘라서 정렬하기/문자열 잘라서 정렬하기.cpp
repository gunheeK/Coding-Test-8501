#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string tmp = "";
    for(char t : myString) {
        if(t == 'x') {
            if(tmp != "") {
                answer.push_back(tmp);
                tmp = "";
            }
            continue;
        }
        tmp += t;
    }
    if(tmp != "") {
        answer.push_back(tmp);
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}