#include <iostream>
#include <cmath>
using namespace std;

void process(long n)
{
    int count = 0;
    int max = 0;
    for (long i = 2, r = sqrt(n); i <= r; i++)
        for (; n % i == 0; n /= i) {
            cout << i << " ";
        }
    if (n != 1)
        cout << n;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        process(n);
        cout << endl;
    }

    return 0;
}