/**
 * Tinh day so Fibonacci KHONG dung phuong phap de quy
 *  
 * @author viettuts.vn
 */
 
#include <iostream>
  
using namespace std;
 
/**
 * Tinh so Fibonacci thu n
 * 
 * @param n: chi so cua so Fibonacci tinh tu 0 
 *           vd: F0 = 0, F1 = 1, F2 = 1, F3 = 2
 * @return So Fibonacci thu n
 */
long long fibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;
 
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}
 
/**
 * Ham main
 */
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << fibonacci(n) << endl;
    }
}