#include <iostream>
using namespace std;

void swap(long long *pa, long long *pb) {
    long long temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void sort(long long a[], long long n) {
    for (long long i = 0; i < n; i++) {
        for (long long j = i; j < n; j++) {
            if (a[i] > a[j]) {
                swap(&a[i], &a[j]);
            }
        }
    }
}

void process(long long a[], long long n) {
    long long b[n];
    for (int i = 0; i < n; i++) {
        b[i] = a[i];
    }
    sort(a, n);
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (a[i] == i) {
            b[i] = a[i];
        } else {
            b[i] = -1;
        }
    }
    
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i  = 0; i < n; i++) {
            cin >> a[i];
        }
        process(a, n);

    }
    return 0;
}