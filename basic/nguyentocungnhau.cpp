#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    if ( a== 0 || b == 0) {
        return a + b;
    }
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        int count = 0;
        for (int i = 1; i <= x; i++) {
            if (gcd(i, x) == 1) {
                count ++;
            }
        }
        if (is_prime(count)) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
    return 0;
}