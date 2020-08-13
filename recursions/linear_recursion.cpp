#include <iostream>
using namespace std;

// tinh giai thua

int giai_thua(int n) {
    if (n == 0) return 1; // neu n == 0 thi return 1 luon ko noi nhieu :D
    return n * giai_thua(n-1); // tra ve gia tri n * n!
}

int main() {
    int result = giai_thua(5);
    cout << result; // 120
    return 0;
}