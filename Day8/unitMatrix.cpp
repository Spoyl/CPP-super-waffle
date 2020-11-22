#include <iostream>

using namespace std;


int main(){
    int order;
    cout << "Assign the order of the matrix: ";
    cin >> order;

    float unitArray[order][order];
    for (int i = 0; i<order; i++){
        for (int j = 0; j<order; j++){
            if (i==j){
                unitArray[i][j] = 1;
            }
            else{
                unitArray[i][j] = 0;
            }
        }
    }
        for (int i = 0; i<order; i++){
            for (int j = 0; j<order; j++){
                cout<< unitArray[i][j] << " ";
            }
            cout<< "\n";
    }
    return 0;
}