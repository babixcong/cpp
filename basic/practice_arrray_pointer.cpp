#include <iostream>
using namespace std;

void sort(int *&a, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(a + i) < *(a + j)) {
                int temp = *(a + 1);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
}

void nhap_mang(int *&a, int n) {
    a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> *(a + i);
    }
}

void xuat_mang(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(a + i) << " ";
    } 
}

int main() {
    int *a;
    int n;
    cin >> n;
    nhap_mang(a, n);
    sort(a, n);
    xuat_mang(a, n);
    return 0;
}