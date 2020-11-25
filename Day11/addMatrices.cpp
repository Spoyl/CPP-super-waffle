#include <iostream>

using namespace std;

int main(float inArray1[], float inArray2[]){
    
    int row_len = sizeof(inArray1[0])/sizeof(float);
    int col_height = sizeof(inArray1)/(sizeof(float) * row_len);
    cout << row_len;
    cout << col_height;
    float outArray[row_len][col_height];

    for (int r = 0; r<row_len; r++){
        for (int c = 0; c<col_height; c++){
            outArray[r][c] = inArray1[r][c]; //+ inArray2[r][c];
            cout << outArray[r][c] << " ";
        }
        cout << "\n";
    }
    return 0;
}