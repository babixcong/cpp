#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 2) return 1; // goi 2 lan den chinh no thi la de quy nhi phan
    return fibonacci(n - 1) + fibonacci(n - 2); // chay cham vl, chuyen sang qhd de
}

int main() {
    int result = fibonacci(5);
    cout << result;

    return 0;
}