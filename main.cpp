#include <iostream>
#include <cctype>
#include <string>
#include <locale>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])

{
    if(argc == 1)
        return 0;
    
    for(int c=1;c <argc;c++){
        
    string temp1st;
    string a1(argv[c]);

    temp1st= a1[0];
    a1.substr(1);
    a1.replace(0,1,"");
    
    string S = "S";
    string L = "L";
    string U="U";
    string r="r";
    string R ="R";
    
    if(temp1st == S)
        continue;
    else if(temp1st == L){
        transform(a1.begin(), a1.end(), a1.begin(), ::tolower);
        cout<<a1<<endl;
    }
    else if(temp1st == U){
        transform(a1.begin(), a1.end(), a1.begin(), ::toupper);
        cout<<a1<<endl;
    }
    else if(temp1st ==r){
        reverse(a1.begin(), a1.end());
        cout<<a1<<endl;
    }
    else if(temp1st == R){
        reverse(a1.begin(), a1.end());
        transform(a1.begin(), a1.end(), a1.begin(), ::toupper);
        cout<<a1<<endl;
    }
    else if(temp1st != L || temp1st != U ||temp1st != r || temp1st != R)
        cout<<"FAIL"<<endl;
    
    }
    
    return 0;

}
