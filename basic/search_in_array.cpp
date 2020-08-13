#include <iostream>
using namespace std;

// tim kiem trong mang1 chieu day nha
int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // so luong phan tu
    int k = 6;
    for (int i = 0; i < 10; i++) {
        if (a[i] == k) {
            cout << "Tai a[" << i << "]";
            break; // tim thay roi thi ko can chay nua nha'
        }
    }


    return 0;
}