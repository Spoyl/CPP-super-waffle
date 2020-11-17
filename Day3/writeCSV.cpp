#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

    ofstream myFile;
    string lineA = "1,Entry 1,-\n";
    string lineB = "2,Entry 2,-\n";
    string lineC = "3,Entry 3,-\n";

    myFile.open("csvFile.csv");

    myFile << lineA;
    myFile << lineB;
    myFile << lineC;
    
    return 0;
}