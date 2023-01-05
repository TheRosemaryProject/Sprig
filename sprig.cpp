#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include "json.hpp"
using namespace std;  
using json = nlohmann::json;
int main(int argc, char** argv){    
    string bob[6];    
    for (int i = 0; i < argc; ++i) {
        bob[i]=argv[i];
    }   
    char grab[]="pick";
    char info[]="info";
    char build[]="build";
    char grow[]="grow";
    if (bob[1]==grab) {
        string cmd;
        string cmdpart0="curl ";
        string cmdpart1="https://sprigrsmy.000webhostapp.com/";
        string cmdpart2=bob[2];
        string cmdpart3=".rsmy > ";
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
        string cmdpart31=".json > ";
        string cmdpart41=bob[2];
        string cmdpart51=".json";
        string cmd11=cmdpart01+cmdpart11+cmdpart21+cmdpart31+cmdpart41+cmdpart51;
        const int length1 = cmd1.length();
        char* char_array1 = new char[length1 + 1];
        cout << cmd11;
        strcpy(char_array1, cmd11.c_str());
        system(char_array1);
    }
    if (bob[1]==info) {
        ifstream f(bob[2]+".json");
        json data = json::parse(f);
        cout << "Name of Package - " << data["name"] <<endl;
        cout << "Description - " << data["desc"]<<endl;
        cout << "Version - " << data["version"]<<endl;
    }
    if (bob[1]==build) {
                string cmd;
        string cmdpart0="curl -T";
        string cmdpart1=bob[3];
        string cmdpart2=" -u sprigrsmy:rsmysprig ftp://files.000webhost.com/public_html/";
        string cmdpart3=bob[2];
        string cmdpart4=".rsmy";
        string cmd1=cmdpart0+cmdpart1+cmdpart2+cmdpart3+cmdpart4;
        const int length = cmd1.length();
        char* char_array = new char[length + 1];
        strcpy(char_array, cmd1.c_str());
        system(char_array);

        string cmdpart01="curl -T";
        string cmdpart11=bob[4];
        string cmdpart21=" -u b:b ftp://files.000webhost.com/public_html/";
        string cmdpart31=bob[2];
        string cmdpart41=".json";
        string cmd11=cmdpart01+cmdpart11+cmdpart21+cmdpart31+cmdpart41;
        const int length1 = cmd1.length();
        char* char_array1 = new char[length1 + 1];
        strcpy(char_array1, cmd11.c_str());
        system(char_array1);

        string cmdpart011="curl -T";
        string cmdpart111=bob[5];
        string cmdpart211=" -u b:b ftp://files.000webhost.com/public_html/";
        string cmdpart311=bob[2];
        string cmdpart411=".passwd";
        string cmd111=cmdpart011+cmdpart111+cmdpart211+cmdpart311+cmdpart411;
        const int length11 = cmd111.length();
        char* char_array11 = new char[length1 + 1];
        strcpy(char_array11, cmd111.c_str());
        system(char_array11);
    }
    if (bob[1]==grow) {
       
       std::ifstream ifs(bob[2]+".passwd");

  std::string content( (std::istreambuf_iterator<char>(ifs) ),

    (std::istreambuf_iterator<char>() ) );
    if (content==bob[3]) {
        // do upload stuff
    }
    }

}