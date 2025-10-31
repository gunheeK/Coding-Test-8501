#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    int i = myString.rfind(pat);
    return myString.substr(0, i + pat.size());
}