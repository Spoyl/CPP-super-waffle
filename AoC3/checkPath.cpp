#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int fileLen(){
    string line;
    ifstream myfile;
    myfile.open("pattern.txt");
    int len = 0;
    while (getline(myfile, line))
    {  
        len++;
    }
    myfile.close();
    return len;
}


int fileWidth(){
    string line;
    ifstream myfile;
    myfile.open("pattern.txt");
    getline(myfile, line);
    return line.size();
}


int procLine(int num_rows, int num_cols){
    string strArray[num_rows];
    string line;
    ifstream myfile;
    myfile.open("pattern.txt");
    int count = 0;
    while (getline(myfile, line))
    {
        strArray[count] = line;
        count++;
    }
    myfile.close();
    int reader = 0;
    int row = 0;
    int tree = 0;
    int space = 0;
    while (row < (num_rows-1)){
        reader+=1;
        if (reader>=num_cols){
            reader = reader-num_cols;
        }
        row += 2;

        string read = strArray[row];
        char val = read.at(reader);
        if (val == '#'){
            tree += 1;
        }
        else if (read.at(reader) == '.'){
            space +=1;
        }
        cout << "Reader: " << reader << "\t" << "Row: " << row << "\t" << "Value: " << strArray[row][reader]<<"\n";
    }
    cout<< "\nTrees: " << tree << "\t" << "\nSpaces: " << space;
    return 0;
}


int main(){
    int len = fileLen();
    int width = fileWidth();
    procLine(len, width);
}