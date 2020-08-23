#include <iostream>
using namespace std;

long long GCD(long long a, long long b) {
    if ( a== 0 || b == 0) {
        return a + b;
    }
    while (a!=b) {
        if (a > b) {
            a = a- b;
        } else {
            b = b -a;
        }
    }
    return a;
}

long long LCM(long long a, long long b) {
    return a * b / GCD(a, b);
}


int main() {
    int n;
    cin >> n;
    long long a, b;
    while (n--) {
        cin >> a >> b;
        long long lcd = LCM(a, b);
        long long gcd = GCD(a, b);
        cout << lcd << " " << gcd << endl;
    }
    return 0;
}

