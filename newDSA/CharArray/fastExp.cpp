#include<iostream>
using namespace std;

int normalExp(int a, int b){
    int ans = 1;
    int i = 0;
    while( i< b-1 ){
        ans = ans*a;

    }
    return ans;
}

int fastExponentiation( int a, int b){
    int ans = 1;
    while( b>0){
        if( b & 1){ //b is odd 
            ans = ans * a;
            
        }

        a = a*a;
        b>>=1;
    }
    return ans;

}
int main(){
    int ans = fastExponentiation( 2, 3);
    cout<< ans;
    int ans2 = fastExponentiation( 2, 3);
    cout<< ans2;
    return 0;
}