#include <iostream>
using namespace std;

int main() {
    //khai bao con tro
    int *p;

    //cap phat
    p = new int;

    // gan gia tri = 100 cho bien con tro *p

    *p = 100;

    cout << "Dia chi " << p;
    cout << "Gia tri " << *p << endl; 
    //huy bo nho
    // delete p;
    //dung xong thi nho delete!
    return 0;
}