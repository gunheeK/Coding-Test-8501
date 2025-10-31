#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    string tmp = "";
    for(char t : myString) {
        if(t == 'A') {
            tmp += 'B';
        }
        else {
            tmp += 'A';
        }
    }
    
    if(tmp.find(pat) != string::npos)
        return 1;
    return 0;
}