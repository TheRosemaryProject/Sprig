#include <iostream>
#include <string>
#include <cstring>
using namespace std;  
int main(int argc, char** argv){    
    string bob[6];
    cout << "You have entered " << argc << " arguments:" << "\n";      
    for (int i = 0; i < argc; ++i) {
        bob[i]=argv[i];
    }   
    char grab[]="pick";
    if (bob[1]==grab) {
        string cmd;
        string cmdpart0="curl ";
        string cmdpart1="https://sprigrsmy.000webhostapp.com/";
        string cmdpart2=bob[2];
        string cmdpart3="/main.rsmy > ";
        string cmdpart4=bob[2];
        string cmdpart5=".rsmy";
        string cmd1=cmdpart0+cmdpart1+cmdpart2+cmdpart3+cmdpart4+cmdpart5;
        const int length = cmd1.length();
        char* char_array = new char[length + 1];
        strcpy(char_array, cmd1.c_str());
        system(char_array);

        string cmdpart01="curl ";
        string cmdpart11="https://sprigrsmy.000webhostapp.com/";
        string cmdpart21=bob[2];
        string cmdpart31="/main.json > ";
        string cmdpart41=bob[2];
        string cmdpart51=".json";
        string cmd11=cmdpart01+cmdpart11+cmdpart21+cmdpart31+cmdpart41+cmdpart51;
        const int length1 = cmd1.length();
        char* char_array1 = new char[length1 + 1];
        cout << cmd11;
        strcpy(char_array1, cmd11.c_str());
        system(char_array1);
    }

}