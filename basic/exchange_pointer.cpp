#include <iostream>
using namespace std;

// doi so 2 so thuc su dung con tro

void exchange(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    double a = 5.5;
    double b = 10;
    // cin >> a >> b;
    exchange(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}