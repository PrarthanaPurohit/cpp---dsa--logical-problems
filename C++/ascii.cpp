#include <iostream>
using namespace std;
int main(){
    char ch;
    
    cin>>ch;
    if(ch>=97 && ch<123){
        cout<<"a is lowercase";
    }

    else if(ch>=65 && ch<90){
        cout<<"a is uppercase";

    }

    else if (ch>=47 && ch<59){
        cout<<"a is numeric";
    }
    
    
    
    }