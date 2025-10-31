#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(char t : my_string) {
        answer += tolower(t);
    }
    sort(answer.begin(), answer.end());
    return answer;
}