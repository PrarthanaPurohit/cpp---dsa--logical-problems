#include <iostream>
using namespace std;
int main(){

    int a = 5;
    cout<< "a:"<< a; 
    cout<< endl;
    cout<< "&a:"<< &a;
    cout<< endl;

    int *p = &a;   //ptr variable that stores address

    cout<< "p:"<< p;  //address stored at p
    cout<< endl;
    cout<< "&p:"<< &p;  //address of p ptr
    cout<< endl;
    cout<< "*p:"<< *p;  // value at address stored by ptr
    cout<< endl;

    int A = 10;
    int b = A;
    cout<< &A << endl;
    cout<< &b;
    return 0;
}