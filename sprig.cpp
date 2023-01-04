#include <iostream>
#include <string>
using namespace std;  
int main(int argc, char** argv){    
    string bob[6];
    cout << "You have entered " << argc << " arguments:" << "\n";      
    for (int i = 0; i < argc; ++i) {
        bob[i]=argv[i];
    }   
    char grab[]="pick";
    if (bob[1]==grab) {
        system("curl http://");
    }

}