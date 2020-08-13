#include <iostream>
using namespace std;

//sap xep trong mang 1 chieu kiki

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void sap_xep(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
}

int main() {
    int a[10] = {1, 5, 2, 7, 5, 2, 9, 10, 8, 6};
    sap_xep(a, 10);

    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    return 0;
}