#include <iostream>

using namespace std;

int main(){
    // Generate two arrays of ones to add
    int cols;
    int rows;
    cout << "Enter a number of columns: ";
    cin >> cols;
    cout << "Enter a number of rows: ";
    cin >> rows;
    float array1[rows][cols];
    float array2[rows][cols];
    for (int r = 0; r<rows; r++){
        for (int c = 0; c<cols; c++){
            array1[r][c] = 1;
            array2[r][c] = 1;
            cout << array1 [r][c];
        }
        cout << "\n";
    }

    // Calc size of arrays
    int row_len = sizeof(array1[0])/sizeof(float);
    int col_height = sizeof(array1)/(sizeof(float) * row_len);
    cout << "#rows: " <<row_len;
    cout << "\n#cols: " << col_height << "\n";
    float outArray[row_len][col_height];

    // Add arrays
    for (int r = 0; r<row_len; r++){
        for (int c = 0; c<col_height; c++){
            float val = array1[r][c] + array2[r][c];
            outArray[r][c] = val;
            cout << outArray[r][c] << " ";
        }
    cout << "\n";
    }
    return 0;
}