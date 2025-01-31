#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0, resultArr[100], a, index;
    for (a = 0; a < array.size(); a++) {
        resultArr[a] = array[a]; //บนป็
    }
    sort(resultArr, resultArr + array.size());
    for (a = 0; a < array.size(); a++) {
        if (height < array[a]) {
            index = a;
            break;
        }
    }
    answer = array.size() - index;
    return answer;
}