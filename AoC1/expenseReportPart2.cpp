#include <iostream> 
#include <fstream>
#include <string>

using namespace std;

int main (){
    // File handling
    string line;
    ifstream myfile;
    myfile.open("puzzleInput.txt");
    // Get length of list in file
    int count = 0;
    while (getline(myfile, line))
    {  
        count++;
    }
    myfile.close();
    // Save entries to C array
    myfile.open("puzzleInput.txt");
    int arrayIn[count];
    count = 0;
    while (getline(myfile, line)){
        int val = stoi (line);
        cout << val << "\n";   
        arrayIn[count] = val;
        count++;
    }
    myfile.close();
    // Sanity check
    cout << "\n\nArray size: " << sizeof(arrayIn)/sizeof(int) << "\n\n";
    // Perform check
    for(int i = 0; i<count; i++)
    {
        for (int j = 0 ; j<count; j++)
        { 
            for (int k = 0; k<count; k++)
            {
                if ((arrayIn[i] + arrayIn[j] + arrayIn[k]==2020)&&!(i==j==k))
                {
                cout << arrayIn[i] << "\n";
                cout << arrayIn[j] << "\n";
                cout << arrayIn[k] << "\n";
                int soln = arrayIn[i]*arrayIn[j]*arrayIn[k];
                cout << soln;
                return  0; 
                }
                else
                {
                    continue;
                }
            }
        }
    }
    return 1;
}