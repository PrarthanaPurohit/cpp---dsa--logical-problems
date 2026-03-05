// polymorphism -> static -> function overloading, operator overloading

//Function overloading -> same name but different no. of parameters or different type of parameters

#include <iostream>
using namespace std;

class Add{

    public:

    int sum( int x, int y){
        return x+y;
    }

    int sum( int x, int y, int z){
        return x+y+z;
    }
    
    // double is bigger float
    double sum( double x, double y){
        return x+y;
    }
};

int main(){

    Add obj1;

    cout<< obj1.sum( 2, 3)<< endl;
    

    cout<< obj1.sum( 2, 1, 1)<< endl;

    cout<< obj1.sum( 2.345 , 2.345)<< endl;
    return 0;
}