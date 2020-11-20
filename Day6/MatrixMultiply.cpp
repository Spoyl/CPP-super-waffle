#include <iostream>

using namespace std;

int main(){
    int cols1, cols2, rows1, rows2;
    float value1, value2;
    cout << "Array 1 - Enter a number of columns: ";
    cin >> cols1;
    cout << "Array 1 - Enter a number of rows: ";
    cin >> rows1;
    cout << "Array 1 - Enter a value: ";
    cin >> value1;
    float array1[rows1][cols1];
    for (int r = 0; r<rows1; r++){
        for (int c = 0; c<cols1; c++){
            array1[r][c] = value1;
            cout << array1 [r][c] << " ";
        }
        cout << "\n";
    }
    cout << "Array 2 - Enter a number of columns: ";
    cin >> cols2;
    cout << "Array 2 - Enter a number of rows: ";
    cin >> rows2;
    cout << "Array 2 - Enter a value: ";
    cin >> value2;
    float array2[rows2][cols2];
    for (int r = 0; r<rows2; r++){
        for (int c = 0; c<cols2; c++){
            array2[r][c] = value2;
            cout << array2 [r][c] << " ";
        }
        cout << "\n";
    }
    if (cols1!=rows2){
        cout << "Cannot multiply these matrices";
        return 1;
    }
    else{
        float outArray [rows2][cols1];
        cout << "Result:\n";
        for (int i = 0; i<rows1; i++){
            for (int j = 0; j<cols2; j++){
                outArray[i][j] = 0;
                for (int k = 0; k<rows2; k++){
                    outArray[i][j] += array1[i][k]*array2[k][j];
                }
            cout << outArray [i][j] << " ";
            }
        cout << "\n";
        }
    }
    return 0;
}