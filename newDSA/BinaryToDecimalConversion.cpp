#include <iostream>
using namespace std;
#include <cmath>
int main(){

    int n;
    cin>> n;
    int bit;
    int i = 0;
    int ans = 0;
    while(n){
        // to obtain last bit
        bit = n % 10;
        ans = ans + bit * pow(2,i++);
        n = n/10;

    }

    cout<< "Decimal no: "<< ans<< endl;

    // bitwise method

    while(n){
        // to obtain last bit
        bit = (n & 1);
        ans = ans + bit * pow(2,i++);
        n = n >> 1;

    }

    cout<< "Decimal no: "<< ans<< endl;
    return 0;
}