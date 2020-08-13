#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a < b) return gcd(b, a);
    int c = a % b; // con sau return nen dc goi la de quy duoi ke ke
    if (c == 0) return b;
    else return gcd(b, c);
}

int main() {
    // a > b
    int result = gcd(10, 5);
    cout << result; // 5

    // a < b
    int result = gcd(5, 20);
    cout << result; // 5
    return 0;
}