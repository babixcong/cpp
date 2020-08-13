#include <iostream>
using namespace std;

int binary_search_recursion(int a[], int k, int left, int right) {
    if (left > right) return -1;
    int mid = (left + right) / 2;
    if (a[mid] == k) {
        return mid;
    } else if (a[mid] > k) {
        return binary_search_recursion(a, k, left, mid - 1);
    } 
    return binary_search_recursion(a, k, mid + 1, right);
}

int main () {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 4;
    int result = binary_search_recursion(a, k, 0, 7);
    cout << result <<endl;
    return 0;
}