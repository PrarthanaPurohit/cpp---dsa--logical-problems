#include <iostream>
using namespace std;
int main(){
    bool cond1 = true;
    bool cond2 = (5>4);
    bool cond3 = (5<3);
    // if( cond1 && cond2 && cond3){
    //     cout<< "All are true";
    // }

     if( cond1 || cond2 || cond3){
        cout<< "Atleast one is true";}
    else{
        cout<< "All are false";
    }
    cout<< endl;

    cout<< !cond1;
    return 0;
}