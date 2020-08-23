#include <iostream>
#include <cstring>
using namespace std;

long long sum(long long n) {
    long long tong = 0;
    while (n!= 0) {
        long long temp = n%10;
        tong += temp;
        n /=10;

    }  
    return tong;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a;
        cin >> a;
        if (a == 0) {
            cout << "0" << endl;
            return 0;
        }
        long long tong = sum(a);
        if (tong == 9 || (tong % 9 == 0)) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
    return 0;
}