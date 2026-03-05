#include <iostream>
#include <cmath>
using namespace std;

int primeNo(){
    bool prime;
    int i;
    for( i = 2; i < 11; i++){
        prime = true;

        for( int j= 2; j <= sqrt(i); j++){
            if( i %j == 0){
                prime = false;
            }

        }

        if(prime){
        cout<< i;
        }
    }
}
int main(){
    primeNo();

    return 0;
}