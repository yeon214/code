#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    if (s.length() % 2 == 1) return { s[s.length() / 2] };
    else return { s[s.length() / 2 - 1],s[s.length() / 2] };
}