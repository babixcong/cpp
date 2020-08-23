#include <iostream>
using namespace std;

int binary_search(int a[], int n, int k) {
    int left = 0; // left = 0
    int right = n - 1; // right = 7 - 1 = 6
    int mid;
    do {
        mid = (left + right) / 2; // mid = 3 -> a[mid] = 100
        if (a[mid] == k) { // a[]
            return mid;
        } else if(a[mid] > k) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    } while(left <= right);
    return -1;
}


int main() {
    int array[] = {4, 6, 9, 100, 200, 400, 999};
    int k = 6;
    int result = binary_search(array, 7, k);
    cout << result << endl;
    return 0;
}