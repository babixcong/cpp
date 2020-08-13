#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
    srand(time(NULL));
    int rows, columns;

    cin >> rows;
    cin >> columns;
    
    int array[rows][columns];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            array[i][j] = rand()%100;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}