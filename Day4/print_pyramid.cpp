#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    int height;
    cout << "Choose the height of the pyramid (1-20): ";
    cin >> height;
    if (height>20){
        cout << "Value is too high!";
        return 1;
    }
    else if (height<1){
        cout << "Value is too low!";
        return 1;
    }
    else{
        string row = "*";
        int width = height + (height-1);
        for (int i = 0; i<height; i++){
            cout << setw(width-(height-i)+1) << row << "\n";
            row+=" *";
        }
    }
return 0;
}