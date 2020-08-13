#include <iostream>
#include <cmath>
using namespace std;

int process(float a, float b, float c, float &x1, float &x2) {
    float delta = b*b - 4*a*c;
    if (delta < 0) {
        x1 = x2 = 0;
        return 0;
    } else if (delta == 0) {
        x1 = x2 = - b / (2 * a);
        return 1;
    } else {
        delta = sqrt(delta);
        x1 = (- b + delta) / (2 * a);
        x2 = (- b - delta) / (2 * a);
        return 2;
    }
}

int main() {
    float a, b, c;
    float x1, x2;
    do {
        cin >> a >> b >> c;
    } while (!a);
    int result = process(a, b, c, x1, x2);
    if (result == 0) {
        cout << "Vo nghiem";
    } else if (result == 1) {
        cout << "Phuong trinh co nghiem kep " << x1;
    } else {
        cout << "Phuong trinh co 2 nghiem phan biet x1:" << x1 << " va x2: " << x2; 
    }
    
    return 0;
}