#include <iostream>
#include <string>
#include <fstream>
#include <typeinfo>

using namespace std;

int fileLen(){
    string line;
    ifstream myfile;
    myfile.open("puzzleInput.txt");
    int count = 0;
    while (getline(myfile, line))
    {  
        count++;
    }
    myfile.close();
    return count;
}

int processString(int count){
    string line;
    ifstream myfile;
    string colon = ": ";
    string dash = "-";
    string space = " ";
    myfile.open("puzzleInput.txt");
    int metacnt = 0;
    while (getline(myfile, line))
    {
        char *letter;
        int line_len = line.length();
        string strA = line.substr(0, line.find(colon));
        string strB = strA.substr(0, strA.find(space));
        string str_obj(strA.substr(strA.find(space)+1, -1));
        letter = &str_obj[0];
        int lower = stoi(strB.substr(0, strB.find(dash)));
        int higher = stoi(strB.substr(strB.find(dash)+1, -1));
        string strC = line.substr(line.find(colon)+2, line_len);
        cout << line << "\t" <<  lower << "\t"<< higher << "\t" << letter << "\t" << strC << "\n";
        int cnt = 0;
        for (int i = 0;i<strC.length();i++){
            if(strC[i]==*letter){
                cnt++;
            }
            else{
                continue;
            }
        }
        if (lower<=cnt && cnt<=higher){
            metacnt++;
        }
        else{
            continue;
        }

        cout << cnt << "\n";
    }
    myfile.close();
    return metacnt;
}

int main()
{
    int count = fileLen();
    int answer = processString(count);
    cout << "soln: "<< answer;
    return 0;
}