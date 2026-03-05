#include <iostream>
using namespace std;
int main(){
    // for( int i = 1; i<10; i++){
    //     cout<< i;
    //     if(i==5){
    //         break;
    //     }
    // }
    // cout<< endl;
    // for( int i = 1; i<10; i++){
        
    //     if(i==5){
    //         break;
    //     }

    //     cout<< i;
    // }


    // continue skips that iteration

    for( int i = 1; i<10; i++){
        if(i==5){
            continue;
        }
        cout<< i;
    }

    cout<< endl;

    //useless
    for( int i = 1; i<10; i++){
        cout<< i;
        if(i==5){
            continue;
        }
       
    }
}