#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a;
        cin >> a;
        if (a % 100 == 86) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
    return 0;
}