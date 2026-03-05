#include <iostream>
using namespace std;


int gcd(int a, int b){ ///eucli'd formula
    if(a==0) return b;
    if(b==0) return a;

    while( a>0 && b>0){
        if( a> b) {
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a==0?b:a;
}

int lcm( int a, int b){

    return (a*b)/ gcd(a,b);
}
int main(){
    int ans = gcd(24,72);
    cout <<"GCD IS:"<< ans<< endl;
    int ans2 = lcm(72,24);
    cout<< "Lcm is:"<< ans2;
    return 0;
}