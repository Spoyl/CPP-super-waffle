#include <iostream>

using namespace std;


int arrayAdder(float *array1, float *array2, int len){
    // Calc size of arrays
    cout << "# entries: " << len << "\n";
    float outArray[len];
    for (int i = 0;i<len;i++){
        outArray[i] = array1[i] + array2[i];
        cout << outArray[i] << "\n";
    }
    return 0;
}


int main(){
    // Generate two arrays of ones to add
    int entry;
    cout << "Enter a number of entrys: ";
    cin >> entry;
    float array1[entry];
    float array2[entry];
    for (int r = 0; r<entry; r++){
        array1[r] = 1;
        array2[r] = 2;

        cout << array1[r] << "\n";
    }

    arrayAdder(array1, array2, entry);
    cout << "Back in function main.";
    return 0;
}