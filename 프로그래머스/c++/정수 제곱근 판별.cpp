#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    double root = sqrt(n);
    if (floor(root) == root) {
        return (long long)(root + 1) * (long long)(root + 1);
    }
    return -1;
}