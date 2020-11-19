#include <iostream>

using namespace std;

int main(){
    int cols;
    int rows;
    cout << "Enter a number of columns: ";
    cin >> cols;
    cout << "Enter a number of rows: ";
    cin >> rows;
    int array[cols][rows];
    for (int r = 0; r<rows; r++){
        for (int c = 0; c<cols; c++){
            array[c][r] = 0;
            cout << array [c][r];
        }
        cout << "\n";
    }
    return 0;
}