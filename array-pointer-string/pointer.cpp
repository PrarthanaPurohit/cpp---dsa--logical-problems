#include <iostream>
using namespace std;

int main(){
    int a = 34;
    int* ptr;
    ptr = &a;

    cout<<"Address of a: "<<ptr<<endl;
    cout<<"Value of pointer:  "<<*ptr;
}