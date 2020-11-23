#include <iostream>

using namespace std;

int main(){

    int row_len = sizeof(inArray[0])/sizeof(float);
    int col_height = sizeof(inArray)/(sizeof(float) * row_len);
    cout << row_len;
    cout << col_height;
    return 0;
}