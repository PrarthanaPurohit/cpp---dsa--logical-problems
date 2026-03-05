#include <iostream>
using namespace std;

void vote(int age){
    
    if(age>18){
        cout<<"Eligible";
    }
    else{
        cout<<"not eligible";
    }
}
int main(){
    vote(16);
    
    return 0;
}