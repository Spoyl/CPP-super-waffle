#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){
    string line;
    ifstream myFile;
    myFile.open("textfile.txt");
    while (getline (myFile, line)){
        cout << line << "\n";
    }
    myFile.close();
    return 0;
}