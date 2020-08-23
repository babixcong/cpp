#include <iostream>
using namespace std;

int GCD(int a, int b) {
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

int LCM(int a, int b) {
    return a * b / GCD(a, b);
}

int process(int n) {
    int arr[n];
    for (int i = 1; i <= n; i++) {
        arr[i] = i;
    } 
    int temp = LCM(arr[0], arr[1]);
    cout << temp;
    for (int i = 2; i <= n; i++) {
        temp = LCM(temp, arr[i]);
    }
    return temp;
}

int main() {
    int n;
    cin >> n;
    int  a;
    while (n--) {
        cin >> a;
        int result = process(a);
        cout << result << endl;
    }
    return 0;
}

