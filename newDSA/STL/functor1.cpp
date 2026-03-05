#include <iostream>
#include <vector> 
using namespace std;

// Functor class, who object we will create then call the object as function
class functorOne{
    public:
    bool operator() (int a, int b ){
        //comparing in desc order //Place a before b if a>B
        return a> b;
    }
};

int main(){
    functorOne cmp;
    cmp(10,5);

    if(cmp(10,5) == true){
        cout<< "10 is greater";
    }
    else{
        cout<<"5 is greater";
    }
    return 0;
}