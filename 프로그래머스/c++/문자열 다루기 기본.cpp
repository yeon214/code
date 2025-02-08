#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    int flag = 0, a;
    for (a = 0; a < s.size(); a++) {
        if (s[a] < '0' || s[a]>'9') {
            flag++;
            break;
        }
    }
    if (flag == 0 && (s.length() == 4 || s.length() == 6)) return true;
    return false;
}