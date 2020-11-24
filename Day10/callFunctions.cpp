#include <iostream>
#include <string>

using namespace std;

int func1();
string func2();


int main(){
    cout << "Calling function " << func1();
    cout << "\nCalling function " << func2();
    return 0;
}

int func1(){
    cout << "func1!";
    return 0;
}

string func2(){
    string mystr = "func2!";
    return mystr;
}

