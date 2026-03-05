#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 3.0;
    cout<< "b is: "<< b<< endl;

    float c = a/b;
    cout<< c<< endl;

    float d = a / (float)b;
    cout<< d;
    return 0;
}