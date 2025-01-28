#include <iostream>
#include <string>
#include <vector>
using namespace std;
double solution(vector<int> numbers) {
    double answer = 0, result = 0.0;
    int a;
    for (a = 0; a < numbers.size(); a++) {
        result += numbers[a];
    }
    answer = result / numbers.size();
    return answer;
}