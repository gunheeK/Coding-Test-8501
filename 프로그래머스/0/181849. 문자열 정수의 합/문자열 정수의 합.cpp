#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int answer = 0;
    for(char t : num_str) {
        answer += (t - '0');
    }
    return answer;
}