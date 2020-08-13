#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int *p;
    p = &n;

    cout << "Dia chi" << p << endl;
    cout << "Gia tri" << *p << endl;

    return 0;    
}