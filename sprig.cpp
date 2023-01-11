#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include "json.hpp"
#include <cstdio>
using namespace std;  
using json = nlohmann::json;
int main(int argc, char** argv){    
    string bob[6];    
    for (int i = 0; i < argc; ++i) {
        bob[i]=argv[i];
    }   
    cout << "Welcome! Use sprig help for more info."<<endl;
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
        bool sprigexist;
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
        string mytext;
std::ifstream ifs(bob[2]+".rsmy");

  std::string content( (std::istreambuf_iterator<char>(ifs) ),

    (std::istreambuf_iterator<char>() ) );
    char lll = content[0];
    char doc='<';
    if (lll!=doc) {
        sprigexist=true;
    }
    else {
        sprigexist=false;
        cout << "Oh No! The Package "<<bob[2]<<" already exists! Try using another name."<<endl;
        exit(0);
    } 
        if (sprigexist==false) {
            cout << "Uploading your files to the server..."<<endl;
            string cmd;
            string cmdpart0="curl -T";
            string cmdpart1=bob[3];
            string cmdpart2=" -u b:b ftp://files.000webhost.com/public_html/";
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

            string cmdpart011="curl -T ";
            string cmdpart111=bob[5];
            string cmdpart211=" -u b:b ftp://files.000webhost.com/public_html/";
            string cmdpart311=bob[2];
            string cmdpart411=".passwd";
            string cmd111=cmdpart011+cmdpart111+cmdpart211+cmdpart311+cmdpart411;
            const int length11 = cmd111.length();
            char* char_array11 = new char[length1 + 1];
            strcpy(char_array11, cmd111.c_str());
            system(char_array11);
            cout << "Done! You created the sprig "<<bob[2]<<endl;
        }
    }
    if (bob[1]==grow) {
        string cmd;
        string cmdpart0="curl ";
        string cmdpart1="https://sprigrsmy.000webhostapp.com/";
        string cmd1=cmdpart0+cmdpart1+cmdpart2+cmdpart3+cmdpart4+cmdpart5;
        const int length = cmd1.length();
        char* char_array = new char[length + 1];
        strcpy(char_array, cmd1.c_str());
        system(char_array);
        string file="";
//        std::ifstream ifs(bob[2]+".passwd");

//   std::string content( (std::istreambuf_iterator<char>(ifs) ),

//     (std::istreambuf_iterator<char>() ) );

fstream my_file;
string bob3;
	my_file.open(bob[2]+".passwd", ios::in);
	if (!my_file) {
		cout << "No such file";
	}
	else {
		char ch;

		while (1) {
			my_file >> ch;
			if (my_file.eof())
				break;

			bob3=bob3+ch;
		}
    }
    my_file.close();
    string cmddd;
    string cmdddpart0="del ";
    string cmdddpart1=bob[2];
    string cmdddpart2=".passwd";
    cmddd=cmdddpart0+cmdddpart1+cmdddpart2;
    const int length1dd = cmddd.length();
    char* char_array1dd = new char[length1dd + 1];
    strcpy(char_array1dd, cmddd.c_str());
    system(char_array1dd);
    if (bob3==bob[5]) {
        cout << "Uploading your files to the server..."<<endl;
        string cmd;
        string cmdpart0="curl -T";
        string cmdpart1=bob[3];
        string cmdpart2=" -u b:b ftp://files.000webhost.com/public_html/";
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
        cout << "Done! Your code was pushed to sprig "<<bob[2]<<endl;
    }

}
    char help[]="help";
    if (bob[1]==help) {
        cout << "_       " <<endl;
        cout << "               (_)      "<<endl;
        cout << " ___ _ __  _ __ _  __ _ "<<endl;
        cout << "/ _| ' \\| '__| |/ _` |"<<endl;
        cout << "\\__ \\ |_) | |  | | (_| |"<<endl;
        cout << "|___/ .__/|_|  |_|\\__, |"<<endl;
        cout << "    | |            __/ |"<<endl;
        cout << "    |_|           |___/"<<endl;
        cout << "sprig pick <NAME> " <<endl<<"____________"<<endl;
        cout << "- downloads  sprig <NAME> and saves it as <NAME>.rsmy"<<endl<<endl;
        cout << "sprig grow <NAME> <path/to/manifest.json> <path/to/main.rsmy> passwd" <<endl<<"____________"<<endl;
        cout << "- Pushes your code to existing package, with authentication required"<<endl<<endl;
        cout << "sprig build <NAME> <path/to/main.rsmy> <path/to/manifest.json> <path/to/passwd>" <<endl<<"____________"<<endl;
        cout << "builds package <NAME> using provided rsmy, JSON and password files. Throws an error if <NAME> already exists."<<endl<<endl;
    }
    char cut[]="cut";
    if (bob[1]==cut) {
        string cmdd;
        string cmddpart0="del ";
        string cmddpart1=bob[2];
        string cmddpart2=".rsmy";
        cmdd=cmddpart0+cmddpart1+cmddpart2;
        const int length1d = cmdd.length();
        char* char_array1d = new char[length1d + 1];
        strcpy(char_array1d, cmdd.c_str());
        system(char_array1d);

        string cmdd1;
        string cmddpart01="del ";
        string cmddpart11=bob[2];
        string cmddpart21=".json";
        cmdd1=cmddpart01+cmddpart11+cmddpart21;
        const int length1d1 = cmdd.length();
        char* char_array1d1 = new char[length1d1 + 1];
        strcpy(char_array1d1, cmdd1.c_str());
        system(char_array1d1);

    }

}
//edit
