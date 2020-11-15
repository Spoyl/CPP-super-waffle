#include <iostream>

using namespace std;

int main(){

    int var1 = rand() % 100;
    int var2 = rand() % 100;
    int sol;

    cout << "\t" << var1 << "\n";
    cout << "+\t" << var2 << "\n" << "----------\n";

    cout << "What is the solution? "; 
    cin >> sol;

    if (sol != var1+var2){
        cout << "Incorrect!";
    }
    else
    {
        cout << "Correct!";
    }
    
    return 0;
}
