#include <iostream>

using namespace std;

int addArrays(float inArray1[][2], float inArray2[][2]);

int main(){
    float array1[][2] = {{1,2,3,4}, {1,2,3,4}};
    float array2[][2] = {{1,2,3,4}, {1,2,3,4}};
    addArrays(array1, array2);
    return 0;
}

int addArrays(float inArray1[][2], float **inArray2[][2]){
    int row_len = sizeof(inArray1[0])/sizeof(float);
    int col_height = sizeof(inArray1)/(sizeof(float) * row_len);
    cout << row_len;
    cout << col_height;
    float outArray[row_len][col_height];

    for (int r = 0; r<row_len; r++){
        for (int c = 0; c<col_height; c++){
            float val = inArray1[r][c] + inArray2[r][c];
            outArray[r][c] = val;
            cout << outArray[r][c] << " ";
        }
        cout << "\n";
    }
    return 0;
}