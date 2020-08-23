#include <iostream>
#include <cmath>
using namespace std;

void process(long n)
{
    int count = 0;
    int max = 0;
    for (long i = 2, r = sqrt(n); i <= r; i++)
        for (; n % i == 0; n /= i) {
            max = i;
        }
    if (n != 1) {
        max = n;
    }
    cout << max << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        process(n);
    }

    return 0;
}