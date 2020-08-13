#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i <= 7; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    int *p = a;
    cout << *(p+3);

    return 0;
}